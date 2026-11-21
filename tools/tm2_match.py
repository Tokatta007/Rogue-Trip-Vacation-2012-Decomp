#!/usr/bin/env python3
"""Match Rogue Trip functions against Twisted Metal 2 (same SingleTrac engine).

Both bodies are normalised (jal/j targets, lui immediates, gp-relative and
lui-paired low offsets masked) and compared:

  exact      normalised word sequences identical
  similar    best shingle candidate with SequenceMatcher ratio >= --min-ratio
  callgraph  paired jal targets at identical positions inside exact matches

A match is evidence for porting and naming, never proof of identical
semantics: masked immediates can still hide different globals or constants.

Writes config/US/tm2_matches.tsv. Needs the TM2 decomp tree (--tm2; default ../TM2-Decomp).
"""
import argparse, csv, difflib, hashlib, json, sys
from collections import defaultdict
from pathlib import Path
from mips import Image, normalize, jal_target
from rt_functions import sweep

ROOT = Path(__file__).resolve().parents[1]
RT_GP, TM2_GP = 0x801C3240, 0x801809D4
K = 6


def load_funcs(img, rows, gp):
    starts = sorted(rows)
    out = {}
    for i, s in enumerate(starts):
        limit = starts[i + 1] if i + 1 < len(starts) else img.end
        end = sweep(img, s, min(limit, s + 4 * rows[s]['words'] + 4 * 4096))
        n = max(1, (end - s) // 4)
        out[s] = dict(rows[s], words=n, sig=tuple(normalize(img, s, n, 28)))
    return out


def shingles(sig):
    return {hash(sig[i:i + K]) for i in range(max(1, len(sig) - K + 1))}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--tm2', type=Path, default=ROOT.parent / 'TM2-Decomp')
    p.add_argument('--min-ratio', type=float, default=0.80)
    p.add_argument('--out', type=Path, default=ROOT / 'config/US/tm2_matches.tsv')
    a = p.parse_args()

    rt_img = Image((ROOT / 'bin/SLUS_006.43').read_bytes())
    tm_img = Image((a.tm2 / 'bin/SCUS_94306R.EXE').read_bytes())
    rt_rows = {int(r['va'], 16): dict(name=r['name'], words=int(r['words']))
               for r in csv.DictReader((ROOT / 'config/US/funcs.tsv').open(), delimiter='\t')}
    tm_rows = {int(r['va'], 16): dict(name=r['name'], words=int(r['words']))
               for r in csv.DictReader((a.tm2 / 'config/US/ida_funcs.tsv').open(), delimiter='\t')}
    sel = json.loads((a.tm2 / 'config/semantic/selection-template.json').read_text())
    tm_source = {int(va, 16): f['source'] for va, f in sel['functions'].items() if f.get('kind') == 'maintained'}

    rt = load_funcs(rt_img, rt_rows, RT_GP)
    tm = load_funcs(tm_img, tm_rows, TM2_GP)

    by_sig = defaultdict(list)
    for va, f in tm.items():
        by_sig[f['sig']].append(va)
    match = {}
    for va, f in rt.items():
        cands = by_sig.get(f['sig'])
        if cands:
            # Prefer a candidate with maintained C, then the lowest address.
            best = sorted(cands, key=lambda c: (c not in tm_source, c))[0]
            match[va] = (best, 1.0, 'exact', len(cands))

    # Call-graph propagation from exact pairs.
    for _ in range(4):
        grew = 0
        for va, (tva, _, kind, _) in list(match.items()):
            if kind != 'exact':
                continue
            n = rt[va]['words']
            for i in range(n):
                w1, w2 = rt_img.word(va + 4 * i), tm_img.word(tva + 4 * i)
                if w1 >> 26 == 3 and w2 >> 26 == 3:
                    c1, c2 = jal_target(va + 4 * i, w1), jal_target(tva + 4 * i, w2)
                    if c1 in rt and c2 in tm and c1 not in match:
                        r = difflib.SequenceMatcher(None, rt[c1]['sig'], tm[c2]['sig'], autojunk=False).ratio()
                        if r < 0.5:
                            continue
                        match[c1] = (c2, r, 'exact' if rt[c1]['sig'] == tm[c2]['sig'] else 'callgraph', 1)
                        grew += 1
        if not grew:
            break

    # Fuzzy matching through a shingle index.
    index = defaultdict(set)
    tm_sh = {}
    for va, f in tm.items():
        if f['words'] >= 8:
            tm_sh[va] = shingles(f['sig'])
            for h in tm_sh[va]:
                index[h].add(va)
    for va, f in rt.items():
        if va in match or f['words'] < 8:
            continue
        sh = shingles(f['sig'])
        votes = defaultdict(int)
        for h in sh:
            for c in index.get(h, ()):
                votes[c] += 1
        best = None
        for c, v in sorted(votes.items(), key=lambda kv: -kv[1])[:5]:
            if v / max(len(sh), len(tm_sh[c])) < 0.3:
                continue
            r = difflib.SequenceMatcher(None, f['sig'], tm[c]['sig'], autojunk=False).ratio()
            if not best or r > best[1]:
                best = (c, r)
        if best and best[1] >= a.min_ratio:
            match[va] = (best[0], best[1], 'similar', 1)

    with a.out.open('w', newline='\n') as out:
        out.write('rt_va\trt_words\ttm2_va\ttm2_words\ttm2_name\tkind\tratio\tcandidates\ttm2_source\n')
        for va in sorted(match):
            tva, r, kind, n = match[va]
            out.write('%08X\t%d\t%08X\t%d\t%s\t%s\t%.3f\t%d\t%s\n' % (
                va, rt[va]['words'], tva, tm[tva]['words'], tm[tva]['name'], kind, r, n, tm_source.get(tva, '')))
    kinds = defaultdict(int)
    for v in match.values():
        kinds[v[2]] += 1
    ported = sum(1 for v in match.values() if v[0] in tm_source)
    print('RT functions %d, TM2 functions %d' % (len(rt), len(tm)))
    print('matched %d %s; %d have TM2 maintained C' % (len(match), dict(kinds), ported))
    print('exact+maintained C: %d' % sum(1 for v in match.values() if v[2] == 'exact' and v[0] in tm_source))


if __name__ == '__main__':
    main()

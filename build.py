"""Offline Windows Rogue Trip hybrid build. Outputs always use a new work directory."""
import argparse
from datetime import datetime, timezone
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'tools'))
from semantic_compile import compile_source, sha

RETAIL_SHA256 = 'ec0ce2dca02fd26c7e8b9ea903b27dcc61fd96e6af31f46a090395ac0b6043de'


def compiler_options(unit):
    """Per-unit compiler selection (see docs/COMPILER.md)."""
    return dict(compiler=unit.get('compiler', 'gcc2.7.2'), cc_flags=unit.get('cc_flags'),
                aspsx=unit.get('aspsx', '2.34'), gas=unit.get('gas'))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--only', action='append', help='Compile/link only these sources (repeatable)')
    parser.add_argument('--exact-only', action='store_true',
                        help='Retail gate: link only exact functions (semantic units and listed '
                        'semantic_functions keep their retail bytes); the image must equal retail')
    args = parser.parse_args()
    if sha(ROOT / 'bin/SLUS_006.43') != RETAIL_SHA256:
        raise SystemExit('bin/SLUS_006.43 is not the retail USA executable')
    manifest = json.loads((ROOT / 'config/semantic/units.json').read_text(encoding='utf-8'))
    env = dict(os.environ)
    for key in ('PYTHONHOME', 'PYTHONPATH', 'GCC_EXEC_PREFIX', 'COMPILER_PATH', 'LIBRARY_PATH', 'CPATH', 'C_INCLUDE_PATH'):
        env.pop(key, None)
    env['PYTHONNOUSERSITE'] = '1'
    env['PYTHONDONTWRITEBYTECODE'] = '1'
    env['PATH'] = str(ROOT / 'toolchain/mips/bin') + os.pathsep + str(Path(os.environ['SystemRoot']) / 'System32')
    output = ROOT / 'work' / datetime.now(timezone.utc).strftime('build-%Y%m%d-%H%M%S-%f')
    compile_out = output / 'compile'
    compile_out.mkdir(parents=True)

    if any(u.get('compiler') == 'gcc2.7.2-psyqlib' for u in manifest['units'])             and not (ROOT / 'toolchain/gcc-2.7.2-psyqlib/cc1.exe').exists():
        # derived from the stock cc1.exe, see tools/patch_cc1_win.py
        subprocess.run([sys.executable, str(ROOT / 'tools/patch_cc1_win.py')], check=True)
    units = [u for u in manifest['units'] if (not args.only or u['source'] in args.only)
             and not (args.exact_only and u.get('require', 'exact') == 'semantic')]
    objects = {}
    for index, item in enumerate(units):
        source = ROOT / item['source']
        row = compile_source(source, compile_out / ('%04d_%s' % (index, source.stem)),
                             item.get('delay_slots', 'compiler'), item.get('preserve_common', False),
                             **compiler_options(item))
        if not row['compiled']:
            stage = row.get('failed_stage', 'unknown')
            log = compile_out / ('%04d_%s' % (index, source.stem)) / (stage + '.stderr')
            raise SystemExit('Compile failed: %s (%s)\n%s' % (item['source'], stage,
                             log.read_text(errors='replace') if log.exists() else row.get('error', '')))
        objects[item['source']] = row['artifacts']['source.o']['path']
        print('%d/%d %s COMPILED' % (index + 1, len(units), item['source']), flush=True)

    if args.only or args.exact_only:
        manifest = dict(manifest, units=units)
        (output / 'units.json').write_text(json.dumps(manifest, indent=2), encoding='utf-8')
    objects_path = output / 'objects.json'
    objects_path.write_text(json.dumps(objects, indent=2) + '\n', encoding='utf-8')
    image_out = output / 'psx'
    cmd = [sys.executable, '-B', str(ROOT / 'tools/build_hybrid.py'), '--objects', str(objects_path), '--output', str(image_out)]
    if args.only or args.exact_only:
        cmd += ['--manifest', str(output / 'units.json')]
    if args.exact_only:
        cmd += ['--exact-only']
    subprocess.run(cmd, cwd=ROOT, env=env, check=True)
    report = json.loads((image_out / 'image-report.json').read_text())
    result = dict(executable=report['image'], sha256=report['image_sha256'],
                  identical_to_retail=report['identical_to_retail'],
                  replaced_functions=report['replaced_functions'], exact=report['exact'],
                  semantic=report['semantic'], source_only=False, runtime_tested=False)
    if args.exact_only and not report['identical_to_retail']:
        print(json.dumps(result, indent=2))
        raise SystemExit('exact-only build differs from retail')
    if not args.only and not args.exact_only:
        (ROOT / 'LAST_BUILD.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()

# Rogue Trip semantic C reconstruction

Started 2026-09-28 from the TM2 decompilation (TM2 hybrid v19b, 340 functions).
Target: `SLUS_006.43`, Rogue Trip: Vacation 2012 (USA), SHA-256
`ec0ce2dca02fd26c7e8b9ea903b27dcc61fd96e6af31f46a090395ac0b6043de`.

## Retail facts

| Item | Value | Evidence |
|---|---|---|
| Load address / size | `800EFA20`, `0xD4000` | PS-X EXE header |
| Entry | `801549B0` | header PC |
| `$gp` | `801C3240` | `lui gp,0x801c; addiu gp,gp,0x3240` at `80154A30` |
| BSS | `801C3720`–`801F5410` | clear loop at entry |
| `main` | `80133EC0` | entry `jal` after `InitHeap` (`8015F8AC`) |
| Code | `800EFA28`–`800F27B0`, `800F56B0`–`801806C0` | 1,755 functions + 8 alternate entries |
| Rodata island | `800F27B0`–`800F56B0` | jump tables, then strings |
| Data / sdata | `801806C0`–`801C3240` / `801C3240`–`801C3720` | `.sdata` starts at `$gp` |
| SDK | libapi 1997 (`sys.c` 1.135, `bios.c` 1.86), newer than TM2's 1995 libs | `$Id` strings |
| Overlays | `OVR/*.BIN`: 11 levels, `SHELL`, `MEMC` | disc listing; not yet analysed |
| Overlay calls | 203 `jal` targets in `801Fxxxx`, 5 in `8002xxxx` | splat `undefined_funcs_auto.txt` |

## splat split

`config/splat.us.yaml` splits the executable into consecutive segments in file
order: `ptrs1` (two code pointers at `800EFA20`), `text1`, `rodata1`, and `main`
(code from `800F56B0`, a second asm subsegment from `8017D4E8`, then data,
sdata and bss). Function starts come from `funcs.tsv` via `symbol_addrs.txt`,
so splat and the hybrid build agree on every boundary. `tools\splat.cmd`
reassembles and relinks the output and reproduces the retail SHA-256, so the
split is lossless.

Settings the round-trip depends on:

- One segment per region, because splat's per-segment `section_order` would
  otherwise link the rodata island before the first code block.
- `align: 4` per code segment and every `ld_align_*` option off, because
  splat's default 16-byte padding shifts `800EFA28`.
- `generate_asm_macros_files: False`, because `include/*.inc` and
  `include_asm.h` are shared with the C build.
- A subsegment boundary at `8017D4E8`. After the lone `break` stub at
  `8017D4E4`, spimdisasm stops starting new functions within a subsegment.

Discovery fixes found by cross-checking with spimdisasm:

- Loads/stores with base `$zero` and shifts with a nonzero `rs` field are data
  (the island begins with code-pointer jump tables).
- `break n`, a backward `j`, and an unconditional `b` leaving the body end a
  function. `main` ends in a loop back-edge; `801597E8` tail-branches into
  shared code.
- A start that the previous body falls into is an alternate entry of that
  function (`config/US/alt_entries.tsv`; for example `8017D5C0` skips
  `8017D5BC`'s prologue). A shared return delay slot (`80177884`/`80177A98`,
  hand asm) is not a fall-through; the shared word belongs to the later
  function.
- A gap-found start whose branches leave its own body is stray data. The two
  words at `8015F8DC` are dropped from `funcs.tsv`. spimdisasm still renders
  them as a tiny function, which reassembles identically.
- Switch case labels are not functions. Discovery derives 591 case labels
  from the code: for each `jr reg` it finds the `lui`/lo pair addressing a
  table in the rodata island and reads the consecutive entries. A case label
  never starts a function, and a function containing a register jump runs on
  through case labels up to the next start. This merged 12 case blocks that
  had been split off as functions (found through m2c "cannot find jtbl
  target" failures). The 8-byte-stride `{id, callback}` records at
  `800F5490` point at real functions and are not treated as tables.

## m2c reference (2026-09-28)

`tools/m2c_reference.py` decompiles each function from the splat output
separately with m2c (`mipsel-gcc-c`). It passes the rodata island and sdata,
plus a context preprocessed from `config/m2c/rt_ctx.c`: the PsyQ 3.30
`libgte`/`libgpu` types and prototypes for the functions named so far.
splat emits the island's jump tables as raw words because the island is a
separate segment, so the tool writes a patched copy under `build/m2c/` with
`.word .L<addr>` entries and adds the matching labels to each function's asm.
splat's own output is not modified.

m2c is the local checkout at `..\m2c`, branch `psx-cop0-gte`, which adds
COP0/GTE support (see below). Result for 1,756 functions
(`reference/m2c/index.tsv`):

| Status | Functions | Words | Meaning |
|---|---|---|---|
| ok | 1,654 | 138,637 | Complete C output |
| warnings | 2 | 44 | Output with m2c warnings |
| partial | 30 | 4,387 | Contains `M2C_ERROR`: all are "read from unset register" in hand asm that keeps temporaries live across calls |
| bios | 58 | 232 | BIOS tail stubs; reference points to `bios_calls.c` |
| failed | 12 | 1,723 | Hand-written asm idioms (below) |

Before the COP0/GTE work, 83 functions were partial (1,601 ok), almost all
from unmodelled GTE instructions; 67 reference files now contain GTE or COP0
accesses.

### m2c COP0/GTE support (`..\m2c`, branch `psx-cop0-gte`)

Coprocessor registers are hardware state, not register-file values, so they
are printed as named locations in program order:

- `mtc2`/`ctc2`/`lwc2`/`mtc0` emit `GTE_VXY0 = value;` / `COP0_SR = value;`.
- `mfc2`/`cfc2`/`swc2`/`mfc0` read `GTE_SXY2`, `GTE_FLAG`, `COP0_CAUSE`, …
- GTE commands emit PsyQ-named calls: `gte_rtpt()`, `gte_nclip()`,
  `gte_op12()`/`gte_sqr0()` (from the `sf` bit), `gte_mvmva(sf, mx, v, cv, lm)`.
- `rfe` emits `cop0_rfe();`, `syscall` returns `M2C_SYSCALL(code, a0)`.

Correctness comes from ordering. A pending read is materialised before any
write or command that changes that register. That covers write side effects:
`SXYP` pushes the SXY FIFO, `IRGB` sets `IR1`–`IR3`/`ORGB`, and `LZCS` updates
`LZCR`. Every GTE command is treated as clobbering all non-input registers
plus `FLAG`, and every COP0 write or `rfe` orders all COP0 reads. Pending
coprocessor reads are also materialised before function calls and after any
block that changes coprocessor state on the way to a join, and a pending call
is emitted before a later coprocessor read. The m2c suite passes (435 tests:
the original 431 plus 4 new `psx-*` cases), and `m2c_macros.h` gains
placeholders so `--valid-syntax` output compiles.

The failures are 7 computed jumps with no table (`jr $s3` style in the hand
asm renderers), the shared-tail branch at `801597E8`, the stray data at
`8015F8DC`, a branch into a sibling body at `8016E594`, the shared delay slot
at `80177884`, and a table outside the island used by `801805B8`.

m2c output is reference material only: it is not compiled, matched or
checked for types, and `unkXX`/`?` placeholders need real structures.

## Method (inherited from TM2-Release, with one addition)

1. Function boundaries come from `tools/rt_functions.py` (jal targets, entry,
   code after finished functions, BIOS tail stubs). There is no IDA database;
   boundaries are static evidence, not an audited final denominator.
2. `tools/tm2_match.py` compares relocation-masked bodies with TM2. A match is
   porting evidence only: masked immediates may still hide different globals.
3. Ported or new C must be re-pointed at RT storage (`tools/refs.py`), compiled
   with the TM2 toolchain (GCC 2.7.2, `-O2 -G8`, maspsx `--aspsx-version=2.34`)
   and placed at the retail VA with `section(".text_<VA>")`.
4. **Addition:** every replaced function is byte-compared with retail. Units
   are `exact` by default; `semantic` must be requested per unit, with the
   divergence explained in the source comment.
5. TM2 rules still apply: no general game ASM fallbacks, no register pins, no
   volatile/code-shaping tricks, no post-compiler edits. BIOS and GTE
   instructions are hardware boundaries and may use minimal inline asm.

Compiler evidence: TM2-Release reproduces 140 of its 340 replaced functions
byte-for-byte with this GCC 2.7.2, so it is the right lineage for SingleTrac
code. Some engine routines use `lhu`+`sll`+`sra` halfword loads. Those are
volatile `unsigned short` reads cast to `short` (a plain read folds into
`lh`); see `math_vec.c`.

## Status (build 2026-09-30)

125 functions replaced, all exact: the full hybrid build is identical to
retail. The table below covers the first units; the link-cable units are in
`docs/LINK_CABLE.md`. The link game has been run between two emulator
instances (see there); the rest has not been tested at runtime.

| Unit | Functions | Status |
|---|---|---|
| `bios_calls.c` | 58 BIOS A0/B0/C0 stubs + 2 critical-section syscalls | exact |
| `gpu_control.c` | `AddPrim`, `_status`, `_cwc`, `_param` | exact |
| `gte_setters.c` | `SetBackColor`, `SetGeomOffset`, `SetGeomScreen`, SZ readers | exact |
| `gte_setters.c` | `SetRotMatrix`, `SetLightMatrix`, `SetColorMatrix`, `SetTransMatrix` | exact: retail is hand asm using t0–t4, pinned with local register variables |
| `math_vec.c` | `mathMulVec` ×2, `mathMulTransVec` | exact: elements read as volatile `unsigned short` cast to `short` (`lhu`/`sll`/`sra`) |

Porting notes found so far:

- TM2's `volatile` MMIO pointer cells prevent the delay-slot fill retail uses;
  plain pointers reproduce RT exactly (retail reloads each cell after a store).
- `AddPrim` matches exactly when written as a `P_TAG` 24/8 bitfield update.

## Next steps

1. Port the 55 remaining TM2-matched functions that have TM2 C
   (`config/US/tm2_matches.tsv`, `tm2_source` non-empty): accessors, CD/timer
   and pad helpers, `DrawOTag`, `CdGetToc2`, font and animation code.
2. Name RT functions from matches and SDK signatures in `config/US/names.tsv`.
3. Identify the remaining PsyQ 4.x library functions (libgpu/libgte/libcd/
   libspu/libetc/libcard) and classify them as retained SDK dependencies.
4. Analyse overlays: find their load address and call interface from the
   loader, then extend discovery/matching to overlay code.
5. Runtime validation: the TM2 emulator runtime tooling is the model; not
   yet adapted to RT.

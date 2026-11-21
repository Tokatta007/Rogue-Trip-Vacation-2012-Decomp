# Matching compiler for Rogue Trip

Decided 2026-09-28 from byte comparisons (`tools/compiler_probe.py`).

**Rogue Trip code matches PsyQ 4.4 `CC1PSX.EXE` (GCC 2.8.1 SN32 build 4.0.0010)
with `-O2 -G8 -mno-split-addresses`, maspsx `--aspsx-version=2.56`, compiler
delay-slot scheduling.** PsyQ 4.3 (GCC 2.8.0) gave identical output on every
test so far; 4.4 is the default until a function separates them.

**Flags differ per original source file.** The engine link module
(`link_session.c`, 8012CF84..8012D3D0) matches with the SDK driver's default
`-O2 -G8` (address splitting on): its handshake loads a function address as
`lui` + `addiu` with the low half in a `jal` delay slot, which only split
addresses produce. libcomb's `AddCOMB`/`DelCOMB` match only with
`-mno-split-addresses`. For a new unit, try both; a low address half sitting in
a delay slot, or an indexed load addressed through its destination register,
points to the default.

**The engine link modules behave as if built with `-fvolatile`**
(`link_session.c` uses the flag; `link_packet.c` now uses plain `-O2 -G8`
with explicit `volatile` qualifiers, which gives the same code for its
builder `8012D80C` and lets the receiver `8012D45C` read one field
non-volatile, as retail does. So the original source probably qualified its
pointers rather than using the flag.) With the flag, every access through a
pointer is volatile. Signs of volatile accesses in retail code:
- pointer loads and stores never sit in branch delay slots, even where the
  slot then stays empty;
- the same pointer field is loaded again straight after it was read;
- a full `lw` feeds a `sb`/`sh` into a narrower field (a non-volatile source
  is narrowed to `lbu`/`lhu`);
- signed 16-bit bitfields are read as `lhu`/`sll`/`sra`;
- struct assignments become `memcpy` calls.

`link_session.c` gives the same bytes with or without the flag (its source
needs no `volatile` qualifier with it). The packet builder `8012D80C` needs
either the flag or explicit `volatile` on all its pointers. Globals are not affected (`-fvolatile-global` breaks the small
accessors), so the two globals that retail reads as full words are declared
`volatile`.

The game's main module (`game_main.c`, the file with `main`) uses plain
`-O2 -G8`: `-fvolatile` breaks `801345EC` there. One field of the game data
block (`+0x7D8`) behaves as volatile (its stores never fill a delay slot), so
the lobby code accesses it through a `volatile int *`.

Small `static inline` helpers are part of the game source. The volume
clamps in `801327B8` and `80135A84` only match as inline functions: GCC 2.8
copies each inlined parameter into its own pseudo, which shows as an extra
register copy (or a compare against a register holding a constant) that no
plain-statement form produces.

A `0`/`1` result that retail computes with a branch (`bnez; li v0,1;
move v0,zero`) instead of `sltu` comes from a `return 0` shared with other
paths. GCC 2.8's first jump pass only rewrites `if (x) r = 1; else r = 0;`
into a store-flag when the zero assignment is private to that `if`
(`80132C78`).

A value loaded into one argument register and copied into another
(`lw a1; beqz a1; move a0,a1`) means its variable is also passed in the
other register elsewhere in the function. The allocator follows the copy
preference of that other call. In `80135A84` one `Node *` serves as the
second argument of `func_80127148` and the first of `func_801274CC`.
Similarly, an extern byte whose address retail splits into its own `lui`
is an element of an array or struct (`D_801B399C[2]`), not a separate
symbol.

**The assembler also differs per object.** Most RT code matches maspsx
(ASPSX 2.56 behaviour). libcomb's `_comb_control` was assembled by a GNU
assembler: load macros use the destination register as the temporary, and
empty reorder-mode delay slots are filled with the preceding instruction. No
ASPSX version (2.56, 2.67, 2.77, 2.79, 2.81, 2.86, all tested with the genuine
toolchain) does either, and no compiler flag produces them. Such units set
`"gas": "<as flags>"`: `tools/gas_prep.py` restores the old GNU as encodings
(`move` as `addu …,$0`; division before its zero/overflow checks), then GNU as
assembles the compiler output directly. Signs of a GNU-assembled object: an
indexed load whose temporary is its destination register, or a low address
half, or a store, sitting in a branch or jump delay slot.

Units choose their compiler in `config/semantic/units.json`:

```json
{"source": "src/semantic/link_session.c", "delay_slots": "compiler",
 "compiler": "psyq4.4", "cc_flags": "-O2 -G8 -fvolatile", "aspsx": "2.56"}
```

Without these keys a unit uses the TM2-inherited GCC 2.7.2 exactly as before.
`build.py`, `tools/objdiff_build.py` and `tools/semantic_compile.py` all honour
them.

**libcomb (the PsyQ runtime library) uses a patched GCC 2.7.2** (2026-09-29).
Game code is PsyQ 4.4, but the SDK library objects were built by Sony with
GCC 2.7.2 carrying a few GCC 2.8 behaviours. This is what juandav found for
PsyQ's libraries in dw3_decomp/dcb_decomp (their `tools/patch_cc1.py`, MIT,
patches a Linux build of the compiler). `tools/patch_cc1_win.py` ports the
patches to our Windows `toolchain/gcc-2.7.2-psx/cc1.exe` (all of them since
2026-09-29), plus our patch 19 (2026-09-30). How it works:
- It locates sites through the exe's COFF symbols (addresses cross-checked
  against the GCC 2.7.2 source, `gcc-2.7.2.tar.gz` from ftp.gnu.org, kept
  under `work/gcc-src/` as a reference) and checks every byte it changes.
- New code goes into an added `.patch` section. Small patches are
  hand-assembled. Larger ones (4, 7/16/17, 8, 9, 14) are C in
  `tools/cc1patch/` (`cc1.h` has this cc1's rtx layout and entry points),
  compiled by clang for i686 without relocations; a stub at each site passes
  the frame pointer and registers.
- The compiled bytes are cached in `tools/cc1patch/blobs.json`, so clang
  (llvm-mingw, `CC1PATCH_CLANG`) is only needed when a C source changes.
- It clears the dynamic-base flag, so absolute addresses in the new code stay
  valid.

It writes `toolchain/gcc-2.7.2-psyqlib/cc1.exe` (compiler key
`gcc2.7.2-psyqlib`); `build.py` regenerates it when missing, and the result is
reproducible. `--only N,...` builds a subset for testing. What matters for
libcomb:
- **5:** cse's `find_best_addr` keeps `reg + const` addresses. With it
  libcomb's `la base; 8(base)` field addressing appears; without it, 2.7.2
  folds to `sym+8`.
- **11:** combine re-enables the recognition of volatile MEMs, so sched1
  schedules them.
- **13:** `prune_preferences` tests register conflicts both ways.
- **19:** `update_equiv_regs` doubles an equivalent register's live length
  only when it crosses a call (see below).

The other patches (1, 4, 6, 7-10, 12, 14-18) change nothing in libcomb's
current output. Each was checked on a small test (14 moves `x = a` above the
test; 8 gives the `la; lw; move; addu; sw 0(reg)` post-increment).

The libcomb units use `"compiler": "gcc2.7.2-psyqlib", "cc_flags": "-O2 -G8",
"gas": "-O2 -G0"`. GNU as fills the `j $31` slot with the preceding
instruction unless that is a load or would leave the `$31` load right before
the jump, which gives libcomb's two epilogue shapes.

Result: all 16 libcomb functions exact (since 2026-09-30). `80161D14`
matched once its transfer clears share their zero through a temporary:
`r = D_801EC990.remaining = 0; D_801EC978 = 0; D_801EC980.remaining = r;`.

**Patch 19 (found for `_comb_control`, not in juandav's set).** In 2.7.2's
local-alloc, `update_equiv_regs` doubles `reg_live_length` of every register
with a REG_EQUIV note, for example a pointer set once to a constant address.
That halves its priority in global.c (`floor_log2(refs) * refs /
live_length`). The library compiler did this only for a register that
crosses a call:
- `_comb_control`'s DTR block: the `shadow` pointer (5 refs over 15 insns,
  no calls) must rank before `ctrl` (3 over 5) to get v1. Doubled, it ranked
  last and took a3.
- `func_80160F60`: its `x = &D_801EC990` lives across calls and must still
  be doubled, or it takes s0 instead of s2.
- Removing the doubling everywhere breaks `80160F60`. Removing it only for
  constant equivalences breaks `8016120C` as well. The call test keeps all
  16 functions exact.

The patch hooks `update_equiv_regs+0x4af` and tests `reg_n_calls_crossed`.

**`_comb_control`'s source.** The DTR block also needed the right source
form:

```c
int ctrl; unsigned char t; int d;
shadow->ctrl = D_801BC068->ctrl & 0xFFDD;
t = (arg & 1) << 1;
d = t;
ctrl = shadow->ctrl;
if (arg & 2) shadow->ctrl = ctrl | 0x20 | (int) ((arg & 1) << 1);
else         shadow->ctrl = ctrl | d;
```

- `d = t` is `zero_extend (subreg:QI shift)`. Combine turns it into a plain
  copy of the shift, because the value is at most 2 (retail's `move a1,a3`).
  CSE ran earlier and saw a different expression, so the copy survives, and
  the two arms' `or` tails differ and are not cross-jumped.
- `d` must be an `int`. The store narrows `ctrl | d` to HImode, and
  `expand_binop` puts a REG operand first. With an `unsigned char d` that is
  `d`'s zero extension (`or v0,a1,a0`); with an `int d` it is a SUBREG, and
  `ctrl` stays first (`or v0,a0,a1`).

How this was found (the dead ends, for the record):
- `-dl -dg` dumps showed the allocation order: ctrl, d, shift, shadow.
  Retail's registers fit the same order with `shadow` first.
- GCC 2.8's split address constants (`high`/`lo_sum`) give `shadow` a v1
  preference, and PsyQ 4.4 compiles the DTR block to retail's registers that
  way. Ported experimentally, the split broke 5 other libcomb functions, so
  the library compiler did not have it.
- Setting `shadow` more than once also avoids the doubling. But the first
  scheduling pass then no longer delays the set (`birthing_insn_p` wants
  exactly one set), so the cancel cases change.
- Earlier attempts (the 192-variant grid, narrow types, ternaries,
  patch-14-shaped code, shared pointers, `do { } while (0)` loop weighting)
  did not reproduce the structure.

Not the answer, for the record: no PsyQ 4.2 exists in the known archives
(mkst/esa `psyq-binaries`, archive.org `ps1_sdks`); PsyQ 4.0/4.1 alone lack
the address reuse; PsyQ 4.3-4.6 end functions the 2.8 way. `-g`, `-O1`/`-O3`
and the scheduling switches don't help. `gas_prep.py` drops the COFF debug
directives of `-g` output.

## Evidence

Epilogue census (`jr ra` with the stack restore in its delay slot, versus
`addiu sp; jr ra; nop`): RT game code 523 vs 2, TM2 game code 30 vs 624.
GCC 2.7.2 writes the epilogue as text and maspsx/ASPSX leaves a `nop` in the
slot; GCC 2.8+ emits `j $31` with the slot filled itself.

`compiler_probe.py src/semantic/link_comb.c` (functions exact, words equal):

| Compiler | Default flags | `-mno-split-addresses` |
|---|---|---|
| GCC 2.7.2 (TM2 kit), PsyQ 4.0 (2.7.2.SN), 4.1 (cygnus-2.7.2-970404) | 1 word too long (unfilled epilogue) | same |
| PsyQ 4.3 (2.8.0), 4.4 (2.8.1) | 14/17, 16/19 | **AddCOMB, DelCOMB exact** |
| PsyQ 4.5 (egcs 2.91.66), 4.6 (2.95.2) | 12/17, 16/19 | AddCOMB 15/17, DelCOMB exact |

- `-mno-split-addresses` makes GCC 2.8 emit `la` (a two-instruction macro
  that cannot fill a delay slot) instead of separate `%hi`/`%lo`, which is the
  retail call-setup order.
- maspsx `--aspsx-version=2.56` assembles `li` as `addiu` (retail) rather than
  `ori` (ASPSX 2.34).
- With these settings PsyQ 4.3/4.4 also keep every previously exact unit exact
  (`gpu_control.c` 4/4, `gte_setters.c` 5/5 non-asm functions); PsyQ 4.5/4.6
  break `gpu_control.c`. The exact-only hybrid still reproduces the retail
  SHA-256.

`math_vec.c` (`8016F60C`/`8016F740`/`8016F874`) loads signed halfwords as
`lhu`+`sll`+`sra`. That is a volatile `unsigned short` read cast to `short`:
combine cannot fold the extension into a volatile load, while a plain or cast
read becomes `lh`. It is exact with every tested compiler (2026-09-30).

PsyQ 4.3/4.4 have not been tested against a large sample of game functions yet;
treat the choice as established for libcomb and consistent with the game-code
census, and re-check with the first matched game function.

## Genuine toolchain check (2026-09-28)

`tools/psyq_real.py` builds a unit with the unmodified SDK tools exactly as
PsyQ 4.4's `CCPSX.EXE -v` shows the driver running them: `CC1PSX -quiet -O2`,
then `ASPSX -q` (version 2.79), then `PSYLINK` (CPE output, groups at the
retail addresses, externals equated, `$gp` anchored at `801C3240`).

- It reproduces `AddCOMB`/`DelCOMB` exactly with `-mno-split-addresses` and
  gives the same instructions as the emulated pipeline for every function
  tested, so maspsx `--aspsx-version=2.56` + GNU as is faithful here.
- The driver's own default is `-O2` only (address splitting on). That does not
  match libcomb or the engine link module; these objects were built with
  `-mno-split-addresses`, which Sony's driver does not add by itself.
- All six ASPSX versions in PsyQ 4.0-4.6 (2.56, 2.67, 2.77, 2.79, 2.81, 2.86)
  assemble `_comb_control` identically.

Small data: `$gp`-relative addressing appears only for variables the same
source file defines (in `.sdata`/`.sbss`). An `extern int` defined elsewhere is
addressed absolutely by both GCC and ASPSX, as retail does across modules. A
unit that matches such code defines its module's small data in address order
and places the sections with the manifest `sections` key; `build_hybrid.py`
now always defines `_gp = 0x801C3240` for the per-unit link.

## Provenance

PsyQ packages from https://github.com/mkst/esa/releases/tag/psyq-binaries (the
source decomp.me uses), downloaded 2026-09-28 with the user's approval.
Candidates are in `toolchain/psyq-candidates/` (archives in `_downloads/`); the
selected package is copied to `toolchain/psyq4.4/`.

| Archive | Bytes | SHA-256 |
|---|---|---|
| psyq4.0.tar.gz | 2,391,794 | f25a4f6f044eb1b344bbbd3291aa9a4fc1a1124fc637eae9522c0a117d940e28 |
| psyq4.1.tar.gz | 1,780,674 | 2a2650ceb5eaa73fdc581bec4a85ccaa6ff9eeea8a4810be25a638f3cd2ebac4 |
| psyq4.3.tar.gz | 1,638,876 | 577038d66507d3aa5423de0ba3f540e121a4f60f637f4794aa4350135d4f9a46 |
| psyq4.4.tar.gz | 1,911,982 | 72e73934bab0d51933eb95af514afb14f3d432f01530eac3ddb16dfbb57ab66c |
| psyq4.5.tar.gz | 2,274,837 | 75f28034f6844f0f7633e3f17443727865c8955da1cd19147db2c760b40f14f7 |
| psyq4.6.tar.gz | 2,367,287 | 635603e09a452c9c2923492fea8b8eb051959dd94f240933b88e94866814b894 |

The PsyQ tools are Win32 executables. `CC1PSX.EXE` builds its temporary file
name from `TMP`/`TMPDIR`; a POSIX value (from a Unix-style shell) makes it
fail with exit 33 and `\/ctaNNNN: No such file or directory`. The project
tools set both to a Windows directory. Sony SDK binaries: private local use
only, no licence granted.

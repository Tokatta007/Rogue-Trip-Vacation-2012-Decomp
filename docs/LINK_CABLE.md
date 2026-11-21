# Link-cable (PS-Link) play in Rogue Trip

Project goal 1 (2026-09-28): identify the functions used for link-cable
network play, decompile them byte-exact (matched decomp) and document how the
engine uses them. Status: **identified and mapped. Byte-exact: all seven
engine link-layer functions (`8012CF24..8012D458`), all 15 packet-layer
functions (`8012D45C..8012DC0C`), and all 16 libcomb functions (built
with a patched GCC 2.7.2, see `docs/COMPILER.md`; `_comb_control` since
2026-09-30, with patch 19). Game flow (Layer 3): all 16
reconstructed functions exact (`80132090`, `801327B8`, `80132C78`,
`80132CF4`, `801345EC`, `801347A0`, `80134DF4`, `801351F4`, `80135A84`,
`80136718`, `80136EA4`, `801382EC`, `801387F0`, `80139DB8`, `8013A06C`, `8013A07C`). A full two-console link game runs in an
emulator (see "Running a link game").**

Evidence is static (retail MIPS, `tools/callgraph.py`, `tools/refs.py`, m2c
reference in `reference/m2c/`). The runtime check is in "Running a link game";
command meanings marked *likely* follow the PsyQ libcomb interface and still
need a runtime trace.

**Matching status (PsyQ 4.4 CC1PSX, GCC 2.8.1, ASPSX 2.56 behaviour; flags
per file, see `docs/COMPILER.md`).** Exact functions are confirmed by the build
gate (`build.py --exact-only` reproduces the retail SHA-256), objdiff (100%)
and, for `link_session.c` and `link_packet.c`, the unmodified SDK toolchain
(`tools/psyq_real.py`).

| VA | Function | File | Flags | Status |
|---|---|---|---|---|
| `80160E70` | `AddCOMB` | `link_comb.c` | patched GCC 2.7.2 (`gcc2.7.2-psyqlib`), `-O2 -G8`, GNU as | exact |
| `80160EB4` | `DelCOMB` | `link_comb.c` | same | exact |
| `8012CF24` | transfer callback (timeout) | `link_session.c` | `-O2 -G8 -fvolatile` | exact |
| `8012CF84` | open | `link_session.c` | same | exact |
| `8012D058` | handshake | `link_session.c` | same | exact |
| `8012D130` | close | `link_session.c` | same | exact |
| `8012D1AC` | send packet | `link_session.c` | same | exact |
| `8012D290` | receive packet | `link_session.c` | same | exact |
| `8012D3D0` | drain/resync | `link_session.c` | same | exact |
| `801C32E0` | session `.sdata` (13 words incl. `"sio:"`) | `link_session.c` | | exact, placed |
| `801C37C8` | session `.sbss` word | `link_session.c` | | placed |
| `8012D45C` | apply received packets | `link_packet.c` | `-O2 -G8`, explicit `volatile` | exact. The hit points are assigned through a non-volatile cast of the packet pointer (retail's `lh 27(s3)` via a `pkt+3` register). `rot` is a volatile local whose address the loop pass hoists into s5. The effect pointer from `80124CBC` is held in a volatile pointer, which keeps retail's register copy. Volatile reads of `D_801C34F0`, `unk7C4` and `unk110` and two temporaries for the weapon-active store fix the remaining instruction order |
| `8012D78C` | send this console's packets | `link_packet.c` | same | exact |
| `8012D7B8` | packet layer setup | `link_packet.c` | same | exact |
| `8012D80C` | build packets | `link_packet.c` | same | exact |
| `8012DA78`..`8012DC04` | 11 state helpers | `link_packet.c` | same | exact |
| `801C3314` | packet `.sdata` (10 words) | `link_packet.c` | | exact, placed |
| `80161468` | `_comb_control` | `link_comb_control.c` | same | exact (patch 19; DTR block `t`/`d` form, see `docs/COMPILER.md`) |
| `80160F00` | empty stub | `link_comb_io.c` | same | exact |
| `80160F08` | start interrupt-driven read | `link_comb_io.c` | same | exact |
| `80160F60` | blocking read | `link_comb_io.c` | same | exact |
| `801611B4` | start interrupt-driven write | `link_comb_io.c` | same | exact |
| `8016120C` | blocking write | `link_comb_io.c` | same | exact |
| `8016193C` | interrupt verifier | `link_comb_drv.c` | same | exact |
| `801619B8` | SIO interrupt handler | `link_comb_drv.c` | same | exact |
| `80161D14` | device init | `link_comb_drv.c` | same | exact: the transfer clears share one zero through a temporary, so the callback clear lands between them as in retail |
| `80161E08`, `80161E10`, `80161F90` | stubs returning 0 | `link_comb_drv.c` | same | exact |
| `80161E18` | device shutdown | `link_comb_drv.c` | same | exact |
| `80161EA8` | device read/write entry | `link_comb_drv.c` | same | exact |

Findings that made these match:

- The engine module *defines* its small data: retail addresses
  `801C32E0..801C3313` and `801C37C8` `$gp`-relative only inside this module;
  `main` and other modules use absolute `lui`/`sw` for the same words. The C
  therefore defines those variables in address order, and the manifest places
  the unit's `.sdata`/`.sbss` at their retail addresses.
- The engine module was compiled with the SDK driver's default flags
  (`-O2`, address splitting on). The handshake's final call loads the callback
  address as `lui a2` before the `jal` and `addiu a2` in its delay slot, which
  only split addresses produce. libcomb's `AddCOMB`/`DelCOMB` file was built
  with `-mno-split-addresses` instead. With default flags all four engine
  functions match; with `-mno-split-addresses` the handshake does not.
- The device name `"sio:"` and the handshake flag are declared `extern` above
  the functions and defined after them (in address order). While compiling
  open, GCC then sees an array of unknown size, treats its address as a
  two-instruction constant and keeps it in `s0` across both `open()` calls.
- open tests the negated status bit and handles failure first
  (`if (!(((status >> 7) ^ 1) & 1)) { DelCOMB(); return 0; }`), which yields
  retail's `srl`/`xori`/`andi`/`beqz` and block order.
- The handshake's role-1 branch stores both flags before assigning the return
  value, which gives retail's `move v0,s0` copy.
- The callback compares `elapsed > limit` with the call on the left: with
  the limit first, GCC computes the shift before the call and keeps it in a
  saved register (one word longer).
- **Both engine modules were compiled with `-fvolatile`** (every access
  through a pointer is volatile). Retail keeps pointer loads and stores out of
  branch delay slots, re-reads memory it has just read, and never narrows a
  word load to a byte or halfword load when storing into a narrower field; GCC
  2.8 does all of that only for volatile references. The packet builder
  `8012D80C` needs it everywhere (header bitfields, car fields, pad words), and
  with it the session layer needs no `volatile` qualifier at all: send sums
  through a pointer to byte 0 (`*sum += *p++`), receive sums into an
  `unsigned char` and compares with byte 0 read through a copy of `buf`.
- Receive assigns `tries = 3` after the first `read()`: reorg then moves it
  into that call's delay slot, as retail has it. Written before the call, the
  scheduler hoists it into the prologue.
- Packet layer: the packet header is a byte-aligned struct of `unsigned char`
  bitfields reached through its own `LinkHeader *` pointer. MIPS GCC takes the
  access width for a bitfield from the alignment of the outermost object, so
  through the 4-aligned packet it would read and write whole words. The two
  event bits are tested on the whole header word
  (`*(long *)pkt & 0x400000`), which gives retail's `lw` + `lui` + `and`.
- The packet's rotation and hit-point fields are signed 16-bit bitfields
  (`int rx : 16`). Retail extracts them with `lhu`/`sll`/`sra`, which is how
  GCC reads a volatile signed bitfield.
- Vectors are copied field by field through pointers (`v = &car->pos;
  pkt->pos.x = v->x; ...`), with separate pointers for position and rotation.
  A struct assignment becomes a `memcpy` call under `-fvolatile`.
- The builder's loop is `for (;;) { if (i >= n) break; ... i++; }`. A `for`
  or `while` loop is rotated (test at the bottom), which retail's loops are
  not.
- `D_801C3314` (the two local car indexes) is `int [2]`. Constant indexes are
  `$gp`-relative, while the builder's `D_801C3314[i]` uses an absolute
  address, as retail does. The module's `.sdata` is defined after the
  functions in address order. `D_801C332C`/`D_801C3330` are `volatile` (the
  builder loads them as full words), and the per-car flags array is read
  through a local pointer, hoisted into `s4` as in retail.
- libcomb's `_comb_control` prototype, as the engine sees it, returns an
  unsigned value (`srl` on the status word).
- `_comb_control`: three jump tables are the unit's `.rdata` at `800F5004`
  (each 8-byte padded within the section); the register shadow and callback
  are one struct at `801EC968` while the two transfer records are separate
  objects; the reset cases each carry their own critical-section exit, which
  the compiler merges.

`_comb_control` (2026-09-28): default flags are wrong for it. With them GCC
splits the three jump-table dispatches too, which retail does not, and no
GCC 2.8+ compiler splits data addresses while leaving jump tables unsplit.
Retail's leftovers came from the *assembler*: `_comb_control` was assembled by
a GNU assembler, not ASPSX. GNU as expands load macros through the
destination register (`lui s0; addu s0,s0,v0; lh s0,…(s0)`, `$at` only when
the destination is also the base) and fills empty reorder-mode delay slots
with the preceding instruction (the address halves after `bnez`/`j`, the
`cmd 2` sub 0 store). ASPSX 2.56-2.86 do neither. `tools/gas_prep.py`
restores the old GNU as encodings that modern binutils changed (`move` as
`addu`, division before its checks); the unit uses
`"gas": "-O2 -G0"` in `config/semantic/units.json`.

With that, 303 of 309 words matched. The last 6 were one block, `cmd 1`
sub 1 (set DTR/RTS): retail computes the DTR bit once before the branch and
uses a copy of it in the plain arm (`move a1,a3` in the `beqz` delay slot).
The function has been exact since 2026-09-30. That took a compiler fix
(patch 19: the library compiler doubles an equivalent register's live length
only when it crosses a call) and a byte-sized temporary for the DTR bit (see
`docs/COMPILER.md`). Its jump tables are placed at `800F5004`.

`8012D45C` (packet receiver) has been exact since 2026-09-29. The volatile
locals and temporaries it needed are commented in `src/semantic/link_packet.c`
and summarised in `docs/COMPILER.md`.

libcomb's compiler (2026-09-29): the SDK library was not built with PsyQ
4.4 like the game but with GCC 2.7.2 carrying a few GCC 2.8 behaviours, as
juandav's decomps found for PsyQ's libraries. `tools/patch_cc1_win.py` ports
the needed patches to our GCC 2.7.2 `cc1.exe` (details in `docs/COMPILER.md`).
With it, the function endings retail has (no `return` insn in zero-frame
functions, `lw ra; addiu sp; jr ra; nop`) and its record addressing
(`la base; 8(base)`) come out together; 14 of 16 libcomb functions are exact.

Tools: `tools/variant_probe.py` scores source variants of a unit (with
`forbid` patterns that reject miscompiled variants; oversized variants are now
scored too); `tools/psyq_real.py` builds with the genuine SDK toolchain;
`build.py --exact-only` is the retail-identity gate.

## Hardware path

PS-Link uses the second serial port, SIO1 (`1F801050` data, `…54` status,
`…58` mode, `…5A` control, `…5E` baud). The code never forms these addresses
with `lui`/`lo`; it loads them from pointer cells:

| Cell | Value | Used by |
|---|---|---|
| `801BC068` | `1F801050` (SIO1 base) | the driver functions below |
| `801BC06C` | `1F801050` | `801619B8` |

(`801BC120`/`801BC134`/`801BC2A8`/`801C3234` hold `1F801040`, SIO0: pads and
memory cards, not link play.)

## Running a link game

The retail game runs over an emulated link between two emulator instances
(SIO1 with FIFO, byte timing, DTR/RTS/DSR/CTS and IRQ8, carried over TCP).
Session link-001 (2026-09-29) went through the whole lobby and into a race:

1. Handshake: the client instance became master (player-count menu), the
   host slave ("WAITING").
2. Code 1 "PLAYERS: 2" and code 2 "LEVEL #: 1" shown on the slave.
3. Master picked its car: slave shows "PLAYER 1" (code 3), master
   "WAITING FOR OTHER PS SELECTIONS".
4. Slave picked PLAYER 2's car; both loaded the level (code 4).
5. Race: both consoles run in lockstep (about 19 game FPS each), each radar
   shows the other car, and driving on both did not raise
   "LINK CONNECTION LOST".

Further runs (2026-10-01, link-004..007, after a fix to the emulated cable that holds
received bytes while the SIO1 FIFO is full):

- 8 minutes of 2-player racing with steering, weapons and pickups on both
  consoles; both kept about 15-19 game FPS and never stalled.
- Pause from the master: its pause menu, the slave shows "OTHER PS PAUSE";
  the same the other way round. Quit (with confirmation) from the slave's
  pause menu: both consoles return to the main menu within seconds (the quit
  travels as a packet flag, `8012DB84`).
- Pulled cable (one emulator killed mid-race): the other console freezes in
  the link read, shows "LINK CONNECTION LOST" about 18 s later (event 9 via
  the receiver's empty-read count and `801387F0`) and returns to the main
  menu.
- 4 players (2 per console, split screen on each): lobby, car picks with the
  second controllers, and 2 minutes of racing, all four cars visible on both.
- Handshake collision: when both consoles enter the lobby in the same poll
  window both become master and hang (`8012D058` decides by who raised its
  line first). On hardware that window is tiny; over the emulated cable the
  line change arrives late, so the test scripts stagger the lobby entry. A
  port that wants robustness should add a tie-break.
- One earlier run (before that fix) stalled after about 90 s; it
  did not recur, but the cause is not proven.

## Layer 1: PsyQ libcomb + the BIOS `sio` device driver (`80160E70..80161F97`)

| VA | Words | Role | Evidence |
|---|---|---|---|
| `80160E70` | 17 | `AddCOMB`: installs the device (`AddDrv(&DCB 801BC0A0)`) inside a critical section | calls; C drafted in `src/semantic/link_comb.c` |
| `80160EB4` | 19 | `DelCOMB`: `DelDrv("sio")`, `FlushCache()` | calls; C drafted |
| `80161468` | 309 | `_comb_control(cmd, sub, arg)`: the library's control entry | 14 game call sites with command codes |
| `80160F08` | 22 | Start an interrupt-driven **read** (read record `801EC990`): raise RTS, enable the RX interrupt. -1 if one is running. | called by `80161EA8` |
| `80160F60` | 149 | Blocking **read**. Raises RTS, polls RX-ready (asking the callback `801EC978(1, tries)` between polls; 0 aborts), toggles DTR every `801BC098[mode]` bytes. A line error (stat `0x38`) resets the port from the shadow registers; errors and aborts are signalled with `DeliverEvent(HwSIO, 0x8000 / 0x100)`. Returns the bytes read. | called by `80161EA8` |
| `801611B4` | 22 | Start an interrupt-driven **write** (write record `801EC980`): record DSR, enable the TX interrupt. | called by `80161EA8` |
| `8016120C` | 151 | Blocking **write**. Waits for TX ready (stat bits 0 and 2) with the callback `(2, tries)`, and every `801BC098[mode]` bytes waits for the partner's DSR to change (byte-block handshake). Returns the bytes written. | called by `80161EA8` |
| `80161EA8` | 58 | Device read (op 1) / write (op 2) entry. Open mode `0x8000` (no wait) starts an interrupt-driven transfer; otherwise it blocks. Sets EBUSY (16), EINVAL (22) or EIO (5) in the file block. | device table `801BC0B8` |
| `8016193C` | 31 | Interrupt verifier: claims the SIO interrupt (I_STAT & I_MASK bit 8); drops the TX-interrupt enable while a write waits and TX is ready. | interrupt record `801BC070`+8 |
| `801619B8` | 215 | Interrupt handler. Acknowledges; on a line error resets the port and ends the read (`DeliverEvent` 0x8000). Moves 1/2/4/8 received bytes per interrupt (the RX-interrupt threshold; 4 and 8 read the data register as words through `801BC06C`) and toggles DTR. Sends the next write byte when TX is ready and DSR has changed. Read done `0x400`, write done `0x800`. | interrupt record `801BC070`+4 |
| `80161D14` | 61 | Device init: shadow mode `0xCE`, baud reload `0xD8` (9600 bit/s), control `5` (TX/RX enable); resets the port with them; installs the interrupt record (`SysDeqIntRP`/`SysEnqIntRP(3, 801BC070)`); unmasks the SIO interrupt; clears both records and the callback. | device table `801BC0B0` |
| `80161E18` | 36 | Device shutdown: masks the SIO interrupt, resets the port, restores the shadow control word, removes the interrupt record, clears both records. | device table `801BC0E8` |
| `80161E08`, `80161E10`, `80161F90` | 2 each | device-table stubs returning 0 | device table `801BC0B4`/`BC`/`C0..EC` |
| `80160F00` | 2 | empty stub | |

Driver state: shadow registers `801EC968` (mode `+8`, control `+A`, baud
`+E`), callback `801EC978`, **write** record `801EC980` and **read** record
`801EC990` (active, buffer, remaining, DSR level). Earlier notes had the two
records the other way round; the SIO1 control bits settle it (bit 10 `0x400`
TX interrupt enable, bit 11 `0x800` RX interrupt enable). `_comb_control`
`cmd 0` sub 5/6 and `cmd 2` sub 2/3 therefore take arg 0 = write, and cancel
the write (sub 2) or the read (sub 3). Status bit 7, which open tests, is
`COMB_DSR` in PsyQ's `LIBCOMB.H`.

The device control block starts at `801BC0A0` (name pointer `800F5000`
"sio", description "SIO console" at `800F4FF4`, handler pointers at
`801BC074..801BC0EC`). BIOS calls reach the driver through that table, so
most driver functions have no direct callers.

## Layer 2: engine link layer (`8012CF24..8012D3D0`)

Globals: `801C32E4` write handle, `801C32E0` read handle, `801C32E8` this
console's role, `801C32EC` link established, `801C32F0` timestamp of the
last link call (`GetCurTics`), `801C32F4` timeout flag, `801C32F8` timeout
enabled (game code writes it, together with `801C32FC`), `801C3300` cleared
per received packet, `801C3304` count of reads that got nothing,
`801C37C8` "last send incomplete" (also the timeout back-off), `801C3310`
handshake state. Device name `"sio:"` at `801C3308` (`.sdata`).

| VA | Role (from its code) |
|---|---|
| `8012CF84` | **Open.** `AddCOMB()`; `_comb_control(0,0,0)` status, and requires bit 7 (`COMB_DSR`, the partner's DSR line) to be clear; `_comb_control(2,0,0)` and `(3,0,0)` reset; `(1,3,0xFD200)` baud = 1,036,800; `(1,4,4)` character length (*likely* 8 bits); `open("sio:", 2)` write handle and `open("sio:", 1)` read handle; returns 1. Otherwise `DelCOMB()` and returns 0. |
| `8012D058` | **Handshake, polled per frame.** Stamps `GetCurTics`, then uses `_comb_control(3,1,0)` (read the partner's control line) and `(3,0,1)` (raise ours) to decide who answered first: role 0 or 1 in `801C32E8`, sets "established". Always installs `8012CF24` as the transfer callback via `_comb_control(4,0,cb)`. Returns -1 while waiting. |
| `8012D130` | **Close.** Clears flags and the callback (`_comb_control(4,0,0)`), closes both handles, `DelCOMB()`. |
| `8012D3D0` | **Drain and resynchronise.** Raises the line, spins until the partner's line drops, `_comb_control(5,0,0)` (*likely* cancel pending I/O), lowers the line, `VSync(0)`; brackets it with `8015BC8C(1)` / `8015BF70(0/1)`. |
| `8012CF24` | **Transfer callback**, installed by the handshake with `_comb_control(4,0,cb)`; libcomb calls it while a transfer waits. With the timeout enabled (`801C32F8`) it compares `GetCurTics() - 801C32F0` against `3,000,000 << 801C37C8` (unsigned): past the limit it sets the timeout flag `801C32F4` and returns 0 (abort), else it clears the flag. Returns 1 (keep waiting) otherwise. The limit doubles after an incomplete send. |
| `8012D1AC` | **Send packet** `(buf, len)`. Byte 0 becomes the 8-bit additive checksum of bytes `1..len-1`. Stamps `801C32F0`, `write(801C32E4, buf, len)`; a short write is continued up to 3 more times. Sets `801C37C8` to 1 if the packet is still incomplete, else 0. Returns the bytes written. |
| `8012D290` | **Receive packet** `(buf, len)`. `read(801C32E0, buf, len)`, continued up to 3 more times (restamping `801C32F0` before each). If the callback raised the timeout flag, or nothing at all arrived, returns 0 (and counts the empty read in `801C3304`). Otherwise it clears `801C3300` and returns 1 when byte 0 equals the 8-bit sum of the rest; on success it also clears `801C37C8` and `801C3304`. |

## Layer 2b: packet layer (`8012D45C..8012DC0C`, `src/semantic/link_packet.c`)

Each frame, a console sends one 32-byte packet per local player and applies
the partner's packets to its remote cars. Buffers: outgoing
`8018459C` (2 packets), incoming `801845DC` (2 packets), per-car flags
`8018461C` (4 ints). The car record is `*(801C34EC) + 0xB788 + car * 0x8B8`.

Packet layout (bytes):

| Offset | Content |
|---|---|
| 0 | 8-bit checksum (set by send `8012D1AC`) |
| 1 | bits 0-1 car index; bits 2-5 selected weapon slot (car `+0x264+0x41`); bit 6 slot has ammo (`+0x43[slot]`); bit 7 slot flag (`+0x4C[slot]`) |
| 2 | bit 0 `801C332C`; bit 1 `8018461C[car] & 1`; bit 3 `801C3330`; bit 6 an event of type B in byte 3 (`801C3338`); bit 7 an event of type A in byte 3 (`801C3334`) |
| 3 | event argument |
| 4, 8 | the player's two controller words (`8016BD24`/`8016BD5C` read them from the per-port 36-byte records at `801BC218`; the receiver stores them back with `8016BCB4`/`8016BCEC`) |
| 12..23 | car position (car `+0x1E4`, three longs) |
| 24, 26, 28 | rotation z, x, y as 16-bit values (car `+0x1F0`) |
| 30 | hit points, 16-bit (car `+0x10C`) |

| VA | Role |
|---|---|
| `8012D7B8` | Setup `(local count, remote count, car0, car1)`: stores the counts and local car indexes (`801C331C`, `801C3320`, `801C3314[2]`), clears the flags and queued events. Called six times from `80136EA4` (match start, per mode). |
| `8012D80C` | Build: fills one packet per local player from its car, controller words and flags. It takes at most one queued event per frame (type A first). |
| `8012D78C` | Send: `8012D1AC(8018459C, local count * 32)`. |
| `8012D45C` | Receive and apply: `8012D290(801845DC, remote count * 32)`, then for each packet it copies position/rotation into the remote car and takes over the hit points. If the car has just died it starts effect 30 via `80124CBC`/`8012A154`. It also sets the pad words and weapon slot and updates the flags. Event B starts effect 30 with the event argument; event A calls `8012EB08(arg)`. Returns 1 if packets were applied. After 4 empty reads (`801C3304`) it calls `80132CF4(9, 0)` (link lost). |
| `8012DA78`, `8012DAC4`, `8012DB48`, `8012DB5C` | Ownership of one shared item (`801C3328` owner, `801C3324` pending): claim, update from a packet, test, release. The console with role 1 (`801C32E8`) arbitrates. Used by `80132C78` and `801327B8`. |
| `8012DB84`/`8012DB94`, `8012DBA0`/`8012DBB0` | Set/get the two flags sent in byte 2 (`801C332C`, `801C3330`). |
| `8012DBBC` | Reset the per-round flags. |
| `8012DBF8`, `8012DC04` | Queue an event A (`8012E7D4`) or B (`8011A4AC`) for the next packet. |

Per-frame order in the race loop `80132090`: build (`8012D80C`), then the
exchange in role order (master sends then receives, slave receives then
sends). The pause menu `8013A07C` also builds and sends so the partner sees
the resume/quit flags.

## Layer 3: game flow using the link

Reconstructed in `src/semantic/game_main.c` (the source file with `main`,
`80133EC0`; PsyQ 4.4, plain `-O2 -G8`, ASPSX 2.56) and
`src/semantic/game_mode.c` (the round-flow module before it).

**Link state.** `8013A06C` returns `D_801B3967` (`GameState.link_active`):
0 no link game, 1 master, 2 slave. The master is the console whose
handshake role `D_801C32E8` is set; it runs the front-end menu, the slave
follows its choices.

**Lobby protocol.** Before a race the consoles exchange 4-byte messages
through `8012D1AC`/`8012D290`: byte 0 is the checksum the send fills in,
byte 1 the message code, bytes 2 and 3 arguments.

| Code | Meaning | Sent by | Receiver |
|---|---|---|---|
| 0 | abort. Byte 2 = 0: back to the previous menu, else return 1 | `801351F4` (menu quit / pause quit) | "OTHER PS HAS ABORTED, EXITING" for 180 frames, close the link |
| 1 | number of players (2, 3, 4) | master, `801347A0` | sets `GameState.unk6` and the mode, "PLAYERS: %d" |
| 2 | level | not in the main EXE: the shell overlay (seen at runtime, link-001) | `D_801C3470`, "LEVEL #: %d" |
| 3 | player picked a car: byte 2 player, byte 3 car | car select `80135A84` | marks the car taken (`D_801B38F4`, `D_801B393C`), stores it in `D_801B38E4`, "PLAYER %d" |
| 4 | done / start | `80134DF4`, `80135A84`, race start in `80132090` | ends the wait |
| 6 | controller button map: byte 2 = port + 2, byte 3 = entry (low 4 bits) and button (high 4 bits) | `80134DF4`, 8 per local controller | writes the partner's map (`func_8016C088(2/3)`), `func_8016C070` |

Any other code prints "BAD PACKET OPCODE FROM MASTER/SLAVE %d".

| VA | Status | What it does with the link |
|---|---|---|
| `80133EC0` (`main`) | exact | Startup and the endless front-end / match loop. The front end clears the link state every pass and tells screen 7 not to offer its option to a link slave. Each race pass sets the session's timeout flag `D_801C32F8 = 1` and `D_801C32FC = 0` before the race loop `80132090` and clears `D_801C32F8` after it. Defined as `game_main` with assembler name `"main"` (GCC would insert a `__main` call; that call, 801549A8, is written out). Its jump tables moved the unit's `.rodata` to `800F4010`. |
| `801345EC` | exact | Front-end shell. Loads SHELL\MAIN.TMS and LITS.TMS, **closes a link left open** (`D_801C32EC`), runs the menu overlay (`801F7D80`) and maps its result to the next state; result 15 starts a race directly. Pushes the menu stack. |
| `801347A0` | exact | Lobby. Opens the link (`8012CF84`, 0x1FA400); on failure "LINK CABLE NOT CONNECTED" for 180 frames. Loops on the handshake `8012D058` with "WAITING FOR LINK CONNECTION" (abortable, `80139DB8`). Master: sets link state 1, runs the shell menu `801F8420` for 2/3/4 players and sends message 1 (menu quit → `801351F4`). Slave: loads SHELL\MP.TMS, shows "WAITING FOR OTHER PS SELECTIONS" and handles messages 0/1/2/3/6 until 4, then sets link state 2. |
| `80134DF4` | exact | Match start. Sends this console's button maps (message 6) and 4, then takes the partner's maps, car picks (3) and "done" (4); 0 aborts. Returns state 11 after `8013B478(0, 100)`. |
| `801351F4` | exact | Leave the link game: send message 0 with the reason, wait two frames, close the link, clear the link state. |
| `80135A84` | exact | Car select, once per local player (two on one console; in a link game this console's player, the slave numbered after the master's). Right/left step through the 17 cars skipping taken ones (`80136718`), up/down picks a random free car, X/start confirms, triangle backs out, square leaves the link game (`801351F4(1)`). Each pick marks the car taken and, in a link game, is sent as message 3 (player, car). Then the slave sends its controller maps (message 6, ports 2 and 3) and "done" (4). Returns state 9, 10 (master) or 11 (slave). |
| `8013A06C` | exact | Link state getter (above). |
| `8013A07C` | exact | Pause menu. In a link game "OTHER PS PAUSE" when the partner paused; the local player's choice is sent as a packet flag (resume `8012DBA0`, quit `8012DB84`) through build/send (`8012D80C`/`8012D78C`). Afterwards it drains the link (`8012D3D0`) and re-arms the timeout (`D_801C32F8` = 1). |
| `80132C78` | exact | Shared item claim: in a link game the item goes to the console that owns it (`8012DB48`), otherwise the local claim (`8012DA78`). |
| `80132090` | exact | Race loop. In a link game, with the timeout off (`D_801C32F8` = 0), a start handshake: the master sends message 4 and waits for the reply, the slave waits and answers. Per frame: swap display buffers, build the packets (`8012D80C`), render one or two views (split screen `D_801C3378`), draw "DEMO" in demo mode, then exchange in role order (master `8012D78C` then `8012D45C`, slave the reverse). The frame counter drains the link (`8012D3D0`) once, on the third frame. Frame pacing waits until `D_801C337C` ticks (20, 15 in mode 3) have passed. Returns `D_801C3374`. |
| `80132CF4` | exact | Raise a game event `(type, arg)`: passes the type to `80124B80` and queues the pair (at most 4, `D_801CBB58`, count `D_801C3370`). `80132CF4(9, 0)` is "LINK CONNECTION LOST", shown by `801387F0`; 3 is the race reset. |
| `80136718` | exact | Car unavailable to a player? Car 11 never; bonus cars 12-14 need unlocking (car 14 also level 11, no lock, no link game); otherwise taken when another player picked it (in a link game via message 3) and it is marked taken. |
| `801382EC` | exact | Copies option bytes 4-7 into a player's record (+0x196..+0x19A), per player from match setup. |
| `80138494` | exact | Car select's per-frame car display (3D car or BIOS portrait, arrows); draws an extra image when this console is the link slave. |
| `801387F0` | exact | Round-end event handler: takes a queued game event (`80132CF4`) and returns the next game state. Demo mode (0): "DEMO COMPLETE", next demo level, the intro movie after level 11. Event 3 (race reset) ends the round (`80139D54`, state 1). **Event 9 (queued by the packet receiver `8012D45C` when its empty-read count `D_801C3304` reaches 4): "LINK CONNECTION LOST" for 300 frames (`80138788`), state 1.** Modes 1/3: a life per death event (1/2/8), "GAME OVER", restart (`80147784`, state 12) or `80138F8C` (state 13). Mode 2: `8013A654` (state 11); mode 5: per-player WINS/LOSSES counts and text, restart both players (state 12). Modes 2 and 5 do this only with link state 0; in a link game those events just end the round. |
| `80139DB8` | exact | Timed, abortable message: shows the lobby's "WAITING FOR LINK CONNECTION" text for up to N frames and polls the first pad (X/start/circle end it, triangle pops the menu stack). |
| `80136EA4` | exact | Match setup. Loads the level, bonus-track, player-car and extra-car textures (TMS) and models (DMD) and the car voices, picks the extra (computer) cars, and creates the players. Without a link: players 0/1 get views and controller ports 0/1 and the extra cars are added. With a link it clears the per-player bytes `D_801B3970[]` and, by link state and player count, calls the packet setup `8012D7B8(local count, remote count, first local player, second local player)`: master 2p `(1,1,0,0)`, 3p `(2,1,0,1)`, 4p `(2,2,0,1)`; slave 2p `(1,1,1,0)`, 3p `(1,2,2,0)`, 4p `(2,2,2,3)`. The master's players come first. `8016BD94(player, n)` gives local players 0/1 and the partner's players 2/3 (apparently the controller port, 2/3 being the link), `80121008` gives local players views 0/1 and remote ones -1, and the per-player byte `0x8B5` of the player records (`+0xB788 + i * 0x8B8`) is set from `D_801B39A4` (first local player) / `D_801B39A5` (second local player; the 2-player slave's only player also takes `39A5`). Last it calls `801382EC` for every player. |
| `801327B8` | exact | Per-frame reset countdown and pause requests, called from the race loop. Holding select for 12 s resets the race ("Reset in %ld second(s)", event 3 via `80132CF4`); start, or a pulled controller (a link slave waits 20 ticks first), requests the pause menu. The first requesting player gets `8013A07C` with the music ducked; in a link game it then calls `8012DB5C` (release the shared item, Layer 2b). Result 1 ends the round, 2 sets the caller's reset flag. |

Matching notes for `game_main.c`:
- The unit defines the module's `.sdata` from its start (`801C3470`: the
  level, a zero word, the short strings other functions of the file use, then
  `801C34EC..350B`; `801C3508` is the movie flag `801387F0` sets) and the `.sbss` run `801C3830..3843`, placed at their
  retail addresses. The `.rodata` placed at `800F4010` holds the jump tables
  of `main`, `801345EC` and `801347A0` (both exact, so the section is placed in the
  exact-only build too).
- Loops whose exit test retail keeps at the top are `while (1) { if (!c)
  break; ... }`; a plain `for`/`while` is rotated by GCC 2.8.
- `80134DF4` needed `map[n]` rather than `*map++` and `shown = 10` after the
  `sprintf`; `801345EC` needed a `GameState *` local for its three stores.
- `80136718` needed one `taken:` label for every "return 1" (retail shares
  one return block; separate returns let reorg thread a branch to the final
  `jr`) and a struct view of the option bytes, so the bonus-car byte is
  `(car - 12)` plus `+0xC` from the options base. `801382EC` needed a
  volatile player-record struct (no store in the return delay slot) and a
  local pointer to the options, which is loaded first. `80139DB8` is a
  top-tested `while (1)` loop.
- `801387F0` needed: the two `+0x12750`/`+0x12754` tests as `static
  inline` value-context helpers (`a || b`, `a && b`: retail builds a 0/1
  flag and tests it); a struct pointer for `game + 0x6220` field `0x3A8`
  (volatile field) and a helper per player record for byte `+0x82A`
  (keeps `li 0xB788/0xC040; addu; lbu 0x82A`), with the helper reading
  `D_801C34EC` itself (as a parameter, pointer and flag swap a0/v1); the
  mode word `+0x7D8` read volatile twice; and a `GameScore *` for the
  link-state test and counters plus fresh block-local pointer and format
  locals in each versus-text arm (retail rebuilds `&D_801B3960` and the
  format in s0/s1 per arm). `801C3500..3508` were added to the unit's
  `.sdata` so `801C3508` is `$gp`-addressed.
- `80132090` (`game_mode.c`, module A: `.sdata` placed from `801C3370`, whose
  first word is the event count `80132CF4` addresses through `$gp`; the
  `"DEMO"` literal follows the four words, `.sbss` from
  `801C380C`) needed:
  - volatile `ot` and `unk8` fields in the display buffer struct (retail never
    moves those accesses past each other or into delay slots);
  - a volatile read through a separate pointer for `game + 0x6220` field
    `0x3A8`, which keeps retail's separate `addiu`;
  - short-lived pointers for the buffer swap and the per-view arguments;
  - two if-arms with whole calls for the blink colour (cross-jumping merges
    them);
  - the pacing wait written as `goto` into a `do/while` (retail enters the loop
    at its test);
  - a `case 0: break;` in the split-screen switch, which produces retail's
    extra `x < 2` test.
- `80132C78` needed a single `return 0` at the end, shared by the link-path
  failures and the local path. GCC 2.8's first jump pass turns
  `if (want) return 1; return 0;` into a store-flag (`sltu`) only when the
  `return 0` belongs to that `if` alone.
- `80135A84` (car select) needed:
  - a volatile read of the pointer at `0x800201F4` (retail builds its address
    with `ori`);
  - volatile menu-view fields and a volatile child count;
  - `parts[idx++]` in the table-building loop, so `idx` is not an induction
    variable (retail recomputes `car * 3` each pass);
  - nested `if`s for the part-type range (GCC folds `&&` into one compare);
  - separate variables for the two part pointers and for each loop counter
    (fewer long-lived pseudos leave s8 for the hoisted constant 1).

  - `static inline` helpers for the sound code (volume clamp, play, stop,
    fade step), as in `801327B8`.

  - the draw loop indexing `parts[idx]` with `idx++`, like the table loop;
  - one `Node *dp` shared by the two `func_80127148(type, part)` calls
    and the draw loop: passing it as the second argument makes the
    allocator prefer `a1`, which gives retail's `lw a1; beqz a1;
    move a0,a1` in the draw loop;
  - the saved effect volume read as `D_801B399C[2]` rather than a
    separate `D_801B399E`: the symbol-plus-offset address is split into
    its own `lui v0`. With it, the `play_sound(49)` block before it also
    gets retail's registers (49 in `v1`, loaded after the volume store).
- `80136EA4` (match setup) needed:
  - `.sbss` extended to `801C384F` (`D_801C3844..384C`, the last two
    written $gp-relative); the three are declared together before the
    function so `.lcomm` keeps address order;
  - `D_801C34AC` as a `char[]` (an empty string): as an `int` GCC treats its
    address as small data and does not split the `la`;
  - volatile stores of `0x7D4`, `0x12728`, `0x12750`, the first two
    `0x127E5` flag stores and the player-record byte (kept out of delay
    slots), and volatile reads of the game mode `0x7D8` in the mode tests;
  - `static inline` helpers: the mode tests (their `a1 = 0; if (..) a1 = 1`
    booleans), the player-count store (argument evaluated before the
    address), the car voice and the player-record byte (the record address
    `game + 0xB788 + i * 0x8B8` is built before `+0x8B5`);
  - the bonus-track number stored in both if-arms (cross-jumped; the join
    then re-reads it);
  - the `unkB` level test as its own `else if` (retail rebuilds the
    `D_801B3960` address there);
  - `if (i == 0) car = 12; else car = 13;`;
  - separate counters for the `-1` fill, the model loops and the extra-car
    creation loop; `while (1) { if (!c) break; ... }` for the loops tested
    at the top (extra-car pick, player models, extra-car creation);
  - a `goto` from the `unkD` bonus case into the level case's
    `want12 = 1` (retail shares that block, not the other way round).
- `801327B8` (reset countdown) needed:
  - a `static inline` volume helper (clamp to `D_801C36D8`/`D_801C36DC`,
    then `8015FB80`). The inlined parameter copy is what gives retail's extra
    register copy and its compare against a register holding 0;
  - a volatile `start` array and volatile vtable entries (the virtual call
    reads a `u16` this-adjust and keeps the entry pointer);
  - the player-record offset `i * 0x8B8 + 0xB788` in its own variable;
  - an `unsigned char` for the ducking factor;
  - volatile reads of the level and the sound bank, in that order.
- `801347A0` (lobby) needed:
  - a volatile store of the menu result
    (`*(volatile int *) mode = func_801F8420(...)`). Retail then re-reads it
    for the switch: cse does not record a volatile store's value, while a
    volatile pointer type would read it twice.
  - an inline `reset_players()` for the setup loop;
  - a nested block with a declaration inside the abort message loop. The
    block notes lengthen the hoisted string address's lifetime, so cc1's loop
    pass moves it out of the whole slave loop a second time (as in retail,
    where it is then spilled and rematerialised with `lui t2`);
  - `*(D_801B394C + --D_801C34FC)` for the menu pop.

Open questions for runtime work: what `_comb_control` status bit 7 means, the
payload layout of the in-race packets (the transport is known: byte 0 is an
8-bit additive checksum), and who sends message 2. Those need a two-instance
link route; the runtime kit booted RT but had no link-cable emulation path configured
yet (since done; see "Running a link game").

## Layer 4: link-aware game code (2026-09-30)

Functions outside the lobby that talk to the packet layer or change their
behaviour in a link game. All exact, PsyQ 4.4 `-O2 -G8` unless noted.

**Controller ports** (`src/semantic/pad_ports.c`, `8016BCB4..8016C10C`, 18
functions, `.sbss` at `801C38B4`). A player reaches its pad through the port
map `D_801C38B4[4]`; ports 0/1 are this console's controllers, 2/3 the
partner's.

| VA | Link use |
|---|---|
| `8016BCB4`, `8016BCEC` | Receive (`8012D45C`): store the partner's pad words (packet bytes 4 and 8) into its port record (36-byte records at `801BC218`). |
| `8016BD24`, `8016BD5C` | Build (`8012D80C`): read a local player's pad words for the packet. |
| `8016BD94`, `8016BE60` | Set / get a player's port (match setup gives remote players 2/3). |
| `8016BDA8` | Player plays on this console (port < 2). |
| `8016BE08` | Port mode: players map to ports in the race, ports are used directly in the pause menu. |
| `8016C070`, `8016C0F0`, `8016C088`, `8016C0A4`, `8016C0CC` | Button maps (4 ports × 9 words at `801F3208`) and their "set" flags (`801F3298`); lobby message 6 writes the partner's maps into ports 2/3. |
| `8016BDC0`, `8016BE78`, `8016BF3C`, `8016C064`, `8016C10C` | Controller type, analog axes, "anything pressed", presence (not link-specific). |

**Event A: pickups** (`src/semantic/link_events.c`, `.sdata` at `801C3348`,
`.sbss` at `801C37DC`). The level's spawn points (24-byte records at
`D_8018462C`) hold pickups. Only the console that runs the game (no link, or
the master) respawns them: `8012E7D4`, per frame from the race loop, puts a
pickup back on a random spawn point of each list every 500 / 2000 ticks and
queues event A with the spawn index (`8012DBF8`). The slave never spawns;
`8012EB08` (called by `8012D45C` for event A) puts the same pickup back.
Also in the unit: `8012E484` (registers a level entity as spawn point number `D_801C37DC`; both consoles load the same level, so event A can name a spawn point by index), `8012E544`/`8012E738` (computer-car searches for the nearest present pickup), `8012E9C0` (set up a spawn point), `8012EA50` (pickup
taken: hand out the item), `8012EAEC` (pickup present), `8012EB68` (car hit
points: ×1.5 outside a link game, then scaled by player count; its last
register choice needs a `register ... asm("$3")` pin, the only one in game
code).

**Event B: destroyed level objects** (`src/semantic/link_event_b.c`,
`8011A4AC`, jump table at `800F34A4`). The damage handler of destructible
level objects (kinds 0x1F4..0x202), called by the hit dispatcher `8012A154`.
When an object is destroyed in a link game (cause other than 30) it queues
event B with the object's slot (entity byte +2). The partner's receiver calls
`8012A154(..., 30, slot, ...)`, which destroys the same object with cause 30
and sends nothing back.

**Other link-state checks** (`8013A06C` callers):

| VA | File | What changes in a link game |
|---|---|---|
| `8011FA30` | `link_game_8011FA30.c` (table `800F3654`) | Per-frame round-end check (lives, countdown, bonus win, level-4 timer → events 1/2/3/4/8). In modes 1, 2, 4+ a link game skips all local tests: the round ends through the link instead. |
| `80142918` | `link_game_80142918.c` (`-fvolatile`) | Car reset for a round or life; the per-view state at game+0x496C is reset only without a link. |
| `801446DC` | `link_game_801446DC.c` (`-fvolatile`) | Per-frame car update; a wrecked car's view value eases back only without a link. |
| `8014662C` | same file (table `800F4360`) | Damage a car: a car not played on this console is never wrecked locally (hit points held at 1 unless the cause is 30), and damage is credited to the attacker only in a link game. |
| `80152BE4` | `link_game_80152BE4.c` (`-fvolatile`) | A car entering a warp: the "turn to the entry's heading" state `0x9B` is given only without a link. |
| `80103CE4` | `link_game_80103CE4.c` (`-fvolatile`) | A third HUD variant for one view (frame, photo thumbnail, weapons, health, specials, turbo, speedometer, Photo Op/Tourist markers, money, "SECONDS LEFT"). In a link game it hides the objective gauge (`80108650`), the objective icon and the "N Auto Mercs Left" counter. |
| `801057B8` | `link_game_801057B8.c` (`-fvolatile`) | Draws one view's race HUD (weapons, place, health, gauges, speed, target arrow, money, countdown). The extra panel `80108650` is drawn only outside a link game, in mode 3. The separator bar is one `PolyF4 sep[buf][view]` array, written `(&h->sep[buf][view])->x0`: inside `if (view == 1)` the stores and the `AddPrim` argument then reach the address in two forms, as retail computes it twice. |
| `801072E0` | `link_game_801072E0.c` (`-fvolatile`) | The other view's race HUD (divider, weapon list, big weapon icon, place, health, special counters, turbo bar, flag or target arrow, money, mode-3 countdown). The mode-3 status panel `80108650` is drawn only without a link. Exact after a maspsx fix (below). |
| `801143B8` | `link_game_801143B8.c` (`-fvolatile`, `.sbss` `801C3784`) | Level object creator (callback of the level loader). Kinds 300..399 (block +0x10A60) are created only in modes < 3 without a link; in a link game only 380..382 on bonus tracks. One-player-only objects (554, 595, parts of 555..571) never appear in a link game (2..4 players). Both consoles load the same level, so they drop the same objects. |

**Local and remote players** (callers of `8016BDA8` "plays on this console"
and the port mode `8016BE08`):

| VA | File | What it does / link role |
|---|---|---|
| `801033D8` | `link_local_801033D8.c` (`-fvolatile`) | Steps a view's camera mode; the button pair is read only when the view's player is on this console (the partner's pad comes from packets). |
| `8012B094` | `link_local_8012B094.c` (`-fvolatile`) | Steps a car's selected weapon slot to the next filled one; only a local player may change it, the partner's slot arrives in the packet. |
| `80126250` | `link_local_80126250.c` (`-fvolatile`, `.sbss` `801C37A8..37C7`, tables `800F366C`) | Demo (attract mode) director; raises event 3 after 2700 ticks ("DEMO COMPLETE"). Runs only in mode 0, never in a link game. `8011EE48` shares `D_801C37A8` and must join this unit. |
| `80120288` | same file | Match reset, first call of match setup: clears player records and cars (keeping some per-player fields), per-level init, views by mode: a link game is mode 2 (one view) or 5 (two local players, two views). |
| `80120B68` | same file | Per-match start values (the level's time value); runs on both consoles. |
| `801211B4` | same file | Adds a computer car to a free slot; only reached without a link (match setup adds extra cars only then). |
| `801268A0` | same file | Demo camera car choice (demo only). |
| `8012EEA0`, `8012EEE8`, `8012EFE4` | `link_local_8012EEA0.c` (`-fvolatile`, 12 exact functions `8012EEA0..80130A58`) | DualShock vibration (reset, request, run the motors); only for players on this console, so the partner's players are never vibrated here. |
| `8012F320` | same file | Per-frame controls. Every car reads its pad the same way on both consoles (remote pads sit in ports 2/3); only a local player may use the Select combinations that change this console's screens (view, camera mode). |
| `80130984`, `80130A58` | same file | Start/end a "busy with object" state: a local human player's view switches to camera mode 5 and back; remote players have no view. |
| `8012F0EC`, `80130198`, `80130218`, `801302A4` | same file | Car placement on a level node, button tap/hold timers (not link-specific). |
| `80147784` | `link_local_80147784.c` | Restarts a car in play (car setup `8012EB68`, options, a spawn spot away from other cars, money 3000/0); used for local and remote players alike, so both consoles rebuild the car the same way. |
| `8012BCB0` | `link_local_8012BCB0.c` | Sets the "has ammo" flag of all 9 weapon slots through `8012BD20` (the setter the receiver uses for packet byte 1). |
| `800FCC68` | `link_local_800FCC68.c` (`-fvolatile`, `.sbss` `801C3724..372F`) | Hit handler for computer cars (per-slot word 2; player cars, local or remote, use word 1 → `8014662C`): flee or retaliate, then pass damage on. Never tests the link. Its `.sbss` belongs to the computer-car module (`801C3720..377F`); `800F56B0`, `800F587C`, `800F5EBC`, `800FD29C` must join this unit. |
| `80132060` | `game_mode.c` | Race-loop teardown on every exit of `80132090`; switches the controllers back to direct port mode (`8016BE08(0)`). |
| `8013AA08` | `game_main.c` | Continue overlay per view: for each player on this console, "50 POINTS DEDUCTED / PRESS X / TO CONTINUE" while waiting, else "SCORE:%ld". |
| `8013ACCC` | `game_main.c` | Continue logic in versus/link play: a local player counts down and restarts on X (−50 points); a remote player restarts once its hit points (from the link packets) are positive. |
| `8013B28C` | `game_main.c` | Movie player wrapper (race port mode during the movie; returns `D_801C3850`, a new `.sbss` word of the unit). |

Also in that unit (exact): `8012FF6C` (Circle button handler: hold/tap timers, analog pull; same on both consoles) and `80130430` (cheat-code results; the options it saves per player are the ones copied back into cars). `80130430` needed dead `code = 0;` stores so cse compares each chain's last case against a copy of the code value, as retail does.

**Link-specific callees** (all exact):

| VA | File | What it does / link role |
|---|---|---|
| `80121008` | `link_callee_80121008.c` (`-fvolatile`) | Gives a player the first free car slot of a model and sets up its car record; attaches a camera view only for view >= 0. Match setup passes -1 for the partner's players, so remote cars get no view. |
| `80124B80` | `link_callee_80124B80.c` (`-fvolatile`) | Event bookkeeping for `80132CF4` (event flags at game+0x127AE/AF by mode). |
| `80124C4C` | same file | Name lookup in the list at game+0x15CC (not link-specific). |
| `80124CBC` | same file | Clears the effect block at game+0xB744; the receiver calls it before effect 30 on a remote car's death. |
| `8012A154` | `link_callee_8012A154.c` (table `800F3734`) | Hit dispatcher `(world, a1, damage, cause, slot)` by object kind: cars (`8014662C`), destructible objects (`8011A4AC`, event B), pickups (`8012EA50`), ... The receiver replays event B through it with cause 30. |
| `8012BD20` | `link_callee_8012BD20.c` (`-fvolatile`) | Sets a weapon slot's "has ammo" byte; the receiver applies packet byte 1 with it. |

`8010DBC4` (`link_game_8010DBC4.c`, table `800F314C`, 1002 words): the
per-car contact handler (pickups, ramming, push). In a link game (or with
car+0x829 set) a weapon pickup gives exactly that weapon (`8012AF9C`) instead
of a random one (`8012C3BC`, `rand()`), so both consoles agree. It matched
once the pickup call on the weapon path takes one argument,
`func_8012BD30(p + 0x264)`: a1 is then free, and reorg hoists the other
path's `move a1,zero` into the branch slot as retail has it.

**maspsx fix (2026-09-30).** When a load-delay `nop` is needed before a
branch target and two labels follow each other, ASPSX puts the `nop` before
both labels; maspsx moved only the first one above the `nop`, so a branch to
the second label landed one word late. `tools/maspsx/maspsx/__init__.py`
(`_handle_nop_before_next_instruction`) now moves every consecutive label.
All other units are unchanged; `801072E0` needed it.

## Compiler (resolved 2026-09-28)

The TM2-inherited GCC 2.7.2 cannot match RT: it leaves a `nop` in every
`jr ra` delay slot where retail has the stack restore. PsyQ 4.4 (GCC 2.8.1)
with `-mno-split-addresses` and ASPSX 2.56 behaviour reproduces
`AddCOMB`/`DelCOMB` exactly; details and the full candidate matrix are in
`docs/COMPILER.md`. Epilogue census that pointed there (`jr ra` with
`addiu sp,sp,+N` in its delay slot, versus `addiu sp; jr ra; nop`):

| Code | Filled | Unfilled |
|---|---|---|
| RT game code `800F56B0..80154000` | 523 | 2 |
| RT SDK region `80154000..801806C0` | 334 | 122 |
| RT libcomb | 7 | 3 |
| TM2 game code | 30 | 624 |
| TM2 SDK | 78 | 334 |

Rogue Trip was built with a newer GCC than TM2; new RT units should use the
`psyq4.4` compiler settings.

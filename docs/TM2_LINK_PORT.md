# Porting Rogue Trip's link-cable play to Twisted Metal 2

How to add two-console PS-Link play to Twisted Metal 2 (SCUS-94306) using the
matched Rogue Trip (SLUS_006.43) code in this repository as the reference.
Rogue Trip facts are from `docs/LINK_CABLE.md` and the byte-exact sources in
`src/semantic`. TM2 facts are from a read-only survey of the TM2 decomp
and its retail executable (2026-10-01); items marked *unconfirmed* need a
check before relying on them.

## 1. The short version

- TM2 has **no link code**: no libcomb, no SIO1 access, no `AddDrv("sio")`.
  Everything below the game layer is added wholesale from Rogue Trip.
- Rogue Trip's transport is game-independent and ports almost unchanged:
  the PsyQ libcomb driver, the session layer (open, handshake, checksummed
  send/receive, timeout, close) and the 4-byte lobby message format.
- The game layer is the work: build and apply per-frame packets against
  TM2's player records, inject the partner's pad, give one console authority
  over shared world changes, and hook the front end and the main loop.
- Use Rogue Trip's **sync model**, not lockstep. TM2's timestep varies per
  frame (3..5 ticks), `rand()` is the BIOS generator with about 300 call
  sites, and some of them are in render code; identical simulation on two
  consoles is not realistic. Rogue Trip avoids needing it.
- Start with **two players, one per console, full screen, no computer
  cars**. That is what Rogue Trip's link mode does for 2 players, and TM2 only
  has two human player slots anyway.

## 2. Rogue Trip's design in one page

Per race frame (`80132090` race loop), each console:

1. Builds one 32-byte packet per local player (`8012D80C`): position and
   rotation, hit points, the two pad words, the selected weapon slot and its
   "has ammo" flag, two flags (pause resume/quit) and at most one queued
   event. Sends them (`8012D78C` → `8012D1AC`).
2. Receives the partner's packets (`8012D45C` → `8012D290`), copies position
   and rotation into the remote car, stores the partner's pad words into
   controller ports 2/3, takes over hit points, applies the weapon slot, and
   replays the event.
3. Simulates everything locally. Remote cars are driven by their (received)
   pads and corrected by the received state every frame.

Rules that keep the two consoles consistent:

| Rule | Rogue Trip code |
|---|---|
| Ports 0/1 are this console's pads, 2/3 the partner's; "does this player play here?" is `port < 2`. | `pad_ports.c` (`8016BD94`, `8016BDA8`, `8016BCB4..BD5C`) |
| Only the owning console wrecks a car; a remote car is held at 1 hit point until the owner's packet says otherwise. | `8014662C` |
| Pickups are respawned only by the master; the slave copies each respawn from event A. | `8012E7D4`, `8012EB08` |
| A destroyed level object is sent as event B; the receiver destroys the same object with cause 30, which is not re-sent. | `8011A4AC`, `8012A154` |
| Weapon pickups never use `rand()` in a link game (exactly the pickup's weapon). | `8010DBC4` |
| No computer cars, no demo, no one-player-only objects in a link game. | `80136EA4`, `801211B4`, `801143B8` |
| Remote players get no camera view (view -1). | `80121008` |
| Local round-end tests are skipped; the round ends through the link. | `8011FA30` |
| A lost link (4 empty reads, timeout) raises event 9, "LINK CONNECTION LOST", and ends the round. | `8012D45C`, `80132CF4`, `801387F0` |

Timing: send and receive happen every frame and the receive blocks (with a
timeout), so the two consoles run frame for frame. The session's timeout flag
`D_801C32F8` is set by `main` for the race and cleared after.

## 3. What to take from Rogue Trip, layer by layer

| Layer | Rogue Trip files | Port effort |
|---|---|---|
| libcomb + BIOS `sio` device driver (16 functions) | `link_comb.c`, `link_comb_io.c`, `link_comb_control.c`, `link_comb_drv.c` | **Copy.** Pure SDK code. Retarget its globals (driver state, register shadow, DCB) to free RAM in TM2. Byte-exactness does not matter here, so it can be built with TM2's GCC 2.7.2. |
| Session (7 functions) | `link_session.c` | **Copy**, then replace the tick source (`func_801788E4`) with TM2's `GetCurTics` or a VSync counter, and rehome its `.sdata`/`.sbss` words. |
| Packet layer (15 functions) | `link_packet.c` | **Rewrite** against TM2's records (section 4). Keep the packet format and the event queue. |
| Lobby protocol | `game_main.c` (`801347A0`, `80134DF4`, `80135A84`, `801351F4`) | **Re-implement** in TM2's front end (section 6), keeping the message codes. |
| Game rules | `link_events.c`, `link_event_b.c`, `link_game_*.c`, `link_local_*.c`, `pad_ports.c` | **Re-implement** the rules in section 2 at TM2's equivalent sites. |

The matched C is written to reproduce retail bytes (volatile reads, inline
helpers, a few dead stores, one register pin). Clean it into plain C when
porting; behaviour is what matters.

BIOS calls the transport needs (add stubs to TM2's `bios_calls.c` if they
are missing): `open`, `read`, `write`, `close`, `ioctl` (B0:32..36/B0:35 area),
`AddDrv`/`DelDrv` (B0:47/48), `EnterCriticalSection`/`ExitCriticalSection`,
`DeliverEvent`, `SysEnqIntRP`/`SysDeqIntRP`, `FlushCache`. Check each against
the calls Rogue Trip's libcomb makes (`config/US` names and
`docs/LINK_CABLE.md`, Layer 1).

## 4. TM2 counterparts

### Main loop and timing

- Session runner `8012BE5C` (IDA name `screenCheckMidGameOptions`, misleading)
  calls `rtMainLoop` `800D1318`.
- Per frame: timed-exit queue `800D18A0` → `GetCurTics` → pad poll and latch
  `80150E00` → object updates → `viewProc`/render → `8011A700` (world and
  actor simulation) → HUD → `DrawSync`/`VSync` until the cap → `SetFrameStart`
  (`80155214`, return address `800D1670`).
- Frame cap at `801809E8` (`gp+0x14`): 15 when the game type is 2, else 20.
- Variable timestep: `SetFrameStart` stores 3..5 ticks in `D_8017EBF8.field_0`
  (read through `8015531C`, 176 call sites) and 60/ticks in `field_2`.

**Where to hook the link:**

- Send/receive once per frame **after the pad latch (`80150E00`) and before
  `8011A700`**, so the received pad is used by this frame's simulation.
- **Exchange the frame's tick value** in the packet and have both consoles use
  the larger one (write it into `D_8017EBF8` before simulation). Rogue Trip
  does not need this because its loop is coupled; with TM2's variable
  timestep, equal ticks keep the two physics steps alike between corrections.
- End the round on a lost link through the timed-exit queue at `gp+0`
  (entries of 8 bytes at `8018116C`), the way TM2 already leaves
  `rtMainLoop`.

### Input

- Pads are polled through `InitPAD2(801B2D80, 801B2DA4)`; the decoder
  `8014A31C` accepts digital pads only and writes the inverted buttons to
  `D_80180D38` (`gp+0x364`), player 1 in the low half and player 2 in the
  high half.
- In gameplay (`80180D74 == 1`), `8014A42C` latches that into
  `D_80180D34` (`gp+0x360`).
- Each car reads its port (s16 `car+0`) through `800DE5F8` → `80150CFC` →
  `801510DC` (binding table `801A4CEC[port*128 + action]`) and writes action
  bytes into its control block at `car+0xD0`.

**Injecting the partner:** on each console the local player is in its own
half of the latched word and the remote player's pad word (from the packet)
is written into the other half, right after the latch. Both consoles then
drive both cars from the same pad words. Send the latched half-word, not
the raw buffer; it is already decoded.

### Player records

- Human players: records at `80187B10 + i * 0x814`, count at `80181014`
  (`gp+0x640`); only two slots (`uaInit` loops `i < 2`).
- Fields for the packet:

| Packet field | Rogue Trip | TM2 |
|---|---|---|
| position | car record | s32 x/z/y at `+0x6FC/+0x700/+0x704` |
| rotation | car record | `+0x708/+0x70C/+0x710` (matrix at `+0x74C`; rebuild or send the angles) |
| speed | car record | s16 `+0x6E6` (delta at `+0x8C`) |
| hit points | `+0x10C` | s32 `+0x1F0` (max s16 `+0x186`) |
| pad words | packet bytes 4, 8 | latched half-word |
| selected weapon | packet byte 1 | weapon block `+0x7C8`, byte `+0xD` (0..7, 8 = none) |
| ammo / special | ammo flag | `+0x7C8`: `+0xE + 2*kind` ammo, `+0x22` total, `+0x30` special energy |

32 bytes per player is enough if position is sent as three s32 and rotation
as three s16; recheck the budget at 9600 bit/s (section 7).

### Game modes and front end

- Settings struct `8016475C` (48 bytes): +0 game type (0..4), +4 human
  player count, +5 enemy count, +8/+9 P1/P2 car, +10.. enemy list, +20..
  lives, +24 level.
- The session runner sets the split mode with `800D1C24` (`801809E4`,
  `gp+0x10`): types 2 and 4 are the split-screen two-player modes.
  Which type number is which menu mode is *unconfirmed*.
- `screenVehicleChoice` `8012E908` is the car choice screen.

### Views

- `8011A700` updates each player's camera (`80102BE8(car, i)` when
  `gp+0x5D4` (`80180FA8`) equals `i` or split screen is on) and sets view
  targets with `801563BC(pos, i)`. Render slots: view 0 `80180EE4`, view 1
  `80180EE8`, rear view `80180EEC`.
- For a link game set split mode 0 (full screen) and the followed player
  index `gp+0x5D4` to the local player on each console; the remote player
  then has no view of its own, as in Rogue Trip.

### Randomness

`rand`/`srand` are BIOS calls; `srand(GetCurTics())` runs at boot
(`801197D4`), level setup (`80119C78`) and round reset (`8011A03C`). Calls
that change shared state:

- AI (`weapon_tick_init.c`, `target_*`, `8010FD44`): avoided by having no
  computer cars in the link mode (enemy count 0).
- Pickups (`8010EEA8`, probable spawn/drop, *unconfirmed*; records
  `D_80184818[4]`, cursor `80180AF0`; apply `8010AFC8`): **master only**,
  slave copies through an event like Rogue Trip's event A.
- Level events with `rand` (`800D4D58`, `800D5AF0`, `800D6188`, `800D6800`,
  `801274C0`, `801277A8`, `80127CE0`) and the 1-in-5 roll in `8011A700`
  (near `8011A828`): master decides, slave receives an event, or limit the
  link mode to levels where these don't affect play.
- Damage with `rand` (`8010C160` fire, `8010B5C4` area): apply only to cars
  owned by this console; remote cars take their health from the packet.
- Rendering effects (`draw_tasers`, explosions) may call `rand` too; that is
  harmless as long as no shared decision depends on it.

### Damage authority

Health is written at `800DC88C`, `800DECA8`, `800FD6C4`, `8010C160`,
`80126464` (players). Likely hit handler: `800E5628` (12 callers,
*unconfirmed*). Port Rogue Trip's rule: a car not owned by this console is
never wrecked locally (clamp its health to at least 1 until its owner's
packet says otherwise); kills are decided by the owning console.

## 5. Where new code goes

TM2's build (`tools/build_maximal_hybrid.py`) patches functions in place and
each must fit its retail slot; `build.py` also refuses images whose hash
differs from the expected one. A link port therefore needs:

- **Its own build path** that allows added sections and a changed image.
- **Space for about 12-16 KB of new code** (libcomb about 4.4 KB, session
  about 1 KB, packet layer and hooks a few KB, lobby screen) plus a few
  hundred bytes of data (driver state, two packet buffers of 2 × 32 bytes,
  queues). No free region is documented: the zero runs inside the EXE
  (`80163037..80163DB8`, `8017F1D2..801807DC`) are probably runtime data,
  `80010000..800CDC54` is labelled heap/overlays without a map, and BSS runs
  to `801FAD48` with the stack after it. Options, in order of preference:
  1. extend the image after the current end (`80181454`) by moving BSS up
     (check what is placed at `80181454..` first);
  2. use the overlay region once its real use is mapped;
  3. replace a large, rarely used function with a smaller C version and use
     the freed slot.
- **Hooks**, each a call inserted at a site listed in section 4: after the pad
  latch, before `8011A700` (exchange packets), the health writers (authority),
  the pickup spawn (master only), the session runner (open and close the
  link, set split mode and enemy count) and the front end (lobby).

## 6. The lobby

Keep Rogue Trip's messages (`docs/LINK_CABLE.md`, Layer 3): 4 bytes
(checksum, code, two arguments); 0 abort, 1 player count, 2 level, 3 car
pick, 4 done, 6 button map.

1. A "LINK" entry under TM2's two-player menu opens the link (`AddCOMB`,
   `_comb_control` setup, `8012CF84`-style open) and polls the handshake
   (`8012D058`) with an abortable "WAITING FOR LINK CONNECTION" screen.
2. The master picks the level and sends it (code 2); in TM2 that is
   settings `+24`. Player count is fixed at 2 for the first version.
3. Each console runs `screenVehicleChoice` for its local player and sends
   its pick (code 3); the receiver writes the partner's car into settings
   `+8` or `+9`.
4. Button bindings (code 6): send each console's binding row so the partner
   decodes its actions; TM2 bindings are `801A4CEC[port*128 + action]`. If
   both consoles use default bindings, this can be skipped at first.
5. "Done" (code 4) from both, then the session runner starts the round with
   enemy count 0, split mode 0, and the link's timeout flag on.

**Handshake tie-break.** Rogue Trip's handshake makes a console the master if
its line went up first. If both raise their lines in the same poll window,
both become master and hang. On hardware that window is tiny; through the
emulated cable it is wide (seen in testing). Add a tie-break, for example:
both send a random byte after the handshake, the higher becomes master, and
equal bytes repeat.

## 7. Bandwidth

The driver initialises the port at 9600 bit/s (`80161D14`: baud reload
0xD8), but Rogue Trip's open (`8012CF84`) then sets
`_comb_control(1, 3, 1036800)`: a reload of 2 (2073600 / 1036800) with the
×16 mode factor, about 1 Mbit/s, roughly 100 KB per second each way, and an
RX interrupt every 4 bytes (`_comb_control(1, 4, 4)`). 32 bytes per player
per frame at 15-20 frames per second is well under 2 KB per second, so a TM2
packet can carry the full state of its players; the cost to watch is the
blocking exchange's latency per frame, not the bandwidth.

## 8. Testing

- The emulated cable: two emulator instances joined over TCP by an emulated
  SIO1 link.
- Scripts drive both consoles through the menus into a race; they are
  written for Rogue Trip, so TM2 needs its own menu navigation.
- Test list that passed on Rogue Trip (2026-10-01): long races, pause and
  quit from either console, a pulled cable (timeout, "connection lost"
  message, back to the menu), and the handshake with staggered lobby entry.

## 9. Suggested order

1. Add libcomb and the session layer to a TM2 build; open the link from a
   debug key and run the handshake between two emulators.
2. Exchange a test packet per frame inside `rtMainLoop`; check timing,
   timeout and the "connection lost" exit.
3. Pad injection only (both consoles drive both cars from shared pads); see
   how quickly they diverge.
4. Add state correction (position, rotation, speed, health) and damage
   authority.
5. Pickups and other shared random events through master-authority events.
6. The lobby (level and car picks, done), then pause/quit flags.
7. Edge cases: lost link, quit, round end, restart.

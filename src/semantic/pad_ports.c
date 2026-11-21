/* Rogue Trip controller ports (8016BCB4..8016C150).
 *
 * The pad driver fills one 36-byte receive record per port at 801BC218
 * (the raw PlayStation controller reply: byte 0 status, 0 = a controller
 * answered; byte 1 type << 4 | length, type 4 digital, 5 analog joystick,
 * 7 dual analog; bytes 2-3 the buttons, active low; bytes 4-7 the analog
 * axes). A player reaches its record through the port map D_801C38B4[4]
 * (player -> port), set by 8016BD94.
 *
 * Link game (docs/LINK_CABLE.md):
 * - Match setup 80136EA4 gives the local players ports 0/1 and the
 *   partner's players ports 2/3 (8016BD94). In a link game records 2 and
 *   3 hold what the partner sends.
 * - Layer 2b, packet layer: the builder 8012D80C copies each local player's
 *   first two record words (8016BD24, 8016BD5C) into packet bytes 4 and 8;
 *   the receiver 8012D45C stores the partner's words into the remote
 *   player's record (8016BCB4, 8016BCEC), so the remote car is driven by
 *   the partner's buttons and sticks as if they were a local pad.
 * - 8016BDA8 (port < 2: the player sits at this console) is used by the
 *   shared item claim 80132C78 and the pause menu 8013A07C.
 * - Layer 3, lobby message 6: the button maps, 4 x 9 words at 801F3208
 *   plus one word per port at 801F3298. 80134DF4 sends this console's maps
 *   and stores the partner's into ports 2/3 through 8016C088 and 8016C070.
 */

typedef struct {
    unsigned char status;       /* 0: controller present */
    unsigned char type;         /* type << 4 | length */
    unsigned char buttons[2];   /* active low */
    unsigned char analog[4];
    char rest[28];
} PadRecord;

extern PadRecord D_801BC218[];          /* per-port receive records */
extern int D_801F3208[][9];             /* button maps, per port */
extern int D_801F3298[];

/* Small data (.sbss at 801C38B4). */
static unsigned char D_801C38B4[4];            /* player -> port */
static unsigned char D_801C38B8;               /* 1: players map to ports */
static int D_801C38BC[2];
static int D_801C38C4[2];
static int D_801C38CC[2];
static int D_801C38D4;

#define ABS(x) ((x) < 0 ? -(x) : (x))

int func_8016C10C(int p);

/* The packet accessors reach a record as an array of words: words 0 and 1
 * of record n are ((long *) D_801BC218)[n * 9] and [n * 9 + 1]. Retail
 * accesses them volatile (no store in a delay slot) and computes the
 * index before the base address; see the notes at 8016BCB4. */
#define PAD_WORD(k) ((volatile long *) D_801BC218 + (k))

/* Link receive (8012D45C): store the partner's first pad word (packet
 * byte 4) into the remote player's record, port 2 or 3.
 * Matching: reusing the parameter for the port and a separate i = port * 9
 * keeps the index in v0 and the lui of the base after the multiply. */
__attribute__((section(".text_8016BCB4")))
void func_8016BCB4(long w, int player)
{
    int i;

    player = D_801C38B4[player];
    i = player * 9;
    {
        volatile long *p = PAD_WORD(0) + i;
        *p = w;
    }
}

/* Link receive: store the partner's second pad word (packet byte 8). */
__attribute__((section(".text_8016BCEC")))
void func_8016BCEC(long w, int player)
{
    int i;

    player = D_801C38B4[player];
    i = player * 9;
    {
        volatile long *p = PAD_WORD(1) + i;
        *p = w;
    }
}

/* Link build (8012D80C): a local player's first pad word, sent in packet
 * byte 4. Here a separate port variable gives retail's registers (the
 * product takes v0, the return register). */
__attribute__((section(".text_8016BD24")))
long func_8016BD24(int player)
{
    int port = D_801C38B4[player];
    int i = port * 9;
    volatile long *p = PAD_WORD(0) + i;

    return *p;
}

/* Link build: a local player's second pad word, sent in packet byte 8. */
__attribute__((section(".text_8016BD5C")))
long func_8016BD5C(int player)
{
    int port = D_801C38B4[player];
    int i = port * 9;
    volatile long *p = PAD_WORD(1) + i;

    return *p;
}

/* Set a player's port (80136EA4: 0/1 local, 2/3 the link partner). */
__attribute__((section(".text_8016BD94")))
void func_8016BD94(int player, unsigned char port)
{
    D_801C38B4[player] = port;
}

/* Does the player play on this console (port 0 or 1)? In a link game the
 * partner's players have ports 2/3; 80132C78 (shared item) and the pause
 * menu 8013A07C use this to act only for local players. */
__attribute__((section(".text_8016BDA8")))
int func_8016BDA8(int player)
{
    return D_801C38B4[player] < 2;
}

/* Controller type of a player's pad (4 digital, 5/7 analog). */
__attribute__((section(".text_8016BDC0")))
int func_8016BDC0(int p)
{
    PadRecord *r;

    if (D_801C38B8 == 1)
        p = D_801C38B4[p];
    r = &D_801BC218[p];
    return r->type >> 4;
}

/* Port mode: 1 in the race (80132090, 80132060; callers index by player,
 * mapped through D_801C38B4), 0 in the pause menu 8013A07C and 8013B28C
 * (callers index by port). Mode 0 also resets per-port state of ports
 * 0/1 (D_801C38BC = 16, D_801C38C4/CC = 0). */
__attribute__((section(".text_8016BE08")))
void func_8016BE08(unsigned char mode)
{
    int i;

    D_801C38B8 = mode;
    if (mode == 0) {
        for (i = 0; i < 2; i++) {
            D_801C38CC[i] = 0;
            D_801C38BC[i] = 16;
            D_801C38C4[i] = 0;
        }
    }
}

/* A player's port. */
__attribute__((section(".text_8016BE60")))
unsigned char func_8016BE60(int player)
{
    return D_801C38B4[player];
}

/* Analog axis n (0-3) of a player's pad (byte 4 + n); 80 otherwise. The
 * partner's sticks arrive through the pad words, so remote players read
 * the same way. */
__attribute__((section(".text_8016BE78")))
unsigned char func_8016BE78(short axis, short p)
{
    PadRecord *r;

    if (D_801C38B8 == 1)
        p = D_801C38B4[p];
    r = &D_801BC218[p];
    switch (axis) {
    case 0:
        return r->analog[0];
    case 1:
        return r->analog[1];
    case 2:
        return r->analog[2];
    case 3:
        return r->analog[3];
    }
    return 80;
}

/* Is anything pressed on a player's pad: a button, or (analog pads, types
 * 5 and 7) a stick pushed more than 120 from centre? */
__attribute__((section(".text_8016BF3C")))
int func_8016BF3C(int p)
{
    volatile PadRecord *r;      /* volatile: retail reads each axis anew */
    int analog;
    int i;

    if (func_8016C10C(p)) {
        if (D_801C38B8 == 1)
            p = D_801C38B4[p];
        r = &D_801BC218[p];
        if (~(r->buttons[0] << 8 | r->buttons[1]) & 0xFFFF)
            return 1;
        analog = 0;
        if (func_8016BDC0(p) == 5 || func_8016BDC0(p) == 7)
            analog = 1;
        if (!analog)
            return 0;
        for (i = 0; i < 4; i++) {
            /* index first: retail adds i + r */
            int pushed = ABS(128 - *(i + r->analog)) > 120;

            if (pushed)
                return 1;
        }
    }
    return 0;
}

/* Store D_801C38D4 (no caller found in the main EXE). */
__attribute__((section(".text_8016C064")))
void func_8016C064(int v)
{
    D_801C38D4 = v;
}

/* Mark a port's button map as set (80134DF4, lobby message 6: after
 * storing the partner's entry it calls this with 1 and port 2/3). */
__attribute__((section(".text_8016C070")))
void func_8016C070(int v, int port)
{
    D_801F3298[port] = v;
}

/* Button map of a port (8 entries used). 80134DF4 sends ports 0/1 as
 * message 6 (byte 2 = port + 2) and writes the partner's entries into the
 * maps of ports 2/3 returned here. */
__attribute__((section(".text_8016C088")))
int *func_8016C088(int port)
{
    return D_801F3208[port];
}

/* Read / write one entry of a port's button map. */
__attribute__((section(".text_8016C0A4")))
int func_8016C0A4(int port, int i)
{
    return D_801F3208[port][i];
}

__attribute__((section(".text_8016C0CC")))
void func_8016C0CC(int port, int i, int v)
{
    D_801F3208[port][i] = v;
}

/* Is a port's button map set? 80134DF4 sends only maps that are. */
__attribute__((section(".text_8016C0F0")))
int func_8016C0F0(int port)
{
    return D_801F3298[port];
}

/* Is a controller present (status byte 0)? Used by the pause request
 * 801327B8 (a pulled controller pauses) and the pause menu. */
__attribute__((section(".text_8016C10C")))
int func_8016C10C(int p)
{
    if (D_801C38B8 == 1)
        p = D_801C38B4[p];
    return D_801BC218[p].status == 0;
}

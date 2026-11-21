/* Rogue Trip car controls: vibration, respawn placement, per-frame pad read
 * (8012EEA0..80130B54, the module after link_events.c), reconstructed from
 * the retail instructions. Built like the engine link modules: PsyQ 4.4,
 * "-O2 -G8 -fvolatile", ASPSX 2.56. No data of its own (all globals are
 * extern; D_801C3354, the 6-byte actuator align table at the start of this
 * module's .sdata, is reached with lui/addiu and stays extern).
 *
 * Link relevance (docs/LINK_CABLE.md Layer 4, controller ports): a car's
 * driver reads its pad through the port map. Ports 0/1 are this console's
 * controllers, ports 2/3 hold the partner's pad words from the link
 * packets, so both consoles run the same driving code for every car.
 * func_8016BDA8(player) ("plays on this console", port < 2) gates what only
 * makes sense for a controller plugged into this console: the DualShock
 * motors (8012EEA0, 8012EEE8, 8012EFE4), the Select + d-pad view/camera
 * buttons (8012F320) and the camera switch of a view (80130984/80130A58;
 * only local players have views, and the view index is the port).
 * func_8016BE60(player) is the player's port: it picks the pad address for
 * PadSetAct (port 0 -> 0x00, port 1 -> 0x10) and the view.
 *
 * 8012FF6C (Circle button) and 80130430 (cheat-code results) were added
 * later; their comments say which source forms retail's register copies
 * need.
 *
 * The car record (0x8B8 bytes, game + 0xB788 + i * 0x8B8) is read through
 * one struct; -fvolatile makes every access through the pointer volatile,
 * which gives retail's re-reads and the stores kept out of delay slots.
 * Sub-records at +0x264 and +0x830 are reached through casted pointers
 * (retail computes `addiu base,0x264/0x830` separately). */

extern char *D_801C34EC;                /* game data */
extern char *D_801C34F4;                /* sound bank */
extern int rand(void);

typedef struct { int x, y, z; } Vec;

/* level node, 32 bytes, *car->nodes */
typedef struct {
    int unk0;
    int unk4;
    int y;              /* +0x08: height */
    short link[9];      /* +0x0C: neighbouring nodes */
    signed char nlink;  /* +0x1E */
    char pad1F;
} Node;

/* car + 0x264: driving/weapon state (overlaps the car fields below) */
typedef struct {
    char pad0[0x28];
    int unk28;          /* +0x28 */
    char pad2C[0x33 - 0x2C];
    unsigned char unk33;
    char pad34[0x42 - 0x34];
    unsigned char unk42;
} Sub264;

/* car + 0x830: cheat-code input state */
typedef struct {
    int code0;          /* +0x00: recognised code of each group, -1 none */
    int code1;          /* +0x04 */
    int code2;          /* +0x08 */
    int code3;          /* +0x0C */
    char pad10[0x4B - 0x10];
    unsigned char tutorial; /* +0x4B: tutorial hints active */
} Codes;

typedef struct {
    char pad0[4];
    char obj[0x40];         /* +0x004 */
    Node **nodes;           /* +0x044 */
    char pad48[0x62 - 0x48];
    short node;             /* +0x062: spawn node */
    char pad64[0x7D - 0x64];
    unsigned char unk7D;
    char pad7E;
    unsigned char circleOn; /* +0x7F: set by 8012FF6C */
    char pad80;
    unsigned char unk81;
    char pad82[0x84 - 0x82];
    unsigned char unk84;
    char pad85[0x8B - 0x85];
    unsigned char unk8B;
    char pad8C[0x8E - 0x8C];
    unsigned char unk8E;
    char pad8F[0x91 - 0x8F];
    unsigned char unk91;
    unsigned char downArmed;    /* +0x92 */
    unsigned char upArmed;      /* +0x93 */
    unsigned char sideArmed;    /* +0x94 */
    unsigned char unk95;
    char pad96;
    unsigned char unk97;
    char pad98;
    unsigned char unk99;
    char pad9A[0xA6 - 0x9A];
    unsigned char stickA6;  /* +0xA6: set by 8012FF6C */
    unsigned char start;    /* +0xA7 */
    unsigned char select;   /* +0xA8 */
    unsigned char cross;    /* +0xA9 */
    signed char unkAA;      /* accelerate */
    signed char unkAB;      /* brake / reverse */
    unsigned char unkAC;
    unsigned char circle;   /* +0xAD */
    signed char left;       /* +0xAE */
    signed char right;      /* +0xAF */
    signed char down;       /* +0xB0 */
    signed char up;         /* +0xB1 */
    char padB2[0xB6 - 0xB2];
    unsigned char r1;       /* +0xB6 */
    unsigned char l1;       /* +0xB7 */
    unsigned char l2;       /* +0xB8 */
    unsigned char r2;       /* +0xB9 */
    unsigned char triangle; /* +0xBA */
    char padBB[0xC4 - 0xBB];
    int unkC4;              /* +0xC4: 8012FF6C off threshold */
    int unkC8;              /* +0xC8: 8012FF6C on threshold */
    char padCC[0xD0 - 0xCC];
    int unkD0;
    char padD4[0xF4 - 0xD4];
    int unkF4;
    char padF8[0x10C - 0xF8];
    int unk10C;
    int unk110;
    char pad114[0x154 - 0x114];
    short unk154;
    char pad156[0x16C - 0x156];
    short unk16C;
    char pad16E[0x192 - 0x16E];
    short unk192;
    char pad194[0x199 - 0x194];
    unsigned char unk199;
    unsigned char unk19A;
    char pad19B[0x19D - 0x19B];
    unsigned char opt19D;   /* +0x19D: cheat toggles; 0x19E..0x1A1 are */
    unsigned char opt19E;   /* the player's options (game +0x127B6.., */
    unsigned char opt19F;   /* copied in by link_events.c) */
    unsigned char opt1A0;
    unsigned char opt1A1;
    unsigned char opt1A2;   /* +0x1A2: 33 or 0 (option 4) */
    unsigned char opt1A3;
    char pad1A4[0x1E4 - 0x1A4];
    Vec pos;                /* +0x1E4 */
    Vec rot;                /* +0x1F0 */
    char pad1FC[0x20C - 0x1FC];
    int unk20C;
    char pad210[0x260 - 0x210];
    int unk260;
    char pad264[0x268 - 0x264];
    int unk268;
    char pad26C[0x28C - 0x26C];
    int unk28C;
    char pad290[0x297 - 0x290];
    unsigned char unk297;
    char pad298[0x2A0 - 0x298];
    unsigned char unk2A0;
    unsigned char hint3;    /* +0x2A1 */
    unsigned char hint1;    /* +0x2A2 */
    unsigned char hint2;    /* +0x2A3 */
    unsigned char unk2A4;
    signed char unk2A5;
    char pad2A6[0x2A8 - 0x2A6];
    signed char unk2A8;
    char pad2A9[0x2AC - 0x2A9];
    signed char unk2AC;
    char pad2AD[0x6BC - 0x2AD];
    int unk6BC;
    char pad6C0[0x738 - 0x6C0];
    char *model;            /* +0x738 */
    char pad73C[0x750 - 0x73C];
    int pad;                /* +0x750: player whose pad drives the car */
    char pad754[0x77C - 0x754];
    int unk77C;
    char pad780[0x7A4 - 0x780];
    int unk7A4;             /* +0x7A4: compared with +0xC4/+0xC8 */
    char pad7A8[0x7B4 - 0x7A8];
    int padType;            /* +0x7B4: controller type (5, 7 analog) */
    int unk7B8;             /* +0x7B8: 1 = human driver */
    char pad7BC[0x7CC - 0x7BC];
    int view;               /* +0x7CC */
    int player;             /* +0x7D0 */
    int ticks;              /* +0x7D4: ticks this frame */
    char pad7D8[0x7DC - 0x7D8];
    int unk7DC;             /* +0x7DC: money? (+10000 cheat) */
    char pad7E0[0x82F - 0x7E0];
    unsigned char busy;     /* +0x82F */
    char pad830[0x87C - 0x830];
    int sqHeld;             /* +0x87C: Square tap/hold timers */
    int sqRel;              /* +0x880 */
    int ciHeld;             /* +0x884: Circle tap/hold timers */
    int ciRel;              /* +0x888 */
    char pad88C[0x890 - 0x88C];
    int *target;            /* +0x890 */
    int savedMode;          /* +0x894 */
    char pad898[0x8A0 - 0x898];
    int timeL;              /* +0x8A0: motor timers */
    int timeR;              /* +0x8A4 */
    int align;              /* +0x8A8: PadSetActAlign frames left */
    unsigned char act[2];   /* +0x8AC: motor levels (small, large) */
    unsigned char sqTap;    /* +0x8AE */
    unsigned char sqHold;   /* +0x8AF */
    unsigned char sqFired;  /* +0x8B0 */
    unsigned char ciTap;    /* +0x8B1 */
    unsigned char ciHold;   /* +0x8B2 */
    unsigned char ciFired;  /* +0x8B3 */
    char pad8B4;
    unsigned char rumble;   /* +0x8B5: player's vibration option */
} Car;

/* game + 0x6220: per-view table */
typedef struct {
    int mode[244];          /* +0x000: camera mode of view i */
    int unk3D0[6];          /* +0x3D0 */
    short unk3E8[4];        /* +0x3E8 */
} Views;

typedef struct { int pad[2]; int left; int right; } SoundCtl;
extern SoundCtl D_801C31CC;

/* sound bank, voices busy per player */
typedef struct { char pad[0x278]; int busy[4]; } Bank;

extern unsigned char D_801C3354[6];     /* PadSetActAlign table */

extern int func_8016BDA8(int player);   /* player on this console */
extern int func_8016BE60(int player);   /* player's port */
extern int func_8016BDC0(int player);   /* controller type */
extern unsigned char func_8016B6DC(int button, int player);
extern unsigned char func_8016BE78(short axis, short player);
extern int func_80124DAC(int axis, int player);
extern void func_801623CC(int port, unsigned char *align);  /* PadSetActAlign */
extern void func_8016244C(int port, unsigned char *data, int len); /* PadSetAct */
extern short func_80120FE0(char *game);
extern void func_801253C8(Vec *dst, Vec *src);
extern void func_80125050(Vec *from, Node *to, Vec *out);
extern int func_8015A62C(int a, int b);
extern void func_801254DC(Vec *v, int x, int y, int z);
extern void func_801253F4(char *dst, Vec *src);
extern void func_800FF8B8(char *obj, short node);
extern void func_80147DD0(Car *c);
extern int func_8012BD30(Sub264 *s);
extern void func_8013BDCC(char *bank, int a1, int a2);
extern void func_80148A00(Car *c, int a1);
extern void func_80130430(Car *c);
extern int func_80133040(void);
extern void func_8010B71C(char *views);
extern void func_80130B54(Car *c);
extern void func_8012FF6C(Car *c);
int func_801302A4(Car *c);
extern int func_80176CBC(int a0, int a1, int a2);
extern void func_801033D8(char *views, int view);
extern void func_801035E4(char *views, int view);
extern void func_8010B62C(char *views, int msg, int a2);
extern void func_80147764(Car *c, int a1);
extern void func_801011E4(char *views, int view, int mode, int a3);
extern void func_800FE250(Car *c, int a1);
extern void func_801476C0(Car *c);
extern void func_8012CCFC(char *p, int a1);

/* @8012EEA0: reset the car's vibration: motors off, timers cleared and 5
 * frames of PadSetActAlign (8012EFE4). Only for a player on this console;
 * the partner's players have no controller here (their motors are driven by
 * the partner console). Called when the controller type changes (8012F320)
 * and from the car setup 8012EB68. */
void __attribute__((section(".text_8012EEA0"))) func_8012EEA0(Car *c)
{
    if (func_8016BDA8(c->player)) {
        c->align = 5;
        c->timeL = 0;
        c->timeR = 0;
        c->act[0] = 0;
        c->act[1] = 0;
    }
}

static inline int vibrates(Car *c)
{
    int ok = 0;
    if (func_8016BDA8(c->player)) {
        ok = c->rumble != 0;
    }
    return ok;
}

/* @8012EEE8: request vibration: small motor a, large motor b for t ticks
 * (t 0: set both levels until changed). Only for a local player with its
 * vibration option on (+0x8B5, set per local player by the match setup) and
 * the game's vibration switch (game + 0x7D8); with t > 0 not while the car
 * is busy (+0x82F, 80130984). Remote players never vibrate here. */
void __attribute__((section(".text_8012EEE8"))) func_8012EEE8(Car *c, unsigned char a, unsigned char b, int t)
{
    if (vibrates(c) && *(int *)(D_801C34EC + 0x7D8)) {
        if (t == 0) {
            c->act[0] = a;
            c->act[1] = b;
            c->timeL = 0;
            c->timeR = 0;
        } else if (c->busy == 0) {
            if (a) {
                c->act[0] = a;
                c->timeL = t;
            }
            if (b) {
                c->act[1] = b;
                c->timeR = t;
            }
        }
    }
}

/* @8012EFE4: per-frame motor update (from 8012F320). For a local player:
 * while the align countdown runs, send PadSetActAlign and PadSetAct for the
 * player's pad (port 0 -> 0x00, port 1 -> 0x10); else count the motor timers
 * down and switch a motor off when its time is up. */
void __attribute__((section(".text_8012EFE4"))) func_8012EFE4(Car *c)
{
    int port;
    if (func_8016BDA8(c->player)) {
        if (c->align) {
            c->align--;
            port = (func_8016BE60(c->player) != 0) << 4;
            func_801623CC(port, D_801C3354);
            func_8016244C(port, c->act, 2);
            return;
        }
        if (c->timeL > 0) {
            c->timeL -= c->ticks;
            if (c->timeL <= 0)
                c->act[0] = 0;
        }
        if (c->timeR > 0) {
            c->timeR -= c->ticks;
            if (c->timeR <= 0)
                c->act[1] = 0;
        }
    }
}

/* @8012F0EC: place the car on level node `node` (-1: a random node from
 * 80120FE0; in game mode 3 up to 100 retries for a node below height 8000).
 * The car stands on the node, lowered by +0x16C, facing a random linked
 * node; without a valid node it goes to (1600, 1600, -1120). Then the model
 * transform and the car object are updated and +0x77C = 420. Called by the
 * car setup 8012EB68 (not link-specific; the random choice uses rand(), so a
 * link game passes explicit nodes). */
void __attribute__((section(".text_8012F0EC"))) func_8012F0EC(Car *c, int node)
{
    int i;
    Node *n;
    Vec d;

    if (node != -1) {
        c->node = node;
    } else {
        c->node = func_80120FE0(D_801C34EC);
        if (*(int *)(D_801C34EC + 0x12688) == 3) {
            i = 0;
            while (1) {
                if (!(i < 100))
                    break;
                n = &(*c->nodes)[c->node];
                if (n->y < 8000)
                    break;
                i++;
                c->node = func_80120FE0(D_801C34EC);
            }
        }
    }
    if (c->node >= 0) {
        n = &(*c->nodes)[c->node];
        func_801253C8(&c->pos, (Vec *)n);
        c->pos.z -= c->unk16C;
        func_80125050(&c->pos, &(*c->nodes)[n->link[rand() % n->nlink]], &d);
        if (d.y == 0)
            d.y = 1;
        c->rot.x = 0;
        c->rot.y = 0;
        c->rot.z = func_8015A62C(d.x, d.y);
    } else {
        func_801254DC(&c->pos, 1600, 1600, -1120);
        c->rot.x = 0;
        c->rot.y = 0;
        c->rot.z = 0;
    }
    func_801253F4(c->model + 0x14, &c->rot);
    func_801253C8((Vec *)(c->model + 0x1C), &c->pos);
    func_800FF8B8(c ? c->obj : 0, c->node);
    func_80147DD0(c);
    c->unk77C = 420;
}

static inline void play_sound(int left, int right)
{
    D_801C31CC.left = left;
    D_801C31CC.right = right;
    func_8013BDCC(D_801C34F4, 0, 0);
}

static inline int l2_armed(Car *c)
{
    int ok1 = 0;
    if (c->l2) {
        Sub264 *s = (Sub264 *)((char *)c + 0x264);
        ok1 = s->unk33 != 0;
    }
    return ok1;
}

static inline int is_analog(Car *c)
{
    int ok2 = 0;
    if (c->padType == 5 || c->padType == 7)
        ok2 = 1;
    return ok2;
}

static inline int local_select(Car *c, int b)
{
    int ok3 = 0;
    if (b && c->select)
        ok3 = func_8016BDA8(c->player) != 0;
    return ok3;
}

/* @8012F320: per-frame controls of a car (from the car update 801446DC).
 * Reads the buttons of the car's pad player (+0x750) with 8016B6DC, or the
 * analog sticks (80124DAC) for controller types 5/7: shoulder buttons, fire,
 * Start/Select, Cross, Circle (8012FF6C), Square (801302A4, accelerate),
 * d-pad or stick into the drive fields +0xAA..+0xB1 and the steering +0x260;
 * resets the vibration on a controller change, runs the motors (8012EFE4)
 * and the cheat codes (80130430), and shows the tutorial hints 0x69..0x6B.
 * Every car reads its pad the same way on both consoles: a remote player's
 * buttons come from the partner's pad words in ports 2/3.
 * Only a player on this console may use the Select combinations that act on
 * this console's screens: Select + Left/Right (8010B71C), Select + Down
 * (801033D8, step the view's camera mode) and Select + Up (801035E4). */
void __attribute__((section(".text_8012F320"))) func_8012F320(Car *c)
{
    int pad;
    int t;
    int ok4, ok5, ok6, ok7;
    unsigned char ok8;
    int v1_, v2_, v3_, v4_, v5_, v6_, v7_;
    int a1, a2;
    int ax;
    Sub264 *s;
    Codes *q;

    pad = c->pad;
    t = func_8016BDC0(pad);
    if (t != c->padType) {
        func_8012EEA0(c);
        c->padType = t;
    }
    c->r1 = func_8016B6DC(8, pad);
    c->l1 = func_8016B6DC(4, pad);
    c->l2 = func_8016B6DC(1, pad);
    if (l2_armed(c))
        c->triangle = func_8016B6DC(0x10, pad);
    else
        c->triangle = 0;
    if (l2_armed(c)) {
        s = (Sub264 *)((char *)c + 0x264);
        s->unk42 = 50;
        ok4 = 0;
        if (func_8012BD30(s) == 0)
            ok4 = ((Bank *)D_801C34F4)->busy[pad] == 0;
        if (ok4) {
            play_sound(29, 34);
        }
    }
    c->r2 = func_8016B6DC(2, pad);
    if (c->unk95) {
        if (c->unk81 == 0) {
            ok5 = 0;
            if (func_8016B6DC(4, pad))
                ok5 = func_8016B6DC(8, pad) != 0;
            if (ok5) {
                int w = 0;
                if (c->unk28C >= 167 || c->unk19A)
                    w = 1;
                if (w) {
                    func_80148A00(c, 1);
                    func_8012EEE8(c, 1, 0, 15);
                    c->unk28C -= 166;
                    if (c->unk28C < 0)
                        c->unk28C = 0;
                }
            }
        }
    } else if (c->unk81 == 0) {
        ok6 = 0;
        if (!func_8016B6DC(4, pad) || !func_8016B6DC(8, pad))
            ok6 = 1;
        if (ok6)
            c->unk95 = 1;
    }
    func_8012EFE4(c);
    func_80130430(c);
    c->start = func_8016B6DC(0x800, pad);
    c->select = func_8016B6DC(0x100, pad);
    if (c->select == 0) {
        c->cross = func_8016B6DC(0x40, pad);
        if (is_analog(c)) {
            ax = func_80124DAC(2, pad);
            if (ax > 0) {
                c->left = ax;
                goto clear_r;
            }
            if (ax >= 0)
                goto clear_lr;
            c->right = -ax;
            c->left = 0;
        } else {
            c->right = func_8016B6DC(0x2000, pad);
            c->left = func_8016B6DC(0x8000, pad);
        }
    } else {
        if (func_80133040()) {
            ok7 = 0;
            if (func_8016B6DC(0x8000, pad) || func_8016B6DC(0x2000, pad))
                ok7 = 1;
            if (c->sideArmed) {
                if (local_select(c, ok7)) {
                    func_8010B71C(D_801C34EC + 0x6220);
                    c->sideArmed = 0;
                }
            } else if (!ok7) {
                c->sideArmed = 1;
            }
        }
    clear_lr:
        c->left = 0;
    clear_r:
        c->right = 0;
    }
    if (is_analog(c)) {
        if (c->unkF4 == 0) {
            ax = func_80124DAC(3, pad);
            if (ax > 0) {
                c->up = ax;
                c->down = 0;
            } else if (ax < 0) {
                c->down = -ax;
                c->up = 0;
            } else {
                c->up = 0;
                c->down = 0;
            }
        }
    } else {
        c->down = 0;
        c->up = 0;
        if (c->unkF4 == 0) {
            c->down = func_8016B6DC(0x4000, pad);
            c->up = func_8016B6DC(0x1000, pad);
        }
    }
    if (c->unk8E)
        func_80130B54(c);
    c->circle = func_8016B6DC(0x20, pad);
    func_8012FF6C(c);
    if (c->circle) {
        c->unkAC = 0;
        c->unkAA = 0;
        c->unkAB = 0;
        if (c->cross)
            c->unk84 = 1;
        if (c->unk260)
            c->unk260 = func_80176CBC(c->unk260, 0, 9);
    } else {
        c->unkAC = func_801302A4(c);
        {
        int w = 0;
        if (c->unkAC)
            w = c->unk7D == 0;
        if (w && c->unk199 == 0) {
            c->unk28C -= 20;
            if (c->unk28C < 5) {
                c->unk28C = 0;
                c->unkAC = 0;
            }
        }
        }
        if (c->unkAC)
            func_8012EEE8(c, 1, 0, 7);
        if (is_analog(c)) {
            ax = func_80124DAC(1, pad);
            if (ax > 0) {
                c->unkAA = ax;
                c->unkAB = 0;
            } else if (ax < 0) {
                c->unkAA = 0;
                c->unkAB = -ax;
            } else {
                c->unkAA = 0;
                c->unkAB = 0;
            }
        } else {
            int w;
            c->unkAA = func_8016B6DC(0x80, pad);
            w = 0;
            if (c->unkAA == 0 && c->select == 0)
                w = c->unkF4 != 0;
            if (w)
                c->unkAA = func_8016B6DC(0x1000, pad);
            ok8 = 0;
            if (c->unkF4) {
                if (func_8016B6DC(0x4000, pad) && c->start == 0)
                    ok8 = c->select == 0;
                c->unkAB = ok8;
            }
        }
        if (c->unk6BC) {
            c->unkAA = 0;
            c->unkAC = 0;
        }
        if (c->unkAC)
            c->unkAA = 1;
        c->unk84 = 0;
        if (c->unkAB) {
            v1_ = 0;
            if (c->unkAA)
                v1_ = c->unkAC == 0;
            if (v1_) {
                c->unkAA = 0;
                c->circle = 1;
            }
            if (c->unkAC)
                c->unkAC = 2;
        }
        if (c->unkF4) {
            a2 = c->rot.x;
            if (a2 < 0)
                a2 = -a2;
            a1 = 0;
            if (a2 >= 102) {
                if (c->rot.x >= 683)
                    a1 = c->unkD0;
                else if (c->rot.x < -682)
                    a1 = -c->unkD0;
                else
                    a1 = c->rot.x * c->unkD0 / 682;
            }
            v2_ = 0;
            if (c->unkAA || c->unkAB)
                v2_ = 1;
            if (v2_)
                a1 >>= 1;
            c->unk260 = func_80176CBC(c->unk260, a1, 1);
        } else {
            c->unk260 = 0;
        }
    }
    if (func_80133040() == 0) {
        v3_ = func_8016B6DC(0x4000, pad);
        if (c->downArmed) {
            if (local_select(c, v3_)) {
                func_801033D8(D_801C34EC + 0x6220, c->view);
                ((Views *)(D_801C34EC + 0x6220))->unk3E8[pad] = 0;
                c->downArmed = 0;
            }
        } else if (!v3_) {
            c->downArmed = 1;
        }
    }
    v4_ = func_8016B6DC(0x1000, pad);
    if (c->upArmed) {
        if (local_select(c, v4_)) {
            func_801035E4(D_801C34EC + 0x6220, c->view);
            c->upArmed = 0;
        }
    } else if (!v4_) {
        c->upArmed = 1;
    }
    q = (Codes *)((char *)c + 0x830);
    if (q->tutorial) {
        v5_ = 0;
        if (c->cross && !c->l2 && c->r2 && c->r1 && c->l1 && !c->unkAA)
            v5_ = c->circle == 0;
        if (v5_ && c->unkAB && !c->hint1) {
            c->hint1 = 1;
            c->unk2A4 = 2;
            func_8010B62C(D_801C34EC + 0x6220, 0x69, 0);
        }
        v6_ = 0;
        if (c->triangle && c->l2 && !c->r2 && c->r1 && c->l1 && !c->unkAA && !c->circle && !c->cross)
            v6_ = c->unk2A5 == 1;
        if (v6_ && c->left && !c->hint2) {
            c->hint2 = 1;
            if (c->unk2A8 > 0)
                c->unk2A8 += 10;
            func_8010B62C(D_801C34EC + 0x6220, 0x6A, 0);
        }
        v7_ = 0;
        if (c->triangle && c->l2 && !c->r2 && c->r1 && c->l1 && !c->unkAA && !c->circle && !c->cross)
            v7_ = c->unk2A5 == 5;
        if (v7_ && c->right && !c->hint3) {
            c->hint3 = 1;
            if (c->unk2AC > 0)
                c->unk2AC += 10;
            func_8010B62C(D_801C34EC + 0x6220, 0x6B, 0);
        }
    }
}

void func_80130198(Car *c, int *held, int *rel, unsigned char *tap, unsigned char *hold);
void func_80130218(Car *c, int *held, int *rel, unsigned char *tap, unsigned char *hold);

/* @8012FF6C: Circle button for 8012F320: the button (0x20), or on an analog
 * pad axis 1 pulled past -120, run through the tap/hold timers at +0x884.
 * While held, +0x7F latches once +0x7A4 exceeds +0xC8 and is released when
 * +0x7A4 drops below +0xC4 (or, on an analog pad, when +0x20C < 0); +0xA6
 * mirrors the button for 801302A4 unless +0x264 +0x28 < 5 with +0x199
 * clear. Read through the pad player, so remote cars work the same way.
 * The stick value is kept in a local and the flag set after the call: GCC
 * then moves `b = 1` below the argument load, and the post-reload cse turns
 * it into a copy of a0 (retail's `li a0,1` in the delay slot of the analog
 * test followed by `move s1,a0`). */
void __attribute__((section(".text_8012FF6C"))) func_8012FF6C(Car *c)
{
    signed char b;
    int v1_, v2_, v4_;
    Sub264 *s;

    if (is_analog(c)) {
        unsigned char x = func_8016BE78(1, c->pad);
        b = 1;
        if (127 - x >= -120) {
            b = 0;
            c->stickA6 = 0;
        }
    } else {
        b = func_8016B6DC(0x20, c->pad);
        c->stickA6 = 0;
    }
    if (b) {
        func_80130198(c, &c->ciHeld, &c->ciRel, &c->ciTap, &c->ciHold);
    } else {
        if (c->ciFired) {
            c->ciHold = 0;
            c->ciFired = 0;
            c->stickA6 = 0;
        }
        func_80130218(c, &c->ciHeld, &c->ciRel, &c->ciTap, &c->ciHold);
    }
    if (c->ciHold) {
        v1_ = 0;
        if (c->circleOn == 0 && b)
            v1_ = c->unk7A4 > c->unkC8;
        if (v1_)
            c->circleOn = 1;
        v2_ = 0;
        s = (Sub264 *)((char *)c + 0x264);
        if (s->unk28 < 5)
            v2_ = c->unk199 == 0;
        if (v2_) {
            c->stickA6 = 0;
            if (c->unk20C < 0) {
                c->ciTap = 0;
                c->ciHold = 0;
            }
        } else if (b) {
            c->stickA6 = 1;
        }
        if (c->circleOn) {
            c->ciFired = 1;
            if (is_analog(c) && c->unk20C < 0)
                c->circleOn = 0;
        }
    } else {
        c->circleOn = 0;
    }
    v4_ = 0;
    if (c->circleOn)
        v4_ = c->unk7A4 < c->unkC4;
    if (v4_)
        c->circleOn = 0;
}

/* Button timers used by 8012FF6C (Circle) and 801302A4 (Square): *held and
 * *rel count the ticks the button has been held / released, *tap and *hold
 * are the resulting flags. */

/* @80130198: button down: clear *rel, add the frame's ticks to *held; before
 * 20 ticks set *tap unless already tapped or holding; from 20 ticks clear
 * *tap (a hold) unless *hold is set. */
void __attribute__((section(".text_80130198"))) func_80130198(Car *c, int *held, int *rel, unsigned char *tap, unsigned char *hold)
{
    int ok;
    *rel = 0;
    *held += c->ticks;
    if (*held < 20) {
        ok = 0;
        if (*tap == 0)
            ok = *hold == 0;
        if (ok)
            *tap = 1;
        return;
    }
    if (*hold == 0) {
        *tap = 0;
        *hold = 0;
    }
}

/* @80130218: button up: clear *held, add the ticks to *rel; after 20 ticks
 * clear both flags, before that turn a tap into *hold. */
void __attribute__((section(".text_80130218"))) func_80130218(Car *c, int *held, int *rel, unsigned char *tap, unsigned char *hold)
{
    int ok;
    *held = 0;
    *rel += c->ticks;
    if (*rel > 20) {
        ok = 0;
        if (*tap || *hold)
            ok = 1;
        if (ok) {
            *tap = 0;
            *hold = 0;
        }
        return;
    }
    if (*tap) {
        *tap = 0;
        *hold = 1;
    }
}

static inline void play_sound1(int left)
{
    D_801C31CC.left = left;
    func_8013BDCC(D_801C34F4, 0, 0);
}

/* @801302A4: Square button (accelerate) for 8012F320: the button, or on an
 * analog pad axis 1 pushed past 101 (or +0xA6 set by 8012FF6C), run through
 * the tap/hold timers at +0x87C. Returns the button while held; the first
 * frame of a hold may play sound 7 (when +0x264 +0x28 < 5 and +0x199 clear).
 * Read through the pad player like every button, so remote cars work the
 * same way. */
int __attribute__((section(".text_801302A4"))) func_801302A4(Car *c)
{
    signed char b;
    int r;
    int v;
    Sub264 *s;

    if (is_analog(c)) {
        b = 127 - func_8016BE78(1, c->pad) >= 101;
        if (c->stickA6) {
            b = 1;
            c->sqHold = b;
        }
    } else {
        b = func_8016B6DC(0x80, c->pad);
    }
    if (b) {
        func_80130198(c, &c->sqHeld, &c->sqRel, &c->sqTap, &c->sqHold);
    } else {
        if (c->sqFired) {
            c->sqHold = 0;
            c->sqFired = 0;
        }
        func_80130218(c, &c->sqHeld, &c->sqRel, &c->sqTap, &c->sqHold);
    }
    if (c->sqHold) {
        r = b;
        if (r) {
            c->sqFired = 1;
            v = 0;
            s = (Sub264 *)((char *)c + 0x264);
            if (s->unk28 < 5)
                v = c->unk199 == 0;
            if (v) {
                play_sound1(7);
                c->sqTap = 0;
                c->sqHold = 0;
            }
        }
    } else {
        r = 0;
    }
    return r;
}

/* game data + 0x127B6: per-player options, indexed by adding the player */
typedef struct {
    char pad[0x127B6];
    unsigned char opt0[4];  /* +0x127B6: !car +0x19E */
    unsigned char opt1[4];  /* +0x127BA: car +0x19F */
    unsigned char opt2[4];  /* +0x127BE: car +0x1A0 */
    unsigned char opt3[4];  /* +0x127C2: car +0x1A1 */
    unsigned char opt4[4];  /* +0x127C6: car +0x1A2 */
} GameOpt;

extern void func_801110B0(Codes *q);    /* cheat-code recognisers */
extern void func_80111528(Codes *q);
extern void func_80111AC4(Codes *q);
extern void func_80111EC4(Codes *q);
extern void func_801122A0(Codes *q);    /* consume code0..code3 */
extern void func_801122D0(Codes *q);
extern void func_80112308(Codes *q);
extern void func_80112338(Codes *q);
extern void func_8011FE34(char *game, int player, int on);
extern void func_8012BCB0(Sub264 *w, int armed);    /* fill all weapons */
extern void func_8012BFD0(Sub264 *w);
extern void func_80130C14(Car *c);
extern void func_80147934(Car *c);

#define CODES(c) ((Codes *)((char *)(c) + 0x830))
#define WEAPONS(c) ((Sub264 *)((char *)(c) + 0x264))
#define CARS(g) ((Car *)((g) + 0xB788))

/* Code groups 0, 2 and 3 are inline helpers taking the code as a
 * parameter: the argument is loaded into a temporary and copied into the
 * parameter, which is retail's `move` in the delay slot of the -1 test.
 * Assigning the code variable in the arm before the last test (a dead
 * store in groups 0, 2 and 3; the message number in group 1) makes cse
 * compare the last case against the copy and the others against the
 * load, as retail does. */
static inline void codes0(Car *c, Codes *q, int code)
{
    if (code != -1) {
        if (code == 0) {
            Sub264 *w = WEAPONS(c);
            if (w->unk28 >= 334) {
                c->unk8B = 1;
                c->unk192 = 240;
                w->unk42 = 51;
                c->l2 = 1;
                func_801122A0(q);
            }
        } else if (code == 1) {
            Sub264 *w = WEAPONS(c);
            w->unk42 = 52;
            c->l2 = 1;
            func_801122A0(q);
        } else if (code == 2) {
            Sub264 *w = WEAPONS(c);
            w->unk42 = 53;
            c->l2 = 1;
            func_801122A0(q);
        } else if (code == 3) {
            Sub264 *w = WEAPONS(c);
            w->unk42 = 53;
            c->l2 = 1;
            c->triangle = 1;
            func_801122A0(q);
        } else if (code == 4) {
            Sub264 *w = WEAPONS(c);
            w->unk42 = 54;
            c->l2 = 1;
            func_801122A0(q);
        } else if (code == 5) {
            if (c->unk91 == 0) {
                c->unk97 = 1;
                c->unk99 = 1;
            }
            func_801122A0(q);
            code = 0;
        } else if (code == 6) {
            if (c->unk91 == 0) {
                c->unk97 = 1;
                c->unk99 = 0;
            }
            func_801122A0(q);
        }
    }
}

static inline void codes2(Car *c, int code)
{
    if (code != -1) {
        if (code == 0) {
            c->unk10C = c->unk110;
            code = 0;
        } else if (code == 1) {
            c->unk7DC += 10000;
            func_8010B62C(D_801C34EC + 0x6220, 59, 1);
        }
        func_80112308(CODES(c));
        func_80130C14(c);
    }
}

static inline void codes3(Car *c, Codes *q, int code)
{
    int p;
    char *g;
    unsigned char t;

    if (code != -1) {
        if (code == 1) {
            c->opt1A0 ^= 1;
            func_80112338(q);
            g = D_801C34EC;
            p = c->player;
            t = c->opt1A0;
            ((GameOpt *)g)->opt2[p] = t;
            CARS(g)[p].opt1A0 = t;
            func_80130C14(c);
            code = 0;
        } else if (code == 0) {
            if (c->opt1A2) {
                c->opt1A2 = 0;
                c->opt1A3 = 0;
            } else {
                c->opt1A2 = 33;
                c->opt1A3 = 1;
            }
            func_80147934(c);
            func_80112338(CODES(c));
            ((GameOpt *)D_801C34EC)->opt4[c->player] = c->opt1A2;
            func_80130C14(c);
        }
    }
}

/* @80130430: cheat codes, from 8012F320 each frame. Runs the four code
 * recognisers on the car's code state (+0x830), then acts on the four
 * result words (-1 = none), consuming each through 801122A0..80112338:
 * - code0: power-ups (0..4 set +0x264 +0x42 and L2, 0 only when
 *   +0x264 +0x28 >= 334; 5/6 set +0x97/+0x99 unless +0x91);
 * - code1: toggles +0x19D (8011FE34) and the options +0x19E, +0x19F (all
 *   weapons 8012BCB0 / 8012BFD0) and +0x1A1, each with a message (55..63)
 *   in game +0x6220; the options are saved per player in game +0x127B6..
 *   and in the player's car record, then 80130C14;
 * - code2: +0x10C = +0x110, or +10000 to +0x7DC with message 59;
 * - code3: toggles option +0x1A0, or option 4 (+0x1A2 = 33, 80147934).
 * Link relevance: none directly; the options it saves are the ones
 * link_events.c copies back into a car (game +0x127B6..).
 * The pointer q1 is reused for the message table in group 1's last case so
 * cse forgets car + 0x830 there (retail recomputes it after the message);
 * group 2's code is read as a volatile int so combine keeps retail's
 * separate `addiu v0,s1,0x830`. */
void __attribute__((section(".text_80130430"))) func_80130430(Car *c)
{
    Codes *q;
    Codes *q1, *q2;
    int t1, code, m;    /* t1 = code1 as loaded, code = its copy */

    q = CODES(c);
    func_801110B0(q);
    func_80111528(q);
    func_80111AC4(q);
    func_80111EC4(q);
    codes0(c, q, CODES(c)->code0);
    q1 = CODES(c);
    t1 = q1->code1;
    code = t1;
    if (code != -1) {
        if (code == 3) {
            c->opt19D ^= 1;
            func_801122D0(q1);
            func_8011FE34(D_801C34EC, c->player, c->opt19D);
            m = c->opt19D ? 55 : 60;
            func_8010B62C(D_801C34EC + 0x6220, m, 1);
        } else if (code == 0) {
            c->opt19E ^= 1;
            func_801122D0(q1);
            {
                int p;
                char *g;
                unsigned char t;

                t = c->opt19E == 0;
                g = D_801C34EC;
                p = c->player;
                ((GameOpt *)g)->opt0[p] = t;
                CARS(g)[p].opt19E = t ^ 1;
            }
            m = c->opt19E ? 61 : 56;
            func_8010B62C(D_801C34EC + 0x6220, m, 1);
            func_80130C14(c);
        } else if (code == 1) {
            c->opt19F ^= 1;
            if (c->opt19F) {
                func_8012BCB0(WEAPONS(c), -1);
                code = 57;
            } else {
                func_8012BFD0(WEAPONS(c));
                code = 62;
            }
            func_8010B62C(D_801C34EC + 0x6220, code, 1);
            q1 = CODES(c);
            func_801122D0(q1);
            {
                int p;
                char *g;
                unsigned char t;

                g = D_801C34EC;
                p = c->player;
                t = c->opt19F;
                ((GameOpt *)g)->opt1[p] = t;
                CARS(g)[p].opt19F = t;
            }
            func_80130C14(c);
        } else if (code == 2) {
            c->opt1A1 ^= 1;
            m = c->opt1A1 ? 58 : 63;
            q1 = (Codes *)(D_801C34EC + 0x6220);
            func_8010B62C((char *)q1, m, 1);
            q1 = CODES(c);
            func_801122D0(q1);
            {
                int p;
                char *g;
                unsigned char t;

                g = D_801C34EC;
                p = c->player;
                t = c->opt1A1;
                ((GameOpt *)g)->opt3[p] = t;
                CARS(g)[p].opt1A1 = t;
            }
            func_80130C14(c);
        }
    }
    q2 = CODES(c);
    codes2(c, *(volatile int *)&q2->code2);
    q1 = CODES(c);
    codes3(c, q1, q1->code3);
}

static inline int is_local_human(Car *c)
{
    int ok = 0;
    if (c->unk7B8 == 1) {
        ok = func_8016BDA8(c->player) != 0;
    }
    return ok;
}

/* @80130984: the car becomes busy with object t (+0x890): vibration off,
 * 80147764(c, 1800), and for a human player on this console the view (index
 * = the player's port) saves its camera mode in +0x894 and switches to mode
 * 5 on t's word 5. A remote player has no view on this console (80121008
 * gives it view -1), so nothing is switched for it here; its own console
 * does the same for its local view. Callers 8014A5F8, 8014E81C. */
void __attribute__((section(".text_80130984"))) func_80130984(Car *c, int *t)
{
    c->busy = 1;
    func_8012EEE8(c, 0, 0, 0);
    func_80147764(c, 1800);
    if (is_local_human(c)) {
        c->savedMode = ((Views *)(D_801C34EC + 0x6220))->mode[func_8016BE60(c->pad)];
        func_801011E4(D_801C34EC + 0x6220, func_8016BE60(c->pad), 5, t[5]);
    }
    c->target = t;
}

/* @80130A58: end the busy state of 80130984: reset the car's state, re-read
 * L2, and for a human player on this console restore its view's camera mode
 * (+0x894; word +0x3D0 of the view = 15); then clear the weapon state and
 * +0x890. Same local-only view handling as 80130984. */
void __attribute__((section(".text_80130A58"))) func_80130A58(Car *c)
{
    char *p;
    if (c->busy) {
        c->busy = 0;
        func_800FE250(c, 0);
        c->unk154 = 0;
        func_801476C0(c);
        c->unk297 = 0;
        c->unk268 = 0;
        c->l2 = func_8016B6DC(1, c->pad);
        if (is_local_human(c)) {
            {
                int k = 15;
                ((Views *)(D_801C34EC + 0x6220))->unk3D0[func_8016BE60(c->pad)] = k;
            }
            func_801011E4(D_801C34EC + 0x6220, func_8016BE60(c->pad), c->savedMode, 0);
        }
        p = (char *)c + 0x264;
        p[0x3A] = 0;
        func_8012CCFC(p, 0);
        c->unk2A0 = 0;
        c->target = 0;
    }
}

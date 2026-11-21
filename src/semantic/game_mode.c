/* Rogue Trip game-mode module (80131240..80133EBF: round flow, demo, reset
 * countdown, link exchange), reconstructed functions that drive link-cable
 * play. See docs/LINK_CABLE.md. */

typedef struct {
    unsigned int sum : 8;       /* byte 0: checksum, set by the send */
    unsigned int op : 8;        /* byte 1: message */
    unsigned int arg : 8;
    unsigned int arg2 : 8;
} LinkMsg;

typedef union {
    LinkMsg m;
    unsigned char b[4];
} LinkPacket;

/* One of the two display buffers of a view (0x80 bytes). */
typedef struct {
    unsigned long *volatile ot; /* ordering table, 0x600 entries */
    int unk4;
    volatile int unk8;
    int unkC;
    char draw[0x5C];            /* +0x10 DRAWENV */
    char disp[0x14];            /* +0x6C DISPENV */
} DispBuf;

extern int func_8013A06C(void);                  /* link game? */
extern int func_8012DB48(int car);               /* owns the shared item */
extern void func_8012DA78(int car);              /* claim it */
extern int func_8016BDA8(int car);

extern DispBuf D_801CBB78[2];                    /* view 0 */
extern DispBuf D_801CBC78[2];                    /* view 1 (split screen) */
extern char D_801CBD78[];
extern char *D_801C34EC;                         /* game data */
extern int D_801C32F8;                           /* link timeout enabled */
extern void *func_80154ABC(void *dst, int c, int n);   /* memset */
extern int func_8012D1AC(void *buf, int len);    /* send packet */
extern int func_8012D290(void *buf, int len);    /* receive packet */
extern void func_8012D3D0(void);                 /* drain and resynchronise */
extern int func_8012D45C(void);                  /* receive and apply packets */
extern void func_8012D78C(void);                 /* send this console's packets */
extern void func_8012D80C(void);                 /* build them */
extern void func_8012E7D4(void);
extern void func_80124B80(char *game, int type);
extern void func_8016BE08(int on);
extern int func_801788E4(void);                  /* tick counter */
extern void func_80132D60(void);
extern int func_80132DA0(void);                  /* round over */
extern void func_80132060(void);
extern void func_801327B8(int *count, volatile int *start);   /* reset countdown */
extern void func_80132EA4(int a0);
extern void func_80178A80(int a0);
extern void func_8011EE48(char *game);
extern void func_80120F68(char *game);
extern void func_8016D098(void);
extern void func_8015C4F4(unsigned long *ot, int n);  /* ClearOTagR */
extern void func_8016BB9C(void);
extern void func_8013ACCC(void);
extern void func_8013AA08(int view, DispBuf *db);
extern void func_80167088(int font, int r, int g, int b);
extern void func_80167620(int font, int x, int y, const char *text, DispBuf *db);
extern int func_8015F94C(int sp);                /* switch stack */
extern void func_80164EA0(void);
extern short func_80178A1C(void);
extern void func_8011DDD0(int a0);
extern void func_8011305C(void);
extern void func_80140564(void);
extern void func_80176E9C(int a0);
extern void func_8013ED18(void);
extern void func_801277B4(void);
extern void func_801F8374(int a0);
extern void func_801F550C(int a0);
extern void func_80179064(int view);
extern void func_8010B5BC(char *a0, int view);
extern void func_80164EC0(DispBuf *db, int view);
extern void func_801667BC(int view);
extern void func_80127F18(int view);
extern void func_8011E990(DispBuf *db);
extern void func_80140720(DispBuf *db);
extern void func_80113D0C(DispBuf *db);
extern void func_80129E1C(char *a0, int view, DispBuf *db);
extern void func_8013E2D0(DispBuf *db);
extern void func_8016D968(void);
extern void func_8016DA7C(DispBuf *db, int view);
extern void func_8015C008(int mode);             /* DrawSync */
extern void func_801701E4(int a0);
extern int func_8015EBDC(int mode);              /* VSync */
extern int func_80178AC8(int ticks);
extern void func_80178910(void);
extern void func_8011AE24(void);
extern void func_80163B54(void);
extern void func_8015C66C(void *env);            /* PutDrawEnv */
extern void func_8015C838(void *env);            /* PutDispEnv */
extern void func_8015C5FC(unsigned long *ot);    /* DrawOTag */

/* This module's small data used here: .sdata from 801C3370 (the "DEMO"
 * literal follows at 801C3380) and the .sbss run 801C380C..381F. */
int D_801C3370 = 0;                              /* queued game events */
int D_801C3374 = 0;                              /* round result */
int D_801C3378 = 0;                              /* split screen views */
int D_801C337C = 20;                             /* ticks per frame */
static DispBuf *D_801C380C;                      /* view 0 buffer in use */
static DispBuf *D_801C3810;                      /* view 1 buffer in use */
static int D_801C3814;                           /* saved stack */
static int D_801C3818;
static int D_801C381C;

extern void func_8016D08C(void);
extern void func_8017942C(void);

/* @80132060: race loop teardown (called on every exit of 80132090): stop
 * 8016D08C and 8017942C, then 8016BE08(0) puts the controllers back in
 * direct port mode (in the race, players map to ports, which is how link
 * players on the other console get their own slots). */
void __attribute__((section(".text_80132060"))) func_80132060(void)
{
    func_8016D08C();
    func_8017942C();
    func_8016BE08(0);
}

/* @80132090: the race loop. In a link game the consoles first swap a
 * "start" message (4), then every frame build the packets and exchange
 * them in role order (master sends first); the link is drained on the third
 * frame. Frames are paced to 20 ticks (15 in mode 3). */
int __attribute__((section(".text_80132090"))) func_80132090(void)
{
    char state[16];
    LinkPacket msg;
    int count;
    int frame, link, blink, t0, mode;
    DispBuf *db, *p;
    char *g, *e;

    func_80154ABC(state, 0, 16);
    frame = 1;
    link = func_8013A06C();
    blink = 16;
    count = 0;
    D_801C3818 = 0;
    D_801C381C = 20;
    func_8016BE08(1);
    t0 = func_801788E4();
    D_801C380C = D_801CBB78;
    if (D_801C3378 != 0) {
        D_801C3810 = D_801CBC78;
    }
    func_80132D60();
    func_80178A80(1);
    func_8011EE48(D_801C34EC);
    func_8016D098();
    if (link != 0) {
        D_801C32F8 = 0;
        if (link == 1) {
            msg.m.op = 4;
            func_8012D1AC(&msg, 4);
            func_8012D290(&msg, 4);
        } else {
            func_8012D290(&msg, 4);
            msg.b[1] = 4;
            func_8012D1AC(&msg, 4);
        }
        D_801C32F8 = 1;
    }
    if (*(int *) (D_801C34EC + 0x7D8) == 3) {
        D_801C337C = 15;
    } else {
        D_801C337C = 20;
    }
    while (func_80132DA0() == 0) {
        p = D_801CBB78;
        if (D_801C380C == p) {
            p++;
        }
        db = p;
        db->unk8 = db->unk4;
        D_801C380C = db;
        func_8015C4F4(db->ot, 0x600);
        func_8016BB9C();
        if (link != 0) {
            func_8012D80C();
            func_8013ACCC();
            func_8013AA08(0, db);
        }
        if (D_801C3818 != 0) {
            if (D_801C3378 != 0 && *(volatile int *) ((e = D_801C34EC + 0x6220) + 0x3A8) == 1) {
                func_80167088(1, 200, 200, 50);
                func_80167620(1, 80, 100, D_801CBD78, D_801C380C);
            } else {
                func_80167088(0, 200, 200, 50);
                func_80167620(0, 160, 100, D_801CBD78, D_801C380C);
            }
            D_801C3818 = 0;
        }
        func_8011EE48(D_801C34EC);
        D_801C3814 = func_8015F94C(0x1F8003FC);
        func_80164EA0();
        func_8011DDD0(func_80178A1C());
        func_8011305C();
        func_80140564();
        func_80176E9C(func_80178A1C());
        func_8013ED18();
        func_801277B4();
        mode = *(int *) (D_801C34EC + 0x12688);
        switch (mode) {
        case 7:
            func_801F8374(func_80178A1C());
            break;
        case 4:
            func_801F550C(func_80178A1C());
            break;
        }
        func_80179064(0);
        func_8010B5BC(D_801C34EC + 0x6220, 0);
        func_80164EC0(db, 0);
        func_8015F94C(D_801C3814);
        func_801667BC(0);
        func_80127F18(0);
        func_8011E990(db);
        func_80140720(db);
        func_80113D0C(db);
        g = D_801C34EC;
        func_80129E1C(g + 0x12380, 0, db);
        func_80129E1C(g + 0x1239C, 0, db);
        func_8013E2D0(db);
        func_8016D968();
        func_8016DA7C(db, 0);
        func_8012E7D4();
        if (D_801C3378 != 0) {
            {
                DispBuf *q = D_801CBC78;

                if (D_801C3810 == q) {
                    q++;
                }
                D_801C3810 = q;
                func_8015C4F4(q->ot, 0x600);
            }
            D_801C3814 = func_8015F94C(0x1F8003FC);
            func_80179064(1);
            D_801C3810->unk8 = db->unk8;
            if (func_8013A06C() != 0) {
                func_8013AA08(1, D_801C3810);
            }
            func_8010B5BC(D_801C34EC + 0x6220, 1);
            func_80164EC0(D_801C3810, 1);
            func_8015F94C(D_801C3814);
            func_801667BC(1);
            func_80127F18(1);
            func_8011E990(D_801C3810);
            func_80140720(D_801C3810);
            func_80113D0C(D_801C3810);
            {
                char *g2 = D_801C34EC;
                DispBuf *d2 = D_801C3810;

                func_80129E1C(g2 + 0x12380, 1, d2);
                func_80129E1C(g2 + 0x1239C, 1, d2);
            }
            func_8013E2D0(D_801C3810);
            func_8016DA7C(D_801C3810, 1);
        }
        if (*(int *) (D_801C34EC + 0x7D8) == 0) {
            if (--blink <= 0) {
                blink = 16;
            }
            if (blink < 8) {
                func_80167088(0, 255, 50, 50);
            } else {
                func_80167088(0, 100, 50, 50);
            }
            func_80167620(0, 160, 40, "DEMO", db);
        }
        if (link != 0) {
            if (frame < 4) {
                frame++;
            } else {
                frame = -4000;
            }
            if (link == 1) {
                func_8012D78C();
                func_8012D45C();
            } else {
                func_8012D45C();
                func_8012D78C();
            }
        }
        func_8015C008(0);
        func_801701E4(func_80178A1C());
        func_801788E4();
        if (*(int *) (D_801C34EC + 0x7D8) != 0) {
            func_801327B8(&count, (volatile int *) state);
        }
        func_8015EBDC(0);
        if (link != 0 && frame == 3) {
            func_8012D3D0();
        }
        goto pace;
        do {
            func_8015EBDC(0);
        pace:;
        } while (D_801C337C < func_80178AC8(func_801788E4() - t0));
        func_80132EA4(func_80178A1C());
        func_80178910();
        t0 = func_801788E4();
        func_8011AE24();
        func_80163B54();
        func_8015C66C(db->draw);
        func_8015C838(db->disp);
        func_8015C5FC(db->ot + 0x5FF);
        switch (D_801C3378) {
        case 0:
            break;
        case 1:
            func_8015C66C(D_801C3810->draw);
            func_8015C5FC(D_801C3810->ot + 0x5FF);
            break;
        case 2:
            func_8015C66C(D_801C3810->draw);
            func_8015C5FC(D_801C3810->ot + 0x5FF);
            break;
        }
    }
    func_80120F68(D_801C34EC);
    func_80132060();
    return D_801C3374;
}

/* The sound object's virtual table (GCC 2.x layout: this-adjust, then the
 * function). */
typedef struct {
    unsigned short delta;
    short pad;
    void (*fn)(void *self, int a1);
} VEntry;

typedef struct {
    char pad0[8];
    VEntry *vt;
} VObj;

typedef struct {
    int v[4];
} Quad;

extern Quad D_800F3878;                          /* pause allowed per player */
extern char D_800F3888[];                        /* "Reset in %ld second(s)" */
extern VObj *D_801C34F8;                         /* music player */
extern volatile int D_801C34F4;                  /* sound bank */
extern int D_801C36C0, D_801C36D8, D_801C36DC;   /* music volume and its limits */
extern int func_8016C10C(int port);              /* controller missing */
extern unsigned int func_80132EC8(void);
extern unsigned char func_8016B6DC(int button, int port);
extern int func_80154AFC(char *buf, const char *fmt, ...);   /* sprintf */
extern void func_80132CF4(int event, int arg);   /* queue a game event */
extern int func_80132C78(int player, int want);
extern void func_8013BED8(int bank, int a1);
extern void func_8015FB80(int a0, int left, int right);
extern int func_8013A07C(int player, int allowed);   /* pause menu */
extern void func_8012DB5C(void);
extern unsigned char func_8013B594(void);
extern int func_8013C98C(int bank, int level);

/* Set the music volume, clamped to its limits. */
static inline void set_music_volume(int v)
{
    D_801C36C0 = v < D_801C36D8 ? v : D_801C36D8;
    D_801C36C0 = v < D_801C36DC ? D_801C36DC : v;
    func_8015FB80(0, (short) D_801C36C0, (short) D_801C36C0);
}

/* Player records in the game data (0x8B8 bytes each). */
typedef struct {
    char pad0[0x8C];
    unsigned char out;          /* +0x8C: not playing */
    char pad8D[0x8B8 - 0x8D];
} Player;

/* @801327B8: per frame in the race, the reset countdown and pause requests.
 * Holding select for 12 seconds resets the race ("Reset in %ld second(s)");
 * start, or a pulled controller, asks for the pause menu, which the first
 * asking player then gets (music ducked meanwhile). In a link game the
 * shared item is released afterwards (8012DB5C). */
void __attribute__((section(".text_801327B8"))) func_801327B8(int *result, volatile int *start)
{
    int held[4];
    Quad ok;
    int res, i, want, off;
    unsigned int dt;
    volatile VEntry *e;
    int v;
    unsigned char vb;

    func_80154ABC(held, 0, 16);
    res = -1;
    ok = D_800F3878;
    i = 0;
    while (1) {
        if (i >= *(int *) (D_801C34EC + 0x12728)) {
            break;
        }
        off = i * 0x8B8 + 0xB788;
        if (((Player *) (D_801C34EC + off))->out != 0) {
            i++;
            continue;
        }
        if (func_8016C10C(i) == 0) {
            want = 0;
            if (func_8013A06C() == 2) {
                want = func_80132EC8() < 20;
            }
            if (want == 0) {
                ok.v[i] = 1;
                held[i] = 1;
            }
            i++;
            continue;
        }
        if (D_801C381C <= 0) {
            held[i] = func_8016B6DC(0x800, i);
        } else {
            D_801C381C--;
        }
        if (func_8016B6DC(0x100, i) != 0 && held[i] != 0) {
            held[i] = 0;
            if (start[i] == 0) {
                start[i] = func_801788E4();
            } else if ((unsigned int) (func_801788E4() - start[i]) > 12000000) {
                func_80132060();
                func_80132CF4(3, 0);
            } else {
                dt = func_801788E4() - start[i];
                func_80154AFC(D_801CBD78, D_800F3888, (12000000 - dt) / 4000000 + 1);
                D_801C3818 = 1;
            }
        } else {
            start[i] = 0;
        }
        i++;
    }
    i = 0;
    while (1) {
        if (i >= *(int *) (D_801C34EC + 0x12728)) {
            break;
        }
        if (res >= 0) {
            break;
        }
        want = 0;
        if (func_80132C78(i, held[i]) != 0) {
            want = *result == 0;
        }
        if (want != 0) {
            func_8013BED8(D_801C34F4, 0);
            e = &D_801C34F8->vt[3];
            e->fn((char *) D_801C34F8 + (short) e->delta, 0);
            set_music_volume(0);
            res = func_8013A07C(i, ok.v[i]);
            D_801C381C = 10;
            if (func_8013A06C() != 0) {
                func_8012DB5C();
            }
        }
        i++;
    }
    if (res == 0) {
        e = &D_801C34F8->vt[4];
        e->fn((char *) D_801C34F8 + (short) e->delta, 0);
        vb = func_8013B594();
        v = *(volatile int *) (D_801C34EC + 0x12688);
        set_music_volume(vb * func_8013C98C(D_801C34F4, v) / 127);
    }
    if (res == 1) {
        func_80132060();
        func_80132CF4(3, 0);
    } else if (res == 2) {
        *result = 1;
    }
}

/* @80132C78: shared-item check for CAR. In a link game returns 1 if this
 * console already owns the item (8012DB48); otherwise, if the car plays on
 * this console and WANT is set, it claims it (8012DA78) and returns 0.
 * Without a link it returns WANT != 0. The single `return 0` keeps retail's
 * branch (see docs/COMPILER.md). */
int __attribute__((section(".text_80132C78"))) func_80132C78(int car, int want)
{
    if (func_8013A06C() != 0) {
        if (func_8012DB48(car) != 0) {
            return 1;
        }
        if (func_8016BDA8(car) != 0 && want != 0) {
            func_8012DA78(car);
        }
    } else if (want != 0) {
        return 1;
    }
    return 0;
}

/* One queued game event: type (9 = link connection lost, 3 = race reset,
 * ...) and its argument, handled later by the race loop. */
typedef struct {
    int arg;
    int type;
} GameEvent;

extern GameEvent D_801CBB58[4];

/* @80132CF4: raise game event TYPE with ARG: tell the game data (80124B80),
 * then queue it if fewer than four are pending. */
void __attribute__((section(".text_80132CF4"))) func_80132CF4(int type, int arg)
{
    int n;

    func_80124B80(D_801C34EC, type);
    n = D_801C3370;
    if (n < 4) {
        D_801CBB58[n].type = type;
        D_801CBB58[n].arg = arg;
        D_801C3370 = n + 1;
    }
}

/* Rogue Trip car update and damage (801446DC, 8014662C), two callers of the
 * link-state getter func_8013A06C (0 no link game, 1 master, 2 slave).
 * See docs/LINK_CABLE.md.
 *
 * Built like the engine link modules: PsyQ 4.4, "-O2 -G8 -fvolatile", ASPSX
 * 2.56. The unit's .rodata is the jump table of func_8014662C at 800F4360.
 *
 * p is a car record (0x8B8 bytes, records at game + 0xB788). Fields are read
 * through byte-offset macros; -fvolatile makes every such access volatile,
 * which is what retail's load/store order needs. An array member reached
 * through a struct (ARRAY_REF) is NOT volatile under -fvolatile and puts the
 * base register first in the address add; the few places that need that use
 * a struct type. */

#define U8(p, o) (*(unsigned char *) ((char *) (p) + (o)))
#define S16(p, o) (*(short *) ((char *) (p) + (o)))
#define U16(p, o) (*(unsigned short *) ((char *) (p) + (o)))
#define S32(p, o) (*(int *) ((char *) (p) + (o)))

extern int func_8013A06C(void);                 /* link state: 0 none, 1 master, 2 slave */
extern char *D_801C34EC;                        /* game data */
extern int rand(void);

/* game + 0x6220: per-view table. */
typedef struct {
    int mode[232];      /* +0x000, indexed by view */
    int arr[11];        /* +0x3A0 */
    int n;              /* +0x3CC: number of views */
} ViewTab;

/* game + 0xB744: shared camera-shake record used by the damage code. */
typedef struct {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    char *unk10;
    int unk14;
    int unk18;
    int unk1C;
    unsigned char unk20;
    unsigned char unk21;
} Cam;

/* game + 0x12380: two 0x1C-byte slots holding a car pointer at +0x18. */
typedef struct {
    char pad[0x16];
    short unk16;
    char *unk18;
} Slot;
typedef struct {
    char pad[0x12380];
    Slot slot[2];
} GameSlots;

typedef struct { int x, y, z; } Vec3;

/* used by func_801446DC */
extern short func_80178A1C(void);               /* ticks this frame */
extern int func_80178A2C(void);
extern int func_80178A70(void);
extern int func_801793F8(int view);
extern void func_80179414(int value, int view);
extern void func_80144150(void *car);
extern int func_80122F24(void *game, void *pos, int dist, void *out);
extern void func_801476C0(void *car);
extern void func_80144EC0(void *car);
extern void func_80148DB0(void *car);
extern void func_8012F320(void *car);
extern void func_800F5EBC(void *car);
extern void func_801451E0(void *car);
extern void func_80146E4C(void *car);
extern void func_80148420(void *car, int a);
extern void func_80148704(void *car);
extern void func_8014645C(void *car);
extern void func_80149628(void *car);
extern void func_80146040(void *car);
extern void func_80108D60(void *views, int a, void *pos, int view, int c);
extern void func_8012A5F0(void *a);
extern void func_801253C8(void *a, void *b);

/* used by func_8014662C */
extern Vec3 D_800F4308;                         /* {0, 400, 80}, .rodata of another unit */
extern int func_80124A94(char *game, int id, int *out);
extern char *func_801244FC(char *game, int idx);
extern void func_80147724(char *p);
extern void func_800FE458(char *p, int a);
extern void func_8012EEE8(char *p, int a, unsigned char b, int c);
extern void func_80125420(int *v, char *src);
extern void func_80125130(int *v, Cam *c);
extern void func_80163E3C(Cam *c);
extern void func_8010FDC4(char *p, int *v, int n);
extern void func_80147778(char *p);
extern int func_8016BDA8(int player);           /* player plays on this console */
extern void func_80149444(char *p, int n);      /* p->0x7F4 += n */
extern int func_80133AE0(int a, int b);
extern void func_8011BC6C(char *a, char *b, int c, int d, int e, int f);
extern void func_80144BC8(char *p, int a);
extern void func_8010B62C(char *a, int b, int c);
extern void func_801214D8(char *game, int a);
extern void mathMulTransVec(char *m, Vec3 *in, int *out);
extern void func_80124FC8(char *a, int *b, Vec3 *c);
extern void func_801544FC(char *a, Vec3 *b, char *c);
extern void func_8013978C(int a, int b);

/* Two byte stores. As an inline, both arguments are loaded before either
 * store, which gives retail's two loads ahead of the 0x29B store. */
static inline void set2(char *p, char *a, unsigned char z, unsigned char w)
{
    U8(p, 0x29B) = z;
    U8(a, 0x38) = w;
}

/* Per-view call. The second argument is read and dropped (retail's dead
 * lw 928(v0)); the unsigned char parameter gives retail's argument order. */
static inline void draw_for_view(char *g, int unused, int a, char *b, int i, unsigned char c)
{
    func_80108D60(g, a, b, i, c);
}

/* Wrecked: clear 0x1A2, a 180-frame timer in the game data, then
 * func_80144BC8. As an inline the constant is set up before the address
 * (retail's li v0,180 first). */
static inline void set_wrecked(char *p, int t)
{
    U8(p, 0x1A2) = 0;
    S32(D_801C34EC, 0x1275C) = t;
    func_80144BC8(p, 0);
}

/* 801446DC: per-frame update of one car p (called twice from 8011EE48).
 * Wrecked car (0x8C set): the only work is easing a per-view value of the
 * car's own view (0x7CC, read with func_801793F8, written with
 * func_80179414) back toward 150, for a car with its own view (0x820), not
 * flagged 0xA0, whose view mode is not 3 -- and only outside a link game
 * (func_8013A06C() == 0). In a link game that value is left alone.
 * Live car: control (0x7B8 1 or 2), states 0x9A/0x9B (set by 80152BE4),
 * input flags 0x7C/0x80, physics (func_801451E0, func_80146E4C), speed
 * 0xF8, then func_80108D60 for every view except the car's own. The link
 * check is the only link-dependent part. */
__attribute__((section(".text_801446DC")))
void func_801446DC(char *p)
{
    int doit, f1, f2, f3, f4, f5, v, d, before, i;
    unsigned char pal;
    char *g;
    ViewTab *t;
    char *a;

    S32(p, 0x7D4) = func_80178A1C();
    if (U8(p, 0x8C) != 0) {
        doit = 0;
        if (U8(p, 0x820) != 0 && U8(p, 0xA0) == 0
            && (t = (ViewTab *) (D_801C34EC + 0x6220), t->mode[S32(p, 0x7CC)] != 3)) {
            doit = func_8013A06C() == 0;
        }
        if (doit) {
            v = func_801793F8(S32(p, 0x7CC));
            if (v > 160) {
                d = (223 - v) >> 1;
            } else {
                d = (v - 93) >> 3;
            }
            v -= d;
            if (v < 150) {
                v = 150;
            }
            func_80179414(v, S32(p, 0x7CC));
        }
    } else {
        if (func_80178A2C() != S32(p, 0x754)) {
            func_80144150(p);
        }
        if (U8(p, 0x820) != 0) {
            U8(p, 0x829) = 1;
            S32(p, 0x7AC) = 1;
        } else {
            U8(p, 0x829) = func_80122F24(D_801C34EC, p + 0x1E4, 4800, p + 0x7AC);
        }
        pal = U8(p, 0x96);
        if (U8(p, 0x87) != 0) {
            func_801476C0(p);
            S32(p, 0x810) = 0;
        } else if (S32(p, 0x10C) > 0) {
            U8(p, 0xB2) = U8(p, 0xAE);
            U8(p, 0xB3) = U8(p, 0xAF);
            U8(p, 0xB4) = U8(p, 0xB0);
            U8(p, 0xB5) = U8(p, 0xB1);
            S32(p, 0x810) += S32(p, 0x7D4);
            f1 = 0;
            if (U8(p, 0x9A) != 0 || U8(p, 0x9B) != 0) {
                f1 = 1;
            }
            if (f1) {
                func_80144EC0(p);
                func_80148DB0(p);
            } else {
                U8(p, 0x82D) = 0;
                if (S32(p, 0x7B8) == 1) {
                    func_8012F320(p);
                } else if (S32(p, 0x7B8) == 2) {
                    func_800F5EBC(p);
                }
            }
            if (S32(p, 0xF4) != 0) {
                U8(p, 0xB0) = U8(p, 0xB1) = 0;
            }
            f2 = 0;
            if (U8(p, 0x82A) != 0 && S16(p, 0x81E) < 1000) {
                f2 = func_80178A70() & 1;
            }
            if (f2) {
                U16(p, 0x81E)++;
                S32(p, 0x7DC)++;
            }
        }
        f3 = 0;
        if (U8(p, 0xAF) != 0 || U8(p, 0xAE) != 0 || U8(p, 0xB0) != 0 || U8(p, 0xB1) != 0) {
            f3 = 1;
        }
        if (f3) {
            U8(p, 0x80) = 1;
        } else {
            U8(p, 0x80) = 0;
        }
        f4 = 0;
        if (U8(p, 0xAC) != 0 || U8(p, 0xAA) != 0) {
            f4 = 1;
        }
        if (f4) {
            U8(p, 0x7C) = 1;
        } else {
            U8(p, 0x7C) = 0;
        }
        before = S32(p, 0x20C);
        func_801451E0(p);
        func_80146E4C(p);
        S32(p, 0xF8) = (S32(p, 0x20C) - before) / S32(p, 0x7D4);
        func_80148420(p, pal);
        func_80148704(p);
        func_8014645C(p);
        func_80149628(p);
        if (U8(p, 0x86) != 0) {
            func_80146040(p);
        }
        i = 0;
        while (1) {
            g = D_801C34EC + 0x6220;
            if (!(i < S32(g, 0x3CC))) {    /* number of views */
                break;
            }
            f5 = 1;
            if (U8(p, 0x820) != 0) {
                f5 = i != S32(p, 0x7CC);
            }
            if (f5) {
                draw_for_view(g, ((volatile ViewTab *) g)->arr[i], S32(p, 0x7C0), p + 0x1E4, i, U8(p, 0x82A));
            }
            i++;
        }
        if (U8(p, 0x8C) == 0) {
            a = p + 0x264;
            U8(a, 0x35) = U8(p, 0xB6);
            U8(a, 0x36) = U8(p, 0xB7);
            set2(p, a, U8(p, 0xB8), U8(p, 0xB9));
            func_8012A5F0(a);
            func_801253C8(p + 0x238, p + 0x208);
        }
    }
    if (S32(p, 0x7DC) > 99999) {
        S32(p, 0x7DC) = 99999;
    }
}

/* 8014662C: damage a car. p = victim, src = hit source (position record or
 * 0), dmg = damage, type = damage type (30 is special).
 * Shakes the shared camera record (game + 0xB744), rumbles a human's pad
 * (0x7B8 == 1), scales the damage (shield, 0x196 halves it), subtracts it
 * from the hit points 0x10C, plays a hit sound, and when the hit points reach
 * 0 wrecks the car (0x8C = 1): releases the shared item and the slots,
 * starts the 180-frame timer, and plays the wreck sound; in modes 1/3 on
 * level 10 a human attacker o also gets an effect and 2500 points.
 * Link game (func_8013A06C() != 0), two differences:
 *  - a car that does not play on this console (func_8016BDA8(p->0x7D0) == 0)
 *    is never wrecked here: unless type is 30 its hit points are held at 1,
 *    so only the owning console wrecks it (and the packets carry that);
 *  - the damage is credited to the attacker o (func_80149444: o->0x7F4 +=
 *    dmg), which happens only in a link game.
 * Matching notes: each flag is its own variable (`f = 0; if (a) f = b;`);
 * `n` is shared by the "hit" flag and the sound argument (retail's s0);
 * rumble is cleared after the first block; the switch has an explicit
 * case 7 so the table has 8 entries; the slot loop uses a short index into
 * a GameSlots array read through a pointer loaded before the loop. */
__attribute__((section(".text_8014662C")))
void func_8014662C(char *p, char *src, int dmg, int type)
{
    int v18[4];
    Vec3 v28;
    int v38[4];
    int idx;
    int f1, f2, f3, f4, f5, f6, f7, f8, f9, rumble, n, k, m, snd;
    int i;
    Cam *c;
    char *o;
    Slot *s;
    char *g;

    n = 0;
    if (type != 30 && S32(p, 0x7B8) == 1 && U8(p, 0x2A0) != 0) {
        return;
    }
    c = (Cam *) (D_801C34EC + 0xB744);
    if (func_80124A94(D_801C34EC, c->unk18, &idx) != 0) {
        o = func_801244FC(D_801C34EC, idx);
    } else {
        o = 0;
    }
    f1 = 0;
    if (c->unk10 != 0) {
        f1 = S32(c->unk10, 0x20) == 10;
    }
    if (f1) {
        if (S32(p, 0x7C0) >= 208) {
            n = 1;
        } else if (U8(p, 0x8B) == 0) {
            func_80147724(p);
            func_800FE458(p, 1);
        }
    }
    rumble = 0;
    if (S32(p, 0x7B8) == 1) {
        rumble = c->unk14 != 1;
    }
    if (rumble) {
        m = 20;
        if (dmg < 21) {
            m = dmg;
        }
        func_8012EEE8(p, 0, m * 255 / 20, 60);
    }
    f2 = 0;
    if (U8(p, 0x8B) != 0 || U8(p, 0xA3) != 0) {
        f2 = 1;
    }
    if (f2 || n) {
        if (S32(c->unk10, 0x20) != 3) {
            c->unk20 = 1;
            f3 = 0;
            if (o != 0 && U16(p, 0x180) != 0) {
                f3 = (unsigned int) S32(c->unk10, 0x18) > 0;
            }
            if (f3) {
                c->unk21 = 1;
            }
            if (src != 0) {
                func_80125420(v18, src);
                func_80125130(v18, c);
                c->unk8 += 0x800;
                if (c->unk21 != 0) {
                    c->unk0 -= 455;
                }
            } else {
                c->unk20 = 0;
                c->unk21 = 0;
            }
            c->unk0 -= (rand() & 0xFF) + 128;
            c->unk8 += 128 - (rand() & 0xFF);
            func_80163E3C(c);
        }
        dmg = 0;
    }
    if (src != 0) {
        f4 = 0;
        if (c->unk10 != 0) {
            f4 = S32(c->unk10, 0x20) != 8;
        }
        if (f4) {
            k = (dmg * 8) >> 1;
            if (k > 160) {
                k = 160;
            }
            func_80125420(v18, src);
            func_8010FDC4(p, v18, k);
        }
    }
    if (c->unk14 == 1) {
        f5 = 0;
        if (U8(p, 0x829) != 0) {
            f5 = S32(p, 0x7AC) < 1600;
        }
        if (f5) {
            if (dmg != 0) {
                dmg >>= 2;
                if (dmg == 0 && o != 0 && S32(o, 0x7C0) >= 208) {
                    dmg = 1;
                }
            }
        } else {
            dmg = 0;
        }
    }
    if (U8(p, 0x19E) == 0) {
        return;
    }
    if (U8(p, 0x196) != 0) {
        dmg >>= 1;
    }
    S32(p, 0x10C) -= dmg;
    f6 = 0;
    if (U8(p, 0x87) != 0) {
        f6 = U8(p, 0x82F) == 0;
    }
    if (f6) {
        S32(p, 0x818) += dmg;
        if (S32(p, 0x818) >= 16) {
            func_80147778(p);
        }
    }
    if (func_8013A06C() != 0) {
        if (func_8016BDA8(S32(p, 0x7D0)) == 0 && type != 30 && S32(p, 0x10C) <= 0) {
            S32(p, 0x10C) = 1;
        }
        if (o != 0 && o != p) {
            func_80149444(o, dmg);
        }
    }
    if (U8(p, 0x829) != 0) {
        n = func_80133AE0(S32(p, 0x7C0), S32(p, 0x78));
        switch (rand() & 7) {
        case 0:
            func_8011BC6C(p + 0x1E4, p + 0x244, 3, 16, n, 0);
            break;
        case 1:
            func_8011BC6C(p + 0x1E4, p + 0x244, 3, 17, n, 0);
            break;
        case 2:
            func_8011BC6C(p + 0x1E4, p + 0x244, 2, 18, n, 0);
            break;
        case 3:
            func_8011BC6C(p + 0x1E4, p + 0x244, 3, 19, n, 0);
            break;
        case 4:
            func_8011BC6C(p + 0x1E4, p + 0x244, 3, 27, n, 0);
            break;
        case 5:
            func_8011BC6C(p + 0x1E4, p + 0x244, 1, 28, n, 0);
            break;
        case 6:
            func_8011BC6C(p + 0x1E4, p + 0x244, 2, 29, n, 0);
            break;
        case 7:
        default:
            func_8011BC6C(p + 0x1E4, p + 0x244, 3, 30, n, 0);
            break;
        }
    }
    f7 = 0;
    if (S32(p, 0x10C) <= 0) {
        f7 = U8(p, 0x8C) == 0;
    }
    if (!f7) {
        return;
    }
    U8(p, 0x8C) = 1;
    U8(p, 0x542) = 0;
    f8 = 0;
    if (U8(D_801C34EC, 0x123F8) != 0) {
        S32(D_801C34EC, 0x12408) = (int) p;
        f8 = S32(D_801C34EC, 0x12408) != 0;
    }
    if (f8) {
        U8(D_801C34EC, 0x123F8) = 0;
        S32(D_801C34EC, 0x12408) = 0;
    }
    if (U8(p, 0xA3) == 1) {
        i = 0;
        g = D_801C34EC;
        while (1) {
            if (!(i < 2)) {
                break;
            }
            s = &((GameSlots *) g)->slot[(short) i];
            if (s->unk18 == p) {
                s->unk18 = 0;
                s->unk16 = 0;
            }
            i++;
        }
    }
    set_wrecked(p, 180);
    if (S32(p, 0x7B8) == 1) {
        func_8012EEE8(p, 0, 0, 0);
        snd = (rand() & 7) | 0x40;
    } else {
        func_8010B62C(D_801C34EC + 0x6220, (S32(p, 0x7C0) >> 4) + 71, 0);
        func_801214D8(D_801C34EC, S32(p, 0x7D0));
        func_8010B62C(D_801C34EC + 0x6220, S32(D_801C34EC, 0x12754) - 1, 1);
        f9 = 0;
        if (S32(D_801C34EC, 0x12688) == 10
            && (S32(D_801C34EC, 0x7D8) == 1 || S32(D_801C34EC, 0x7D8) == 3)) {
            f9 = 1;
        }
        if (!f9 || o == 0 || S32(o, 0x7B8) != 1) {
            return;
        }
        v28 = D_800F4308;
        mathMulTransVec((char *) S32(o, 0x738) + 0x28, &v28, v38);
        func_80124FC8(o + 0x1E4, v38, &v28);
        func_801544FC(D_801C34EC + 0x496C, &v28, o + 0x1E4);
        S32(o, 0x7DC) += 2500;
        func_8013978C(S32(o, 0x7D0), 2500);
        snd = 91;
    }
    func_8010B62C(D_801C34EC + 0x6220, snd, 0);
}

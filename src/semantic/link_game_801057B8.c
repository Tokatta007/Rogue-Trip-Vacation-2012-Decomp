/* Rogue Trip per-view race HUD (801057B8), a caller of the link-state
 * getter func_8013A06C. Byte-exact (1440 words).
 * Build: psyq4.4 "-O2 -G8 -fvolatile", ASPSX 2.56, delay_slots compiler.
 * The separator bar is h->sep[buf][view] (PolyF4 [2][2] at 0x5474), drawn
 * only for view 1: cse knows view == 1 there, so the stores' and the
 * AddPrim argument's addresses fold to the same value by different paths
 * and are computed twice, as in retail.
 * See docs/LINK_CABLE.md, Layer 4. */

typedef struct {
    int tag;
    unsigned char r, g, b, code;
    short x, y;
    unsigned char u, v;
    unsigned short clut;
    short w, h;
} Sprt;                                         /* 0x14 */

typedef struct {
    int tag;
    unsigned char r, g, b, code;
    short x0, y0, x1, y1, x2, y2, x3, y3;
} PolyF4;                                       /* 0x18 */

typedef struct {
    int tag;
    unsigned char r, g, b, code;
    short x0, y0, x1, y1, x2, y2;
} PolyF3;                                       /* 0x14 */

typedef struct {
    int tag;
    int code[2];
} DrMode;                                       /* 0x0C */

typedef struct {
    Sprt hi, lo;                                /* two digits */
} Digits;                                       /* 0x28 */

/* car record (fields used here) */
typedef struct {
    char pad0[0x10C];
    int hp;                     /* 0x10C */
    int hp_max;                 /* 0x110 */
    char pad114[0x1A1 - 0x114];
    unsigned char all_armed;    /* 0x1A1 */
    char pad1A2[0x1E4 - 0x1A2];
    int x;                      /* 0x1E4 */
    int z;                      /* 0x1E8 */
    char pad1EC[0x1F8 - 0x1EC];
    int heading;                /* 0x1F8 */
    char pad1FC[0x20C - 0x1FC];
    int speed;                  /* 0x20C */
    char pad210[0x26C - 0x210];
    int gauge2;                 /* 0x26C */
    char pad270[0x28C - 0x270];
    int gauge1;                 /* 0x28C */
    char pad290[0x294 - 0x290];
    unsigned char w7_blink;     /* 0x294 */
    char pad295[0x2A4 - 0x295];
    signed char icons;          /* 0x2A4 */
    signed char weapon;         /* 0x2A5 */
    char pad2A6;
    signed char ammo[9];        /* 0x2A7 */
    unsigned char armed[9];     /* 0x2B0 */
    char pad2B9[0x7D0 - 0x2B9];
    int place_id;               /* 0x7D0 */
    char pad7D4[0x7DC - 0x7D4];
    int money;                  /* 0x7DC */
    char pad7E0[0x82A - 0x7E0];
    unsigned char x82A;         /* 0x82A */
} Car;

/* game + 0x6220: view table and HUD primitives, [.][buf][view] */
typedef struct {
    char pad0[0x3A0];
    Car *car[2];                        /* 0x3A0 */
    char pad3A8[0x3EE - 0x3A8];
    unsigned char show[2];              /* 0x3EE */
    char pad3F0[0x3F6 - 0x3F0];
    short buf;                          /* 0x3F6 */
    char pad3F8[0x214C - 0x3F8];
    Sprt wicon[9][2][2];                /* 0x214C */
    char pad241C[0x278C - 0x241C];
    DrMode wicon_m[9][2][2];            /* 0x278C */
    char pad293C[0x2BCC - 0x293C];
    Sprt big[10][2][2];                 /* 0x2BCC */
    char pad2EEC[0x320C - 0x2EEC];
    DrMode big_m[10][2][2];             /* 0x320C */
    char pad33EC[0x35CC - 0x33EC];
    Digits wnum[9][2][2];               /* 0x35CC */
    DrMode wnum_m[9][2][2];             /* 0x3B6C */
    char font1[0x78];                   /* 0x3D1C */
    Digits bnum[9][2][2];               /* 0x3D94 */
    DrMode bnum_m[9][2][2];             /* 0x4334 */
    char font2[0x78];                   /* 0x44E4 */
    PolyF4 bar[16][2][2];               /* 0x455C */
    PolyF4 gauge[2][2];                 /* 0x4B5C */
    Sprt ic1[2][2];                     /* 0x4BBC */
    Sprt ic2[2][2];                     /* 0x4C0C */
    DrMode ic_m[2][2];                  /* 0x4C5C */
    PolyF4 gauge2[2][2];                /* 0x4C8C */
    Sprt cur[2][2];                     /* 0x4CEC */
    DrMode cur_m[2][2];                 /* 0x4D3C */
    unsigned char blink[2];             /* 0x4D6C */
    signed char blink_n[2];             /* 0x4D6E */
    unsigned char hblink[2];            /* 0x4D70 */
    signed char hblink_n[2];            /* 0x4D72 */
    Sprt sel[10][2][2];                 /* 0x4D74 */
    DrMode sel_m[10][2][2];             /* 0x5094 */
    Sprt s5274[2][2];                   /* 0x5274 */
    DrMode m52C4[2][2];                 /* 0x52C4 */
    Sprt s52F4[2][2];                   /* 0x52F4 */
    DrMode m5344[2][2];                 /* 0x5344 */
    Sprt s5374[2][2];                   /* 0x5374 */
    DrMode m53C4[2][2];                 /* 0x53C4 */
    Sprt s53F4[2][2];                   /* 0x53F4 */
    DrMode m5444[2][2];                 /* 0x5444 */
    PolyF4 sep[2][2];                   /* 0x5474, only [buf][1] drawn */
    PolyF3 arrow[2][2];                 /* 0x54D4 */
} Hud;

typedef struct { int x, y, z; } Vec3;

/* game + 0x10A64: the target (bonus) record; +0x38 its object */
typedef struct {
    char pad[0x38];
    char *obj;
} Target;

extern int func_8013A06C(void);                 /* link state: 0 none, 1 master, 2 slave */
extern char *D_801C34EC;                        /* game data */
extern char D_801C328C[];                       /* "%d" */
extern char D_801C3298[];                       /* "%c%5d" */
extern void **func_80132F10(void);
extern void **func_80132F28(void);
extern void AddPrim(void *ot, void *p);
extern void func_80106E38(Hud *h, void *ot, int view, int buf, int yoff);
extern void func_80108650(Hud *h, void *ot, int view, int buf, void **prim, int yoff);
extern void func_80107094(Hud *h, void *ot, int buf, int view, int yoff);
extern void func_80108A94(Hud *h, int n, void *p);
extern void func_80167F30(int n, Sprt *s, void *font, void *ot);
extern int func_8013A9F0(int id);
extern int func_80154AFC(char *out, char *fmt, ...);
extern void func_801675F4(int font, int x, int y, char *s, void **prim);
extern void func_80167620(int font, int x, int y, char *s, void **prim);
extern void func_80167088(int a, int r, int g, int b);
extern void func_80167154(int a);
extern short func_80178A1C(void);
extern void func_801253C8(Vec3 *out, void *pos);
extern short func_8015A62C(int dx, int dz);
extern void func_801640EC(short *a);
extern void func_8012552C(Vec3 *pos, Vec3 *out, int view);

/* car pointer: plain ARRAY_REF (h-first address, not volatile under
 * -fvolatile) or through a volatile Hud (h-first and reloaded) */
#define CAR(h, v) ((h)->car[v])
#define VCAR(h, v) (((volatile Hud *) (h))->car[v])
static inline void rgb(Sprt *p, int r, int g, int b)
{
    p->r = r;
    p->g = g;
    p->b = b;
}

static inline int is_armed(Car *c, int i)
{
    return c->armed[i] != 0 || c->all_armed != 0;
}

static inline int mode3_link_ok(Hud *h, int view)
{
    return h->show[view] != 0 && func_8013A06C() == 0
        && *(int *) (D_801C34EC + 0x7D8) == 3;
}

static inline int mode3_4(void)
{
    return *(int *) (D_801C34EC + 0x7D8) == 3
        && *(int *) (D_801C34EC + 0x12688) == 4;
}

/* 801057B8 (called from 8010B5BC, once per view): draw the race HUD of view
 * `view` (0 top, 1 bottom; the bottom view is drawn 12 lines higher and gets
 * a separator bar): the weapon list with ammo counts (selected weapon
 * highlighted, weapon 7 blinking), the selected weapon's big icon and count,
 * the place, the health bar (blinking below 5/16), special icons, two
 * gauges, the speed, a pointer to the target or a 0x82A icon, the money,
 * and in game mode 3 / type 4 a countdown.
 * Link game: the extra panel func_80108650 (game mode 3) is drawn only
 * outside a link game (func_8013A06C() == 0). */
__attribute__((section(".text_801057B8")))
void func_801057B8(Hud *h, int view)
{
    Vec3 out;
    Vec3 pos;
    char text[32];
    short ang;
    int buf;
    void **prim;
    short sel;
    void *ot;
    int yoff;
    int i;
    int n;
    short m;
    Sprt *p;
    Sprt *q;

    buf = h->buf;
    if (view == 0) {
        prim = func_80132F10();
        yoff = 0;
    } else {
        prim = func_80132F28();
        yoff = -12;
    }
    ot = *prim;
    if (view == 1) {
        (&h->sep[buf][view])->x0 = 0;
        (&h->sep[buf][view])->y0 = 0;
        (&h->sep[buf][view])->x1 = 320;
        (&h->sep[buf][view])->y1 = 0;
        (&h->sep[buf][view])->x2 = 0;
        (&h->sep[buf][view])->y2 = 2;
        (&h->sep[buf][view])->x3 = 320;
        (&h->sep[buf][view])->y3 = 2;
        AddPrim(ot, &h->sep[buf][view]);
    }
    if (h->show[view] != 0) {
        func_80106E38(h, ot, view, buf, yoff);
    }
    if (mode3_link_ok(h, view)) {
        func_80108650(h, ot, view, buf, prim, yoff);
    }

    /* weapon list */
    sel = h->car[view]->weapon;
    if (h->show[view] != 0) {
        if (VCAR(h, view)->w7_blink != 0) {
            h->blink_n[view]++;
            if (h->blink_n[view] >= 11) {
                h->blink[view] ^= 1;
                h->blink_n[view] = 0;
            }
        } else {
            h->blink[view] = 1;
            h->blink_n[view] = 0;
        }
        for (i = 0; i < 9; i++) {
            int f;
            Car *a;
            Car *k;

            p = &h->wicon[i][buf][view];
            m = VCAR(h, view)->ammo[i];
            if (m < 0) {
                m = 99;
            }
            if (m > 0) {
                f = 0;
                a = VCAR(h, view);
                if (a->armed[i] != 0 || a->all_armed != 0) {
                    f = 1;
                }
                if (f) {
                    if (sel == i) {
                        rgb(p, 255, 0, 0);
                    } else {
                        rgb(p, 100, 7, 7);
                    }
                } else if (sel == i) {
                    rgb(p, 35, 255, 35);
                } else {
                    rgb(p, 7, 100, 7);
                }
                p->x = 280;
                p->y = i * 7 + (short) (yoff + 46);
                if (sel == i) {
                    (h->cur[buf] + view)->x = 276;
                    (h->cur[buf] + view)->y = i * 7 + (short) (yoff + 44);
                    AddPrim(ot, &h->cur[buf][view]);
                    AddPrim(ot, &h->cur_m[buf][view]);
                }
                if (i == 7 && (k = VCAR(h, view))->w7_blink != 0) {
                    if (h->blink[view] != 0) {
                        if (is_armed(k, 7)) {
                            rgb(p, 255, 0, 0);
                        } else {
                            rgb(p, 35, 255, 35);
                        }
                    } else {
                        rgb(p, 0, 0, 0);
                    }
                }
                AddPrim(ot, p);
                AddPrim(ot, &h->wicon_m[i][buf][view]);

                p = &h->wnum[i][buf][view].hi;
                q = p + 1;
                if (is_armed(VCAR(h, view), i)) {
                    if (sel == i) {
                        rgb(p, 255, 0, 0);
                        rgb(q, 255, 0, 0);
                    } else {
                        rgb(p, 100, 7, 7);
                        rgb(q, 100, 7, 7);
                    }
                } else if (sel == i) {
                    rgb(p, 35, 255, 35);
                    rgb(q, 35, 255, 35);
                } else {
                    rgb(p, 7, 100, 7);
                    rgb(q, 7, 100, 7);
                }
                if (i == 7 && (k = VCAR(h, view))->w7_blink != 0) {
                    if (h->blink[view] != 0) {
                        if (is_armed(k, 7)) {
                            rgb(p, 255, 0, 0);
                            rgb(q, 255, 0, 0);
                        } else {
                            rgb(p, 35, 255, 35);
                            rgb(q, 35, 255, 35);
                        }
                    } else {
                        rgb(p, 0, 0, 0);
                        rgb(q, 0, 0, 0);
                    }
                }
                if (m != 99) {
                    if (m < 10) {
                        q->x = 294;
                        q->y = i * 7 + (short) (yoff + 46);
                        func_80167F30(m, q, h->font1, ot);
                    } else {
                        short y;

                        p->x = 290;
                        y = i * 7 + (short) (yoff + 46);
                        p->y = y;
                        q->x = 294;
                        q->y = y;
                        func_80167F30(m, p, h->font1, ot);
                    }
                    AddPrim(ot, &h->wnum_m[i][buf][view]);
                }
            }
        }
    }

    /* selected weapon, big */
    if (h->show[view] != 0) {
        p = &h->big[sel][buf][view];
        p->x = 246;
        p->y = yoff + 111;
        q = &h->bnum[sel][buf][view].hi;
        if (is_armed(CAR(h, view), sel)) {
            rgb(p, 255, 0, 0);
            rgb(q, 255, 0, 0);
            ((Sprt *) (h->bnum[sel][buf] + view) + 1)->r = 255;
            ((Sprt *) (h->bnum[sel][buf] + view) + 1)->g = 0;
            ((Sprt *) (h->bnum[sel][buf] + view) + 1)->b = 0;
        } else {
            rgb(p, 35, 255, 35);
            rgb(q, 35, 255, 35);
            ((Sprt *) (h->bnum[sel][buf] + view) + 1)->r = 35;
            ((Sprt *) (h->bnum[sel][buf] + view) + 1)->g = 255;
            ((Sprt *) (h->bnum[sel][buf] + view) + 1)->b = 35;
        }
        AddPrim(ot, p);
        AddPrim(ot, &h->big_m[sel][buf][view]);
        p = &h->bnum[sel][buf][view].lo;
        m = CAR(h, view)->ammo[sel];
        if (m < 0) {
            m = 99;
        }
        if (m != 99) {
            if (m < 10) {
                p->x = 292;
                p->y = yoff + 111;
                func_80167F30(m, p, h->font2, ot);
            } else {
                short y;

                q->x = 286;
                y = yoff + 111;
                q->y = y;
                p->x = 294;
                p->y = y;
                func_80167F30(m, q, h->font2, ot);
            }
        }
        AddPrim(ot, &h->bnum_m[sel][buf][view]);
    }

    /* weapon name */
    {
        Car *c = h->car[view];

        if (c->ammo[sel] != 0) {
            if (sel == 7 && is_armed(c, 7)) {
                sel = 9;
            }
            if (h->show[view] != 0) {
                (h->sel[sel][buf] + view)->x = 243;
                (h->sel[sel][buf] + view)->y = yoff + 68;
            } else {
                (h->sel[sel][buf] + view)->x = 280;
                (h->sel[sel][buf] + view)->y = yoff + 79;
            }
            AddPrim(ot, &h->sel[sel][buf][view]);
            AddPrim(ot, &h->sel_m[sel][buf][view]);
        }
    }

    /* place */
    if (h->show[view] != 0) {
        int k = func_8013A9F0(CAR(h, view)->place_id) & 0xFF;

        if (k - 1 >= 10) {
            func_80154AFC(text, D_801C328C, k - 1);
        } else {
            text[0] = k + 47;
            text[1] = 0;
        }
        func_801675F4(1, 301, yoff + 47, text, prim);
    }

    /* health bar */
    if (h->show[view] != 0) {
        Car *c = CAR(h, view);

        n = c->hp * 16 / c->hp_max;
        if (n > 16) {
            n = 16;
        }
        if (n == 0) {
            n = 1;
        }
        if (n < 5) {
            h->hblink_n[view]++;
            if (h->hblink_n[view] >= 6) {
                h->hblink[view] ^= 1;
                h->hblink_n[view] = 0;
            }
        } else {
            h->hblink[view] = 1;
            h->hblink_n[view] = 0;
        }
        for (i = 0; i < n; i++) {
            PolyF4 *p = &h->bar[i][buf][view];

            func_80108A94(h, n, p);
            if (h->hblink[view] != 0) {
                short y;

                (h->bar[i][buf] + view)->x0 = 300;
                y = (short) (yoff + 88) - i * 2;
                (h->bar[i][buf] + view)->y0 = y;
                (h->bar[i][buf] + view)->x1 = 308;
                (h->bar[i][buf] + view)->y1 = y;
                y++;
                (h->bar[i][buf] + view)->x2 = 300;
                (h->bar[i][buf] + view)->y2 = y;
                (h->bar[i][buf] + view)->x3 = 308;
                (h->bar[i][buf] + view)->y3 = y;
                AddPrim(ot, p);
            }
        }
    }

    /* special icons */
    if (h->show[view] != 0) {
        if (CAR(h, view)->icons != 0) {
            short y;

            (h->ic1[buf] + view)->x = 299;
            y = yoff + 96;
            (h->ic1[buf] + view)->y = y;
            AddPrim(ot, &h->ic1[buf][view]);
            if (CAR(h, view)->icons >= 2) {
                (h->ic2[buf] + view)->x = 304;
                (h->ic2[buf] + view)->y = y;
                AddPrim(ot, &h->ic2[buf][view]);
            }
            AddPrim(ot, &h->ic_m[buf][view]);
        }
    }

    /* gauge 1 */
    if (h->show[view] != 0) {
        PolyF4 *p;
        short x0, x1, y0, y1;

        n = CAR(h, view)->gauge1 * 16 / 1000;
        if (n > 16) {
            n = 16;
        }
        p = &h->gauge[buf][view];
        (h->gauge[buf] + view)->x0 = x0 = (16 - n) * 2 + 244;
        x1 = (16 - n) * 2 + (short) (n * 2 + 244);
        y0 = yoff + 104;
        y1 = yoff + 108;
        (h->gauge[buf] + view)->y0 = y0;
        (h->gauge[buf] + view)->x1 = x1;
        (h->gauge[buf] + view)->y1 = y0;
        (h->gauge[buf] + view)->x2 = x0;
        (h->gauge[buf] + view)->y2 = y1;
        (h->gauge[buf] + view)->x3 = x1;
        (h->gauge[buf] + view)->y3 = y1;
        func_80108A94(h, n, p);
        AddPrim(ot, p);
    }

    if (h->show[view] != 0) {
        func_80107094(h, ot, buf, view, yoff);
    }

    /* gauge 2 */
    if (h->show[view] != 0) {
        PolyF4 *p = &h->gauge2[buf][view];
        short y;

        n = (500 - CAR(h, view)->gauge2) * 16 / 500;
        func_80108A94(h, n, p);
        (h->gauge2[buf] + view)->x0 = 299;
        y = yoff + 110;
        (h->gauge2[buf] + view)->y0 = y;
        (h->gauge2[buf] + view)->x1 = 308;
        (h->gauge2[buf] + view)->y1 = y;
        y = yoff + 117;
        (h->gauge2[buf] + view)->x2 = 299;
        (h->gauge2[buf] + view)->y2 = y;
        (h->gauge2[buf] + view)->x3 = 308;
        (h->gauge2[buf] + view)->y3 = y;
        AddPrim(ot, p);
    }

    /* speed */
    if (h->show[view] != 0) {
        Car *c = CAR(h, view);
        int v = (c->speed >> 6) * 1000 / (func_80178A1C() * 195);

        if (v < 0) {
            v = -v;
        }
        func_80154AFC(text, D_801C328C, v);
        func_80167088(0, 30, 200, 30);
        func_801675F4(0, 204, yoff + 105, text, prim);
        func_80167154(0);
    }

    /* icon 0x82A, or the pointer to the target */
    if (CAR(h, view)->x82A != 0) {
        (h->s5374[buf] + view)->x = 54;
        (h->s5374[buf] + view)->y = yoff + 101;
        AddPrim(ot, &h->s5374[buf][view]);
        AddPrim(ot, &h->m53C4[buf][view]);
        if (h->show[view] != 0) {
            AddPrim(ot, &h->s53F4[buf][view]);
            AddPrim(ot, &h->m5444[buf][view]);
        }
    } else if (*(unsigned char *) (D_801C34EC + 0x127E5) != 0) {
        Target *t = (Target *) (D_801C34EC + 0x10A64);
        int a;

        func_801253C8(&pos, t->obj + 0x1C);
        pos.z += 80;
        {
            Car *c = CAR(h, view);

            ang = func_8015A62C(pos.x - c->x, pos.y - c->z);
        }
        ang -= CAR(h, view)->heading;
        func_801640EC(&ang);
        a = ang;
        if (a < 0) {
            a = -a;
        }
        if (a < 512) {
            func_8012552C(&pos, &out, view);
            out.y += yoff;
            (h->arrow[buf] + view)->x0 = out.x;
            (h->arrow[buf] + view)->y0 = out.y;
            (h->arrow[buf] + view)->x1 = out.x - 5;
            (h->arrow[buf] + view)->y1 = out.y - 10;
            (h->arrow[buf] + view)->x2 = out.x + 5;
            (h->arrow[buf] + view)->y2 = out.y - 10;
            if (out.z > 80) {
                AddPrim(ot, &h->arrow[buf][view]);
            }
        }
    }

    /* money */
    {
        int m = CAR(h, view)->money;

        if (m > 99999) {
            m = 99999;
        }
        func_80154AFC(text, D_801C3298, m > 0 ? '$' : ' ', m);
        func_801675F4(1, 16, yoff + 106, text, prim);
    }

    if (h->show[view] != 0) {
        (h->s5274[buf] + view)->x = -4;
        (h->s5274[buf] + view)->y = yoff + 101;
        AddPrim(ot, &h->s5274[buf][view]);
        AddPrim(ot, &h->m52C4[buf][view]);
        (h->s52F4[buf] + view)->x = 51;
        (h->s52F4[buf] + view)->y = yoff + 99;
        AddPrim(ot, &h->s52F4[buf][view]);
        AddPrim(ot, &h->m5344[buf][view]);
        if (mode3_4()) {
            func_80154AFC(text, D_801C328C, *(int *) (D_801C34EC + 0x12680) / 60);
            func_80167088(0, 200, 200, 50);
            func_80167620(0, 160, yoff + 25, text, prim);
        }
    }
}

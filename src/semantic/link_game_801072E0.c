/* Rogue Trip in-race HUD of one view (801072E0), a caller of the link-state
 * getter func_8013A06C (0 no link game, 1 master, 2 slave).
 * See docs/LINK_CABLE.md, Layer 4.
 *
 * Built like the other link_game units: PsyQ 4.4, "-O2 -G8 -fvolatile",
 * ASPSX 2.56. With the genuine PsyQ toolchain (tools/psyq_real.py) the
 * function is exact, 1244/1244 words. maspsx gives 1243/1244: at 8010812C two
 * branches (the "special weapon" block's two tests) are redirected by reorg
 * past a redundant reload of `view` onto two consecutive labels; ASPSX puts
 * the load-delay nop before both labels, maspsx hoists only the first label
 * above the nop, so the second branch lands one word later.
 *
 * Matching notes:
 * - The car record (h->player[view], a volatile pointer member) and the HUD
 *   bytes are read through byte-offset macros (volatile under -fvolatile).
 * - Retail stores primitive coordinates through an address of the form
 *   view part + (db part + hud) + offset, which is what the PsyQ setXY-style
 *   helpers produce from &h->prim[db][view]; PQ/PQ3 build that form directly
 *   (an inline setter adds a label that changes CSE elsewhere). The divider
 *   uses a real inline setter on &h->div[db][view].
 * - Retail allocates one callee-saved register to the second ammo digit
 *   sprite and to the health/turbo bar counts: they are one variable (t1).
 * - Colours go through the inline setRGB0: its labels lengthen the life of
 *   the 255 constant so loop.c hoists it into s4, as retail does.
 * - The weapon rows use i * 7 + 151 at every store (retail keeps giv regs for
 *   i*48, i*7, i*5 in that stack order); the cursor uses i * 7 + 149.
 * - The first damage test in the weapon loop is written out (its flag must
 *   be created before its car pointer); the rest use the inline hit().
 * - The arrow's heading is read as ((int *) car)[0x1F8 / 4] so the first
 *   store of `a` is not scheduled above the load.
 */

#define U8(p, o) (*(unsigned char *) ((char *) (p) + (o)))
#define S8(p, o) (*(signed char *) ((char *) (p) + (o)))
#define U16(p, o) (*(unsigned short *) ((char *) (p) + (o)))
#define S32(p, o) (*(int *) ((char *) (p) + (o)))

typedef struct {                /* SPRT */
    int tag;
    unsigned char r, g, b, code;
    short x, y;
    unsigned char u, v;
    unsigned short clut;
    short w, h;
} Sprt;

typedef struct {                /* POLY_F3 */
    int tag;
    unsigned char r, g, b, code;
    short x0, y0, x1, y1, x2, y2;
} PolyF3;

typedef struct {                /* POLY_F4 */
    int tag;
    unsigned char r, g, b, code;
    short x0, y0, x1, y1, x2, y2, x3, y3;
} PolyF4;

typedef struct {                /* DR_MODE */
    int tag;
    int code[2];
} DrMode;

/* HUD record; the primitive arrays are [..][db][view]. */
typedef struct {
    char pad0[0x3A0];
    char *volatile player[2];   /* +0x3A0 */
    char pad3A8[0x3EE - 0x3A8];
    unsigned char active[2];    /* +0x3EE */
    char pad3F0[6];
    unsigned short db;          /* +0x3F6 */
    char pad3F8[0x214C - 0x3F8];
    Sprt icon[9][2][2];         /* +0x214C: weapon icons */
    char pad241C[0x278C - 0x241C];
    DrMode iconMode[9][2][2];   /* +0x278C */
    char pad293C[0x2BCC - 0x293C];
    Sprt big[9][2][2];          /* +0x2BCC: selected weapon */
    char pad2E9C[0x320C - 0x2E9C];
    DrMode bigMode[9][2][2];    /* +0x320C */
    char pad33BC[0x35CC - 0x33BC];
    Sprt ammo[9][2][2][2];      /* +0x35CC: ammo digits */
    DrMode ammoMode[9][2][2];   /* +0x3B6C */
    char font[0x78];            /* +0x3D1C */
    Sprt bigAmmo[9][2][2][2];   /* +0x3D94 */
    DrMode bigAmmoMode[9][2][2]; /* +0x4334 */
    char bigFont[0x78];         /* +0x44E4 */
    PolyF4 health[16][2][2];    /* +0x455C */
    PolyF4 turbo[2][2];         /* +0x4B5C */
    Sprt spec1[2][2];           /* +0x4BBC */
    Sprt spec2[2][2];           /* +0x4C0C */
    DrMode specMode[2][2];      /* +0x4C5C */
    PolyF4 bar[2][2];           /* +0x4C8C */
    Sprt cursor[2][2];          /* +0x4CEC */
    DrMode cursorMode[2][2];    /* +0x4D3C */
    unsigned char blink[2];     /* +0x4D6C */
    unsigned char blinkCnt[2];  /* +0x4D6E */
    unsigned char hblink[2];    /* +0x4D70 */
    unsigned char hblinkCnt[2]; /* +0x4D72 */
    Sprt small[10][2][2];       /* +0x4D74 */
    DrMode smallMode[10][2][2]; /* +0x5094 */
    char pad5274[0x5374 - 0x5274];
    Sprt flag[2][2];            /* +0x5374 */
    DrMode flagMode[2][2];      /* +0x53C4 */
    char pad53F4[0x5474 - 0x53F4];
    PolyF4 div[2][2];           /* +0x5474: split-screen divider, drawn for view 1 */
    PolyF3 arrow[2][2];         /* +0x54D4: arrow to the target */
} Hud;

extern int func_8013A06C(void);                 /* link state: 0 none, 1 master, 2 slave */
extern char *D_801C34EC;                        /* game data */
extern char D_801C328C[];                       /* "%d" */
extern char D_801C32A0[];                       /* "%c%d" */

extern void **func_80132F10(void);
extern void **func_80132F28(void);
extern void AddPrim(void *ot, void *p);
extern void func_80106E38(Hud *h, void *ot, int view, int db, int z);
extern void func_80107094(Hud *h, void *ot, int db, int view, int z);
extern void func_80108650(Hud *h, void *ot, int view, int db, void **otp, int z);
extern void func_80108A94(Hud *h, int n, void *prim);
extern void func_80167F30(int n, Sprt *first, void *font, void *ot);
extern int func_8013A9F0(int id);
extern int func_80154AFC(char *buf, char *fmt, ...);  /* sprintf */
extern void func_801675F4(int font, int x, int y, char *s, void **otp);
extern void func_80167620(int font, int x, int y, char *s, void **otp);
extern void func_80167088(int a, int r, int g, int b);
extern void func_801253C8(int *out, int pos);
extern short func_8015A62C(int dx, int dz);
extern void func_801640EC(short *a);
extern void func_8012552C(int *pos, int *scr, int view);

#define P(h, view) ((h)->player[view])
/* Store form of a primitive's address: view part + (db part + base). */
#define PQ(T, h, off, db, view)     ((T *) ((view) * (int) sizeof(T) + ((db) * 2 * (int) sizeof(T) + (int) (h)) + (off)))
#define PQ3(T, h, off, i, db, view, n)     ((T *) ((view) * (n) * (int) sizeof(T)             + ((db) * 2 * (n) * (int) sizeof(T) + ((i) * 4 * (n) * (int) sizeof(T) + (int) (h))) + (off)))
/* The vertical line between the two views (x 0..3, y 0..240). */
static inline void set_divider(PolyF4 *d)
{
    d->x0 = 0;
    d->y0 = 0;
    d->x1 = 3;
    d->y1 = 0;
    d->x2 = 0;
    d->y2 = 240;
    d->x3 = 3;
    d->y3 = 240;
}

static inline void setXY0(Sprt *p, int x, int y)
{
    p->x = x;
    p->y = y;
}

static inline void setRGB0(Sprt *p, int r, int g, int b)
{
    p->r = r;
    p->g = g;
    p->b = b;
}

static inline void setXY4(PolyF4 *p, int x0, int y0, int x1, int y1, int x2, int y2,
                          int x3, int y3)
{
    p->x0 = x0;
    p->y0 = y0;
    p->x1 = x1;
    p->y1 = y1;
    p->x2 = x2;
    p->y2 = y2;
    p->x3 = x3;
    p->y3 = y3;
}

/* t1 holds the second ammo digit sprite in the weapon code (see below). */
#define DIG2 ((Sprt *) t1)
#define ACT(h, view) U8((char *) (h) + (view), 0x3EE)

typedef struct {
    char pad0[0x2B0];
    volatile unsigned char flags[9]; /* +0x2B0 */
} CarFlags;

static inline int hit(char *p, int i)
{
    int f = 0;
    if (((CarFlags *) p)->flags[i] != 0 || U8(p, 0x1A1) != 0) {
        f = 1;
    }
    return f;
}

/* @801072E0: draw the in-race HUD of one view (view 0/1; called from
 * 8010B5BC), into the OT returned by 80132F10/80132F28. h is the HUD record,
 * db (h + 0x3F6) its double-buffer index, car = h->player[view].
 * - view 1 (split screen): the divider line between the views;
 * - 80106E38 (another HUD part) when the view is active;
 * - the weapon list (9 weapons, car + 0x2A7 ammo, 99 = infinite, drawn
 *   red when car + 0x2B0[i] or car + 0x1A1 is set, green otherwise, bright
 *   for the selected weapon car + 0x2A5, with a cursor); weapon 7 blinks
 *   while car + 0x294 is set; the selected weapon's big icon and ammo, or
 *   when the view is inactive a small icon;
 * - the position (8013A9F0(car + 0x7D0)), the health bar (16 segments,
 *   car + 0x10C / + 0x110, blinking below 5), special counters (car + 0x2A4),
 *   the turbo bar (car + 0x28C / 1000), 80107094, the bar for car + 0x26C,
 *   either the flag icon (car + 0x82A) or an arrow to the target object
 *   (game + 0x10A64) when game + 0x127E5 is set, the money "$%d" (car + 0x7DC)
 *   and in mode 3 / 0x12688 == 4 the countdown (game + 0x12680 / 60).
 *
 * Link game: the only link test is for func_80108650, the mode-3 status panel
 * (game + 0x12754 digit and the +0x1106D/+0x11088 bonus meter). It is drawn
 * only when the view is active, the mode (game + 0x7D8) is 3 and 8013A06C()
 * returns 0: a link game never shows that panel. Everything else is drawn the
 * same way for both consoles. */
void __attribute__((section(".text_801072E0"))) func_801072E0(Hud *h, int view)
{
    int scr[3];
    int pos[3];
    char buf[32];
    short a;
    int db = (short) U16(h, 0x3F6);
    void **otp;
    short sel;
    int flag;
    void *ot;
    Sprt *s;
    int t1;
    short n;
    int i;

    if (view == 0) {
        otp = func_80132F10();
    } else {
        otp = func_80132F28();
    }
    ot = *otp;
    if (view == 1) {
        set_divider(&h->div[db][view]);
        AddPrim(ot, &h->div[db][view]);
    }
    if (ACT(h, view) != 0) {
        func_80106E38(h, ot, view, db, 0);
    }
    flag = 0;
    if (ACT(h, view) != 0 && func_8013A06C() == 0) {
        flag = S32(D_801C34EC, 0x7D8) == 3;
    }
    if (flag) {
        func_80108650(h, ot, view, db, otp, 0);
    }
    sel = S8(P(h, view), 0x2A5);
    if (ACT(h, view) != 0) {
        if (U8(P(h, view), 0x294) != 0) {
            U8((char *) h + view, 0x4D6E)++;
            if (S8((char *) h + view, 0x4D6E) >= 11) {
                U8((char *) h + view, 0x4D6C) ^= 1;
                U8((char *) h + view, 0x4D6E) = 0;
            }
        } else {
            U8((char *) h + view, 0x4D6C) = 1;
            U8((char *) h + view, 0x4D6E) = 0;
        }
        for (i = 0; i < 9; i++) {
            int f;
            char *q;
            char *p;

            s = &h->icon[i][db][view];
            n = S8(P(h, view) + i, 0x2A7);
            if (n < 0) {
                n = 99;
            }
            if (n <= 0) {
                continue;
            }
            f = 0;
            q = P(h, view);
            if (((CarFlags *) q)->flags[i] != 0 || U8(q, 0x1A1) != 0) {
                f = 1;
            }
            if (f) {
                if (sel == i) {
                    setRGB0(s, 255, 0, 0);
                } else {
                    setRGB0(s, 100, 7, 7);
                }
            } else if (sel == i) {
                setRGB0(s, 35, 255, 35);
            } else {
                setRGB0(s, 7, 100, 7);
            }
            s->x = 120;
            s->y = i * 7 + 151;
            if (sel == i) {
                PQ(Sprt, h, 0x4CEC, db, view)->x = 116;
                PQ(Sprt, h, 0x4CEC, db, view)->y = i * 7 + 149;
                AddPrim(ot, &h->cursor[db][view]);
                AddPrim(ot, &h->cursorMode[db][view]);
            }
            if (i == 7 && U8(p = P(h, view), 0x294) != 0) {
                if (U8((char *) h + view, 0x4D6C) != 0) {
                    if (hit(p, i)) {
                        setRGB0(s, 255, 0, 0);
                    } else {
                        setRGB0(s, 35, 255, 35);
                    }
                } else {
                    setRGB0(s, 0, 0, 0);
                }
            }
            AddPrim(ot, s);
            AddPrim(ot, &h->iconMode[i][db][view]);
            s = &h->ammo[i][db][view][0];
            t1 = (int) (s + 1);
            if (hit(P(h, view), i)) {
                if (sel == i) {
                    setRGB0(s, 255, 0, 0);
                    setRGB0(DIG2, 255, 0, 0);
                } else {
                    setRGB0(s, 100, 7, 7);
                    setRGB0(DIG2, 100, 7, 7);
                }
            } else if (sel == i) {
                setRGB0(s, 35, 255, 35);
                setRGB0(DIG2, 35, 255, 35);
            } else {
                setRGB0(s, 7, 100, 7);
                setRGB0(DIG2, 7, 100, 7);
            }
            if (i == 7 && U8(p = P(h, view), 0x294) != 0) {
                if (U8((char *) h + view, 0x4D6C) != 0) {
                    if (hit(p, i)) {
                        setRGB0(s, 255, 0, 0);
                        setRGB0(DIG2, 255, 0, 0);
                    } else {
                        setRGB0(s, 35, 255, 35);
                        setRGB0(DIG2, 35, 255, 35);
                    }
                } else {
                    setRGB0(s, 0, 0, 0);
                    setRGB0(DIG2, 0, 0, 0);
                }
            }
            if (n != 99) {
                if (n < 10) {
                    DIG2->x = 134;
                    DIG2->y = i * 7 + 151;
                    func_80167F30(n, DIG2, h->font, ot);
                } else {
                    s->x = 130;
                    s->y = i * 7 + 151;
                    DIG2->x = 134;
                    DIG2->y = i * 7 + 151;
                    func_80167F30(n, s, h->font, ot);
                }
                AddPrim(ot, &h->ammoMode[i][db][view]);
            }
        }
    }
    if (ACT(h, view) != 0) {
        Sprt *first;

        s = &h->big[sel][db][view];
        s->x = 86;
        s->y = 215;
        t1 = (int) &h->bigAmmo[sel][db][view][0];
        if (hit(P(h, view), sel)) {
            s->r = 255; s->g = 0; s->b = 0;
            DIG2->r = 255; DIG2->g = 0; DIG2->b = 0;
            PQ3(Sprt, h, 0x3D94 + 20, sel, db, view, 2)->r = 255;
            PQ3(Sprt, h, 0x3D94 + 20, sel, db, view, 2)->g = 0;
            PQ3(Sprt, h, 0x3D94 + 20, sel, db, view, 2)->b = 0;
        } else {
            s->r = 35; s->g = 255; s->b = 35;
            DIG2->r = 35; DIG2->g = 255; DIG2->b = 35;
            PQ3(Sprt, h, 0x3D94 + 20, sel, db, view, 2)->r = 35;
            PQ3(Sprt, h, 0x3D94 + 20, sel, db, view, 2)->g = 255;
            PQ3(Sprt, h, 0x3D94 + 20, sel, db, view, 2)->b = 35;
        }
        AddPrim(ot, s);
        AddPrim(ot, &h->bigMode[sel][db][view]);
        s = &h->bigAmmo[sel][db][view][0] + 1;
        n = S8(P(h, view) + sel, 0x2A7);
        if (n < 0) {
            n = 1;
        }
        if (n < 10) {
            s->x = 132;
            s->y = 215;
            func_80167F30(n, s, h->bigFont, ot);
        } else {
            DIG2->x = 126;
            DIG2->y = 215;
            s->x = 134;
            s->y = 215;
            func_80167F30(n, DIG2, h->bigFont, ot);
        }
        AddPrim(ot, &h->bigAmmoMode[sel][db][view]);
    } else {
        char *p = P(h, view);

        if (U8(p + sel, 0x2A7) != 0) {
            if (sel == 7 && hit(p, sel)) {
                sel = 9;
            }
            PQ3(Sprt, h, 0x4D74, sel, db, view, 1)->x = 120;
            PQ3(Sprt, h, 0x4D74, sel, db, view, 1)->y = 194;
            AddPrim(ot, &h->small[sel][db][view]);
            AddPrim(ot, &h->smallMode[sel][db][view]);
        }
    }
    if (ACT(h, view) != 0) {
        int k = func_8013A9F0(S32(P(h, view), 0x7D0)) & 0xFF;
        int m = k - 1;

        if (m >= 10) {
            func_80154AFC(buf, D_801C328C, m);
        } else {
            buf[0] = k + 47;
            buf[1] = 0;
        }
        func_801675F4(1, 141, 152, buf, otp);
    }
    if (ACT(h, view) != 0) {
        char *p = P(h, view);

        t1 = S32(p, 0x10C) * 16 / S32(p, 0x110);

        if (t1 > 16) {
            t1 = 16;
        }
        if (t1 == 0) {
            t1 = 1;
        }
        if (t1 < 5) {
            U8((char *) h + view, 0x4D72)++;
            if (S8((char *) h + view, 0x4D72) >= 6) {
                U8((char *) h + view, 0x4D70) ^= 1;
                U8((char *) h + view, 0x4D72) = 0;
            }
        } else {
            U8((char *) h + view, 0x4D70) = 1;
            U8((char *) h + view, 0x4D72) = 0;
        }
        for (i = 0; i < t1; i++) {
            PolyF4 *b = &h->health[i][db][view];

            func_80108A94(h, t1, b);
            if (U8((char *) h + view, 0x4D70) != 0) {
                setXY4(&h->health[i][db][view], 140, 193 - i * 2, 148, 193 - i * 2,
                       140, 194 - i * 2, 148, 194 - i * 2);
                AddPrim(ot, b);
            }
        }
    }
    if (ACT(h, view) != 0 && U8(P(h, view), 0x2A4) != 0) {
        PQ(Sprt, h, 0x4BBC, db, view)->x = 139;
        PQ(Sprt, h, 0x4BBC, db, view)->y = 201;
        AddPrim(ot, &h->spec1[db][view]);
        if (S8(P(h, view), 0x2A4) >= 2) {
            PQ(Sprt, h, 0x4C0C, db, view)->x = 144;
            PQ(Sprt, h, 0x4C0C, db, view)->y = 201;
            AddPrim(ot, &h->spec2[db][view]);
        }
        AddPrim(ot, &h->specMode[db][view]);
    }
    if (ACT(h, view) != 0) {
        PolyF4 *b;
        int w, x;

        t1 = S32(P(h, view), 0x28C) * 16 / 1000;
        if (t1 > 16) {
            t1 = 16;
        }
        b = &h->turbo[db][view];
        PQ(PolyF4, h, 0x4B5C, db, view)->x0 = (w = (16 - t1) * 2) + 84;
        PQ(PolyF4, h, 0x4B5C, db, view)->y0 = 209;
        PQ(PolyF4, h, 0x4B5C, db, view)->x1 = w + (x = t1 * 2 + 84);
        PQ(PolyF4, h, 0x4B5C, db, view)->y1 = 209;
        PQ(PolyF4, h, 0x4B5C, db, view)->x2 = w + 84;
        PQ(PolyF4, h, 0x4B5C, db, view)->y2 = 213;
        PQ(PolyF4, h, 0x4B5C, db, view)->x3 = w + x;
        PQ(PolyF4, h, 0x4B5C, db, view)->y3 = 213;
        func_80108A94(h, t1, b);
        AddPrim(ot, b);
    }
    if (ACT(h, view) != 0) {
        func_80107094(h, ot, db, view, 0);
    }
    if (ACT(h, view) != 0) {
        PolyF4 *b = &h->bar[db][view];

        func_80108A94(h, (500 - S32(P(h, view), 0x26C)) * 16 / 500, b);
        PQ(PolyF4, h, 0x4C8C, db, view)->x0 = 139;
        PQ(PolyF4, h, 0x4C8C, db, view)->y0 = 215;
        PQ(PolyF4, h, 0x4C8C, db, view)->x1 = 148;
        PQ(PolyF4, h, 0x4C8C, db, view)->y1 = 215;
        PQ(PolyF4, h, 0x4C8C, db, view)->x2 = 139;
        PQ(PolyF4, h, 0x4C8C, db, view)->y2 = 222;
        PQ(PolyF4, h, 0x4C8C, db, view)->x3 = 148;
        PQ(PolyF4, h, 0x4C8C, db, view)->y3 = 222;
        AddPrim(ot, b);
    }
    if (U8(P(h, view), 0x82A) != 0) {
        PQ(Sprt, h, 0x5374, db, view)->x = 48;
        PQ(Sprt, h, 0x5374, db, view)->y = 203;
        AddPrim(ot, &h->flag[db][view]);
        AddPrim(ot, &h->flagMode[db][view]);
    } else if (U8(D_801C34EC, 0x127E5) != 0) {
        char *o = D_801C34EC + 0x10A64;
        int t;
        char *p;

        func_801253C8(pos, S32(o, 0x38) + 0x1C);
        pos[2] += 80;
        p = P(h, view);
        a = func_8015A62C(pos[0] - S32(p, 0x1E4), pos[1] - S32(p, 0x1E8));
        a = a - ((int *) P(h, view))[0x1F8 / 4];
        func_801640EC(&a);
        t = a;
        if (t < 0) {
            t = -t;
        }
        if (t < 512) {
            func_8012552C(pos, scr, view);
            PQ(PolyF3, h, 0x54D4, db, view)->x0 = scr[0];
            PQ(PolyF3, h, 0x54D4, db, view)->y0 = scr[1];
            PQ(PolyF3, h, 0x54D4, db, view)->x1 = scr[0] - 5;
            PQ(PolyF3, h, 0x54D4, db, view)->y1 = scr[1] - 10;
            PQ(PolyF3, h, 0x54D4, db, view)->x2 = scr[0] + 5;
            PQ(PolyF3, h, 0x54D4, db, view)->y2 = scr[1] - 10;
            if (scr[2] > 80) {
                AddPrim(ot, &h->arrow[db][view]);
            }
        }
    }
    {
        int m = S32(P(h, view), 0x7DC);
        if (m > 99999) {
            m = 99999;
        }
        func_80154AFC(buf, D_801C32A0, '$', m);
        func_801675F4(1, 10, 213, buf, otp);
    }
    if (ACT(h, view) != 0) {
        int f = 0;

        if (S32(D_801C34EC, 0x7D8) == 3) {
            f = S32(D_801C34EC, 0x12688) == 4;
        }
        if (f) {
            int t = S32(D_801C34EC, 0x12680) / 60;
            if (t > 0) {
                func_80154AFC(buf, D_801C328C, t);
                func_80167088(0, 200, 200, 50);
                func_80167620(0, 120, 30, buf, otp);
            }
        }
    }
}

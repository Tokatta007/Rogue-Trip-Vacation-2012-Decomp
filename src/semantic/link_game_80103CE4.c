/* Rogue Trip in-race HUD of one view (80103CE4), a caller of the link-state
 * getter func_8013A06C (0 no link game, 1 master, 2 slave).
 * See docs/LINK_CABLE.md, Layer 4.
 *
 * Built like the other link_game units: PsyQ 4.4, "-O2 -G8 -fvolatile",
 * ASPSX 2.56, delay slots by the compiler. No data of its own (the strings
 * are the module's .sdata/.rodata, referenced as externs).
 *
 * Exact (1717/1717). Needs maspsx to put the load-delay nop after all
 * consecutive labels: at 80104E50 cc1's reorg redirects both false-branches
 * of the "specials" block past the redundant reload `lw t2,188(sp)` and
 * emits two labels in a row; with only the first label moved in front of
 * the nop, the branch at 80104DC0 lands one word late (1716/1717).
 *
 * Matching notes (the hard parts):
 * - Register allocation: `view` must lose a callee-saved register to `ot`.
 *   Both are live over the whole function; view's live length is doubled
 *   (parameter REG_EQUIV). ot wins only because both digit calls in the
 *   weapon loop and in the selected-weapon block are written once per branch
 *   (cross-jumped later into one jal with a nop in its delay slot).
 * - The weapon loop: retail hoists the constant 255 (s2) out of the loop;
 *   loop.c does that only when the combined lifetime of the 255 loads is long
 *   enough, which the rgb() inline helper gives. `n` (short) and `m` (int)
 *   are function-level variables shared by several sections.
 * - Primitive arrays are addressed through casts of `(char *) h + offset`
 *   (volatile under -fvolatile, so base+offset and field offsets stay
 *   separate); the per-view bytes as `((u8 *) h + view)[offset]`.
 * - The weapon-hit test is an inline returning a materialised int; the one
 *   loading the car itself (view_car_hit) must declare `r` before the load so
 *   `r` gets v1 and the car pointer a0 at the tie sites.
 * - 0x10A64 of the game record is reached through a pointer variable (retail
 *   builds the full 0x10A64 constant), the photo points as a struct array
 *   (retail splits the 0x12208 offset), D_801C3FA8 is a 20-byte struct.
 */

#define U16(p, o) (*(unsigned short *) ((char *) (p) + (o)))
#define S32(p, o) (*(int *) ((char *) (p) + (o)))
#define PTR(p, o) (*(char **) ((char *) (p) + (o)))

typedef struct { unsigned int tag; unsigned char r0, g0, b0, code; short x0, y0; unsigned char u0, v0; unsigned short clut; short w, h; } SPRT;
typedef struct { unsigned int tag; unsigned int code[2]; } DR_MODE;
typedef struct { unsigned int tag; unsigned char r0, g0, b0, code; short x0, y0, x1, y1, x2, y2, x3, y3; } POLY_F4;
typedef struct { unsigned int tag; unsigned char r0, g0, b0, code; short x0, y0, x1, y1, x2, y2; } POLY_F3;
typedef struct {
    unsigned char tag[3], len;
    unsigned char r0, g0, b0, code;
    short x0, y0; unsigned char u0, v0; unsigned short clut;
    short x1, y1; unsigned char u1, v1; unsigned short tpage;
    short x2, y2; unsigned char u2, v2; unsigned short pad1;
    short x3, y3; unsigned char u3, v3; unsigned short pad2;
} POLY_FT4;

typedef struct { unsigned long *ot; int pad; char *prim; } DB;
typedef struct { int x, y, z, pad; } VEC;

/* car record (fields used here) */
typedef struct {
    char pad0[0x10C];
    int hp;                     /* 0x10C */
    int hp_max;                 /* 0x110 */
    char pad114[0x1A1 - 0x114];
    unsigned char dead;         /* 0x1A1 */
    char pad1A2[0x1E4 - 0x1A2];
    int x;                      /* 0x1E4 */
    int z;                      /* 0x1E8 */
    char pad1EC[0x1F8 - 0x1EC];
    int heading;                /* 0x1F8 */
    char pad1FC[0x20C - 0x1FC];
    int speed;                  /* 0x20C */
    char pad210[0x26C - 0x210];
    int v26C;                   /* 0x26C */
    char pad270[0x28C - 0x270];
    int turbo;                   /* 0x28C */
    char pad290[0x294 - 0x290];
    unsigned char ammoWarn;         /* 0x294 */
    char pad295[0x2A4 - 0x295];
    unsigned char specials;         /* 0x2A4 */
    unsigned char weapon;       /* 0x2A5 */
    unsigned char pad2A6;
    unsigned char ammo[9];      /* 0x2A7 */
    unsigned char hit[9];       /* 0x2B0 */
    char pad2B9[0x7D0 - 0x2B9];
    int player;                 /* 0x7D0 */
    char pad7D4[0x7DC - 0x7D4];
    int money;                  /* 0x7DC */
    char pad7E0[0x82A - 0x7E0];
    unsigned char camera;         /* 0x82A */
} Car;

typedef struct {
    char pad0[0x3A0];
    Car *volatile car[16];      /* 0x3A0 */
    int flash[3];               /* 0x3E0 */
} Hud;

#define CHK(m, o) typedef char chk_##m[(((int) &((Car *) 0)->m) == (o)) ? 1 : -1]
CHK(hp, 0x10C); CHK(dead, 0x1A1); CHK(heading, 0x1F8); CHK(speed, 0x20C); CHK(turbo, 0x28C);
CHK(specials, 0x2A4); CHK(ammo, 0x2A7); CHK(hit, 0x2B0); CHK(player, 0x7D0); CHK(money, 0x7DC); CHK(camera, 0x82A);

/* game record (fields used here) */
typedef struct { int x, z, y; } Pt;
typedef struct { char pad[0x38]; char *obj; } Tour;
typedef struct {
    char pad0[0x7D8];
    int type;                   /* 0x7D8 */
    char pad7DC[0x10A64 - 0x7DC];
    Tour tour;                  /* 0x10A64 */
    char pad10AA0[0x11D2C - 0x10AA0];
    unsigned char b11D2C;       /* 0x11D2C */
    char pad11D2D[0x12208 - 0x11D2D];
    Pt photo[27];               /* 0x12208 */
    char pad1234C[0x12355 - 0x1234C];
    unsigned char photo_sel;    /* 0x12355 */
    char pad12356[0x12680 - 0x12356];
    int timer;                  /* 0x12680 */
    int pad12684;
    int state;                  /* 0x12688 */
    char pad1268C[0x127E5 - 0x1268C];
    unsigned char b127E5;       /* 0x127E5 */
} Game;
#define CHKG(m, o) typedef char chkg_##m[(((int) &((Game *) 0)->m) == (o)) ? 1 : -1]
CHKG(type, 0x7D8); CHKG(tour, 0x10A64); CHKG(b11D2C, 0x11D2C); CHKG(photo, 0x12208);
CHKG(photo_sel, 0x12355); CHKG(timer, 0x12680); CHKG(state, 0x12688); CHKG(b127E5, 0x127E5);

/* per-buffer, per-view primitive arrays in the HUD record */
#define HP(t, d, o) ((t (*)d) ((char *) h + (o)))
#define H_objIcon    HP(SPRT, [2], 0x1AE8)
#define H_objIconMode HP(DR_MODE, [2], 0x1CC8)
#define H_merc0       HP(SPRT, [2], 0x1DEC)
#define H_mercMode0      HP(DR_MODE, [2], 0x1E3C)
#define H_merc1       HP(SPRT, [2], 0x1E6C)
#define H_mercMode1      HP(DR_MODE, [2], 0x1EBC)
#define H_merc2       HP(SPRT, [2], 0x1EEC)
#define H_mercMode2      HP(DR_MODE, [2], 0x1F3C)
#define H_merc3       HP(SPRT, [2], 0x1F6C)
#define H_mercMode3      HP(DR_MODE, [2], 0x1FBC)
#define H_panel    HP(POLY_F4, [2], 0x1FEC)
#define H_frame0       HP(SPRT, [2], 0x204C)
#define H_frameMode0      HP(DR_MODE, [2], 0x209C)
#define H_frame1       HP(SPRT, [2], 0x20CC)
#define H_frameMode1      HP(DR_MODE, [2], 0x211C)
#define H_icon    HP(SPRT, [2][2], 0x214C)
#define H_iconMode HP(DR_MODE, [2][2], 0x278C)
#define H_frame2       HP(SPRT, [2], 0x2B4C)
#define H_frameMode2      HP(DR_MODE, [2], 0x2B9C)
#define H_big     HP(SPRT, [2][2], 0x2BCC)
#define H_bigMode  HP(DR_MODE, [2][2], 0x320C)
#define H_ammo     HP(SPRT, [2][2][2], 0x35CC)
#define H_ammoMode  HP(DR_MODE, [2][2], 0x3B6C)
#define H_bigAmmo     HP(SPRT, [2][2][2], 0x3D94)
#define H_bigAmmoMode  HP(DR_MODE, [2][2], 0x4334)
#define H_health       HP(POLY_F4, [2][2], 0x455C)
#define H_turbo    HP(POLY_F4, [2], 0x4B5C)
#define H_spec1   HP(SPRT, [2], 0x4BBC)
#define H_spec2   HP(SPRT, [2], 0x4C0C)
#define H_specMode   HP(DR_MODE, [2], 0x4C5C)
#define H_bar     HP(POLY_F4, [2], 0x4C8C)
#define H_cursor      HP(SPRT, [2], 0x4CEC)
#define H_cursorMode     HP(DR_MODE, [2], 0x4D3C)
#define H_name     HP(SPRT, [2][2], 0x4D74)
#define H_nameMode  HP(DR_MODE, [2][2], 0x5094)
#define H_low0    HP(SPRT, [2], 0x5274)
#define H_lowMode0    HP(DR_MODE, [2], 0x52C4)
#define H_low1    HP(SPRT, [2], 0x52F4)
#define H_lowMode1    HP(DR_MODE, [2], 0x5344)
#define H_cam0    HP(SPRT, [2], 0x5374)
#define H_camMode0    HP(DR_MODE, [2], 0x53C4)
#define H_cam1    HP(SPRT, [2], 0x53F4)
#define H_camMode1    HP(DR_MODE, [2], 0x5444)
#define H_marker     HP(POLY_F3, [2], 0x54D4)

/* per-view bytes, reached as (h + view)->field */
#define VB(h, v, o) ((unsigned char *) ((char *) (h) + (v)))[o]
#define ACTIVE(h, v) VB(h, v, 0x3EE)
#define CAR(h, v) (h)->car[v]

extern int func_8013A06C(void);
extern Game *D_801C34EC;
typedef struct { int count; int next; int timer_lo; int timer_hi; int wait; } MercInfo;
extern MercInfo D_801C3FA8;   /* "N Auto Mercs Left" counter (func_8010B684) */
extern char *D_8018098C[];
extern char D_801C328C[];   /* "%d" */
extern char D_801C3290[];   /* "Tourist" */
extern char D_801C3298[];   /* "%c%5d" */
extern char D_800F310C[];   /* "Photo Op" */
extern char D_800F3118[];   /* "SECONDS LEFT: %d" */

extern DB *func_80132F10(void);
extern DB *func_80132F28(void);
extern void func_80106E38(Hud *, unsigned long *, int, int, int);
extern unsigned short func_8015B5AC(int, int, int, int);
extern void AddPrim(void *, void *);
extern void func_80108650(Hud *, unsigned long *, int, int, DB *, int);
extern void func_8010B684(Hud *);
extern void func_80167620(int, int, int, char *, DB *);
extern void func_801675F4(int, int, int, char *, DB *);
extern void func_80167F30(int, SPRT *, char *, unsigned long *);
extern unsigned char func_8013A9F0(int);
extern void func_80154AFC(char *, char *, ...);
extern void func_80108A94(Hud *, int, void *);
extern short func_80178A1C(void);
extern void func_80167088(int, int, int, int);
extern void func_80167154(int);
extern unsigned int func_80178A70(void);
extern short func_8015A62C(int, int);
extern void func_801640EC(short *);
extern void func_8012552C(void *, VEC *, int);
extern void func_801253C8(VEC *, char *);

static inline int hud_local(Hud *h, int view)
{
    int r = 0;
    if (ACTIVE(h, view))
        r = func_8013A06C() == 0;
    return r;
}

static inline void rgb(SPRT *p, int r, int g, int b)
{
    p->r0 = r;
    p->g0 = g;
    p->b0 = b;
}

static inline int view_car_hit(Hud *h, int view, int i)
{
    int r = 0;
    Car *c = CAR(h, view);
    if (c->hit[i] || c->dead)
        r = 1;
    return r;
}

static inline int car_hit(Car *c, int i)
{
    int r = 0;
    if (c->hit[i] || c->dead)
        r = 1;
    return r;
}

/* 80103CE4 (called once per view from 8010B5BC): draw view `view`'s HUD
 * into its order table. `h` is the HUD record: primitives double-buffered as
 * [..][bi][view] (bi = h+0x3F6, the draw buffer), the view's car at
 * h->car[view], per-view flags at h+0x3EE+view (HUD shown) etc.
 * Drawn, in order: the view frame (80106E38); a photo thumbnail while
 * h->flash[view] counts down (POLY_FT4 from the other frame buffer); the
 * nine weapon icons with ammo counts (red when jammed/dead, the selected
 * one highlighted with a cursor, weapon 7 blinking while ammoWarn is set);
 * the selected weapon's big icon, ammo and name; the player number
 * (8013A9F0); the 16-segment health bar (blinking below 5); special items;
 * the turbo bar; the panel frame; a second bar (0x26C); the speedometer;
 * the Photo Op / Tourist markers; the money ("$%5d") and, in game type 1 /
 * state 4, "SECONDS LEFT".
 * Link game: three parts are drawn only when the view is shown AND
 * func_8013A06C() == 0 (no link game): the objective gauge (80108650), the
 * objective icon picked by h+0x1AE4 (->0x7C0 >> 4, while < 177) and the
 * "N Auto Mercs Left" counter with its frame (8010B684 updates the count in
 * D_801C3FA8). A link game has no AI mercs or objective, so the master and
 * the slave both hide them; everything else is drawn as in a local game. */
__attribute__((section(".text_80103CE4")))
void func_80103CE4(Hud *h, int view)
{
    VEC scr;
    VEC pos;
    char buf[32];
    short ang;
    DB *db;
    unsigned long *ot;
    int bi;
    short sel;
    int i;
    short n;
    int m;
    SPRT *spr;
    SPRT *d1;
    SPRT *q;

    bi = (short) U16(h, 0x3F6);
    if (view == 0)
        db = func_80132F10();
    else
        db = func_80132F28();
    ot = db->ot;

    if (ACTIVE(h, view))
        func_80106E38(h, ot, view, bi, 0);

    if (h->flash[view] > 0) {
        POLY_FT4 *p = (POLY_FT4 *) db->prim;
        p->len = 9;
        p->code = 0x2C;
        p->r0 = 255; p->g0 = 255; p->b0 = 255;
        p->u0 = 64; p->v0 = 97;
        p->u1 = 255; p->v1 = 97;
        p->u2 = 64; p->v2 = 240;
        p->u3 = 255; p->v3 = 240;
        p->x0 = 12; p->y0 = 21;
        p->x1 = 85; p->y1 = 21;
        p->x2 = 12; p->y2 = 67;
        p->x3 = 85; p->y3 = 67;
        if (bi)
            p->tpage = func_8015B5AC(2, 0, 320, 0);
        else
            p->tpage = func_8015B5AC(2, 0, 0, 0);
        AddPrim(ot, p);
        db->prim += 160;
        h->flash[view]--;
    }

    if (hud_local(h, view))
        func_80108650(h, ot, view, bi, db, 0);

    {
        int r = 0;
        if (PTR(h, 0x1AE4))
            r = S32(PTR(h, 0x1AE4), 0x7C0) < 177;
        if (r) {
            if (hud_local(h, view)) {
                AddPrim(ot, &H_objIcon[(S32(PTR(h, 0x1AE4), 0x7C0) >> 4) - 1][bi]);
                AddPrim(ot, &H_objIconMode[(S32(PTR(h, 0x1AE4), 0x7C0) >> 4) - 1][bi]);
            }
        }
    }

    if (hud_local(h, view)) {
        func_8010B684(h);
        func_80167620(1, 202, 17, D_8018098C[D_801C3FA8.count], db);
        AddPrim(ot, &H_merc0[bi][view]);
        AddPrim(ot, &H_mercMode0[bi][view]);
        AddPrim(ot, &H_merc1[bi][view]);
        AddPrim(ot, &H_mercMode1[bi][view]);
        AddPrim(ot, &H_merc2[bi][view]);
        AddPrim(ot, &H_mercMode2[bi][view]);
        AddPrim(ot, &H_merc3[bi][view]);
        AddPrim(ot, &H_mercMode3[bi][view]);
    }

    sel = (signed char) CAR(h, view)->weapon;
    if (ACTIVE(h, view)) {
        if (CAR(h, view)->ammoWarn) {
            VB(h, view, 0x4D6E)++;
            if ((signed char) VB(h, view, 0x4D6E) > 10) {
                VB(h, view, 0x4D6C) ^= 1;
                VB(h, view, 0x4D6E) = 0;
            }
        } else {
            VB(h, view, 0x4D6C) = 1;
            VB(h, view, 0x4D6E) = 0;
        }
        for (i = 0; i < 9; i++) {
            spr = &H_icon[i][bi][view];
            n = (signed char) CAR(h, view)->ammo[i];
            if (n < 0)
                n = 99;
            if (n > 0) {
                if (view_car_hit(h, view, i)) {
                    if (sel == i) {
                        rgb(spr, 255, 0, 0);
                    } else {
                        rgb(spr, 100, 7, 7);
                    }
                } else {
                    if (sel == i) {
                        rgb(spr, 35, 255, 35);
                    } else {
                        rgb(spr, 7, 100, 7);
                    }
                }
                spr->x0 = 280;
                spr->y0 = i * 7 + 151;
                if (sel == i) {
                    H_cursor[bi][view].x0 = 276;
                    H_cursor[bi][view].y0 = i * 7 + 149;
                    AddPrim(ot, &H_cursor[bi][view]);
                    AddPrim(ot, &H_cursorMode[bi][view]);
                }
                if (i == 7) {
                    Car *c = CAR(h, view);
                    if (c->ammoWarn) {
                        if (VB(h, view, 0x4D6C)) {
                            if (car_hit(c, i)) {
                                rgb(spr, 255, 0, 0);
                            } else {
                                rgb(spr, 35, 255, 35);
                            }
                        } else {
                            rgb(spr, 0, 0, 0);
                        }
                    }
                }
                AddPrim(ot, spr);
                AddPrim(ot, &H_iconMode[i][bi][view]);
                spr = H_ammo[i][bi][view];
                d1 = spr + 1;
                if (view_car_hit(h, view, i)) {
                    if (sel == i) {
                        rgb(spr, 255, 0, 0);
                        rgb(d1, 255, 0, 0);
                    } else {
                        rgb(spr, 100, 7, 7);
                        rgb(d1, 100, 7, 7);
                    }
                } else {
                    if (sel == i) {
                        rgb(spr, 35, 255, 35);
                        rgb(d1, 35, 255, 35);
                    } else {
                        rgb(spr, 7, 100, 7);
                        rgb(d1, 7, 100, 7);
                    }
                }
                if (i == 7) {
                    Car *c = CAR(h, view);
                    if (c->ammoWarn) {
                        if (VB(h, view, 0x4D6C)) {
                            if (car_hit(c, i)) {
                                rgb(spr, 255, 0, 0);
                                rgb(d1, 255, 0, 0);
                            } else {
                                rgb(spr, 35, 255, 35);
                                rgb(d1, 35, 255, 35);
                            }
                        } else {
                            rgb(spr, 0, 0, 0);
                            rgb(d1, 0, 0, 0);
                        }
                    }
                }
                if (n != 99) {
                    if (n < 10) {
                        q = d1;
                        q->x0 = 294;
                        q->y0 = i * 7 + 151;
                        func_80167F30(n, q, (char *) h + 0x3D1C, ot);
                    } else {
                        q = spr;
                        q->x0 = 290;
                        q->y0 = i * 7 + 151;
                        d1->x0 = 294;
                        d1->y0 = i * 7 + 151;
                        func_80167F30(n, q, (char *) h + 0x3D1C, ot);
                    }
                    AddPrim(ot, &H_ammoMode[i][bi][view]);
                }
            }
        }
    }

    if (ACTIVE(h, view)) {
        H_big[sel][bi][view].x0 = 246;
        H_big[sel][bi][view].y0 = 215;
        if (view_car_hit(h, view, sel)) {
            rgb(&H_big[sel][bi][view], 255, 0, 0);
            H_bigAmmo[sel][bi][view][0].r0 = 255;
            H_bigAmmo[sel][bi][view][0].g0 = 0;
            H_bigAmmo[sel][bi][view][0].b0 = 0;
            H_bigAmmo[sel][bi][view][1].r0 = 255;
            H_bigAmmo[sel][bi][view][1].g0 = 0;
            H_bigAmmo[sel][bi][view][1].b0 = 0;
        } else {
            rgb(&H_big[sel][bi][view], 35, 255, 35);
            H_bigAmmo[sel][bi][view][0].r0 = 35;
            H_bigAmmo[sel][bi][view][0].g0 = 255;
            H_bigAmmo[sel][bi][view][0].b0 = 35;
            H_bigAmmo[sel][bi][view][1].r0 = 35;
            H_bigAmmo[sel][bi][view][1].g0 = 255;
            H_bigAmmo[sel][bi][view][1].b0 = 35;
        }
        AddPrim(ot, &H_big[sel][bi][view]);
        AddPrim(ot, &H_bigMode[sel][bi][view]);
        n = (signed char) CAR(h, view)->ammo[sel];
        if (n < 0)
            n = 1;
        if (n < 10) {
            H_bigAmmo[sel][bi][view][1].x0 = 292;
            H_bigAmmo[sel][bi][view][1].y0 = 215;
            func_80167F30(n, &H_bigAmmo[sel][bi][view][1], (char *) h + 0x44E4, ot);
        } else {
            H_bigAmmo[sel][bi][view][0].x0 = 286;
            H_bigAmmo[sel][bi][view][0].y0 = 215;
            H_bigAmmo[sel][bi][view][1].x0 = 294;
            H_bigAmmo[sel][bi][view][1].y0 = 215;
            func_80167F30(n, &H_bigAmmo[sel][bi][view][0], (char *) h + 0x44E4, ot);
        }
        AddPrim(ot, &H_bigAmmoMode[sel][bi][view]);
    }

    {
        Car *c = CAR(h, view);
        if (c->ammo[sel]) {
            if (sel == 7) {
                if (car_hit(c, 7))
                    sel = 9;
            }
            if (ACTIVE(h, view)) {
                H_name[sel][bi][view].x0 = 243;
                H_name[sel][bi][view].y0 = 172;
            } else {
                H_name[sel][bi][view].x0 = 280;
                H_name[sel][bi][view].y0 = 194;
            }
            AddPrim(ot, &H_name[sel][bi][view]);
            AddPrim(ot, &H_nameMode[sel][bi][view]);
        }
    }

    if (ACTIVE(h, view)) {
        int m = func_8013A9F0(CAR(h, view)->player) - 1;
        if (m >= 10)
            func_80154AFC(buf, D_801C328C, m);
        else {
            buf[0] = m + '0';
            buf[1] = 0;
        }
        func_801675F4(1, 301, 152, buf, db);
    }

    if (ACTIVE(h, view)) {
        Car *c = CAR(h, view);

        m = (c->hp * 16) / c->hp_max;
        if (m > 16)
            m = 16;
        if (m == 0)
            m = 1;
        if (m < 5) {
            VB(h, view, 0x4D72)++;
            if ((signed char) VB(h, view, 0x4D72) > 5) {
                VB(h, view, 0x4D70) ^= 1;
                VB(h, view, 0x4D72) = 0;
            }
        } else {
            VB(h, view, 0x4D70) = 1;
            VB(h, view, 0x4D72) = 0;
        }
        for (i = 0; i < m; i++) {
            POLY_F4 *p = &H_health[i][bi][view];
            func_80108A94(h, m, p);
            if (VB(h, view, 0x4D70))
                AddPrim(ot, p);
        }
    }

    if (ACTIVE(h, view)) {
        if (CAR(h, view)->specials) {
            AddPrim(ot, &H_spec1[bi][view]);
            if ((signed char) CAR(h, view)->specials >= 2)
                AddPrim(ot, &H_spec2[bi][view]);
            AddPrim(ot, &H_specMode[bi][view]);
        }
    }

    if (ACTIVE(h, view)) {
        m = (CAR(h, view)->turbo * 16) / 1000;
        if (m > 16)
            m = 16;
        H_turbo[bi][view].x0 = (16 - m) * 2 + 244;
        H_turbo[bi][view].y0 = 209;
        H_turbo[bi][view].x1 = (16 - m) * 2 + 244 + m * 2;
        H_turbo[bi][view].y1 = 209;
        H_turbo[bi][view].x2 = (16 - m) * 2 + 244;
        H_turbo[bi][view].y2 = 213;
        H_turbo[bi][view].x3 = (16 - m) * 2 + 244 + m * 2;
        H_turbo[bi][view].y3 = 213;
        func_80108A94(h, m, &H_turbo[bi][view]);
        AddPrim(ot, &H_turbo[bi][view]);
    }

    if (ACTIVE(h, view)) {
        AddPrim(ot, &H_frame0[bi][view]);
        AddPrim(ot, &H_frameMode0[bi][view]);
        AddPrim(ot, &H_frame1[bi][view]);
        AddPrim(ot, &H_frameMode1[bi][view]);
        AddPrim(ot, &H_frame2[bi][view]);
        AddPrim(ot, &H_frameMode2[bi][view]);
        AddPrim(ot, &H_panel[bi][view]);
    }

    if (ACTIVE(h, view)) {
        func_80108A94(h, ((500 - CAR(h, view)->v26C) * 16) / 500, &H_bar[bi][view]);
        AddPrim(ot, &H_bar[bi][view]);
    }

    if (ACTIVE(h, view)) {
        Car *c = CAR(h, view);
        int m = ((c->speed >> 6) * 1000) / (func_80178A1C() * 195);
        if (m < 0)
            m = -m;
        func_80154AFC(buf, D_801C328C, m);
        func_80167088(0, 30, 200, 30);
        func_801675F4(0, 204, 211, buf, db);
        func_80167154(0);
    }

    if (CAR(h, view)->camera) {
        AddPrim(ot, &H_cam0[bi][view]);
        AddPrim(ot, &H_camMode0[bi][view]);
        if (ACTIVE(h, view)) {
            AddPrim(ot, &H_cam1[bi][view]);
            AddPrim(ot, &H_camMode1[bi][view]);
        }
        if (D_801C34EC->state == 0 && func_80178A70() < 3000) {
            Car *c = CAR(h, view);
            int r = 0;
            if (c->camera)
                r = (signed char) D_801C34EC->photo_sel >= 0;
            if (r) {
                int a;
                ang = func_8015A62C(D_801C34EC->photo[(signed char) D_801C34EC->photo_sel].x - c->x,
                                    D_801C34EC->photo[(signed char) D_801C34EC->photo_sel].z - c->z);
                ang = ang - CAR(h, view)->heading;
                func_801640EC(&ang);
                a = ang;
                if (a < 0)
                    a = -a;
                if (a < 512) {
                    func_8012552C(&D_801C34EC->photo[(signed char) D_801C34EC->photo_sel], &scr, view);
                    if (scr.z > 800)
                        func_80167620(1, scr.x, scr.y - 21, D_800F310C, db);
                }
            }
        }
    } else {
        int r = 0;
        if (D_801C34EC->b127E5)
            r = D_801C34EC->b11D2C == 0;
        if (r) {
            Car *c;
            int a;
            Tour *t = &D_801C34EC->tour;
            func_801253C8(&pos, t->obj + 28);
            pos.z += 80;
            c = CAR(h, view);
            ang = func_8015A62C(pos.x - c->x, pos.y - c->z);
            ang = ang - CAR(h, view)->heading;
            func_801640EC(&ang);
            a = ang;
            if (a < 0)
                a = -a;
            if (a < 512) {
                func_8012552C(&pos, &scr, view);
                H_marker[bi][view].x0 = scr.x;
                H_marker[bi][view].y0 = scr.y;
                H_marker[bi][view].x1 = scr.x - 5;
                H_marker[bi][view].y1 = scr.y - 10;
                H_marker[bi][view].x2 = scr.x + 5;
                H_marker[bi][view].y2 = scr.y - 10;
                if (scr.z > 80)
                    AddPrim(ot, &H_marker[bi][view]);
                if (D_801C34EC->state == 0 && func_80178A70() < 3000 && scr.z > 800)
                    func_80167620(1, scr.x, scr.y - 21, D_801C3290, db);
            }
        }
    }

    {
        int m = CAR(h, view)->money;
        if (m > 99999)
            m = 99999;
        func_80154AFC(buf, D_801C3298, m > 0 ? '$' : ' ', m);
        func_801675F4(1, 16, 207, buf, db);
    }

    if (ACTIVE(h, view)) {
        int r;
        AddPrim(ot, &H_low0[bi][view]);
        AddPrim(ot, &H_lowMode0[bi][view]);
        AddPrim(ot, &H_low1[bi][view]);
        AddPrim(ot, &H_lowMode1[bi][view]);
        r = 0;
        if (D_801C34EC->type == 1)
            r = D_801C34EC->state == 4;
        if (r && D_801C34EC->timer / 60 > 0) {
            func_80154AFC(buf, D_800F3118, D_801C34EC->timer / 60);
            func_80167088(0, 200, 200, 50);
            func_80167620(0, 200, 30, buf, db);
        }
    }
}

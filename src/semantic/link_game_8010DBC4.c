/* Rogue Trip car contact handling (8010DBC4), a caller of the link-state
 * getter func_8013A06C (0 no link game, 1 master, 2 slave). See
 * docs/LINK_CABLE.md (Layer 4).
 *
 * Byte-exact (1002 words).
 * Built with PsyQ 4.4 "-O2 -G8" (no -fvolatile), ASPSX 2.56, .rodata at
 * 800F314C (the {0, 400, 80} vector, a pad word, then the 19-entry switch
 * table at 800F315C). Car fields are volatile through the macros; the game
 * data sub-structs at +0x10FF4 / +0x12344 are not (with -fvolatile the
 * 80152434 argument loads come out in the wrong order). */

#define U8(p, o) (*(volatile unsigned char *) ((char *) (p) + (o)))
#define S8(p, o) (*(volatile signed char *) ((char *) (p) + (o)))
#define S16(p, o) (*(volatile short *) ((char *) (p) + (o)))
#define S32(p, o) (*(volatile int *) ((char *) (p) + (o)))
#define PTR(p, o) (*(char *volatile *) ((char *) (p) + (o)))

typedef struct {
    int x, y, z;
} Vec3;

/* A contact of the car (32-byte records from car + 0x2C8). */
typedef struct {
    volatile int active;
    volatile int x, y, z;       /* +4 */
    volatile int depth;         /* +0x10 */
    int pad14, pad18;
    volatile unsigned short id; /* +0x1C: entity hit (attacker/object id) */
    volatile unsigned short kind;       /* +0x1E: what was touched */
} Contact;

typedef struct {
    Vec3 *pos;
    int unk4;
    int left, right;            /* +8, +0xC */
    int unk10, unk14;
} SoundCtl;

extern int func_8013A06C(void);                 /* link state */
extern char *D_801C34EC;                        /* game data */
extern int D_801C34F0;                          /* hit dispatcher context */
extern int D_801C34F4;                          /* sound bank */
extern Vec3 D_801C3100;
extern SoundCtl D_801C31CC;
extern int rand(void);
extern short func_80178A1C();                   /* frame time */
extern void func_8016FD98(void *, void *, int);
extern void func_8013FD30(void *, int, int, int);
extern void func_801254DC(volatile void *, int, int, int);
extern char *func_80124CBC(char *);
extern void func_801253F4(void *, void *);
extern void func_8012A154(int, void *, int, int, int, void *);
extern void func_80152434(void *, void *, int, int);
extern int func_8012BD30(void *, ...);
extern void func_8013BDCC(int, int, int);
extern void func_8010B62C(void *, int, int);
extern void func_8012AF9C(void *, int, int);
extern int func_8012C3BC(void *, int);
extern void func_8016408C(int *);
extern void func_8016D6BC(int, int);
extern void mathMulTransVec(void *, void *, void *);
extern void func_80124FC8(void *, volatile void *, volatile void *);
extern void func_801544FC(void *, void *, void *);
extern void func_8011BC6C(void *, int, int, int, int, int);
extern void func_80125DA4(char *);
extern void func_8010F5B8(void *, int, int);
extern void func_801256B0(void *, int, void *, void *, void *, int);
extern void func_80124F78(void *, void *, void *);

#define iabs(x) __builtin_abs(x)

/* game + 0x10FF4 */
typedef struct {
    char pad[0x13C];
    int unk13C;
} GameSub;

/* game + 0x6220: sound/HUD state */
typedef struct {
    char pad[0x3E0];
    volatile int flash[4];               /* +0x3E0 per view */
} Hud;

static inline GameSub *game_sub(char *g)
{
    return (GameSub *) (g + 0x10FF4);
}

typedef struct {
    char pad[0x12344];
    unsigned char flag[4];      /* +0x12344 */
} GameF;

static inline void add_score(char *p, int n)
{
    S32(p, 0x7DC) += n;
}

static inline void sound_call2(int r, int bank)
{
    D_801C31CC.right = r;
    func_8013BDCC(bank, 0, 0);
}

#define HUD(g) ((Hud *) ((g) + 0x6220))

typedef struct {
    char pad[0x2C8];
    Contact contacts[8];
} CarC;

#define CONTACT(p, i) ((Contact *) ((char *) (p) + 0x2C8 + (i) * 32))

/* 8010DBC4 (called from 8010D5FC, per car per frame): process the car's
 * contact records (32 bytes each at car + 0x2C8, indices [1,2) for a
 * normal car or [4, obj->0x48) when car+0x829 is set).
 *  1. Drop contacts below z -2400 and duplicates at the same point (the one
 *     with the smaller |depth| survives); car+0x85 = "has contacts".
 *  2. With car+0x19C, sub-records whose byte +0x596 is set are copied in
 *     front of the list (func_8016FD98) and func_8013FD30(car, 3, 2, 2).
 *  3. For each active contact by kind (+0x1E):
 *     - 16..287 (ground): car+0x53B = 1.
 *     - >= 300 with an entity id (+0x1C): ram damage |speed(0x23C)| * 10 /
 *       mass(0xD0) (doubled with option 0x197), reported once per frame to
 *       the hit dispatcher func_8012A154(D_801C34F0, pos, dmg, 1, id, ...);
 *       kind 530 can trigger func_80152434 (views at game+0x496C).
 *     - 400..418 pickups: 400-403 money (+250/500/1250/2500 to car+0x7DC),
 *       410-417 weapons 1..8 (ammo 2, or 4 with option 0x198, if the
 *       inventory at car+0x264 holds < 25), 418 armour level car+0x2A4
 *       (max 2). Sounds only for car+0x820 (a player of this console).
 *     - 1120: a scoring spot (tourist photo stop?). With car+0x82A,
 *       facing it (|angle| < 512) for 71 frame-time units scores
 *       game+0x12318 (+2500 bonus), counts car+0x80C, flash, sounds 50/51.
 *     - others (walls, objects, cars): func_801256B0 gives a push; pushes
 *       are summed into car+0x460 and *push and averaged over the hits.
 *
 * Link game (Layer 4): a weapon pickup is resolved differently. Outside a
 * link game (and car+0x829 clear) func_8012C3BC(inv, ammo) hands out a
 * weapon chosen with rand(). In a link game (func_8013A06C() != 0) or for
 * a car with +0x829 set, the car gets exactly the weapon of the pickup
 * kind (func_8012AF9C(inv, weapon, ammo)) and the pickup is reported to
 * the hit dispatcher func_8012A154(D_801C34F0, NULL, dmg, 1, id, ...), so
 * both consoles give the same weapon without consuming random numbers.
 *
 * Matching notes: contacts are volatile unsigned shorts cast to short
 * (lhu/sll/sra); __builtin_abs gives the abssi2 `bgez; nop; negu` and keeps
 * the first loop small enough (<= 58 insns) for loop.c to hoist the
 * constant 1 (t2), which shifts every reload register to t3..t6; the main
 * loop is `for (;; i++) { if (!(i < end)) break; ... continue; }`; the
 * `on` variable keeps the 1 in s1; add_score, game_sub, the Hud pointer and
 * sound_call2 are inline helpers whose parameter evaluation gives retail's
 * load order. func_8012BD30 (weapon count) takes one argument: reorg then
 * fills the `beqz weapon` slot with the weapon == 0 path's `move a1,zero`
 * (a1 is dead on the fall-through) and the jal slot with the `inv` add. */
__attribute__((section(".text_8010DBC4")))
void func_8010DBC4(char *p, volatile Vec3 *push)
{
    Vec3 v = { 0, 400, 80 };
    Vec3 tv;
    int r38[4];
    int r48[2];
    int r50[2];
    int ang;
    int on;
    int nhit;
    int picked;
    int hit_sent;
    int dmg;
    int start, end;
    int i, j;
    int weapon;
    Contact *c;
    volatile int *pos;
    Vec3 *vp;

    nhit = 0;
    picked = 0;
    hit_sent = 0;
    dmg = 0;
    U8(p, 0x85) = 0;
    weapon = 0;
    if (U8(p, 0x829)) {
        start = 4;
        end = S32(PTR(p, 0x738), 0x48);
    } else {
        start = 1;
        end = 2;
    }

    /* drop contacts far below, and duplicates at the same point */
    for (i = start; i < end; i++) {
        c = CONTACT(p, i);
        if (!c->active)
            continue;
        if (c->z < -2400) {
            c->active = 0;
            continue;
        }
        U8(p, 0x85) = 1;
        for (j = start; j < end; j++) {
            Contact *d;
            int same;
            int a, b;
            if (i == j || !CONTACT(p, j)->active)
                continue;
            d = CONTACT(p, j);
            same = 0;
            if (c->x == d->x && c->y == d->y)
                same = c->z == d->z;
            if (!same)
                continue;
            a = iabs(c->depth);
            b = iabs(d->depth);
            if (b < a) {
                d->active = 0;
            } else {
                c->active = 0;
                c = d;
            }
        }
    }

    if (U8(p, 0x19C)) {
        for (i = 0; i < start; i++) {
            int t = 0;
            if (S32(p, 0x6BC))
                t = U8(p + i * 0x54, 0x596) != 0;
            if (t) {
                start--;
                func_8016FD98(CONTACT(p, start), p + 0x694, 8);
                U8(p, 0x85) = 1;
                func_8013FD30(p, 3, 2, 2);
            }
        }
    }

    U8(p, 0x53A) = 0;
    U8(p, 0x53B) = 0;
    if (!U8(p, 0x85))
        return;

    func_801254DC(p + 0x460, 0, 0, 0);
    func_801254DC(push, 0, 0, 0);
    i = start;
    pos = (int *) (p + 0x1E4);
    vp = &v;
    for (;; i++) {
        char *obj;
        int kind, id;
        int ammo;

        if (!(i < end))
            break;

        if (!((CarC *) p)->contacts[i].active)
            continue;
        c = CONTACT(p, i);
        kind = (short) c->kind;
        id = (short) c->id;
        if ((unsigned) (kind - 16) < 272) {
            U8(p, 0x53B) = 1;
            continue;
        }
        U8(p, 0x53A) = 1;
        obj = func_80124CBC(D_801C34EC);
        *(volatile int *volatile *) (obj + 0xC) = pos;
        if (kind >= 300 && id != 0) {
            S32(obj, 0x18) = S32(p, 0x7C4);
            S32(obj, 0x14) = 1;
            dmg = iabs(S32(p, 0x23C)) * 10 / S32(p, 0xD0);
            if (U8(p, 0x197))
                dmg <<= 1;
            if ((unsigned) (kind - 400) >= 19 && !hit_sent) {
                func_801253F4(r50, p + 0x244);
                func_8012A154(D_801C34F0, r50, dmg, 1, id, PTR(p, 0x738) + 0x1C);
                hit_sent = 1;
                if (id == S32(p, 0x500))
                    S32(p, 0x500) = 0;
                if (S32(p, 0x7C0) < 208 && kind == 530) {
                    int t;
                    if (!U8(D_801C34EC, 0x1106F) && !U8(p, 0x90))
                        U8(PTR(p, 0x738), 0xA) = 0;
                    t = 0;
                    if (S32(p, 0x7C0) == 144)
                        t = func_80178A1C() * 3900 / 1000 * 64 < S32(p, 0x20C);
                    if (t)
                        func_80152434(D_801C34EC + 0x496C, PTR(p, 0x738),
                                      game_sub(D_801C34EC)->unk13C, S32(p, 0x78));
                }
            }
        }
        if ((unsigned) (kind - 400) < 19) {
            /* pickup */
            U8(p, 0x85) = 0;
            ammo = 2;
            if (U8(p, 0x198))
                ammo = 4;
            if (kind < 404) {
                D_801C31CC.left = 30;
                D_801C31CC.right = S32(p, 0x7C4);
                D_801C3100.x = S32(p, 0x1E4);
                D_801C3100.y = pos[1];
                D_801C3100.z = pos[2];
                D_801C31CC.pos = &D_801C3100;
                func_8013BDCC(D_801C34F4, 0, 0);
            } else if (kind >= 410 && func_8012BD30(p + 0x264) + ammo < 25) {
                D_801C31CC.left = 31;
                D_801C31CC.right = S32(p, 0x7C4);
                D_801C3100.x = S32(p, 0x1E4);
                D_801C3100.y = pos[1];
                D_801C3100.z = pos[2];
                D_801C31CC.pos = &D_801C3100;
                func_8013BDCC(D_801C34F4, 0, 0);
            }
            U8(p, 0x53A) = 0;
            if (!picked) {
                switch (kind) {
                case 400:
                    S32(p, 0x7DC) += 250;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 13, 10);
                    break;
                case 401:
                    S32(p, 0x7DC) += 500;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 14, 10);
                    break;
                case 402:
                    S32(p, 0x7DC) += 1250;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 15, 10);
                    break;
                case 403:
                    S32(p, 0x7DC) += 2500;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 16, 10);
                    break;
                case 410:
                    weapon = 1;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 17, 10);
                    break;
                case 411:
                    weapon = 2;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 18, 10);
                    break;
                case 412:
                    weapon = 3;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 19, 10);
                    break;
                case 413:
                    weapon = 4;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 20, 10);
                    break;
                case 414:
                    weapon = 5;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 21, 10);
                    break;
                case 415:
                    weapon = 6;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 22, 10);
                    break;
                case 416:
                    weapon = 7;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 23, 10);
                    break;
                case 417:
                    weapon = 8;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 24, 10);
                    break;
                case 418:
                    U8(p, 0x2A4)++;
                    S32(p, 0x274) = 20;
                    if (S8(p, 0x2A4) >= 3)
                        U8(p, 0x2A4) = 2;
                    if (U8(p, 0x820))
                        func_8010B62C(D_801C34EC + 0x6220, 25, 10);
                    break;
                }
                if (weapon) {
                    if (func_8012BD30(p + 0x264) + ammo < 25) {
                        int t = 0;
                        if (U8(p, 0x829) || func_8013A06C())
                            t = 1;
                        if (t) {
                            func_8012A154(D_801C34F0, 0, dmg, 1, id, PTR(p, 0x738) + 0x1C);
                            func_8012AF9C(p + 0x264, weapon, ammo);
                        } else {
                            weapon = func_8012C3BC(p + 0x264, ammo);
                        }
                        if (S32(p, 0x7B8) == 2)
                            U8(p, 0x821) = 0;
                    } else if (U8(p, 0x820)) {
                        func_8010B62C(D_801C34EC + 0x6220, 26, 0);
                        func_8010B62C(D_801C34EC + 0x6220, 26, 0);
                        D_801C31CC.left = 29;
                        D_801C31CC.unk14 = 52;
                        D_801C31CC.unk10 = -1;
                        func_8013BDCC(D_801C34F4, 0, 0);
                    }
                } else {
                    func_8012A154(D_801C34F0, 0, dmg, 1, id, PTR(p, 0x738) + 0x1C);
                }
            }
            picked = 1;
            c->active = 0;
        } else if (kind == 1120) {
            U8(p, 0x85) = 0;
            U8(p, 0x542) = 1;
            if (U8(p, 0x82A)) {
                U8(D_801C34EC, 0x12356) = 1;
                on = 1;
                U8(D_801C34EC, 0x127E0) = on;
                ang = S32(p, 0x1F8) - S16(PTR(D_801C34EC, 0x122C8), 0x18);
                func_8016408C(&ang);
                if (iabs(ang) < 512) {
                    S32(D_801C34EC, 0x122D0) += func_80178A1C();
                    func_8016D6BC(S32(D_801C34EC, 0x122CC), on);
                    if (S32(D_801C34EC, 0x122D0) >= 71) {
                        char *g = D_801C34EC;
                        S32(g, 0x122D0) = 0;
                        add_score(p, S32(g, 0x12318));
                        S32(p, 0x80C) += on;
                        if (U8(g, 0x12357))
                            S32(p, 0x7DC) += 2500;
                        mathMulTransVec(PTR(p, 0x738) + 0x28, &v, &tv);
                        func_80124FC8(PTR(D_801C34EC, 0x122C8) + 0x1C, &tv, &v);
                        func_801544FC(D_801C34EC + 0x496C, vp, p + 0x1E4);
                        func_8010B62C(D_801C34EC + 0x6220, 104 - S32(D_801C34EC, 0x12320), 0);
                        v.x = S32(PTR(D_801C34EC, 0x122C8), 0x1C);
                        v.y = S32(PTR(D_801C34EC, 0x122C8), 0x20);
                        v.z = S32(PTR(D_801C34EC, 0x122C8), 0x24) + 80;
                        func_8011BC6C(vp, 0, 6, 14, 0, 0);
                        func_8011BC6C(vp, 0, 12, 14, 0, 0);
                        ((GameF *) D_801C34EC)->flag[S8(D_801C34EC, 0x12355)] = on;
                        func_80125DA4(D_801C34EC);
                        if (U8(p, 0x820)) {
                            if (rand() & 1)
                                D_801C31CC.left = 50;
                            else
                                D_801C31CC.left = 51;
                            sound_call2(S32(D_801C34EC, 0x12794)++, D_801C34F4);
                            {
                                Hud *h = HUD(D_801C34EC);
                                h->flash[S32(p, 0x7CC)] = 20;
                            }
                        }
                    }
                } else {
                    S32(D_801C34EC, 0x122D0) = 0;
                    func_8016D6BC(S32(D_801C34EC, 0x122CC), 2);
                }
            }
            c->active = 0;
            U8(p, 0x53A) = 0;
        } else {
            int spec, f;
            func_8010F5B8(p, i, 3);
            if ((unsigned) (kind - 300) < 100 && !U8(obj, 0x22)) {
                c->active = 0;
                S32(p, 0x20C) >>= 1;
                continue;
            }
            spec = 0;
            if ((short) c->kind == 501 || (short) c->kind == 507)
                spec = 1;
            f = 0;
            if (!spec) {
                if (S32(p, 0xF4) == 100)
                    f = 110;
                else
                    f = 200 - S32(p, 0xF4) * 90 / 100;
            }
            func_801256B0(p + 0x2C4, i, r48, r38, p + 0x244, f);
            U8(p, 0x539) = 1;
            func_80124F78(r48, p + 0x460, p + 0x460);
            nhit++;
            func_80124FC8(r38, push, push);
            S16(p, 0x506) = 0;
        }
    }

    if (nhit >= 2) {
        S32(p, 0x460) /= nhit;
        S32(p, 0x464) /= nhit;
        S32(p, 0x468) /= nhit;
        push->x /= nhit;
        push->y /= nhit;
        push->z /= nhit;
    }
}

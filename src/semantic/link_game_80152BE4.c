/* Rogue Trip: a car entering one of two "warp" entries of a level object
 * (80152BE4), a caller of the link-state getter func_8013A06C (0 no link game,
 * 1 master, 2 slave). See docs/LINK_CABLE.md.
 *
 * Built like the engine link modules: PsyQ 4.4, "-O2 -G8 -fvolatile", ASPSX
 * 2.56. No data of its own (D_801C31CC, D_801C3100 and D_801C34F4 are
 * absolute-addressed externs, D_801C34F4 being game_main.c's sound bank). */

#define U8(p, o) (*(unsigned char *) ((char *) (p) + (o)))
#define S16(p, o) (*(short *) ((char *) (p) + (o)))
#define U16(p, o) (*(unsigned short *) ((char *) (p) + (o)))
#define S32(p, o) (*(int *) ((char *) (p) + (o)))

extern int func_8013A06C(void);                 /* link state: 0 none, 1 master, 2 slave */
extern int rand(void);

typedef struct { int x, y, z; } Vec3;

/* Positional sound request. */
typedef struct {
    Vec3 *pos;
    int unk4;
    int id;
    int rnd;
} SoundReq;

/* The object's two entries (base + 0x1874). The pointer arrays are read
 * through a volatile Warp so the loads are volatile (-fvolatile does not make
 * member arrays volatile) and the address is base-first (w + idx * 4). */
typedef struct {
    char pad[0x1874];
    short rot[2][4];            /* +0x1874: relative rotation per entry */
    char *ent[2];               /* +0x1884: entry model (position +0x1C, angles +0x14) */
    char *car[2];               /* +0x188C: car using the entry */
    char *obj[2];               /* +0x1894: its body record */
    short unk189C[2];           /* +0x189C: timer */
    unsigned char active[2];    /* +0x18A0 */
} Warp;

extern SoundReq D_801C31CC;
extern Vec3 D_801C3100;
extern int D_801C34F4;                          /* sound bank */
extern void func_8013BDCC(int bank, int a1, int a2);
extern void func_80125464(char *a, int b);
extern void func_8015A05C(char *a, char *b);
extern void func_801640EC(void *angle);         /* normalise an angle */
extern void func_8016408C(int *angle);
extern void func_8011BC6C(char *a, char *b, int c, int d, int e, int f);

/* |*p|. Reading through the pointer makes the load volatile, which keeps it
 * after the entry-angle load as in retail. */
static inline int iabs_p(int *p)
{
    int a;

    a = *p;
    if (a < 0) {
        a = -a;
    }
    return a;
}

/* Turn by a quarter circle (1024 of 4096) to the side of d. As an inline its
 * arguments are loaded before the 0x18E store. */
static inline void turn_a(char *car, unsigned short ang, int d)
{
    U16(car, 0x18E) = ang;
    if (d < 0) {
        S32(car, 0x218) = -1;
        U16(car, 0x190) = U16(car, 0x18E) - 1024;
    } else {
        S32(car, 0x218) = 1;
        U16(car, 0x190) = U16(car, 0x18E) + 1024;
    }
}

/* 80152BE4 (called from 8014D388): car `car` (body `obj`, may be 0) enters
 * entry idx of warp object w. Plays sound 69 at the entry, marks the entry
 * active, records car and body, computes the entry-relative rotation and the
 * yaw difference d. A car arriving at 45..135 degrees gets state 0x9A and a
 * quarter turn. Otherwise a car without its own view (0x820 == 0, i.e. a
 * computer car) gets state 0x9B and is turned to the entry's heading --
 * but only outside a link game: in a link game the cars without a view on
 * this console include the partner's players, whose state comes from the
 * link packets, so no car gets the 0x9B turn. func_801446DC acts on
 * 0x9A/0x9B. Ends with sound 15/14 at the body.
 * Matching notes: the sound id goes through the variable `a` (set more than
 * once, so the scheduler does not boost its load and idx is loaded first,
 * giving retail's s1/s0); the 0x9B test stores its comparison in `a` for
 * the same reason (the 0x18E store then follows the slti). */
__attribute__((section(".text_80152BE4")))
void func_80152BE4(Warp *w, char *car, char *obj, int a3, int idx)
{
    int d;
    int a;
    int f;
    unsigned short t;
    short *r;
    Vec3 *v;

    a = 69;
    D_801C31CC.id = a;
    D_801C31CC.rnd = rand();
    v = (Vec3 *) (((volatile Warp *) w)->ent[idx] + 0x1C);
    D_801C3100.x = v->x;
    D_801C3100.y = v->y;
    D_801C3100.z = v->z;
    D_801C31CC.pos = &D_801C3100;
    func_8013BDCC(D_801C34F4, 0, 0);
    w->active[idx] = 1;
    w->unk189C[idx] = 0;
    ((volatile Warp *) w)->car[idx] = car;
    ((volatile Warp *) w)->obj[idx] = obj;
    U8(((volatile Warp *) w)->ent[idx], 0xC) = 1;
    func_80125464(((volatile Warp *) w)->ent[idx] + 0x14, a3);
    func_8015A05C(((volatile Warp *) w)->ent[idx] + 0x14, ((volatile Warp *) w)->ent[idx] + 0x28);
    w->rot[idx][0] = U16(obj, 0x14) - U16(((volatile Warp *) w)->ent[idx], 0x14) - 170;
    w->rot[idx][1] = U16(((volatile Warp *) w)->ent[idx], 0x16) - U16(obj, 0x16);
    w->rot[idx][2] = U16(((volatile Warp *) w)->ent[idx], 0x18) - U16(obj, 0x18);
    r = w->rot[idx];
    func_801640EC(&r[0]);
    func_801640EC(&r[1]);
    func_801640EC(&r[2]);
    d = S16(obj, 0x18) - S16(((volatile Warp *) w)->ent[idx], 0x18);
    func_8016408C(&d);
    if (car != 0) {
        a = d;
        if (a < 0) {
            a = -a;
        }
        if (a > 512 && a < 1536) {
            U8(car, 0x9A) = 1;
            turn_a(car, U16(((volatile Warp *) w)->ent[idx], 0x18), d);
        } else {
            f = 0;
            if (U8(car, 0x820) == 0) {
                f = func_8013A06C() == 0;
            }
            if (f) {
                U8(car, 0x9B) = 1;
                t = U16(((volatile Warp *) w)->ent[idx], 0x18);
                a = iabs_p(&d) < 1024;
                U16(car, 0x18E) = t;
                if (a) {
                    S32(car, 0x218) = 1;
                    U16(car, 0x190) = U16(car, 0x18E);
                } else {
                    S32(car, 0x218) = -1;
                    U16(car, 0x190) = S32(car, 0x1F8);
                }
            }
        }
        func_801640EC(car + 0x190);
        S16(car, 0x18C) = 0;
        S16(car, 0x194) = 0;
        U8(car, 0x98) = 0;
    }
    func_8011BC6C(obj + 0x1C, 0, 15, 14, 0, 0);
}

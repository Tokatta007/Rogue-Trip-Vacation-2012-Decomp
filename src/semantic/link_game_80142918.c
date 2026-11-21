/* Rogue Trip car reset (80142918), a caller of the link-state getter
 * func_8013A06C (0 no link game, 1 master, 2 slave). See docs/LINK_CABLE.md.
 *
 * Built like the engine link modules: PsyQ 4.4, "-O2 -G8 -fvolatile", ASPSX
 * 2.56 (retail keeps every store out of delay slots and masks the byte
 * loads again, which is -fvolatile). No data of its own. */

#define U8(p, o) (*(unsigned char *) ((char *) (p) + (o)))
#define S16(p, o) (*(short *) ((char *) (p) + (o)))
#define U16(p, o) (*(unsigned short *) ((char *) (p) + (o)))
#define S32(p, o) (*(int *) ((char *) (p) + (o)))

extern int func_8013A06C(void);                 /* link state: 0 none, 1 master, 2 slave */
extern char *D_801C34EC;                        /* game data */
extern void *memset(void *, int, int);
extern int rand(void);
extern void func_80147934(void *);
extern void func_80142AF8(void *);
extern void func_80147D10(void *);
extern void func_8010B7C8(void *);
extern void func_80144150(void *);
extern void func_8012A3F0(void *, void *);
extern void func_80149BA4(void *);

/* 80142918 (called from 800F56B0 and 8012EB68): reset car record p for a new
 * round or life. Clears 0xBC..0x1A3 (keeping the option bytes 0x196-0x198,
 * 0x19E and 0x1A3 set up by match setup, func_801382EC) and 0x7C..0xA6,
 * resets counters, timers (0x784 = 1800 + rand 0..255) and the four 0x54-byte
 * sub-records, restores the hit points 0x10C from 0x110 and re-inits the
 * sub-objects. Last, outside a link game only (func_8013A06C() == 0), it
 * resets the per-view state at game + 0x496C (func_80149BA4, both views).
 * In a link game that shared state is left alone when a car is reset.
 * Matching notes: the five saved bytes are int locals with an explicit
 * `& 0xFF` (retail's lbu + andi); the loops index p + i * 0x54 (loop
 * strength reduction gives retail's register order); func_80144150 takes one
 * argument (a1 still holds -1 from the loop). */
__attribute__((section(".text_80142918")))
void func_80142918(char *p)
{
    int a, b, c, d, e;
    int i;

    a = U8(p, 0x19E) & 0xFF;
    b = U8(p, 0x1A3) & 0xFF;
    c = U8(p, 0x196) & 0xFF;
    d = U8(p, 0x197) & 0xFF;
    e = U8(p, 0x198) & 0xFF;
    memset(p + 0xBC, 0, 0xE8);
    U8(p, 0x19E) = a;
    U8(p, 0x1A3) = b;
    U8(p, 0x196) = c;
    U8(p, 0x197) = d;
    U8(p, 0x198) = e;
    memset(p + 0x7C, 0, 0x2B);
    U8(p, 0x1A2) = 0;
    func_80147934(p);
    U8(p, 0x19C) = 1;
    U8(p, 0x19E) = 1;
    S32(p, 0x34) = 0;
    S32(p, 0x7E0) = 0;
    S32(p, 0x7E4) = 0;
    S32(p, 0x7E8) = 0;
    S32(p, 0x7EC) = 0;
    S32(p, 0x7F0) = 0;
    S32(p, 0x7F4) = 0;
    S32(p, 0x7F8) = 0;
    S32(p, 0x804) = 0;
    S32(p, 0x784) = (rand() & 0xFF) + 1800;
    S32(p, 0x10C) = 0;
    func_80142AF8(p);
    func_80147D10(p);
    func_8010B7C8(p);
    S32(p, 0x500) = 0;
    S16(p, 0x508) = 1200;
    S32(p, 0x10C) = S32(p, 0x110);
    U16(p, 0x162) = U16(p, 0x160);
    U8(p, 0x537) = 0;
    S16(p, 0x504) = 0;
    S32(p, 0x208) = 0;
    S32(p, 0x20C) = 0;
    S32(p, 0x210) = 0;
    S32(p, 0x214) = 0;
    S32(p, 0x218) = 0;
    S32(p, 0x21C) = 0;
    for (i = 0; i < 4; i++) {
        S16(p + i * 0x54, 0x578) = 0;
        S16(p + i * 0x54, 0x57A) = -1;
    }
    S32(p, 0x260) = 0;
    func_80144150(p);
    for (i = 0; i < 4; i++) {
        S16(p + i * 0x54, 0x58C) = -1;
        U8(p + i * 0x54, 0x592) = 0;
        U8(p + i * 0x54, 0x594) = 0;
        U8(p + i * 0x54, 0x595) = 0;
    }
    func_8012A3F0(p + 0x264, p);
    if (func_8013A06C() == 0) {
        func_80149BA4(D_801C34EC + 0x496C);
    }
}

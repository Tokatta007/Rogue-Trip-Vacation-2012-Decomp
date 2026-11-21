/* Rogue Trip link-cable packet layer (engine code), reconstructed from the
 * retail instructions at 8012D45C..8012DC0C. Each frame every console sends
 * one 32-byte packet per local player (8012D80C builds them, 8012D78C sends)
 * and reads the partner's packets into the remote cars (8012D45C). The
 * transport (checksum in byte 0, retries, timeout) is in link_session.c.
 * Built with -O2 -G8. The pointers retail treats as volatile are qualified
 * explicitly (this reproduces -fvolatile for 8012D80C and lets 8012D45C read
 * the hit points non-volatile). All functions are byte-exact. See
 * docs/LINK_CABLE.md. */

typedef struct {
    long x, y, z;
} LinkVec;

/* Packet header: four bytes, byte-aligned (retail updates the bitfields
 * with byte loads and stores). */
typedef struct {
    unsigned char sum;          /* byte 0: checksum, written by the sender */
    unsigned char player : 2;   /* byte 1: car index */
    unsigned char weapon : 4;   /*         selected weapon slot */
    unsigned char armed : 1;    /*         slot has ammo */
    unsigned char active : 1;   /*         slot flag (+0x4C) */
    unsigned char flag16 : 1;   /* byte 2: D_801C332C */
    unsigned char flag17 : 1;   /*         D_8018461C[player] */
    unsigned char : 1;
    unsigned char flag19 : 1;   /*         D_801C3330 */
    unsigned char : 2;
    unsigned char event_b : 1;  /*         byte 3 carries a D_801C3338 event */
    unsigned char event_a : 1;  /*         byte 3 carries a D_801C3334 event */
    unsigned char arg;          /* byte 3 */
} LinkHeader;

/* One packet: header, the player's two pad words, car position and
 * rotation, hit points. */
typedef struct {
    LinkHeader h;
    long pad0;                  /* controller words (801BC218 records) */
    long pad1;
    LinkVec pos;
    int rz : 16;
    int rx : 16;
    int ry : 16;
    int health : 16;
} LinkPacket;

typedef struct {
    char pad0[0x41];
    signed char weapon;         /* +0x41 */
    char pad42;
    unsigned char armed[9];     /* +0x43 */
    unsigned char active[9];    /* +0x4C */
} LinkWeapons;

typedef struct {
    char pad0[0x8C];
    unsigned char unk8C;        /* +0x08C */
    char pad8D[0x10C - 0x8D];
    int health;                 /* +0x10C */
    int unk110;                 /* +0x110 */
    char pad114[0x1E4 - 0x114];
    LinkVec pos;                /* +0x1E4 */
    LinkVec rot;                /* +0x1F0 */
    char pad1FC[0x264 - 0x1FC];
    LinkWeapons weapons;        /* +0x264 */
    char pad2B9[0x7C4 - 0x264 - sizeof(LinkWeapons)];
    int unk7C4;                 /* +0x7C4 */
    char pad7C8[0x8B8 - 0x7C8];
} LinkCar;                      /* 0x8B8 bytes */

typedef struct {
    char pad0[0xB788];
    LinkCar cars[4];
} LinkGame;

typedef struct {
    char pad0[0xC];
    LinkVec *pos;
} LinkFx;

extern int func_8012D1AC(unsigned char *buf, int len);
extern int func_8012D290(unsigned char *buf, int len);
extern LinkFx *func_80124CBC(LinkGame *game);
extern void func_8012A154(int a0, int a1, int a2, int a3, int a4, int a5);
extern void func_8012BD20(LinkWeapons *w, int weapon, int armed);
extern void func_8012EB08(int arg);
extern void func_80132CF4(int a0, int a1);
extern void func_8016BCB4(long pad, int player);
extern void func_8016BCEC(long pad, int player);
extern long func_8016BD24(int player);
extern long func_8016BD5C(int player);

extern LinkGame *D_801C34EC;
extern int D_801C34F0;
extern int D_801C32E8;                      /* role (link_session.c) */
extern int D_801C3304;                      /* empty reads (link_session.c) */
extern LinkPacket D_8018459C[];             /* outgoing packets */
extern LinkPacket D_801845DC[];             /* incoming packets */
extern int D_8018461C[];                    /* per-car flag */

/* This module's .sdata (801C3314..801C3338), defined after the functions in
 * address order. Constant indexes of D_801C3314 are $gp-relative; the
 * builder's variable index uses its absolute address, as retail does.
 * D_801C332C/D_801C3330 are volatile: the builder reads them as full words. */
extern int D_801C3314[2];                   /* local car indexes */
extern int D_801C331C;                      /* local player count */
extern int D_801C3320;                      /* remote player count */
extern int D_801C3324;
extern int D_801C3328;
extern volatile int D_801C332C;
extern volatile int D_801C3330;
extern int D_801C3334;
extern int D_801C3338;

void func_8012DAC4(int player, int on);

/* @8012D45C: receive the partner's packets and apply them to its cars.
 * Returns 1 if at least one packet was applied. The packet pointer is
 * volatile except for the assigned hit points (retail's plain lh through the
 * pkt+3 register); rot is a volatile local whose address the loop pass
 * hoists. The effect pointer and a few reads are volatile; the temporaries
 * keep retail's instruction order. */
int __attribute__((section(".text_8012D45C"))) func_8012D45C(void)
{
    int ret = 0;
    volatile LinkPacket *pkt = D_801845DC;
    int i;
    volatile LinkVec rot;
    LinkVec *r;
    volatile LinkFx *fx;

    if (func_8012D290((unsigned char *)pkt, D_801C3320 << 5) != 0) {
        i = 0;
        for (;;) {
            LinkCar *car;
            LinkWeapons *w;
            volatile LinkVec *v;
            int dead;

            if (i >= D_801C3320) {
                break;
            }
            car = &D_801C34EC->cars[pkt->h.player];
            v = &pkt->pos;
            car->pos.x = v->x;
            car->pos.y = v->y;
            car->pos.z = v->z;
            r = &rot;
            rot.x = pkt->rx;
            rot.y = pkt->ry;
            rot.z = pkt->rz;
            car->rot.x = r->x;
            car->rot.y = r->y;
            car->rot.z = r->z;
            w = &car->weapons;
            if (car->health > 0) {
                car->health = ((LinkPacket *) pkt)->health;
                dead = pkt->health <= 0 && car->unk8C == 0;
                if (dead) {
                    fx = func_80124CBC(D_801C34EC);
                    fx->pos = &car->pos;
                    func_8012A154(*(volatile int *) &D_801C34F0, 0, 1, 30, ((volatile LinkCar *) car)->unk7C4, 0);
                }
            } else {
                int u = ((volatile LinkCar *) car)->unk110;

                if (pkt->health == u) {
                    car->health = ((LinkPacket *) pkt)->health;
                }
            }
            func_8016BCB4(pkt->pad0, pkt->h.player);
            func_8016BCEC(pkt->pad1, pkt->h.player);
            w->weapon = pkt->h.weapon;
            func_8012BD20(w, pkt->h.weapon, pkt->h.armed);
            {
                int k = pkt->h.weapon;
                int a = pkt->h.active;

                w->active[k] = a;
            }
            func_8012DAC4(pkt->h.player, pkt->h.flag17);
            D_801C332C = pkt->h.flag16;
            ret = 1;
            D_801C3330 = pkt->h.flag19;
            if (*(long *)pkt & 0x400000) {
                fx = func_80124CBC(D_801C34EC);
                fx->pos = &car->pos;
                func_8012A154(D_801C34F0, 0, 1, 30, pkt->h.arg, 0);
            }
            if (*(long *)pkt & 0x800000) {
                func_8012EB08(pkt->h.arg);
            }
            pkt++;
            i++;
        }
    }
    if (D_801C3304 >= 4) {
        func_80132CF4(9, 0);
    }
    return ret;
}

/* @8012D78C: send this console's packets. */
void __attribute__((section(".text_8012D78C"))) func_8012D78C(void)
{
    func_8012D1AC((unsigned char *)D_8018459C, D_801C331C << 5);
}

/* @8012D7B8: set up the packet layer for a match. */
void __attribute__((section(".text_8012D7B8"))) func_8012D7B8(int local, int remote, int car0, int car1)
{
    int i;

    D_801C331C = local;
    D_801C3320 = remote;
    D_801C3314[0] = car0;
    D_801C3314[1] = car1;
    D_801C3328 = -1;
    D_801C3324 = -1;
    D_801C332C = 0;
    D_801C3330 = 0;
    D_801C3334 = -1;
    D_801C3338 = -1;
    for (i = 3; i >= 0; i--) {
        D_8018461C[i] = 0;
    }
}

/* @8012D80C: build one packet per local player. */
void __attribute__((section(".text_8012D80C"))) func_8012D80C(void)
{
    int i = 0;
    volatile int *flags = D_8018461C;

    for (;;) {
        volatile int *player;
        volatile LinkPacket *pkt;
        volatile LinkCar *car;
        volatile LinkWeapons *w;
        volatile LinkHeader *h;
        volatile LinkVec *v;
        volatile LinkVec *r;
        int k;

        if (i >= D_801C331C) {
            break;
        }
        pkt = &D_8018459C[i];
        player = &D_801C3314[i];
        car = &D_801C34EC->cars[*player];
        h = &pkt->h;

        v = &car->pos;
        pkt->pos.x = v->x;
        pkt->pos.y = v->y;
        pkt->pos.z = v->z;
        r = &car->rot;
        pkt->rz = r->z;
        pkt->rx = r->x;
        pkt->ry = r->y;
        pkt->health = car->health;
        w = &car->weapons;
        pkt->pad0 = func_8016BD24(*player);
        pkt->pad1 = func_8016BD5C(*player);
        *(volatile long *)pkt = 0;
        h->player = *player;
        k = w->weapon;
        h->weapon = k;
        h->armed = w->armed[k] != 0;
        h->active = w->active[k] != 0;
        h->flag17 = flags[*player];
        h->flag16 = D_801C332C;
        h->flag19 = D_801C3330;
        if (D_801C3334 >= 0) {
            h->event_a = 1;
            h->arg = D_801C3334;
            D_801C3334 = -1;
        } else if (D_801C3338 >= 0) {
            h->event_b = 1;
            h->arg = D_801C3338;
            D_801C3338 = -1;
        }
        i++;
    }
}

/* @8012DA78 */
void __attribute__((section(".text_8012DA78"))) func_8012DA78(int player)
{
    if (D_801C3328 < 0) {
        D_8018461C[player] = 1;
        if (D_801C32E8 != 0) {
            D_801C3328 = player;
        } else {
            D_801C3324 = player;
        }
    }
}

/* @8012DAC4 */
void __attribute__((section(".text_8012DAC4"))) func_8012DAC4(int player, int on)
{
    if (on != 0) {
        if (D_801C32E8 == 0 || D_801C3328 < 0) {
            D_801C3328 = player;
        }
    } else if (D_801C3328 == player) {
        D_801C3328 = -1;
    } else if (D_801C32E8 == 0 && D_801C3324 >= 0) {
        D_801C3328 = D_801C3324;
    }
}

/* @8012DB48 */
int __attribute__((section(".text_8012DB48"))) func_8012DB48(int player)
{
    return player == D_801C3328;
}

/* @8012DB5C */
void __attribute__((section(".text_8012DB5C"))) func_8012DB5C(void)
{
    int player = D_801C3328;

    D_801C3328 = -1;
    D_801C3324 = -1;
    D_8018461C[player] = 0;
}

/* @8012DB84 */
void __attribute__((section(".text_8012DB84"))) func_8012DB84(void)
{
    D_801C332C = 1;
}

/* @8012DB94 */
int __attribute__((section(".text_8012DB94"))) func_8012DB94(void)
{
    return D_801C332C;
}

/* @8012DBA0 */
void __attribute__((section(".text_8012DBA0"))) func_8012DBA0(void)
{
    D_801C3330 = 1;
}

/* @8012DBB0 */
int __attribute__((section(".text_8012DBB0"))) func_8012DBB0(void)
{
    return D_801C3330;
}

/* @8012DBBC: reset the per-match flags. */
void __attribute__((section(".text_8012DBBC"))) func_8012DBBC(void)
{
    int i;

    D_801C3328 = -1;
    D_801C3324 = -1;
    D_801C332C = 0;
    D_801C3330 = 0;
    for (i = 3; i >= 0; i--) {
        D_8018461C[i] = 0;
    }
}

/* @8012DBF8: queue an event for the next packet (event_a). */
void __attribute__((section(".text_8012DBF8"))) func_8012DBF8(int arg)
{
    D_801C3334 = arg;
}

/* @8012DC04: queue an event for the next packet (event_b). */
void __attribute__((section(".text_8012DC04"))) func_8012DC04(int arg)
{
    D_801C3338 = arg;
}

int D_801C3314[2] = { 0 };
int D_801C331C = 0;
int D_801C3320 = 0;
int D_801C3324 = 0;
int D_801C3328 = 0;
volatile int D_801C332C = 0;
volatile int D_801C3330 = 0;
int D_801C3334 = 0;
int D_801C3338 = 0;

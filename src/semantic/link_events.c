/* Rogue Trip pickup spawn points and link event A (engine code),
 * reconstructed from the retail instructions at 8012E484..8012EE9C.
 *
 * The level's pickup spawn points (entity types 400..) are registered by
 * 8012E484 into D_8018462C (24-byte records, D_801C37DC of them) and sorted
 * into two index lists: types 400..403 into D_801CBA30 (D_801C37E9
 * entries), the others into D_801CB9E0 (D_801C37E8 entries). Bits 24..30 of
 * the entity's first word say whether the pickup is present (8012EAEC).
 *
 * Link event A: the console that owns the game (no link, or the link
 * master) respawns pickups at random (8012E7D4). Each time it puts a pickup
 * back on a spawn point it queues event A with that spawn point's index
 * (8012DBF8), which rides in byte 3 of the next packet. The partner console
 * (the link slave, which never spawns pickups itself) receives it in
 * 8012D45C and calls 8012EB08, which puts the same pickup back, so both
 * consoles see the same pickups on the track. (That these are pickups is
 * inferred: AI code looks for the nearest present one, 8012E544/8012E738,
 * and taking one hands out an item, 8012EA50.)
 *
 * 8012EB68 (car setup) follows in the same object; it checks the link state
 * to leave the hit points unscaled in a link game.
 *
 * 8012E484/8012E544/8012E738 (spawn point registration and the AI's
 * nearest-pickup searches) precede it in the same object and use the
 * spawn count D_801C37DC, the first word of this module's .sbss.
 *
 * Built with -O2 -G8. See docs/LINK_CABLE.md (Layer 2b, Layer 4). */

typedef struct {
    long x, y, z;
} EvVec;

/* Level entity of a spawn point: type in bits 4..15, pickup state in bits
 * 24..30 (nonzero = pickup present). */
typedef struct {
    unsigned char type[2];      /* type << 4 (halfword) */
    unsigned char effect;       /* +2: effect slot (8012A0B8) */
    unsigned char state : 7;    /* +3 */
    unsigned char hi : 1;
} EvEntity;

typedef struct {
    int unk0;
    unsigned char kind;         /* +4: from D_801CB990 by type */
    char pad5[3];
    EvEntity *ent;              /* +8 */
    EvVec pos;                  /* +C */
} EvSpawn;                      /* 24 bytes */

extern short func_80178A1C(void);           /* frame time */
extern int rand(void);
extern int func_8013A06C(void);             /* link state: 0, 1 master, 2 slave */
extern void func_8012DBF8(int arg);         /* queue event A */
extern int func_8012A0B8(int a0, int a1, EvSpawn *a2, EvVec *a3);
extern int func_80124A94(char *game, int a1, int *out);
extern void func_801244FC(char *game, int a1);
extern void func_8011BC6C(EvVec *pos, int a1, int a2, int a3, int a4, int a5);

extern char *D_801C34EC;                    /* game data */
extern int D_801C34F0;
extern EvSpawn D_8018462C[];                /* spawn points */
extern signed char D_801CB9E0[];            /* spawn indexes, types >= 404 */
extern signed char D_801CBA30[];            /* spawn indexes, types 400..403 */
extern unsigned char D_801CB990[];          /* per-type table, 4 bytes each */

/* This module's small data (defined at the end of the file). */
extern int D_801C3348;                      /* respawn period, list 801CB9E0 */
extern int D_801C334C;                      /* respawn period, list 801CBA30 */
extern int D_801C3350;                      /* respawning enabled */
static int D_801C37DC;                      /* spawn point count */
static int D_801C37E0;                      /* respawn timers */
static int D_801C37E4;
static signed char D_801C37E8;              /* list lengths */
static signed char D_801C37E9;

extern int func_800FF594(char *path, EvVec *pos);      /* track section of POS */
extern int func_80125094(EvVec *a, EvVec *b);          /* distance */
extern void func_801253C8(EvVec *dst, EvVec *src);     /* copy vector */
extern void func_80124C4C(char *game, EvVec *pos, EvVec *out);
unsigned char func_8012EAEC(EvSpawn *s);      /* returns a byte: callers mask 0xff */
void func_8012E9C0(EvSpawn *s, EvEntity *ent, EvVec *pos);

/* @8012E484: register pickup spawn point number D_801C37DC for level
 * entity ENT at POS (from the level loader 801143B8) and append its index
 * to the list for its type (400..403 or >= 404). Both consoles load the
 * same level, so the spawn indexes match and event A can name a spawn
 * point by index alone. */
void __attribute__((section(".text_8012E484"))) func_8012E484(EvEntity *ent, EvVec *pos)
{
    func_8012E9C0((EvSpawn *)(D_801C37DC * 24 + (int)D_8018462C), ent, pos);
    if ((*(unsigned short *)ent->type >> 4) < 404) {
        D_801CBA30[D_801C37E9] = D_801C37DC;
        D_801C37E9++;
    } else {
        D_801CB9E0[D_801C37E8] = D_801C37DC;
        D_801C37E8++;
    }
    D_801C37DC++;
}

/* Entity type of spawn point S; retail re-reads ent and type each time. */
#define PK_TYPE(s) (*(volatile unsigned short *)((volatile EvSpawn *)(s))->ent->type >> 4)

/* Types 400..403 (the D_801CBA30 list). The int result copied into the
 * unsigned char return gives retail's v1 -> v0 copy and the per-use andi. */
static inline unsigned char pk_small(EvSpawn *s)
{
    int r = 0;
    if (PK_TYPE(s) >= 400) {
        r = PK_TYPE(s) < 404;
    }
    return r;
}

/* @8012E544: AI target search (computer cars, 800F7A58 / 800F7F9C /
 * 800FC8A4 / 800FCC68). Of the spawn points whose pickup is present and
 * whose kind matches SMALL (types 400..403 or the others), find the nearest
 * to POS, preferring one in the same track section (800FF594 on the path at
 * game + 0x15CC) as POS; the range is 4000 unless FAR. The chosen position
 * is copied to OUT and 1 returned; with none found 80124C4C picks a target
 * instead and 0 is returned. Not link-specific: it only reads the pickup
 * state that event A keeps equal on both consoles.
 * p is assigned twice (in the call argument and again after it): that is
 * what makes retail keep the pointer in s1 and copy it to s3 for the
 * second branch. */
int __attribute__((section(".text_8012E544"))) func_8012E544(EvVec *pos, EvVec *out, int far, int small)
{
    int found;
    unsigned char same;
    char *path;
    int sect;
    int best_same, best_other;
    int i;
    EvSpawn *s;
    int d;
    unsigned char k;
    EvVec *p;

    found = 0;
    same = 0;
    path = D_801C34EC + 0x15CC;
    sect = func_800FF594(path, pos);
    if (far) {
        best_same = 0x7FFFFFFF;
        best_other = 0x7FFFFFFF;
    } else {
        best_same = 4000;
        best_other = 4000;
    }
    i = 0;
    s = D_8018462C;
    while (1) {
        if (!(i < D_801C37DC)) {
            break;
        }
        if (func_8012EAEC(s)) {
            k = pk_small(s);
            if (small) {
                if (!k) {
                    goto next;
                }
            } else {
                if (k) {
                    goto next;
                }
            }
            d = func_80125094(pos, p = &s->pos);
            p = &s->pos;
            if (func_800FF594(path, pos) == sect) {
                if (d < best_same) {
                    best_same = d;
                    same = 1;
                    found = 1;
                    func_801253C8(out, p);
                }
            } else if (!same && d < best_other) {
                best_other = d;
                found = 1;
                func_801253C8(out, p);
            }
        }
    next:
        s++;
        i++;
    }
    if (!found) {
        func_80124C4C(D_801C34EC, pos, out);
    }
    return found;
}

/* @8012E738: is a present pickup within 80 units of POS? (AI, 800FB590) */
int __attribute__((section(".text_8012E738"))) func_8012E738(EvVec *pos)
{
    int found;
    int i;
    EvSpawn *s;

    found = 0;
    i = 0;
    s = D_8018462C;
    while (1) {
        if (!(i < D_801C37DC)) {
            break;
        }
        if (func_8012EAEC(s) && func_80125094(pos, &s->pos) < 80) {
            found = 1;
            break;
        }
        s++;
        i++;
    }
    return found;
}

/* @8012E7D4: per-frame pickup respawn, called from the race loop 80132090.
 * Only the console that owns the game (link state != 2) runs it. Each list
 * has a timer; when it reaches its period (500 / 2000) the pickup on a
 * random spawn point of that list is made present again and event A with
 * the spawn index is queued so the link partner does the same. */
void __attribute__((section(".text_8012E7D4"))) func_8012E7D4(void)
{
    int r;
    EvSpawn *s;

    if (D_801C3350 == 0 || func_8013A06C() == 2) {
        return;
    }
    if (D_801C37E0 < D_801C3348) {
        D_801C37E0 += func_80178A1C();
    } else {
        D_801C37E0 = 0;
        if (D_801C37E8 <= 0) {
            return;
        }
        r = rand() % D_801C37E8;
        s = (EvSpawn *)(D_801CB9E0[r] * 24 + (int)D_8018462C);
        s->ent->state = 1;
        func_8012DBF8(D_801CB9E0[r]);
    }
    if (D_801C37E4 < D_801C334C) {
        D_801C37E4 += func_80178A1C();
    } else {
        D_801C37E4 = 0;
        if (D_801C37E9 <= 0) {
            return;
        }
        r = rand() % D_801C37E9;
        s = (EvSpawn *)(D_801CBA30[r] * 24 + (int)D_8018462C);
        s->ent->state = 1;
        func_8012DBF8(D_801CBA30[r]);
    }
}

/* @8012E9C0: set up spawn point S for level entity ENT at POS (from
 * 8012E484): record the entity, position and type table byte, and start
 * its pickup effect. */
void __attribute__((section(".text_8012E9C0"))) func_8012E9C0(EvSpawn *s, EvEntity *ent, EvVec *pos)
{
    s->ent = ent;
    s->pos.x = pos->x;
    s->pos.y = pos->y;
    s->pos.z = pos->z;
    s->kind = D_801CB990[((*(unsigned short *)((volatile EvSpawn *)s)->ent->type >> 4) - 400) * 4];
    s->ent->effect = func_8012A0B8(D_801C34F0, 28, s, &s->pos);
}

/* @8012EA50: pickup effect callback (from 8012A154). MODE 1: the pickup
 * was taken, so hand out the item (80124A94/801244FC) and clear the
 * pickup; otherwise 8011BC6C at its position. The pointer P keeps retail's
 * base + 0xB744 register; the state store is volatile so it stays out of
 * the jump's delay slot. */
void __attribute__((section(".text_8012EA50"))) func_8012EA50(EvSpawn *s, int a1, int a2, int mode)
{
    int item;
    int *p;

    if (mode == 1) {
        p = (int *)(D_801C34EC + 0xB744);
        if (func_80124A94(D_801C34EC, p[6], &item) != 0) {
            func_801244FC(D_801C34EC, item);
            ((volatile EvEntity *)s->ent)->state = 0;
        }
    } else {
        func_8011BC6C(&s->pos, 0, 4, 5, 0, 0);
    }
}

/* @8012EAEC: is the pickup of spawn point S present? Returns a byte: the
 * callers 8012E544/8012E738 mask the result with 0xff. */
unsigned char __attribute__((section(".text_8012EAEC"))) func_8012EAEC(EvSpawn *s)
{
    return (*(unsigned int *)s->ent & 0x7F000000) != 0;
}

/* @8012EB08: link event A received (from 8012D45C): the partner put the
 * pickup back on spawn point INDEX; the link slave does the same. */
void __attribute__((section(".text_8012EB08"))) func_8012EB08(int index)
{
    EvSpawn *s;

    /* index * 24 + base (not D_8018462C[index]) gives retail's order. */
    if (func_8013A06C() == 2) {
        s = (EvSpawn *)(index * 24 + (int)D_8018462C);
        s->ent->state = 1;
    }
}

/* Car record (0x8B8 bytes, as LinkCar in link_packet.c); the object at
 * +4 is what 800FF890 sets up. */
typedef struct {
    int unk0;
    int obj;                    /* +0x004 */
    char pad8[0x40 - 0x8];
    int unk40;                  /* +0x040 */
    char pad44[0x10C - 0x44];
    int health;                 /* +0x10C */
    int max_health;             /* +0x110 */
    char pad114[0x19E - 0x114];
    unsigned char unk19E;       /* +0x19E */
    unsigned char unk19F;
    unsigned char unk1A0;
    unsigned char unk1A1;
    unsigned char unk1A2;
    char pad1A3[0x1E4 - 0x1A3];
    EvVec pos;                  /* +0x1E4 */
    char pad1F0[0x738 - 0x1F0];
    int unk738;                 /* +0x738 */
    char pad73C[0x750 - 0x73C];
    int unk750;                 /* +0x750 */
    char pad754[0x788 - 0x754];
    int unk788;                 /* +0x788 */
    int unk78C;                 /* +0x78C */
    char pad790[0x7B4 - 0x790];
    int unk7B4;                 /* +0x7B4 */
    int unk7B8;                 /* +0x7B8 */
    int pad7BC;
    int unk7C0;                 /* +0x7C0 */
    int unk7C4;                 /* +0x7C4 */
    int unk7C8;                 /* +0x7C8 */
    int pad7CC;
    int player;                 /* +0x7D0 */
    char pad7D4[0x82F - 0x7D4];
    unsigned char unk82F;       /* +0x82F */
    int unk830;                 /* +0x830 */
    char pad834[0x890 - 0x834];
    int unk890;                 /* +0x890 */
    char pad894[0x8B8 - 0x894];
} EvCar;

typedef struct {
    char pad0[0x7D8];
    int mode;                   /* +0x7D8: game mode */
    char pad7DC[0x6220 - 0x7DC];
    char view[0x12688 - 0x6220]; /* +0x6220: EvView */
    int players;                /* +0x12688 */
    char pad1268C[0x127B4 - 0x1268C];
    unsigned int : 16;
    unsigned int opt0 : 8;      /* +0x127B6: per player, indexed by adding */
    unsigned int : 8;           /* the player to the base */
    unsigned int : 16;
    unsigned int opt1 : 8;      /* +0x127BA */
    unsigned int : 8;
    unsigned int : 16;
    unsigned int opt2 : 8;      /* +0x127BE */
    unsigned int : 8;
    unsigned int : 16;
    unsigned int opt3 : 8;      /* +0x127C2 */
    unsigned int : 8;
    unsigned int : 16;
    unsigned int opt4 : 8;      /* +0x127C6 */
    unsigned int : 8;
} EvGame;

/* Game-data block at +0x6220. The volatile element keeps retail's
 * `addiu base,0x6220` separate from the 0x3E8 offset. */
typedef struct {
    char pad[0x3E8];
    volatile short unk3E8[1];   /* +0x3E8: per view */
} EvView;

extern int func_801233B4(char *game, int a1);
extern void func_8012A120(int a0, int a1, EvCar *car, EvVec *pos);
extern void func_800FF890(int *obj, int a1, int a2);
extern void func_80111068(int *p, int player);
extern void func_80142918(EvCar *car);
extern void func_8012F0EC(EvCar *car, int a1);
extern void func_8014645C(EvCar *car);
extern void func_80147934(EvCar *car);
extern int func_8016BE60(int a0);
extern int func_8016BDC0(int a0);
extern int func_8016BDA8(int player);
extern void func_80102E88(char *view, int a1, EvVec *pos, int a3);
extern void func_801011E4(char *view, int a1, int a2, int a3);
extern void func_8012EEA0(EvCar *car);

/* @8012EB68: set up car C (from 80121008 and 80147784): model/player
 * fields, effects, hit points, per-player options and the view. Outside a
 * link game (link state 0) the hit points are raised by half and, in game
 * modes below 3, scaled again by the player count (+0x12688; 0: x2,
 * 1: x1.5, 2: x1.25); a link game keeps the base value on both consoles.
 * The car is volatile: retail re-reads every field and keeps each store in
 * place. The option bytes are volatile bitfields (lbu + andi 0xff). */
void __attribute__((section(".text_8012EB68"))) func_8012EB68(volatile EvCar *c, int a1, int a2, int a3, int a4, int a5)
{
    c->unk7B8 = 1;
    c->unk738 = a1;
    c->unk750 = a2;
    c->unk7C0 = a3;
    c->unk7C4 = a5;
    c->unk7C8 = func_801233B4(D_801C34EC, a5);
    c->player = (short)a2;
    c->unk82F = 0;
    c->unk890 = 0;
    if (c->unk7C0 != 240) {
        func_8012A120(D_801C34F0, a5, (EvCar *)c, (EvVec *)&c->pos);
    }
    func_800FF890(c != 0 ? (int *)&c->obj : 0, c->unk738, a4);
    c->obj = 0;
    c->unk40 = a1;
    func_80111068((int *)&c->unk830, c->player);
    func_80142918((EvCar *)c);
    if (func_8013A06C() == 0) {
        c->max_health = c->max_health + (c->max_health >> 1);
        if (((EvGame *)D_801C34EC)->mode < 3) {
            switch (((EvGame *)D_801C34EC)->players) {
            case 0:
                c->max_health = c->max_health * 2;
                break;
            case 1:
                c->max_health = c->max_health + (c->max_health >> 1);
                break;
            case 2:
                c->max_health = c->max_health + (c->max_health >> 2);
                break;
            }
        }
    }
    c->health = c->max_health;
    func_8012F0EC((EvCar *)c, -1);
    func_8014645C((EvCar *)c);
    {
        /* Per-player options. Retail reads the game pointer before the
         * player index and keeps the index in v1 (the 0x10000 half of the
         * offset in a0); only the explicit register reproduces that. */
        register int p asm("$3");
        char *g;

        g = D_801C34EC;
        p = c->player;
        c->unk78C = 0;
        c->unk788 = 0;
        c->unk19E = ((volatile EvGame *)(g + p))->opt0 == 0;
        c->unk19F = ((volatile EvGame *)(D_801C34EC + p))->opt1;
        c->unk1A0 = ((volatile EvGame *)(D_801C34EC + p))->opt2;
        c->unk1A1 = ((volatile EvGame *)(D_801C34EC + p))->opt3;
        if (((volatile EvGame *)(D_801C34EC + p))->opt4 != 0) {
            c->unk1A2 = 33;
            func_80147934((EvCar *)c);
        }
    }
    c->unk7B4 = func_8016BDC0(func_8016BE60(c->unk750));
    if (func_8016BDA8(c->player) != 0) {
        func_80102E88(((EvGame *)D_801C34EC)->view, func_8016BE60(c->unk750), (EvVec *)&c->pos, 0);
        func_801011E4(((EvGame *)D_801C34EC)->view, func_8016BE60(c->unk750), 6, 0);
        ((EvView *)(D_801C34EC + 0x6220))->unk3E8[func_8016BE60(c->unk750)] = 0;
    }
    func_8012EEA0((EvCar *)c);
}

/* This module's small data used here. */
int D_801C3348 = 500;
int D_801C334C = 2000;
int D_801C3350 = 1;
static int D_801C37DC;
static int D_801C37E0;
static int D_801C37E4;
static signed char D_801C37E8;
static signed char D_801C37E9;

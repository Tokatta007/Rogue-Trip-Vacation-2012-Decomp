/* Rogue Trip damage handler for destructible level objects, and the sender
 * of link event B (engine code), reconstructed from the retail instructions
 * at 8011A4AC. Built with PsyQ 4.4, -O2 -G8. See docs/LINK_CABLE.md
 * (Layer 2b). */

typedef struct {
    long x, y, z;
} ObjVec;

typedef struct {
    unsigned char kind;         /* low 4 bits: size source */
    char pad1[0xF];
    int size10;                 /* +0x10: size when kind is 1 */
    char pad14[0xC];
    int size20;                 /* +0x20: size when kind is 0 */
} ObjShape;

/* Level entity of the object (as in link_events.c): type << 4 in the first
 * halfword, the object's slot in the world table at +2. */
typedef struct {
    unsigned short type;        /* type << 4 */
    unsigned char slot;         /* +2: index in the world's object table */
    unsigned char count;        /* +3: low 7 bits */
    volatile unsigned char state;       /* +4 */
    char pad5[7];
    ObjShape *shape;            /* +0xC */
} ObjEntity;

typedef struct Obj Obj;
struct Obj {
    int unk0;
    ObjVec pos;                 /* +4 */
    ObjEntity *volatile ent;    /* +0x10 */
    int unk14;
    void (*volatile on_hit)(int hp, ObjEntity *ent);    /* +0x18 */
    volatile unsigned short hp; /* +0x1C: signed hit points */
    volatile unsigned short size;       /* +0x1E */
};

typedef struct {
    char pad0[0xC];
    ObjVec *volatile pos;       /* +0xC: effect position override */
    int *mode;                  /* +0x10: word +0x20 */
    char pad14[8];
    int hp;                     /* +0x1C: last hit points */
} ObjHit;

typedef struct {
    ObjVec *pos;
    int unk4;
    int left, right;            /* +8, +0xC */
} SoundCtl;

extern char *D_801C34EC;                    /* game data */
extern int D_801C34F4;                      /* sound bank */
extern ObjVec D_801C3100;                   /* position of the sound */
extern SoundCtl D_801C31CC;
extern int rand(void);
extern int func_8013A06C(void);             /* link state: 0 no link game */
extern void func_8012DC04(int arg);         /* queue link event B */
extern int func_8015A000(int n);
extern void func_8011D5A0(ObjVec *pos, int a1, int mask, int a3, int a4,
                          int a5, int a6, int a7, int a8, int a9);
extern void func_8013CAE0(int bank, int sound, ObjVec *pos);
extern void func_8013BDCC(int bank, int a1, int a2);
extern void func_8011BC6C(ObjVec *pos, int a1, int a2, int a3, int a4, int a5);
extern void func_8011AC14(Obj *obj, ObjVec *v);
extern void func_80164F34(ObjEntity *ent, ObjVec *pos, int a2, int a3, int a4);
extern void func_8016D6BC(ObjEntity *ent, int a1);

/* Start sound CH at position POS (copied to D_801C3100). */
static inline void play_sound_at(int ch, ObjVec *pos)
{
    D_801C31CC.left = ch;
    D_801C31CC.right = rand();
    D_801C3100.x = pos->x;
    D_801C3100.y = pos->y;
    D_801C3100.z = pos->z;
    D_801C31CC.pos = &D_801C3100;
    func_8013BDCC(D_801C34F4, 0, 0);
}

/* Objects of kind 0x1F8 on level 0 (game +0x12688) take hits only while
 * byte +4 of the record at game +0x1186C is 1. */
static inline int guarded(Obj *obj, char *game)
{
    return *(int *) (game + 0x12688) == 0
        && (*(int *) obj->ent & 0xFFF0) == 0x1F80;
}

/* @8011A4AC: hit a destructible level object, called from the hit
 * dispatcher 8012A154 for its object class with (object, a1, damage,
 * cause). The damage comes off the hit points (+0x1C); when they reach 0
 * the object is destroyed: its hit points become -666 and, by kind
 * (entity type >> 4, 0x1F4..0x202), it plays explosion and debris effects
 * (8011D5A0, 8011BC6C, 8011AC14), a sound (8013CAE0, 8013BDCC) and updates
 * its entity (8016D6BC, 80164F34). A hit that does not destroy it gives
 * a smaller effect (8011BC6C), except for cause 1.
 *
 * Link event B is "level object destroyed". When the hit destroys the
 * object in a link game (8013A06C != 0), it queues event B with the
 * object's slot in the world table (entity byte +2, 8012DC04), which rides
 * in byte 3 of the next packet. The partner console's receiver 8012D45C
 * calls 8012A154(D_801C34F0, 0, 1, 30, slot, 0), which comes back here with
 * cause 30: the object is destroyed at once (hit points -666, whatever the
 * damage) and, because the cause is 30, no event is sent back. So an
 * object destroyed on one console is destroyed on the other as well (the
 * same cause 30 is what the receiver uses for a remote car's death).
 *
 * Matching notes: the object's entity pointer, callback, hit points and
 * size, the effect-position override and the entity state byte are
 * volatile (retail re-reads them and keeps the stores out of delay slots;
 * the hit points are read with lhu/sll/sra); the size source `r` is its
 * own variable; the `size < 5` sound choices are whole calls in each arm
 * (cross-jumped to one jal); the positional sound is an inline helper (its
 * parameter copy loads 13 before the address of D_801C31CC). */
void __attribute__((section(".text_8011A4AC"))) func_8011A4AC(Obj *obj, int a1,
                                                             int damage, int cause)
{
    unsigned char dead = 0;
    unsigned int size = obj->size >> 3;
    int hp = (short) obj->hp;
    ObjHit *hit = (ObjHit *) (D_801C34EC + 0xB744);
    ObjVec *pos;
    int r;
    ObjVec v;

    if (cause == 30) {
        dead = 1;
        hp = -666;
    }
    if (hit->pos != 0) {
        pos = hit->pos;
    } else {
        pos = &obj->pos;
    }
    if (cause != 30) {
        if (hit->mode[8] == 8) {
            size = obj->size >> 5;
        } else {
            size = obj->size >> 3;
        }
    }
    if (guarded(obj, D_801C34EC)
        && *(unsigned char *) (*(char **) (D_801C34EC + 0x1186C) + 4) != 1) {
        return;
    }
    if (hp >= 0) {
        hp -= damage;
        if (hp <= 0) {
            dead = 1;
            hp = -666;
            if (func_8013A06C() != 0 && cause != 30) {
                func_8012DC04(obj->ent->slot);
            }
        }
        hit->hp = hp;
    }
    if (obj->on_hit != 0) {
        obj->on_hit(hp, obj->ent);
    }
    obj->hp = hp;
    if (dead) {
        ObjShape *sh = obj->ent->shape;

        switch (sh->kind & 0xF) {
        case 0:
            r = sh->size20;
            break;
        case 1:
            r = sh->size10;
            break;
        default:
            r = 64;
            break;
        }
        size = r >> 4;
        switch (obj->ent->type >> 4) {
        case 0x1F5:
        case 0x1FE:
            func_8011D5A0(pos, 0, (1 << (33 - func_8015A000(size))) - 1, 7,
                          size, 7, 13, 10, 128, 5);
            func_8013CAE0(D_801C34F4, 14, pos);
            break;
        case 0x1FA:
            func_8013CAE0(D_801C34F4, 14, pos);
            func_8011BC6C(pos, 0, obj->size >> 1, 5, 0, 0);
            break;
        case 0x1F7:
        case 0x200:
            size += 8;
        case 0x1F6:
        case 0x1FF:
            size = (int) size >> 2;
            func_8011D5A0(pos, 0, (1 << (33 - func_8015A000(size))) - 1, 7,
                          size, 7, 73, 5, 128, 8);
            if ((int) size < 5) {
                func_8013CAE0(D_801C34F4, 14, pos);
            } else {
                func_8013CAE0(D_801C34F4, 15, pos);
            }
            break;
        case 0x1F9:
        case 0x202:
            size += 8;
        case 0x1F8:
        case 0x201:
            size += 8;
        case 0x1F4:
            size = (int) size >> 2;
            func_8011D5A0(pos, 0, (1 << (33 - func_8015A000(size))) - 1, 15,
                          size, 15, 72, 73, 128, 12);
            if ((int) size < 5) {
                func_8013CAE0(D_801C34F4, 15, pos);
            } else {
                func_8013CAE0(D_801C34F4, 16, pos);
            }
            break;
        case 0x1FB:
            play_sound_at(13, pos);
            break;
        case 0x1FC:
            if ((unsigned int) (hit->mode[8] - 3) < 2) {
                int mask = (1 << (30 - func_8015A000(r))) - 1;
                int n = r >> 5;

                if (n > 0) {
                    int half = mask >> 1;

                    do {
                        n--;
                        v.x = obj->pos.x + (rand() & mask) - half;
                        v.y = obj->pos.y + (rand() & mask) - half;
                        v.z = obj->pos.z + (rand() & mask);
                        func_8011BC6C(&v, 0, (obj->size - (rand() & 3)) & 0xFFFF,
                                      24, (rand() & 0x3F) + 180, 1);
                    } while (n > 0);
                }
                func_8011AC14(obj, &v);
            } else {
                if ((obj->ent->count & 0x7F) >= 5) {
                    obj->ent->state = 4;
                    func_80164F34(obj->ent, &obj->pos, a1, 30, 45);
                }
                func_8011BC6C(pos, 0, obj->size >> 1, 72, 0, 0);
                func_8016D6BC(obj->ent, 1);
                func_8013CAE0(D_801C34F4, 14, pos);
            }
            break;
        case 0x1FD:
            size = (int) size >> 2;
            func_8011D5A0(pos, 0, (1 << (33 - func_8015A000(size))) - 1, 15,
                          size, 15, 72, 73, 128, 12);
            if ((int) size < 5) {
                func_8013CAE0(D_801C34F4, 15, pos);
            } else {
                func_8013CAE0(D_801C34F4, 16, pos);
            }
            obj->hp = 5;
            break;
        }
        if ((*(int *) obj->ent & 0xFFF0) != 0x1FC0) {
            func_8016D6BC(obj->ent, 1);
            if ((obj->ent->count & 0x7F) >= 3) {
                obj->ent->state = 2;
                func_80164F34(obj->ent, &obj->pos, a1, 30, 45);
            }
            obj->ent->state = 1;
        }
    } else if (cause != 1) {
        if (hit->mode[8] != 3) {
            func_8011BC6C(pos, 0, size & 0xFFFF, 5, 0, 0);
        } else if ((rand() & 3) == 0) {
            func_8011BC6C(pos, 0, 8, 25, 0, 0);
        }
    }
}

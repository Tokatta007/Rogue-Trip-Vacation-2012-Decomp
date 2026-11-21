/* Rogue Trip: create the objects of a level (801143B8), a caller of the
 * link-state getter func_8013A06C (0 no link game, 1 master, 2 slave). See
 * docs/LINK_CABLE.md.
 *
 * PsyQ 4.4, "-O2 -G8 -fvolatile", ASPSX 2.56 (retail keeps every store out
 * of delay slots and re-zero-extends loaded bytes). Data: D_801C3784 (.sbss,
 * gp-relative in retail) is defined here; the game data pointer D_801C34EC
 * and D_801C34F0 belong to game_main.c (absolute-addressed). */

/* A record of the level's object list (the walker 801643F8 hands each one
 * to this function). Byte +2 is the record's slot / sub-index. */
typedef struct {
    unsigned char unk0[2];
    unsigned char slot;         /* +2 */
} LevelRec;

/* An object built from a record by func_80114368. */
typedef struct {
    char pad0[0xC];
    unsigned char unkC;         /* +0xC */
    unsigned char unkD;         /* +0xD */
    char pad0E[0x1C - 0xE];
    int pos[11];                /* +0x1C */
    int unk48;                  /* +0x48 */
    short v[3][4];              /* +0x4C: three points (x, y, z, pad) */
} Obj;

/* The game data blocks this function indexes. */
typedef struct { char b[284]; } Blk284;
typedef struct { char b[100]; } Blk100;
typedef struct { char b[24]; } Blk24;
typedef struct { char b[112]; } Blk112;
typedef struct { char b[32]; } Blk32;
typedef struct { char b[64]; } Blk64;
typedef struct { char b[44]; } Blk44;
typedef struct { char b[28]; } Blk28;
typedef struct {
    char pad0[0x1136C];
    Blk284 b1136C[4];           /* +0x1136C */
    char pad117DC[0x1191C - 0x117DC];
    Blk100 b1191C[3];           /* +0x1191C */
    char pad11A48[0x11C6C - 0x11A48];
    Blk24 b11C6C[9];            /* +0x11C6C */
    char pad11D44[0x11D50 - 0x11D44];
    Blk112 b11D50[2];           /* +0x11D50 */
    Blk32 b11E30[3];            /* +0x11E30 */
    char pad11E90[0x11EB8 - 0x11E90];
    Blk64 b11EB8[4];            /* +0x11EB8 */
    Blk44 b11FB8[4];            /* +0x11FB8 */
    char pad12068[0x12380 - 0x12068];
    Blk28 b12380[4];            /* +0x12380 */
} Game;

extern Game *D_801C34EC;                        /* game data */
extern int D_801C34F0;
static int D_801C3784;

extern int func_8013A06C(void);                 /* link state: 0 none, 1 master, 2 slave */
extern int func_8013B69C(void);                 /* number of players (GameState +6) */
extern Obj *func_80114368(LevelRec *rec);       /* new object from a record */
extern int func_8012A0B8(int a0, int a1, int a2, int *pos);
extern void func_801215DC(char *game, Obj *o, int kind, int slot);
extern void func_80127284(int kind, int a1, Obj *o);
extern void func_80150FE0(char *a0, Obj *o, int a2);
extern void func_800FD6E0(int kind, LevelRec *rec, int a2);
extern void func_80127DC4(int kind, int a1, LevelRec *rec);
extern void func_80119F04(char *a0, LevelRec *rec, int kind, int arg);
extern void func_8012E484(LevelRec *rec, int arg);
extern void func_8011A1F8(LevelRec *rec, int arg);
extern void func_8011B4F0(int n, LevelRec *rec);
extern void func_8011B57C(int kind, LevelRec *rec);
extern void func_80176DD8(int n, LevelRec *rec);
extern void func_80163A60(LevelRec *rec, int n);
extern void func_8013E598(LevelRec *rec);
extern void func_801F54B4(LevelRec *rec);
extern void func_801F56F8(LevelRec *rec, int arg);
extern void func_801793E4(LevelRec *rec);
extern Obj *func_801641F8(void);
extern void func_80164274(Obj *o, LevelRec *rec);
extern int func_80133040(void);
extern void func_80179454(Obj *o, int a1);
extern void func_801787CC(LevelRec *rec);
extern void func_8016FF8C(LevelRec *rec, int a1);
extern void func_80127148(int n, LevelRec *rec);
extern void func_80149D40(char *a0, int n, LevelRec *rec, int a3);
extern void func_801544D8(char *a0, Obj *o);
extern void func_80129780(char *a0, int arg);
extern void func_801428E4(char *a0, int arg);
extern void func_80125AC4(char *game, Obj *o);
extern void func_80125AE4(char *game, LevelRec *rec);
extern void func_800FDDC8(LevelRec *rec);
extern void func_801798E0(char *a0, LevelRec *rec);
extern void func_80179BC0(char *a0, int a1);
extern void func_801F8138(LevelRec *rec, int kind);
extern void func_801F8234(LevelRec *rec);
extern void func_8011B8DC(LevelRec *rec);
/* Overlay (801F....) handlers: (block, record) or (block, object). */
extern void func_801F7144(char *a0, LevelRec *rec);
extern void func_801F71B0(char *a0, Obj *o);
extern void func_801F6548(char *a0, Obj *o);
extern void func_801F64F0(char *a0, LevelRec *rec);
extern void func_801F6530(char *a0, LevelRec *rec);
extern void func_801F5490(char *a0, LevelRec *rec);
extern void func_801F54DC(char *a0, Obj *o);
extern void func_801F54D0(char *a0, LevelRec *rec);
extern void func_801F6B3C(char *a0, LevelRec *rec);
extern void func_801F58A8(char *a0, Obj *o);
extern void func_801F599C(char *a0, LevelRec *rec);
extern void func_801F5F9C(char *a0, Obj *o);
extern void func_801F5F18(char *a0, Obj *o);
extern void func_801F5FC0(char *a0, Obj *o);
extern void func_801F5FD8(char *a0, Obj *o);
extern void func_801F5FF0(char *a0, LevelRec *rec);
extern void func_801F5578(char *a0, Obj *o);
extern void func_801F8610(char *a0, Obj *o);
extern void func_801F86C4(char *a0, Obj *o);
extern void func_801F8778(char *a0, LevelRec *rec);
extern void func_801F5ECC(char *a0, Obj *o);
extern void func_801F9AA0(char *a0, Obj *o);
extern void func_801F9B10(char *a0, Obj *o);
extern void func_801F9B90(char *a0, Obj *o);
extern void func_801F9C0C(char *a0, Obj *o);
extern void func_801F9C7C(char *a0, LevelRec *rec);
extern void func_801F9CD8(char *a0, LevelRec *rec);
extern void func_801F9D34(char *a0, LevelRec *rec);
extern void func_801F5500(char *a0, LevelRec *rec);
extern void func_801F556C(char *a0, Obj *o);
extern void func_801F76A0(char *a0, LevelRec *rec);
extern void func_801F6DC4(char *a0, LevelRec *rec);
extern void func_801F6E04(char *a0, LevelRec *rec);
extern void func_801F6E10(char *a0, LevelRec *rec);
extern void func_801F5E5C(char *a0, Obj *o);
extern void func_801F5EC4(char *a0, LevelRec *rec);
extern void func_801F5ED0(char *a0, LevelRec *rec);
extern void func_801F5EF8(char *a0, LevelRec *rec);
extern void func_801F5F20(char *a0, Obj *o);
extern void func_801F6804(char *a0, LevelRec *rec, int n);
extern void func_801F6818(char *a0, LevelRec *rec);
extern void func_801F6824(char *a0, Obj *o);
extern void func_801F6848(char *a0, LevelRec *rec);
extern void func_801F5C78(char *a0, Obj *o);
extern void func_801F54B8(char *a0, LevelRec *rec);
extern void func_801F54C4(char *a0, Obj *o);
extern void func_801F76D8(char *a0, LevelRec *rec);
extern void func_801F76F0(char *a0, LevelRec *rec);
extern void func_801F771C(char *a0, LevelRec *rec);
extern void func_801F557C(char *a0, Obj *o);
extern void func_801F5D9C(char *a0, LevelRec *rec);
extern void func_801F5DDC(char *a0, LevelRec *rec);
extern void func_801F59C8(char *a0, LevelRec *rec);
extern void func_801F5A34(char *a0, Obj *o);
extern void func_801F54C0(char *a0, LevelRec *rec);
extern void func_801F552C(char *a0, Obj *o);
extern void func_801FB510(char *a0, LevelRec *rec);
extern void func_801FB550(char *a0, LevelRec *rec);
extern void func_801FB598(char *a0, LevelRec *rec);
extern void func_801FB5E0(char *a0, LevelRec *rec);
extern void func_801FB628(char *a0, LevelRec *rec);
extern void func_801FAB5C(char *a0, LevelRec *rec);
extern void func_801FAB68(char *a0, Obj *o);
/* Level-object handlers of the block at game +0x6220. */
extern void func_8010938C(char *a0, LevelRec *rec);
extern void func_80109544(char *a0, LevelRec *rec);
extern void func_80109680(char *a0, LevelRec *rec);
extern void func_80109AEC(char *a0, LevelRec *rec);
extern void func_80109C40(char *a0, LevelRec *rec);
extern void func_80109F94(char *a0, LevelRec *rec);
extern void func_8010A208(char *a0, LevelRec *rec);
extern void func_8010A3B0(char *a0, LevelRec *rec);
extern void func_8010A558(char *a0, LevelRec *rec);
extern void func_8010A704(char *a0, LevelRec *rec);
extern void func_8010A888(char *a0, LevelRec *rec);
extern void func_8010AA84(char *a0, LevelRec *rec);
extern void func_8010ACF8(char *a0, LevelRec *rec);
extern void func_8010AED0(char *a0, LevelRec *rec);
extern void func_8010B048(char *a0, LevelRec *rec);
extern void func_8010B1CC(char *a0, LevelRec *rec);
extern void func_8010B344(char *a0, LevelRec *rec);

#define GAME ((char *) D_801C34EC)
#define G D_801C34EC

static inline char *blk284(Game *g, int i)
{
    return g->b1136C[i].b;
}

static inline char *blk64(Game *g, int i)
{
    return g->b11EB8[i].b;
}

static inline char *blk112(Game *g, int i)
{
    return g->b11D50[i].b;
}

static inline char *blk32(Game *g, int i)
{
    return g->b11E30[i].b;
}

static inline void setup_179(char *p, LevelRec *rec, int f)
{
    func_801798E0(p, rec);
    func_80179BC0(p, f);
}

static inline char *blk100_515(Game *g, int k)
{
    return g->b1191C[k - 515].b;
}

static inline char *blk100_518(Game *g, int k)
{
    return g->b1191C[k - 518].b;
}

/* The index helpers below reproduce retail's evaluation order: the index is
 * computed, then the game pointer loaded, then scaled (an inline parameter
 * also stops GCC folding "- base" into the offset where retail does not). */

/* Kinds 300..399 are created only in game modes 0..2 outside a link game. */
static inline int local_kinds_allowed(void)
{
    int ok = 0;

    if (*(int *) (GAME + 0x7D8) < 3) {
        ok = func_8013A06C() == 0;
    }
    return ok;
}

/* @801143B8: create one object of a level. The level loader walks the
 * level's object list with 801643F8, passing this function (or 801143B0) as
 * the callback: KIND is the record's object kind, REC the record (byte +2 a
 * slot / sub-index), ARG the walker's extra argument. Most kinds build an
 * object from the record (80114368) and hand it, or the record itself, to
 * the handler of its block in the game data (many are in the level overlay,
 * 801F....). Kinds 16..287 with low nibble 0 are placed and registered
 * (8012A0B8, 801215DC, 80127284; kind 80 also sets up a second object for
 * the block at +0x496C); other kinds in that range go to 800FD6E0 (low
 * nibble < 14) or 80127DC4. Ranges 400.., 501.., 900.., 430.., 1107..,
 * 3000.., 1140.., 681.. have their own creators; the rest is a switch.
 *
 * Link game: kinds 300..399 (handler 80119F04, block +0x10A60; objects that
 * mostly go to the level overlay) are created only in game modes 0..2 and
 * only when 8013A06C reports no link game. In a link game (or modes 3 and
 * up) only kinds 380..382 are still created, and only when the bonus-track
 * flag +0x127E5 is set. The partner console loads the same level, so both
 * consoles leave these objects out alike. Independently of the link state,
 * kinds 554, 556..571 (except the first of each group of four) and 595,
 * and the extra objects of kind 555, need a one-player game (8013B69C,
 * GameState +6, == 1), so a link game (2..4 players) never has them.
 *
 * Matching notes: the switch has an empty case (753) and one more empty case
 * between 1101 and 1105 (retail's decision tree needs the extra node; its
 * test is deleted as a jump to the next jump's target, so the exact value is
 * not recoverable); the case bodies are in retail's layout order. */
void __attribute__((section(".text_801143B8")))
func_801143B8(int kind, LevelRec *rec, int unused, int arg)
{
    Obj *o;
    int slot;
    char *p;

    if ((unsigned) (kind - 16) < 272) {
        if ((kind & 0xF) == 0) {
            o = func_80114368(rec);
            slot = func_8012A0B8(D_801C34F0, 1, 0, o->pos);
            rec->slot = slot;
            func_801215DC(GAME, o, kind, slot);
            func_80127284(kind, D_801C3784, o);
            if (kind == 80) {
                o = func_80114368(rec);
                func_80150FE0(GAME + 0x496C, o, D_801C3784);
                o->unkC = 0;
                o->unkD = 0;
                o->unk48 = 3;
                o->v[0][0] = -56;
                o->v[0][1] = 104;
                o->v[0][2] = 0;
                o->v[1][0] = 0;
                o->v[1][1] = 144;
                o->v[1][2] = 0;
                o->v[2][0] = 56;
                o->v[2][1] = 104;
                o->v[2][2] = 0;
                rec->slot = slot;
            }
        } else if ((kind & 0xF) < 14) {
            func_800FD6E0(kind, rec, D_801C3784);
        } else {
            func_80127DC4(kind, D_801C3784, rec);
        }
    } else if ((unsigned) (kind - 300) < 100) {
        if (local_kinds_allowed()) {
            func_80119F04(GAME + 0x10A60, rec, kind, arg);
        } else if (GAME[0x127E5] != 0 && (unsigned) (kind - 380) < 3) {
            func_80119F04(GAME + 0x10A60, rec, kind, arg);
        }
    } else if ((unsigned) (kind - 400) < 19) {
        func_8012E484(rec, arg);
    } else if ((unsigned) (kind - 501) < 14) {
        func_8011A1F8(rec, arg);
    } else if ((unsigned) (kind - 900) < 62) {
        func_8011B4F0(kind - 900, rec);
    } else if ((unsigned) (kind - 430) < 18) {
        func_8011B57C(kind, rec);
    } else if ((unsigned) (kind - 1107) < 6) {
        func_80176DD8(kind - 1107, rec);
    } else if ((unsigned) (kind - 3000) < 9) {
        func_80163A60(rec, kind - 3000);
    } else if ((unsigned) (kind - 1140) < 27) {
        func_8013E598(rec);
    } else if ((unsigned) (kind - 681) < 18) {
        if (kind == 684 && rec->slot != 0) {
            func_801F54B4(rec);
        } else {
            func_801F56F8(rec, arg);
        }
    } else {
        switch (kind) {
        case 1:
            func_801793E4(rec);
            break;
        case 2:
            o = func_801641F8();
            func_80164274(o, rec);
            func_80179454(o, func_80133040());
            o->unkD = 0;
            break;
        case 5:
            func_801787CC(rec);
            break;
        case 4000:
            func_8016FF8C(rec, 0);
            break;
        case 4009:
            func_8016FF8C(rec, 1);
            break;
        case 4020 ... 4021:
            func_80127148(kind - 4020, rec);
            break;
        case 700:
            func_80149D40(GAME + 0x496C, 0, rec, 0);
            break;
        case 701:
            func_80149D40(GAME + 0x496C, 1, rec, 0);
            break;
        case 702:
            func_80149D40(GAME + 0x496C, 2, rec, 0);
            break;
        case 703:
            func_80149D40(GAME + 0x496C, 3, rec, 0);
            break;
        case 704:
            func_80149D40(GAME + 0x496C, 4, rec, 0);
            break;
        case 705:
            func_80149D40(GAME + 0x496C, 5, rec, 0);
            break;
        case 706:
            func_80149D40(GAME + 0x496C, 6, rec, 0);
            break;
        case 707:
            func_80149D40(GAME + 0x496C, 7, rec, 0);
            break;
        case 708:
            func_80149D40(GAME + 0x496C, 8, rec, 0);
            func_80149D40(GAME + 0x496C, 25, rec, 0);
            break;
        case 709:
            func_801544D8(GAME + 0x496C, func_80114368(rec));
            break;
        case 710:
            func_80149D40(GAME + 0x496C, 10, rec, 0);
            break;
        case 711:
            func_80149D40(GAME + 0x496C, 11, rec, 0);
            break;
        case 713:
            func_80149D40(GAME + 0x496C, 24, rec, 0);
            break;
        case 714:
            func_80149D40(GAME + 0x496C, 26, rec, 0);
            break;
        case 715:
            func_80149D40(GAME + 0x496C, 23, rec, 0);
            break;
        case 750:
            func_80149D40(GAME + 0x496C, 0, rec, 1);
            break;
        case 751:
            func_80149D40(GAME + 0x496C, 1, rec, 1);
            break;
        case 752:
            func_80149D40(GAME + 0x496C, 2, rec, 1);
            break;
        case 753:
            break;
        case 754:
            func_80149D40(GAME + 0x496C, 4, rec, 1);
            break;
        case 755:
            func_80149D40(GAME + 0x496C, 5, rec, 1);
            break;
        case 756:
            func_80149D40(GAME + 0x496C, 6, rec, 1);
            break;
        case 757:
            func_80149D40(GAME + 0x496C, 7, rec, 1);
            break;
        case 758:
            func_80149D40(GAME + 0x496C, 8, rec, 1);
            break;
        case 759:
            func_80149D40(GAME + 0x496C, 8, rec, 2);
            break;
        case 1100:
            func_80129780(G->b12380[rec->slot].b, arg);
            rec->slot = 0;
            break;
        case 1101:
            break;
        case 1130:
            func_801428E4(GAME + 0x123F4, arg);
            break;
        case 1120:
            func_80125AC4(GAME, func_80114368(rec));
            break;
        case 1121:
            func_80125AE4(GAME, rec);
            break;
        case 1106:
            *(LevelRec **) (GAME + 0x496C) = rec;
            break;
        case 712:
            p = GAME;
            switch (rec->slot) {
            case 0:
                *(LevelRec **) (p + 0x4970) = rec;
                break;
            case 1:
                *(LevelRec **) (p + 0x4974) = rec;
                break;
            default:
                *(LevelRec **) (p + 0x4978) = rec;
                break;
            }
            rec->slot = 0;
            break;
        case 515 ... 517:
            func_801F7144(blk100_515(G, kind), rec);
            break;
        case 518 ... 520:
            o = func_80114368(rec);
            func_801F71B0(blk100_518(G, kind), o);
            break;
        case 527:
            func_801F6B3C(GAME + 0x11A48, rec);
            break;
        case 521:
            func_801F6548(GAME + 0x12170, func_80114368(rec));
            break;
        case 522:
            func_801F64F0(GAME + 0x12170, rec);
            break;
        case 523:
            func_801F6530(GAME + 0x12170, rec);
            break;
        case 525:
            func_801F5490(GAME + 0x121A0, rec);
            break;
        case 524:
            func_801F54DC(GAME + 0x121A0, func_80114368(rec));
            break;
        case 526:
            func_801F54D0(GAME + 0x121A0, rec);
            break;
        case 554:
            if (func_8013B69C() == 1) {
                func_801F5F9C(GAME + 0x11488, func_80114368(rec));
            }
            break;
        case 555:
            func_801F5F9C(GAME + 0x1136C, func_80114368(rec));
            if (func_8013B69C() == 1) {
                func_801F5F9C(GAME + 0x115A4, func_80114368(rec));
                func_801F5F9C(GAME + 0x116C0, func_80114368(rec));
            }
            break;
        case 556: case 560: case 564: case 568:
            if (func_8013B69C() == 1 || kind == 556) {
                o = func_80114368(rec);
                func_801F5F18(blk284(G, (kind - 556) >> 2), o);
            }
            break;
        case 557: case 561: case 565: case 569:
            if (func_8013B69C() == 1 || kind == 557) {
                o = func_80114368(rec);
                func_801F5FC0(blk284(G, (kind - 557) >> 2), o);
            }
            break;
        case 558: case 562: case 566: case 570:
            if (func_8013B69C() == 1 || kind == 558) {
                o = func_80114368(rec);
                func_801F5FD8(blk284(G, (kind - 558) >> 2), o);
            }
            break;
        case 559: case 563: case 567: case 571:
            if (func_8013B69C() == 1 || kind == 559) {
                func_801F5FF0(blk284(G, (kind - 559) >> 2), rec);
            }
            break;
        case 583:
            func_801F5ECC(GAME + 0x11870, func_80114368(rec));
            break;
        case 584:
            func_801F5578(GAME + 0x118E4, func_80114368(rec));
            break;
        case 580:
            func_801F8610(GAME + 0x117DC, func_80114368(rec));
            break;
        case 581:
            func_801F86C4(GAME + 0x117DC, func_80114368(rec));
            break;
        case 582:
            func_801F8778(GAME + 0x117DC, rec);
            break;
        case 585:
            func_801F9AA0(GAME + 0x11A54, func_80114368(rec));
            break;
        case 586:
            func_801F9B10(GAME + 0x11A54, func_80114368(rec));
            break;
        case 587:
            func_801F9B90(GAME + 0x11A54, func_80114368(rec));
            break;
        case 588:
            func_801F9C0C(GAME + 0x11A54, func_80114368(rec));
            break;
        case 589:
            func_801F9C7C(GAME + 0x11A54, rec);
            break;
        case 590:
            func_801F9CD8(GAME + 0x11A54, rec);
            break;
        case 591:
            func_801F9D34(GAME + 0x11A54, rec);
            break;
        case 592:
            func_801F5500(GAME + 0x11AC0, rec);
            break;
        case 593:
            func_801F556C(GAME + 0x11AC0, func_80114368(rec));
            break;
        case 595:
            if (func_8013B69C() == 1) {
                func_801F76A0(GAME + 0x11B1C, rec);
            }
            break;
        case 597:
            func_801F6DC4(GAME + 0x11ADC, rec);
            break;
        case 598:
            func_801F6E04(GAME + 0x11ADC, rec);
            break;
        case 599:
            func_801F6E10(GAME + 0x11ADC, rec);
            break;
        case 600:
            func_801F5E5C(GAME + 0x11B70, func_80114368(rec));
            break;
        case 601:
            func_801F5EC4(GAME + 0x11B70, rec);
            break;
        case 602:
            func_801F5ED0(GAME + 0x11B70, rec);
            break;
        case 603:
            func_801F5EF8(GAME + 0x11B70, rec);
            break;
        case 604:
            func_801F5F20(GAME + 0x11B70, func_80114368(rec));
            break;
        case 622 ... 624:
            func_801F6804(GAME + 0x11C24, rec, kind - 622);
            break;
        case 626:
            func_801F6818(GAME + 0x11C24, rec);
            break;
        case 627:
            func_801F6824(GAME + 0x11C24, func_80114368(rec));
            break;
        case 628:
            func_801F6848(GAME + 0x11C24, rec);
            break;
        case 630:
            func_801F5C78(G->b11C6C[rec->slot].b, func_80114368(rec));
            break;
        case 635:
            func_8011B8DC(rec);
            break;
        case 637:
            func_801F54B8(GAME + 0x11CE4, rec);
            break;
        case 636:
            func_801F54C4(GAME + 0x11CE4, func_80114368(rec));
            break;
        case 639:
            func_801F76D8(GAME + 0x11D28, rec);
            break;
        case 638:
            func_801F76F0(GAME + 0x11D28, rec);
            break;
        case 634:
            func_801F771C(GAME + 0x11D28, rec);
            break;
        case 641 ... 642:
            o = func_80114368(rec);
            func_801F557C(blk112(G, kind - 641), o);
            break;
        case 644:
            func_801F5D9C(blk32(G, rec->slot - 1), rec);
            break;
        case 645:
            func_801F5DDC(blk32(G, rec->slot - 1), rec);
            break;
        case 650:
            func_801F59C8(GAME + 0x11E90, rec);
            break;
        case 651:
            func_801F5A34(GAME + 0x11E90, func_80114368(rec));
            break;
        case 655:
            func_801F54C0(GAME + 0x11EA4, rec);
            break;
        case 656:
            func_801F552C(GAME + 0x11EA4, func_80114368(rec));
            break;
        case 657: case 662: case 667: case 672:
            func_801FB510(blk64(G, (kind - 657) / 5), rec);
            break;
        case 658: case 663: case 668: case 673:
            func_801FB550(blk64(G, (kind - 658) / 5), rec);
            break;
        case 659: case 664: case 669: case 674:
            func_801FB598(blk64(G, (kind - 659) / 5), rec);
            break;
        case 660: case 665: case 670: case 675:
            func_801FB5E0(blk64(G, (kind - 660) / 5), rec);
            break;
        case 661: case 666: case 671: case 676:
            func_801FB628(blk64(G, (kind - 661) / 5), rec);
            break;
        case 677:
            func_801FAB5C(G->b11FB8[rec->slot].b, rec);
            break;
        case 678:
            func_801FAB68(G->b11FB8[rec->slot].b, func_80114368(rec));
            break;
        case 530:
            if (rec->slot == 0) {
                o = func_80114368(rec);
                func_801F58A8(GAME + 0x10FF4, o);
                func_80127284(530, D_801C3784, o);
            } else {
                func_801F599C(GAME + 0x10FF4, rec);
            }
            break;
        case 531 ... 534:
            func_80127DC4(kind, D_801C3784, rec);
            break;
        case 4060 ... 4064:
            func_801F8138(rec, kind);
            break;
        case 4070:
            func_801F8234(rec);
            break;
        case 1301:
            func_8010938C(GAME + 0x6220, rec);
            break;
        case 1302:
            func_80109544(GAME + 0x6220, rec);
            break;
        case 1303:
            func_80109680(GAME + 0x6220, rec);
            break;
        case 1304:
            func_80109AEC(GAME + 0x6220, rec);
            break;
        case 1305:
            func_80109C40(GAME + 0x6220, rec);
            break;
        case 1307:
            func_80109F94(GAME + 0x6220, rec);
            break;
        case 1308:
            func_8010A208(GAME + 0x6220, rec);
            break;
        case 1309:
            func_8010A3B0(GAME + 0x6220, rec);
            break;
        case 1310:
            func_8010A558(GAME + 0x6220, rec);
            break;
        case 1311:
            func_8010A704(GAME + 0x6220, rec);
            break;
        case 1312:
            func_8010A888(GAME + 0x6220, rec);
            break;
        case 1314:
            func_8010AA84(GAME + 0x6220, rec);
            break;
        case 1315:
            func_8010ACF8(GAME + 0x6220, rec);
            break;
        case 1316:
            func_8010AED0(GAME + 0x6220, rec);
            break;
        case 1317:
            func_8010B048(GAME + 0x6220, rec);
            break;
        case 1318:
            func_8010B1CC(GAME + 0x6220, rec);
            break;
        case 1319:
            func_8010B344(GAME + 0x6220, rec);
            break;
        case 800:
            func_800FDDC8(rec);
            break;
        case 1201:
            setup_179(GAME + 0x11154, rec, 0);
            break;
        case 1200:
            setup_179(GAME + 0x10DE4, rec, 1);
            break;
        }
    }
}

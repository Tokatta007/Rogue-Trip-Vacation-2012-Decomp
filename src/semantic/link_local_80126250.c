/* Rogue Trip match reset, extra cars and demo director (80120288..80126D8C),
 * reconstructed from the retail instructions. Built like the engine link
 * modules: PsyQ 4.4, "-O2 -G8 -fvolatile", ASPSX 2.56. .sbss at 801C37A8
 * (8 words, below), .rodata at 800F366C (the jump tables of 80120288 and
 * 80120B68, 12 words each).
 *
 * Five functions of one retail module that share the .sbss block (the demo
 * camera state): the match setup 80136EA4 (game_main.c) calls 80120288 (reset
 * the game record), 80120B68 (per-level start values) and 801211B4 (add a
 * computer car); the round-end check 8011FA30 calls the demo director
 * 80126250 in game mode 0, which calls 801268A0 (pick the demo camera car).
 *
 * Link relevance (docs/LINK_CABLE.md, Layers 3 and 4):
 * - 80120288 runs on both consoles before the players are created. By game
 *   mode (+0x7D8) it sets up one view (modes 0..2, 6+) or two views (modes
 *   3..5, the split-screen modes). A link game is mode 2 (2 players: one
 *   player per console, one view) or mode 5 (3/4 players: two local players,
 *   two views); match setup then gives local players views 0/1 (80121008).
 *   It also seeds rand() from 801788E4 on each console.
 * - 80120B68 runs on both consoles after loading; it arms the demo state only
 *   in mode 0 and sets the level's time values (+0x1267C/+0x12680).
 * - 801211B4 (computer cars) is only called without a link: match setup adds
 *   extra cars only outside a link game.
 * - 80126250 and 801268A0 run only in the demo (mode 0), never in a link
 *   game. 80126250's one game event is 80132CF4(3, 0), the race reset: the
 *   round-end handler 801387F0 turns it into "DEMO COMPLETE" and the next
 *   demo level.
 *
 * Game layout used (game = the big game record, D_801C34EC elsewhere):
 * player records at +0xB788 (0x8B8 bytes each), cars at +0xC8F8 (0x958
 * bytes each), car count at +0x12750; car slots of the level (+0x1241C
 * objects, +0x1268C models, +0x1270C count); +0x12688 level; +0x7D8 game
 * mode; +0x127DE/+0x127DF demo flags; +0x127E2 round over; +0x122D4 a demo
 * tick counter; per-car tables at +0x1243C, +0x12734 and +0x126CC. */

extern void func_800F56B0(void *car, int a, int i, int b, void *c, int d);
extern void func_800F5E1C(void *car, int target);
extern short func_800FF828(int a, void *pos);
extern void func_800FF9C8(void *sub);
extern int func_801004E4(void *sub);
extern void func_801033D8(void *views, int i);   /* step view mode */
extern void func_80121A00(void *game);
extern void func_80121C44(void *game);
extern void func_8012208C(void *game, void *car, int *a, int *b);
extern void func_80123058(void *game, int a, int b, int c);
extern int func_80125094(void *a, void *b);      /* distance */
extern int func_801250C8(void *a, void *b);      /* distance */
extern void func_8012AF9C(void *inv, int weapon, int n);  /* give weapon */
extern void func_80132CF4(int event, int arg);   /* raise a game event */
extern short func_80178A1C(void);                /* ticks this frame */
extern int rand(void);
extern int **D_801C34F0;
extern void func_80102E88(void *views, int view, void *pos, int mode);
extern void func_801253C8(int *out, void *pos);

/* .sbss 801C37A8..801C37C7, $gp-relative, so every function using them must
 * be in this unit. D_801C37A8 is also read and written by 8011EE48 (not
 * reconstructed yet; it will have to join this unit). D_801C37B0 is only
 * cleared (80120B68). */
static int D_801C37A8;      /* set by 80120288 when a match is set up */
static int D_801C37AC;      /* car the demo camera follows */
static int D_801C37B0;
static int D_801C37B4;      /* demo run time */
static int D_801C37B8;      /* view-change timer */
static int D_801C37BC;      /* camera timer */
static int D_801C37C0;      /* demo camera is on a free spot */
static int D_801C37C4;      /* demo just started */

/* car + 4 */
typedef struct {
    int pad0;
    int unk4;           /* car +0x08 */
    char pad8[0x38];
    int unk40;          /* car +0x44 */
    char pad44[0x10];
    int unk54;          /* car +0x58: AI mode */
    short unk58;        /* car +0x5C */
    short pad5A;
    short unk5C;        /* car +0x60 */
    short pad5E;
    short unk60;        /* car +0x64 */
} Sub;

typedef struct {
    int pad0;
    Sub sub;                    /* +0x004 */
    char pad68[0x1E4 - 0x68];
    char pos[0x80];             /* +0x1E4: position */
    char inv[0x738 - 0x264];    /* +0x264: weapons */
    int unk738;                 /* +0x738 */
    char pad73C[0x780 - 0x73C];
    int unk780;                 /* +0x780 */
    int unk784;
    char pad788[0x7C0 - 0x788];
    int unk7C0;
    int pad7C4;
    int unk7C8;
    int pad7CC;
    int unk7D0;                 /* +0x7D0: player number */
    char pad7D4[0x824 - 0x7D4];
    unsigned char unk824;
    char pad825[5];
    unsigned char unk82A;
    char pad82B[0x958 - 0x82B];
} Car;

/* The parts of the game record reached as struct members (not volatile
 * under -fvolatile, and array indexing puts the base first in the add). */
typedef struct {
    char pad0[0x610C];
    char *unk610C[(0xBEC0 - 0x610C) / 4];
    char *unkBEC0;
    char padBEC4[0x1243C - 0xBEC4];
    int unk1243C[(0x126CC - 0x1243C) / 4];
    int unk126CC[(0x12734 - 0x126CC) / 4];
    int unk12734[(0x12750 - 0x12734) / 4];
    int unk12750;
} Tab;

#define G8(g, o) (*(unsigned char *) ((char *) (g) + (o)))
#define G32(g, o) (*(int *) ((char *) (g) + (o)))
#define GP(g, o) (*(char **) ((char *) (g) + (o)))
#define CARS(g) ((Car *) ((char *) (g) + 0xC8F8))
#define SUBP(g, i) ((Sub *) ((char *) ((Car *) (g) + (i)) + 0xC8FC))


/* Player record (0x8B8 bytes at game +0xB788, two of them). */
typedef struct {
    char pad0[0x274];
    int unk274;
    char pad278[0x2A4 - 0x278];
    unsigned char unk2A4;
    char pad2A5[2];
    unsigned char unk2A7[9];
    unsigned char unk2B0[9];
    char pad2B9[0x7DC - 0x2B9];
    int unk7DC;
    char pad7E0[0x8B8 - 0x7E0];
} Player;

/* Per-player bytes kept across the reset (+0x127AE: player record kept). */
typedef struct {
    char pad0[0x1237C];
    signed char unk1237C[2];    /* +0x1237C: per player */
    unsigned char unk1237E[2];  /* +0x1237E: per player */
    char pad12380[0x127AE - 0x12380];
    unsigned char unk127AE[2];  /* +0x127AE: per player */
} Keep;

#define KP(g) ((Keep *) (g))
#define PLAYERS(g) ((Player *) ((char *) (g) + 0xB788))

extern void func_8011FECC(char *game, int i);
extern void *memset(void *p, int c, int n);
extern void func_80120A00(char *game);
extern void func_80120A48(char *game);
extern void func_80120AD8(char *game);
extern void func_800FEC08(void *a, void *b, void *c);
extern int func_801788E4(void);
extern void srand(int seed);
extern void func_8016428C(void);
extern void func_80178CB8(void);
extern void func_80125B64(char *game);
extern void func_80129740(void *a);
extern void func_801428A8(void *a);
extern void func_801F5840(void *a, short i);
extern void func_801F85EC(void *a);
extern void func_801F5CD0(void *a);
extern void func_801F6D58(void *a);
extern void func_801F7568(void *a);
extern void func_801F9A20(void *a);
extern void func_801F5460(void *a);
extern void func_801F542C(void *a);
extern void func_801F769C(void *a);
extern void func_801F5C30(void *a);
extern void func_801F66AC(void *a);
extern void func_801F544C(void *a);
extern void func_801F5D5C(void *a);
extern void func_801F6B20(void *a);
extern void func_801F7080(void *a, int i);
extern void func_801F80B0(void);
extern void func_801F5414(void *a, short i);
extern void func_801F5D1C(void *a, int i);
extern void func_801F648C(void *a);
extern void func_801F5918(void *a);
extern void func_801F5424(void *a);
extern void func_801FB448(void *a, int i);
extern void func_801FA9E8(void *a, int i);
extern void func_801F54A0(void *a);
extern void func_80133098(void);
extern void func_8013304C(int a);
extern void func_80179778(void);
extern int func_80132ED4(void);
extern int func_80133034(void);
extern void func_80178D44(int a, int b, int c);
extern void func_80100FBC(void *views);
extern void func_80101144(void *views, int n);
extern void func_801011E4(void *views, int a, int b, int c);
extern void func_8016CDEC(void);
extern void func_8016CE68(int a);
extern void func_8016F064(void);
extern void func_8016F018(int a, int r, int g, int b);
extern void func_80132FA4(void);
extern void func_8012A088(int a);
extern void func_8011A1D4(void);
extern void func_8012E3AC(void);
extern void func_8014996C(void *a);
extern void func_80119E24(void *a);
extern void func_80140A84(void *a);
extern void func_8011B0B0(void);
extern void func_80176DCC(void);
extern void func_8013FF74(void);
extern void func_8012700C(void);
extern void func_801123F8(void);
extern void func_8013E560(void);
extern void func_800FD594(void);
extern void func_801787CC(int a);
extern void func_80163990(void);
extern void func_8016FF7C(void);
extern void func_8013D090(void);
extern void func_80133974(void);

/* @80120288: reset the game record for a new match (first call of the
 * match setup 80136EA4).
 * - For each of the two player records whose +0x127AE[i] is clear, keeps
 *   +0x7DC, the 9 bytes at +0x2A7 and +0x2B0, +0x274 and +0x2A4 across the
 *   clear (on the stack and at +0x1237C/+0x1237E).
 * - Clears the player records (+0xB788, 0x1170 bytes), the cars (+0xC8F8,
 *   0x4168 bytes) and byte +0x10A60, then puts the kept values back.
 * - 80120A00/80120A48/80120AD8, the two object lists (800FEC08), resets the
 *   car/slot counts, seeds rand() (801788E4) and picks +0x127A0 = rand() & 3,
 *   sets up the 4 records at +0x12380 (80129740) and +0x123F4.
 * - Per level (+0x12688, jump table 800F366C) calls the level overlay's
 *   init functions (801Fxxxx) on the level's objects.
 * - By game mode (+0x7D8): modes 3..5 set up two views (8013304C(2), view
 *   0 and 1 through 801011E4); other modes one view. Mode 0 (demo) also
 *   sets D_801C37C4 (demo just started, read by 80126250). In a link game
 *   (mode 2 or 5) this decides one or two local views.
 * - Then resets the other game systems and the demo flags +0x127DE..E1 and
 *   sets D_801C37A8.
 *
 * Matching notes: the two save/restore loops are top-tested while (1)
 * loops with their own counters (P, K, M: the restore loop lives in
 * temporaries); the per-player bytes are struct members (Keep) so the
 * address splits as (game + i + 0x10000) + 0x27AE; the mode test is a
 * switch (retail tests == 0, < 0, < 6, < 3) with VIEWS set in each case. */
void __attribute__((section(".text_80120288"))) func_80120288(char *game)
{
    unsigned char a[18];
    unsigned char b[18];
    int keep[2];
    int p;
    int i;
    int j;
    int k;
    int m;
    unsigned int kind;
    char *views;

    p = 0;
    while (1) {
        if (!(p < 2)) break;
        func_8011FECC(game, p);
        if (KP(game)->unk127AE[p] == 0) {
            keep[p] = PLAYERS(game)[p].unk7DC;
            for (j = 0; j < 9; j++) {
                a[j + p * 9] = PLAYERS(game)[p].unk2A7[j];
                b[j + p * 9] = PLAYERS(game)[p].unk2B0[j];
            }
            KP(game)->unk1237C[p] = PLAYERS(game)[p].unk274;
            KP(game)->unk1237E[p] = PLAYERS(game)[p].unk2A4;
        }
        p++;
    }
    memset(game + 0xB788, 0, 0x1170);
    memset(game + 0xC8F8, 0, 0x4168);
    memset(game + 0x10A60, 0, 1);
    k = 0;
    while (1) {
        if (!(k < 2)) break;
        if (KP(game)->unk127AE[k] == 0) {
            PLAYERS(game)[k].unk7DC = keep[k];
            for (m = 0; m < 9; m++) {
                PLAYERS(game)[k].unk2A7[m] = a[m + k * 9];
                PLAYERS(game)[k].unk2B0[m] = b[m + k * 9];
            }
            PLAYERS(game)[k].unk274 = KP(game)->unk1237C[k];
            PLAYERS(game)[k].unk2A4 = KP(game)->unk1237E[k];
        }
        k++;
    }
    func_80120A00(game);
    func_80120A48(game);
    func_80120AD8(game);
    func_800FEC08(game + 0x3C44, game + 0x3CC4, game + 0x4944);
    func_800FEC08(game + 0x15CC, game + 0x164C, game + 0x3BCC);
    G32(game, 0x12728) = 0;
    G32(game, 0x12750) = 0;
    G32(game, 0x12710) = 0;
    G32(game, 0x12760) = 0;
    G8(game, 0x1106D) = 0;
    srand(func_801788E4());
    G32(game, 0x127A0) = rand() & 3;
    func_8016428C();
    func_80178CB8();
    func_80125B64(game);
    G32(game, 0x123F0) = 0;
    for (i = 0; i < 4; i++) {
        func_80129740(game + 0x12380 + i * 0x1C);
    }
    func_801428A8(game + 0x123F4);
    kind = G32(game, 0x12688);
    switch (kind) {
    case 0:
        for (i = 0; i < 4; i++) {
            func_801F5840(game + 0x1136C + i * 0x11C, i);
        }
        func_801F85EC(game + 0x117DC);
        break;
    case 2:
        func_801F5CD0(game + 0x11B70);
        func_801F6D58(game + 0x11ADC);
        func_801F7568(game + 0x11B1C);
        func_801F9A20(game + 0x11A54);
        func_801F5460(game + 0x11AC0);
        break;
    case 3:
        func_801F542C(game + 0x11CE4);
        func_801F769C(game + 0x11D28);
        break;
    case 5:
        for (i = 0; i < 5; i++) {
            func_801F5C30(game + 0x11C6C + i * 0x18);
        }
        func_801F66AC(game + 0x11C24);
        break;
    case 7:
        func_801F544C(game + 0x118E4);
        func_801F5D5C(game + 0x11870);
        func_801F6B20(game + 0x11A48);
        for (i = 0; i < 3; i++) {
            func_801F7080(game + 0x1191C + i * 0x64, i);
        }
        func_801F80B0();
        break;
    case 8:
        for (i = 0; i < 2; i++) {
            func_801F5414(game + 0x11D50 + i * 0x70, i);
        }
        for (i = 0; i < 3; i++) {
            func_801F5D1C(game + 0x11E30 + i * 0x20, i);
        }
        break;
    case 9:
        func_801F648C(game + 0x12170);
        func_801F542C(game + 0x121A0);
        break;
    case 10:
        func_801F5918(game + 0x11E90);
        func_801F5424(game + 0x11EA4);
        break;
    case 11:
        for (i = 0; i < 4; i++) {
            func_801FB448(game + 0x11EB8 + i * 0x40, i);
        }
        for (i = 0; i < 10; i++) {
            func_801FA9E8(game + 0x11FB8 + i * 0x2C, i);
        }
        func_801F54A0(game + 0x10FF4);
        break;
    }
    func_80133098();
    switch (G32(game, 0x7D8)) {
    case 3:
    case 4:
    case 5:
        func_8013304C(2);
        views = game + 0x6220;
        func_80179778();
        func_80178D44(func_80132ED4(), 2, 0);
        func_80178D44(func_80133034(), 3, 1);
        func_80100FBC(views);
        func_80101144(views, 2);
        func_801011E4(views, 0, 6, 0);
        func_801011E4(views, 1, 6, 0);
        break;
    case 0:
        D_801C37C4 = 1;
    default:
        views = game + 0x6220;
        func_80178D44(func_80132ED4(), 0, 0);
        func_8013304C(0);
        func_80100FBC(views);
        func_80101144(views, 1);
        func_801011E4(views, 0, 6, 0);
        break;
    }
    func_8016CDEC();
    func_8016CE68(0x2000);
    func_8016F064();
    func_8016F018(0, 255, 255, 255);
    func_80132FA4();
    func_8012A088((int) D_801C34F0);
    func_8011A1D4();
    func_8012E3AC();
    func_8014996C(game + 0x496C);
    func_80119E24(game + 0x10A60);
    func_80140A84(game + 0x10A64);
    func_8011B0B0();
    func_80176DCC();
    func_8013FF74();
    func_8012700C();
    func_801123F8();
    func_8013E560();
    func_800FD594();
    func_801787CC(0);
    func_80163990();
    func_8016FF7C();
    func_8013D090();
    G8(game, 0x127DE) = 0;
    G8(game, 0x127DF) = 0;
    G8(game, 0x127E0) = 0;
    G8(game, 0x127E1) = 0;
    func_80133974();
    D_801C37A8 = 1;
}

extern void func_8016BB9C(void);
extern void func_8016BB58(void);
extern void func_80100A28(void);
extern void func_800FF868(void *a);
extern void func_800FEC24(void *a);
extern void func_80140BBC(void *a, void *b);
extern void func_8016F018(int a, int r, int g, int b);
extern void func_80179548(int r, int g, int b);
extern void func_8016CE68(int a);
extern void func_801686BC(void);
extern void func_8016A630(void);
extern void func_80164D98(void);
extern void func_8013E62C(void);
extern void func_80127344(void);
extern void func_801333BC(void *a);
extern char D_801B2E1C[];
extern void func_801F585C(void *a, short i);
extern void func_801F5478(void *a);
extern void func_801F7578(void *a);
extern void func_801F5CF0(void *a);
extern void func_801F66CC(void *a);
extern void func_801F5D68(void *a);
extern void func_801F5458(void *a);
extern void func_801F5420(void *a, short i);
extern void func_801F592C(void *a);
extern void func_801F5438(void *a);
extern void func_801F54C8(void *a);

/* @80120B68: start values for the match, after loading (match setup).
 * Clears the round-over flag +0x127E2, resets several subsystems, re-links
 * the object lists (800FEC24, 80140BBC), sets colours/fog (8016F018,
 * 80179548, 8016CE68). In game mode 0 (demo) clears the demo state
 * (D_801C37AC/B0/B4/B8/C0) and sets D_801C37C4. Per level (+0x12688, jump table
 * 800F369C) sets the level's time value +0x1267C (default 16000; level 4 also
 * +0x12680 = 6000) and calls overlay object inits. Last copies the car count
 * +0x12750 to +0x12754.
 *
 * Matching notes: S3/S0 are assigned after the first two calls (reorg fills
 * the call delay slots from after the call, and the prologue order follows);
 * the switch value goes through the local KIND (read once). */
void __attribute__((section(".text_80120B68"))) func_80120B68(char *game)
{
    int i;
    unsigned int kind;
    char *s3;
    char *s0;

    G8(game, 0x127E2) = 0;
    func_8016BB9C();
    s3 = game + 0x7DC;
    func_8016BB58();
    s0 = game + 0x15CC;
    func_80100A28();
    func_800FF868(s3);
    func_800FEC24(game + 0x3C44);
    func_800FEC24(s0);
    func_80140BBC(game + 0x10A64, s0);
    func_8016F018(0, 255, 255, 255);
    func_80179548(100, 125, 150);
    func_8016CE68(0x2000);
    func_801686BC();
    func_8016A630();
    func_80164D98();
    func_8013E62C();
    func_80127344();
    func_801333BC(D_801B2E1C);
    if (G32(game, 0x7D8) == 0) {
        D_801C37B0 = 0;
        D_801C37B4 = 0;
        D_801C37B8 = 0;
        D_801C37C0 = 0;
        D_801C37C4 = 1;
        D_801C37AC = 0;
    }
    func_800FF868(s3);
    G32(game, 0x1267C) = 16000;
    kind = G32(game, 0x12688);
    switch (kind) {
    case 0:
        for (i = 0; i < 4; i++) {
            func_801F585C(game + 0x1136C + i * 0x11C, i);
        }
        G32(game, 0x1267C) = 2400;
        break;
    case 2:
        func_801F5478(game + 0x11AC0);
        func_801F7578(game + 0x11B1C);
        func_801F5CF0(game + 0x11B70);
        G32(game, 0x1267C) = 1520;
        break;
    case 3:
        G32(game, 0x1267C) = 1000;
        break;
    case 1:
        G32(game, 0x1267C) = 2720;
        break;
    case 6:
        G32(game, 0x1267C) = 4000;
        break;
    case 5:
        func_801F66CC(game + 0x11C24);
        G32(game, 0x1267C) = 3600;
        break;
    case 7:
        func_801F5D68(game + 0x11870);
        func_801F5458(game + 0x118E4);
        G32(game, 0x1267C) = 1520;
        break;
    case 4:
        G32(game, 0x12680) = 6000;
        G32(game, 0x1267C) = 480;
        break;
    case 8:
        for (i = 0; i < 2; i++) {
            func_801F5420(game + 0x11D50 + i * 0x70, i);
        }
        G32(game, 0x1267C) = 2000;
        break;
    case 9:
        G32(game, 0x1267C) = 3200;
        break;
    case 10:
        func_801F592C(game + 0x11E90);
        func_801F5438(game + 0x11EA4);
        G32(game, 0x1267C) = 2400;
        break;
    case 11:
        G32(game, 0x1267C) = 8000;
        func_801F54C8(game + 0x10FF4);
        break;
    }
    G32(game, 0x12754) = G32(game, 0x12750);
}



/* The car-slot tables of the game record (as in 80121008). Struct members,
 * so not volatile under -fvolatile. */
typedef struct {
    char pad0[0xB768];
    int car_kind[8];            /* +0xB768: per car slot, 2 = computer car */
    char padB788[0x1240C - 0xB788];
    int player_car[4];          /* +0x1240C: per player */
    char *slot_car[8];          /* +0x1241C: per car slot */
    char *car_obj[(0x1268C - 0x1243C) / 4];  /* +0x1243C: per car */
    int slot_model[8];          /* +0x1268C */
    int slot_taken[8];          /* +0x126AC */
    int slot_world[8];          /* +0x126CC */
    int slot_car_no[8];         /* +0x126EC */
    int slot_count;             /* +0x1270C */
    char pad12710[0x12734 - 0x12710];
    int car_slot[8];            /* +0x12734 */
} Slots;

#define SL(g) ((Slots *) (g))

/* @801211B4: add computer car CAR with MODEL (match setup, only without a
 * link). Model 208 is special: on level 11 it only sets +0x127AD; else, the
 * first time, sets +0x127AC, picks +0x127A4 = 1..3 (below the car count),
 * and the car takes the last number (count - 1, count decremented); after
 * that every later car number is one lower. Then finds the first car slot
 * of the level with that model (+0x1268C), links car and slot both ways
 * (+0x12734, +0x1243C, +0x126EC), marks the slot a computer car (+0xB768 =
 * 2), makes the slot object visible (+0xC; model 208 hidden unless
 * +0x127AD), aims the car at a player (800F5E1C: player 0, or a random one
 * of two in mode 3), sets up the car record (800F56B0), points the slot's
 * world object at it and, in the demo, attaches the camera if it is the
 * demo camera car (D_801C37AC). No free slot: the car count is decremented.
 *
 * Matching notes: rand() sum written (r & 1) + 1 + (rand() & 1); the
 * ">= count" test goes through the flag OVER (retail materialises slt/xori);
 * the world pointer through PP (as in 80121008); the car fields as
 * CARS(game)[car] (retail hoists game + car * 0x958 and spills it). */
void __attribute__((section(".text_801211B4"))) func_801211B4(char *game, int car, int model)
{
    int i;
    int found;
    int r;
    int is_cam;
    int over;
    int **pp;
    Car *c;

    found = 0;
    if (model == 208) {
        if (G32(game, 0x12688) == 11) {
            G8(game, 0x127AD) = 1;
        } else if (G8(game, 0x127AD) == 0) {
            G8(game, 0x127AC) = 1;
            r = rand();
            G32(game, 0x127A4) = (r & 1) + 1 + (rand() & 1);
            over = G32(game, 0x127A4) >= G32(game, 0x12750);
            if (over) {
                G32(game, 0x127A4) = G32(game, 0x12750) - 1;
            }
            G32(game, 0x12750) = G32(game, 0x12750) - 1;
            car = G32(game, 0x12750);
        }
    } else if (G8(game, 0x127AC) != 0) {
        car--;
    }
    for (i = 0; i < SL(game)->slot_count; i++) {
        if (SL(game)->slot_model[i] == model) {
            SL(game)->car_slot[car] = i;
            SL(game)->car_obj[car] = SL(game)->slot_car[i];
            SL(game)->car_obj[car][0xC] = 1;
            if (model == 208 && G8(game, 0x127AD) == 0) {
                SL(game)->car_obj[car][0xC] = 0;
            }
            if (G32(game, 0x7D8) == 3) {
                func_800F5E1C(&CARS(game)[car], SL(game)->player_car[rand() & 1]);
            } else {
                func_800F5E1C(&CARS(game)[car], SL(game)->player_car[0]);
            }
            SL(game)->car_kind[i] = 2;
            SL(game)->slot_car_no[i] = car;
            func_800F56B0(&CARS(game)[car], (int) SL(game)->car_obj[car], car, model, game + 0x15CC,
                          SL(game)->slot_world[i]);
            pp = D_801C34F0 + SL(game)->slot_world[i];
            **pp = (int) (SL(game)->car_obj[car] + 0x1C);
            if (CARS(game)[car].unk82A != 0) {
                CARS(game)[car].unk824 = 0;
            }
            is_cam = 0;
            if (G32(game, 0x7D8) == 0) {
                is_cam = D_801C37AC == CARS(game)[car].unk7D0;
            }
            if (is_cam) {
                ((void (*)(char *, int, int)) func_80123058)(game, 0, i);
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        G32(game, 0x12750) = G32(game, 0x12750) - 1;
    }
}

/* @80126250: per-frame demo director (8011FA30, mode 0).
 * - First frame (D_801C37C4): clears byte +0xC of the objects at +0xBEC0 (and
 *   +0x610C[+0xB800] when +0xBF48 is 16), sets +0xB825, sets every car up
 *   (800F56B0) and gives each weapons 1, 8 and 3, two of each (8012AF9C).
 * - Every 300 ticks steps view 0's mode 0..3 times (rand() & 3, 801033D8).
 * - After 2700 ticks raises event 3 (race reset: "DEMO COMPLETE") and sets
 *   the round-over flag +0x127E2. Otherwise picks the camera car through
 *   80121A00/80121C44 and 801268A0 (0, 1 or 2) on the +0x127DE/+0x127DF
 *   flags and a 600-tick timer.
 * - When the car at +0x10A64+0x330 is near the object at +0x122C8 (distance
 *   below 2400) for 600 ticks, nearby cars (+0x82A clear) get AI mode 3
 *   aimed at it, and the camera moves to its player (80123058).
 * - Cars near the camera car, other than the two 8012208C picks, get AI mode
 *   2 aimed at the camera car.
 *
 * Matching notes: -fvolatile. Car fields go through CARS(game)[i] (retail
 * adds the 0xC8F8 base as a register and keeps the field offset in the load);
 * the car+4 record is addressed as SUBP (game + i*0x958 + 0xC8FC), a separate
 * expression from &CARS(game)[i].sub, which is what retail's givs show; the
 * block-1 "&car->sub unless null" is written out twice without a local; the
 * +0x10A64 base is a separate pointer so the volatile load keeps
 * "lui/ori 0x10A64; lw 0x330"; the arrays at +0x610C/+0xBEC0/+0x1243C.. are
 * struct members (Tab). */
void __attribute__((section(".text_80126250"))) func_80126250(char *game)
{
    int i;
    int n;
    int flag;
    int a;              /* cars picked by 8012208C */
    int b;
    int local;
    Car *hot;
    char *p;

    local = G8(game, 0x127DF);
    if (D_801C37C4 != 0) {
        D_801C37C4 = 0;
        ((Tab *) game)->unkBEC0[0xC] = 0;
        if (G32(game, 0xBF48) == 16) {
            ((Tab *) game)->unk610C[G32(game, 0xB800)][0xC] = 0;
        }
        G8(game, 0xB825) = 1;
        for (i = 0; i < G32(game, 0x12750); i++) {
            func_800F56B0(&CARS(game)[i], ((Tab *) game)->unk1243C[i], i, CARS(game)[i].unk7C0,
                          game + 0x15CC, ((Tab *) game)->unk126CC[((Tab *) game)->unk12734[i]]);
            func_8012AF9C(CARS(game)[i].inv, 1, 2);
            func_8012AF9C(CARS(game)[i].inv, 8, 2);
            func_8012AF9C(CARS(game)[i].inv, 3, 2);
        }
    }
    D_801C37B4 += func_80178A1C();
    D_801C37B8 += func_80178A1C();
    D_801C37BC += func_80178A1C();
    if (D_801C37B8 >= 301) {
        i = 0;
        n = rand() & 3;
        while (1) {
            if (!(i < n)) break;
            func_801033D8(game + 0x6220, 0);
            i++;
        }
        D_801C37B8 = 0;
    }
    if (D_801C37B4 >= 2701) {
        func_80132CF4(3, 0);
        G8(game, 0x127E2) = 1;
    } else if (G8(game, 0x127DE) != 0) {
        func_80121A00(game);
        if (local == 0) {
            func_801268A0(game, 0);
        }
        if (D_801C37BC >= 601) {
            func_801268A0(game, 0);
        }
    } else {
        flag = 0;
        if (G8(game, 0x127DF) != 0 || G32(game, 0x122D4) == 0) {
            flag = 1;
        }
        if (flag) {
            func_80121C44(game);
            G32(game, 0x122D4) = 1;
            func_801268A0(game, 1);
            D_801C37BC = 300;
        } else if (D_801C37BC >= 601) {
            func_801268A0(game, 2);
        }
    }
    func_8012208C(game, &CARS(game)[D_801C37AC], &a, &b);
    p = game + 0x10A64;
    hot = *(Car **) (p + 0x330);
    if (hot != 0 && G32(game, 0x122C8) != 0
        && func_801250C8(hot->pos, GP(game, 0x122C8) + 0x1C) < 2400) {
        G32(game, 0x122D4) += func_80178A1C();
        if (G32(game, 0x122D4) >= 601) {
            for (i = 0; i < G32(game, 0x12750); i++) {
                if (CARS(game)[i].unk82A == 0 && func_80125094(hot->pos, CARS(game)[i].pos) < 2400) {
                    Sub *sub = SUBP(game, i);
                    sub->unk4 = 1;
                    sub->unk54 = 3;
                    CARS(game)[i].unk780 = CARS(game)[i].unk784 - 180;
                    func_800F5E1C(&CARS(game)[i], hot->unk738);
                    sub->unk60 = func_800FF828(sub->unk40, CARS(game)[i].pos);
                    if (i == D_801C37AC) {
                        int id = hot->unk7D0;
                        D_801C37AC = id;
                        func_80123058(game, 0, CARS(game)[id].unk7C8, id);
                    }
                }
            }
        }
    }
    for (i = 0; i < G32(game, 0x12750); i++) {
        if (local == 0 && G8(game, 0x127DF) != 0) {
            int v;
            v = func_801004E4(&CARS(game)[i] ? &CARS(game)[i].sub : 0);
            if (v != SUBP(game, i)->unk58) {
                SUBP(game, i)->unk5C = v;
                func_800FF9C8(&CARS(game)[i] ? &CARS(game)[i].sub : 0);
            }
        }
        if (i != D_801C37AC && i != a && i != b
            && func_80125094(CARS(game)[D_801C37AC].pos, CARS(game)[i].pos) < 2400) {
            Sub *sub = SUBP(game, i);
            sub->unk4 = 1;
            sub->unk54 = 2;
            CARS(game)[i].unk780 = CARS(game)[i].unk784 - 420;
            func_800F5E1C(&CARS(game)[i], CARS(game)[D_801C37AC].unk738);
            sub->unk60 = func_800FF828(sub->unk40, CARS(game)[i].pos);
        }
    }
}


/* @801268A0: pick the demo camera car (80126250, demo only).
 * Finds the car nearest to the object at +0x10A64+0x38 (+0x1C: position)
 * as D_801C37AC and a runner-up ALT (nearer than the second best and within
 * 1600 of the best), resets the demo timers D_801C37B8/BC.
 * MODE 0: camera on that car (80123058); if the free-spot camera was on,
 *   80102E88(view 0, previous car's position, 0) ends it; else, if the car
 *   is within 2400 of the object, 80102E88(..., 1) puts view 0 on a spot
 *   near it (801253C8, x/y +-200 at random, z +120..151) and sets
 *   D_801C37C0.
 * MODE 1: leave the free spot, switch to ALT when the camera car did not
 *   change, camera on the car.
 * MODE 2: without a free spot and with an object at +0x122C8, when the
 *   "hot" car (+0x10A64+0x330) is within 2400 of it, follow that car's
 *   player with a free-spot camera; otherwise as mode 1.
 *
 * Matching notes: the +0x10A64 bases are separate pointers (P, Q); the car
 * count is a Tab member (not volatile, so retail's loads move before the
 * D_801C37BC/B8 stores); D_801C37AC = -1 is stored before ALT = -1 is set
 * (retail copies the constant); the MODE 1 and "leave free spot" branches
 * have their own switch-to-ALT/camera tails. 80123058 is called with 3
 * arguments here (a3 not set), with 4 in the mode-2 branch. */
void __attribute__((section(".text_801268A0"))) func_801268A0(char *game, int mode)
{
    int alt;
    int best;
    int second;
    int prev;
    char *target;
    int i;
    int d;
    int id;
    Car *hot;
    char *p;
    char *q;
    int pos[3];

    prev = D_801C37AC;
    D_801C37AC = -1;
    alt = -1;
    best = 0x7FFFFFFF;
    second = 0x7FFFFFFF;
    D_801C37BC = 0;
    D_801C37B8 = 0;
    p = game + 0x10A64;
    target = ((char **) p)[14] + 0x1C;
    for (i = 0; i < ((Tab *) game)->unk12750; i++) {
        d = func_80125094(CARS(game)[i].pos, target);
        if (d < best) {
            D_801C37AC = i;
            best = d;
        } else if (d < second && d < best + 1600) {
            alt = i;
            second = d;
        }
    }
    if (D_801C37AC == -1) {
        D_801C37AC = 0;
    }
    if (mode == 0) {
        ((void (*)(char *, int, int)) func_80123058)(game, 0, CARS(game)[D_801C37AC].unk7C8);
        if (D_801C37C0 != 0) {
            func_80102E88(game + 0x6220, 0, CARS(game)[prev].pos, 0);
        } else if (best < 2400) {
            func_801253C8(pos, target);
            if (rand() & 1) {
                pos[0] += 200;
            } else {
                pos[0] -= 200;
            }
            if (rand() & 1) {
                pos[1] += 200;
            } else {
                pos[1] -= 200;
            }
            pos[2] += 120 + (rand() & 31);
            func_80102E88(game + 0x6220, 0, pos, 1);
            D_801C37C0 = 1;
        }
        return;
    }
    if (mode == 1) {
        if (D_801C37C0 != 0) {
            func_80102E88(game + 0x6220, 0, CARS(game)[prev].pos, 0);
            D_801C37C0 = 0;
        }
        if (D_801C37AC == prev && alt != -1) {
            D_801C37AC = alt;
        }
        ((void (*)(char *, int, int)) func_80123058)(game, 0, CARS(game)[D_801C37AC].unk7C8);
        return;
    }
    if (D_801C37C0 != 0 || G32(game, 0x122C8) == 0) {
        func_80102E88(game + 0x6220, 0, CARS(game)[prev].pos, 0);
        D_801C37C0 = 0;
        if (D_801C37AC == prev && alt != -1) {
            D_801C37AC = alt;
        }
        ((void (*)(char *, int, int)) func_80123058)(game, 0, CARS(game)[D_801C37AC].unk7C8);
    } else {
        q = game + 0x10A64;
        hot = *(Car **) (q + 0x330);
        if (hot != 0 && func_80125094(hot->pos, GP(game, 0x122C8) + 0x1C) < 2400) {
            id = hot->unk7D0;
            D_801C37C0 = 1;
            D_801C37AC = id;
            func_80123058(game, 0, CARS(game)[id].unk7C8, id);
            func_801253C8(pos, GP(game, 0x122C8) + 0x1C);
            if (rand() & 1) {
                pos[0] += 200;
            } else {
                pos[0] -= 200;
            }
            if (rand() & 1) {
                pos[1] += 200;
            } else {
                pos[1] -= 200;
            }
            pos[2] += 120 + (rand() & 31);
            func_80102E88(game + 0x6220, 0, pos, 1);
        }
        if (D_801C37C0 == 0) {
            if (D_801C37AC == prev && alt != -1) {
                D_801C37AC = alt;
            }
            ((void (*)(char *, int, int)) func_80123058)(game, 0, CARS(game)[D_801C37AC].unk7C8);
        }
    }
}

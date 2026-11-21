/* Rogue Trip main module (the source file with main () at 80133EC0),
 * reconstructed functions that drive link-cable play. See docs/LINK_CABLE.md.
 * The module's small data lives at 801C3470.. (.sdata) and 801C3828..
 * (.sbss). Retail addresses it $gp-relative, which the toolchain only does
 * for variables the file defines, so the ones these functions use are
 * defined at the end of the file and the unit's .sdata is placed at their
 * address (config/semantic/units.json). The unit's .rodata (jump tables
 * only) is placed at 800F4010: main's two tables come first. */

typedef struct {
    unsigned int sum : 8;       /* byte 0: checksum, set by the send */
    unsigned int op : 8;        /* byte 1: message */
    unsigned int arg : 8;       /* byte 2 */
    unsigned int arg2 : 8;      /* byte 3 */
} LinkMsg;

/* Message 6 (controller button map) splits byte 3. */
typedef union {
    LinkMsg m;
    struct {
        unsigned int sum : 8;
        unsigned int op : 8;
        unsigned int port : 8;  /* controller port + 2 */
        unsigned int idx : 4;   /* map entry */
        unsigned int val : 4;   /* its button */
    } map;
    unsigned char b[4];
} LinkPacket;

extern int func_8012D1AC(void *buf, int len);    /* send packet */
extern int func_8012D45C(void);                  /* receive and apply packets */
extern void func_8012D78C(void);                 /* send this console's packets */
extern void func_8012D80C(void);                 /* build them */
extern void func_8012D3D0(void);                 /* drain and resynchronise */
extern void func_8012DB84(void);                 /* packet flag 16: quit */
extern int func_8012DB94(void);
extern void func_8012DBA0(void);                 /* packet flag 19: resume */
extern int func_8012DBB0(void);
extern void func_8012DBBC(void);
extern int D_801C32F8;                           /* link timeout enabled */
extern int D_801C32FC;
extern void func_80133708(void);
extern void func_80120F68(void *game);
extern int func_8016BDA8(int player);            /* player plays on this console */
extern void func_8016BE08(int on);
extern int func_8016BE60(int player);            /* player's controller port */
extern void func_8016BB9C(void);
extern void func_8016BB58(void);
extern void func_8013A898(int x, int y, int w, int h);
extern int func_8016C10C(int port);
extern int func_80154AFC(char *buf, const char *fmt, ...);   /* sprintf */
extern void func_80167020(int font, int x, int y, const char *text);
extern void func_80167104(int font);
extern void func_801670B4(int font);
extern void func_80167088(int font, int r, int g, int b);
extern unsigned char func_8016B6DC(int button, int port);
extern void func_8013AF7C(int sound, int arg);
extern void func_8017DE0C(void);
extern int func_8013A440(int port, int arg);
extern char *D_801B389C[];                       /* pause menu items */
extern char D_800F3EBC[];                        /* "OTHER PS PAUSE" */
extern char D_800F3ECC[];                        /* "CONTROLLER %d REMOVED" */
extern char D_800F3EE4[];                        /* "PLAYER %d PAUSE" */
extern char D_800F3EF4[];                        /* "HIT X TO SELECT" */
extern char *D_801C34EC;                         /* game data (defined below) */
extern int D_801C34FC;                           /* menu stack depth (below) */
static int D_801C3830, D_801C3834, D_801C3838, D_801C383C, D_801C3840;
extern int D_801B394C[];                         /* menu stack */
extern int D_801C32EC;                           /* link established */
extern char D_801B399F[];
extern int D_801B38E4[];                         /* car of each player */
extern int D_801B39B0[];
extern char D_801B3A14[];
extern char D_800F39C8[];                        /* "SHELL\MAIN.TMS" */
extern char D_800F39D8[];                        /* "SHELL\LITS.TMS" */
extern char D_800F39E8[];                        /* "SHELL\CARS.TMS" */
extern void func_8013841C(int a0, const char *file, void *dst);
extern void func_8015BF70(int mode);
extern unsigned int func_801F7D80(int a0);       /* shell overlay: front-end menu */
extern int func_80166D2C(int a0, const char *file);   /* load file, returns its size */
extern void func_80136AAC(int a0);
extern int func_80154ACC(void);                  /* rand */
extern void func_8013B478(int a0, int a1);
extern void func_8012D130(void);                 /* close link */
extern int func_8015EBDC(int mode);              /* VSync */
typedef struct {
    unsigned char unk0[4];      /* per player */
    unsigned char players;      /* +4 */
    unsigned char unk5;
    unsigned char unk6;         /* +6: players in a link game (2..4) */
    unsigned char link_active;  /* +7 (801B3967): cleared when the link closes */
    unsigned char unk8;
    unsigned char unk9;         /* +9: bonus car 12 already given */
    unsigned char unkA;         /* +A..+E: bonus car options */
    unsigned char unkB;
    unsigned char unkC;
    unsigned char unkD;
    unsigned char unkE;
    signed char unkF;           /* +F: bonus track (1-based, <= 0 random) */
    unsigned char unk10[4];     /* +10: per player, cleared by a link match */
    char pad14[0x3F - 0x14];
    unsigned char unk3F;        /* 801B399F */
} GameState;

extern GameState D_801B3960;

extern void func_80133658(void);
extern void func_80138370(int a0, int a1, int a2, int a3);
extern int func_8012D290(void *buf, int len);    /* receive packet */
extern void func_80139F20(const char *text, int x, int y, int *flag);
extern int func_80154AEC(const char *fmt, ...);  /* printf */
extern void func_8015C008(int a0);
extern void func_80167228(int font, int x, int y, const char *text);
extern void func_8016C070(int a0, int port);
extern int *func_8016C088(int port);             /* controller button map */
extern int func_8016C0F0(int port);              /* controller port in use */
extern int D_801B38F4[];                         /* car taken */
extern int D_801B393C[];
extern char D_800F3A50[];
extern char D_800F3A60[];
extern char D_800F3AB8[];
extern char D_800F3AE8[];
extern char D_800F3B0C[];                        /* "BAD PACKET OPCODE FROM SLAVE %d 
" */

/* The music player main creates on its stack (constructed by 8017C9F4)
 * and publishes in D_801C34F8: a C++-style object whose table at +8 holds
 * (this adjustment, index, function) entries; entry 2 starts music track
 * N, entry 3 stops it (game_mode.c also uses entry 4 to resume). */
typedef struct {
    unsigned short delta;
    short index;
    void (*fn)();
} VtblEntry;

typedef struct {
    int unk0;
    int unk4;
    VtblEntry *vtbl;            /* +8 */
    int unkC;
} SoundObj;

extern void func_801549A8(void);
extern void func_8017C9F4(SoundObj *obj);
extern char D_801CC820[], D_801DF010[], D_801DF7F0[], D_801DFAB0[];
extern char *D_801C34EC;
extern int D_801C34E8, D_801C34F0, D_801C34F4;
extern SoundObj *D_801C34F8;
extern int D_801C34FC, D_801C3504, D_801C3508, D_801C3470;
extern char D_801C3478[];                        /* "RTSHELL" */
extern void func_80136C58(void);
extern void func_80136CFC(void);
extern int func_80132F8C(void);
extern void func_8015BF70(int mode);
extern int func_8013B28C(const char *file, int a1, int hires, void *cb);
extern void func_8013B1FC(void);
extern void func_801F8A78(int a0);
extern void func_8013C120(int bank, int a1, int voice);
extern int func_801345EC(int a0);
extern int func_801F82C0(int *mode, int a1, unsigned char *opt);
extern int func_801F8658(int *mode, int a1, unsigned char *opt);
extern int func_801347A0(int *mode, int a1);
extern int func_80135260(int a0);
extern int func_801F5A0C(int a0, unsigned char *opt);
extern int func_801F8F70(int a0, int a1, unsigned char *opt);
extern int func_80135A84(int a0);
extern int func_80134DF4(int a0);
extern int func_8013689C(void);
extern int func_801355CC(void);
extern void func_80136EA4();
extern int func_80133040(void);
extern void func_8015FB30(int a0, int a1);
extern unsigned char func_8013B584(void);   /* effect volume setting */
extern int func_8013C958(int bank, int n);
extern unsigned char func_8013B594(void);   /* music volume setting */
extern int func_8013C98C(int bank, int n);
extern void func_8015FB80(int a0, int l, int r);
extern void func_80132EBC(void);
extern int func_80132090(void);
extern int func_801387F0(int ev);
extern void func_8013BED8(int bank, int a1);
extern void func_8013B5A4(int a0);
extern void func_8013B928(int bank);
extern void func_80170388(int a0);
extern unsigned char D_801B399C[];              /* option bytes */
extern int D_801C36C0, D_801C36CC, D_801C36D8, D_801C36DC;
extern char D_800F3980[];                        /* "\\MOVIES\GTLOGO.STR;1" */
extern char D_800F3998[];                        /* "\\MOVIES\STLOGO.STR;1" */
extern char D_800F39B0[];                        /* "\\MOVIES\OPENMOV.STR;1" */
static int D_801C3844;                           /* (.sbss, defined below) */

/* Set the sound-effect volume, clamped to its limits. */
static inline void set_sfx_volume(int v)
{
    D_801C36CC = v < D_801C36D8 ? v : D_801C36D8;
    D_801C36CC = v < D_801C36DC ? D_801C36DC : v;
}

/* Set the music volume, clamped to its limits, and apply it. */
static inline void set_music_volume(int v)
{
    D_801C36C0 = v < D_801C36D8 ? v : D_801C36D8;
    D_801C36C0 = v < D_801C36DC ? D_801C36DC : v;
    func_8015FB80(0, (short) D_801C36C0, (short) D_801C36C0);
}

/* The block at +0xB96C of the game data (also passed to 8011D8AC by the
 * game setup); retail forms its address before reading +8. */
static inline int *game_b96c(char *g)
{
    return (int *) (g + 0xB96C);
}

/* @80133EC0: main. Sets up the heaps/sound bank pointers and the music
 * player, plays the logo movies (the intro too unless one is skipped,
 * 8013B28C returning 0x800), then loops for ever over the front end and a
 * match:
 * - the front-end state machine (state 11 = start the match): 1 shell menu
 *   801345EC, which also clears the link state (D_801B3967) on every pass,
 *   2/3/6/7 shell overlay screens, 4 the link lobby 801347A0, 8 car select
 *   80135A84, 10 the link match start 80134DF4 (controller maps, car picks),
 *   5/9/13 other screens; screen 7 is told (a0 = 0) not to offer its
 *   option on a link slave (link state 2) or in game modes 1 and 3;
 * - match setup 80136EA4, the music track for the level, then the race
 *   loop: while the state is 12 (restart) it arms the link timeout
 *   (D_801C32F8 = 1, D_801C32FC = 0: a silent partner raises event 9 "LINK
 *   CONNECTION LOST"), runs the race 80132090, which clears the timeout for
 *   its start handshake, disarms it and lets 801387F0 turn the round's end
 *   event into the next state; then music and sound are stopped and the
 *   front end starts again.
 * GCC calls __main (801549A8) at the start of a function named main; the
 * hybrid build cannot resolve __main, so the C name differs and the
 * assembler name is main, and the call is written out. */
int game_main(void) asm("main");

int __attribute__((section(".text_80133EC0"))) game_main(void)
{
    SoundObj obj;
    int mode;
    int state;
    int addr;
    int track;
    int v;
    int buf;
    volatile VtblEntry *e;

    func_801549A8();
    func_8017C9F4(&obj);
    D_801C34EC = D_801CC820;
    D_801C34F0 = (int) D_801DF010;
    D_801C34F4 = (int) D_801DF7F0;
    D_801C34E8 = (int) D_801DFAB0;
    D_801C34F8 = &obj;
    func_80136C58();
    buf = 0x800201D0;
    func_80136CFC();
    state = 1;
    addr = func_80132F8C();
    func_8015BF70(0);
    D_801C3504 = 12;
    D_801C3844 = 0;
    D_801C3838 = 11;
    D_801C3508 = state;
    if (func_8013B28C(D_800F3980, 118, state, func_8013B1FC) != 0x800
        && func_8013B28C(D_800F3998, 178, state, func_8013B1FC) != 0x800) {
        func_801F8A78(addr);
        func_8013B28C(D_800F39B0, 2009, state, func_8013B1FC);
    } else {
        func_801F8A78(addr);
    }
    while (1) {
        D_801C34FC = 0;
        if (state != 11) {
            func_8013C120(D_801C34F4, 1, (int) D_801C3478);
        }
        while (1) {
            if (state == 11) {
                break;
            }
            switch (state) {
            case 1:
                D_801C34FC = 0;
                D_801B3960.link_active = 0;
                state = func_801345EC(addr);
                break;
            case 2:
                state = func_801F82C0(&mode, addr, D_801B399C);
                break;
            case 3:
                state = func_801F8658(&mode, addr, D_801B399C);
                break;
            case 4:
                state = func_801347A0(&mode, addr);
                break;
            case 5:
                state = func_80135260(addr);
                break;
            case 6:
                state = func_801F5A0C(buf, D_801B399C);
                break;
            case 7:
                {
                    int a0 = 1;
                    int a1 = 0;

                    if (*(volatile int *) (D_801C34EC + 0x7D8) == 1
                        || *(volatile int *) (D_801C34EC + 0x7D8) == 3) {
                        a1 = 1;
                    }
                    if (a1) {
                        a0 = 0;
                        D_801C3470 = 0;
                    }
                    if (D_801B3960.link_active == 2) {
                        a0 = 0;
                    }
                    state = func_801F8F70(a0, buf, D_801B399C);
                }
                break;
            case 8:
                state = func_80135A84(mode);
                break;
            case 10:
                state = func_80134DF4(addr);
                break;
            case 9:
                state = func_8013689C();
                break;
            case 13:
                state = func_801355CC();
                break;
            case 12:
                break;
            default:
                state = 1;
                break;
            }
        }
        track = 9;
        func_80136EA4(mode);
        switch (D_801B3960.players) {
        case 0:
            track = 2;
            break;
        case 1:
            track = 3;
            break;
        case 2:
            track = 4;
            break;
        case 3:
            {
                int big = 0;

                if (func_80133040()) {
                    big = game_b96c(D_801C34EC)[2] > 8000;
                }
                track = 5;
                if (big) {
                    track = 14;
                }
            }
            break;
        case 4:
            track = 16;
            break;
        case 5:
            track = 7;
            if (D_801B3960.unkA) {
                track = 15;
            }
            break;
        case 6:
            track = 8;
            break;
        case 7:
            track = 9;
            break;
        case 8:
            track = 10;
            break;
        case 9:
            track = 11;
            break;
        case 10:
            track = 12;
            break;
        case 11:
            track = 13;
            if (D_801B3960.unkB) {
                track = 15;
            }
            break;
        }
        func_8015FB30(95, 95);
        if (track == 15) {
            set_sfx_volume(func_8013B584() * func_8013C958(D_801C34F4, 13) / 127);
            set_music_volume(func_8013B594() * func_8013C98C(D_801C34F4, 13) / 127);
        } else if (track == 14) {
            set_sfx_volume(func_8013B584() * func_8013C958(D_801C34F4, 12) / 127);
            set_music_volume(func_8013B594() * func_8013C98C(D_801C34F4, 12) / 127);
        } else {
            set_sfx_volume(func_8013B584() * func_8013C958(D_801C34F4, D_801B3960.players) / 127);
            set_music_volume(func_8013B594() * func_8013C98C(D_801C34F4, D_801B3960.players) / 127);
        }
        e = &D_801C34F8->vtbl[2];
        e->fn((char *) D_801C34F8 + (short) e->delta, track);
        func_80132EBC();
        state = 12;
        while (1) {
            if (state != 12) {
                break;
            }
            D_801C32F8 = 1;
            D_801C32FC = 0;
            v = func_80132090();
            D_801C32F8 = 0;
            state = func_801387F0(v);
        }
        func_8013BED8(D_801C34F4, 0);
        if (state != 11) {
            func_8013B5A4(1);
        }
        e = &D_801C34F8->vtbl[3];
        e->fn((char *) D_801C34F8 + (short) e->delta, 2);
        set_music_volume(0);
        func_8013B928(D_801C34F4);
        func_80170388(D_801C34E8);
    }
}

/* @801345EC: run the front-end shell (menu overlay) and map its result to
 * the next game state; closes a link left open. Result 15 starts a race
 * straight away. Pushes an entry on the menu stack. */
int __attribute__((section(".text_801345EC"))) func_801345EC(int a0)
{
    int ret;

    func_8013841C(a0, D_800F39C8, D_801B39B0);
    func_8013841C(0x800BECE0, D_800F39D8, D_801B3A14);
    func_8015BF70(1);
    D_801C3840 = 16;
    D_801C383C = 0;
    D_801C3834 = 11;
    D_801C3830 = 0;
    if (D_801C32EC != 0) {
        func_8012D130();
    }
    switch (func_801F7D80(0)) {
    case 0:
        ret = 2;
        goto load;
    case 1:
        ret = 3;
    load:
        func_80166D2C(0x800201D0, D_800F39E8);
        func_80136AAC(0x800201D0);
        break;
    case 2:
        ret = 5;
        break;
    case 3:
        ret = 6;
        break;
    case 15:
        {
            GameState *gs = &D_801B3960;

            *(int *) (D_801C34EC + 0x7D8) = 0;
            *(int *) (D_801C34EC + 0x12688) = gs->players;
            D_801B399F[0] = 1;
            gs->unk5 = 1;
            gs->unk6 = 1;
        }
        D_801B38E4[0] = func_80154ACC() % D_801C3834;
        ret = 11;
        func_8013B478(0, 80);
        break;
    default:
        ret = 1;
        break;
    }
    D_801C34FC += D_801B394C[D_801C34FC] = 1;
    return ret;
}

typedef struct {
    int v[4];
} MenuList;

extern MenuList D_800F39F8, D_800F3A08;          /* shell menu items */
extern int D_801DFF40[];
extern char D_801B378C[];
extern int D_801C32E8;                           /* link role: master */
extern int D_801C3470;                           /* level (defined below) */
extern int func_8012CF84(int baud);              /* open the link */
extern int func_8012D058(void);                  /* handshake step */
extern int func_80139DB8(int frames, const char *text, int x, int y, int *flag);
extern int func_801F8420(int a0, MenuList *a, MenuList *b, char *c);   /* shell overlay menu */
extern void func_801351F4(int arg);
extern char D_800F3A18[];                        /* "LINK CABLE NOT CONNECTED" */
extern char D_800F3A34[];                        /* "WAITING FOR LINK CONNECTION" */
extern char D_800F3A80[];                        /* "OTHER PS HAS ABORTED, EXITING" */
extern char D_800F3AA0[];                        /* "PLAYERS: %d" */
extern char D_800F3AAC[];                        /* "LEVEL #: %d" */
extern char D_800F3AC4[];                        /* "BAD PACKET OPCODE FROM MASTER %d 
" */

/* Mark every player present. */
static inline void reset_players(void)
{
    int i;

    for (i = 0; i < 4; i++) {
        D_801B3960.unk0[i] = 1;
        D_801DFF40[i] = 0;
    }
}

/* @801347A0: the link-game lobby. Opens the link and waits for the
 * handshake (abortable). The master runs the shell menu for the number of
 * players and sends it (message 1); the slave waits for the master's
 * selections (messages 1, 2, 3, 6) until "done" (4); message 0 aborts. */
int __attribute__((section(".text_801347A0"))) func_801347A0(int *mode, int a1)
{
    MenuList a, b;
    char buf[16];
    int flag;
    LinkPacket msg;
    int ret, waiting, shown, n, i;
    int *map2, *map3;

    ret = 7;
    a = D_800F39F8;
    b = D_800F3A08;
    flag = 1;
    D_801B399F[0] = 0;
    reset_players();
    D_801B3960.unk5 = 0;
    func_80138370(1, D_801B39B0[0], 32, 0);
    if (func_8012CF84(0x1FA400) == 0) {
        for (n = 0; n < 180; n++) {
            func_80139F20(D_800F3A18, 48, 196, &flag);
            func_8015EBDC(0);
        }
        return *(D_801B394C + --D_801C34FC);
    }
    while (func_8012D058() < 0) {
        ret = func_80139DB8(60, D_800F3A34, 48, 196, &flag);
        if (ret != 0) {
            func_8012D130();
            return ret;
        }
    }
    if (D_801C32E8 != 0) {
        D_801B3960.link_active = 1;
        *(volatile int *) mode = func_801F8420(0, &a, &b, D_801B378C);
        ret = 7;
        switch (*mode) {
        case 0:
            D_801B3960.unk6 = 2;
            *(volatile int *) (D_801C34EC + 0x7D8) = 2;
            break;
        case 1:
            *(volatile int *) (D_801C34EC + 0x7D8) = 5;
            D_801B3960.unk6 = 3;
            break;
        case 2:
            *(volatile int *) (D_801C34EC + 0x7D8) = 5;
            D_801B3960.unk6 = 4;
            break;
        case 16:
            func_801351F4(0);
            return *(D_801B394C + --D_801C34FC);
        case 17:
            func_801351F4(1);
            return 1;
        }
        msg.m.op = 1;
        msg.m.arg = D_801B3960.unk6;
        func_8012D1AC(&msg, 4);
    } else {
        waiting = 1;
        shown = 0;
        func_8013841C(a1, D_800F3A50, D_801B39B0);
        flag = 1;
        while (1) {
            if (waiting == 0) {
                break;
            }
            func_80138370(1, D_801B39B0[0], 32, 0);
            map2 = func_8016C088(2);
            map3 = func_8016C088(3);
            if (shown <= 0) {
                func_80167228(1, 48, 196, D_800F3A60);
            } else {
                func_80167228(1, 48, 196, buf);
                shown--;
            }
            if (func_8012D290(&msg, 4) == 0) {
                continue;
            }
            switch (msg.m.op) {
            case 0:
                func_8015C008(0);
                func_8015EBDC(0);
                func_80138370(1, D_801B39B0[0], 0, 0);
                for (n = 0; n < 180; n++) {
                    {
                        char *t = D_800F3A80;

                        func_80139F20(t, 48, 196, &flag);
                    }
                    func_8015EBDC(0);
                }
                D_801C34FC--;
                func_8012D130();
                if (msg.m.arg != 0) {
                    return 1;
                }
                return D_801B394C[D_801C34FC];
            case 1:
                D_801B3960.unk6 = msg.m.arg;
                *mode = msg.m.arg - 2;
                func_80154AFC(buf, D_800F3AA0, D_801B3960.unk6);
                shown = 10;
                if (D_801B3960.unk6 == 4) {
                    *(volatile int *) (D_801C34EC + 0x7D8) = 5;
                } else {
                    *(volatile int *) (D_801C34EC + 0x7D8) = 2;
                }
                break;
            case 2:
                D_801C3470 = msg.m.arg;
                func_80154AFC(buf, D_800F3AAC, D_801C3470 + 1);
                shown = 10;
                break;
            case 3:
                for (i = 0; i < D_801B3960.unk6; i++) {
                    if (D_801B38E4[i] == msg.m.arg2) {
                        D_801B38F4[D_801B38E4[i]] = 1;
                        D_801B393C[i] = 1;
                    }
                }
                D_801B38E4[msg.m.arg] = msg.m.arg2;
                func_80154AFC(buf, D_800F3AB8, msg.m.arg + 1);
                shown = 10;
                break;
            case 6:
                if (msg.map.port == 2) {
                    map2[msg.map.idx] = msg.map.val;
                } else {
                    map3[msg.map.idx] = msg.map.val;
                }
                func_8016C070(1, msg.m.arg);
                break;
            case 4:
                D_801B3960.link_active = 2;
                ret = 7;
                waiting = 0;
                break;
            default:
                func_80154AEC(D_800F3AC4, msg.m.op);
                break;
            }
        }
    }
    *mode += 3;
    return ret;
}

/* @80134DF4: before a link race, send this console's controller button maps
 * (message 6, 8 per local port) and "done" (4), then take the partner's
 * maps, car choices (3) and "done" until it arrives; message 0 aborts. */
int __attribute__((section(".text_80134DF4"))) func_80134DF4(int a0)
{
    char buf[16];
    LinkPacket msg;
    int flag;
    int waiting, shown, port, n, i;
    int *map, *map2, *map3;

    waiting = 1;
    shown = 0;
    flag = 1;
    func_80133658();
    func_8013841C(a0, D_800F3A50, D_801B39B0);
    port = 0;
    while (1) {
        if (port >= 2) {
            break;
        }
        if (func_8016C0F0(port) != 0) {
            map = func_8016C088(port);
            msg.map.op = 6;
            msg.map.port = port + 2;
            for (n = 0; n < 8; n++) {
                msg.map.idx = n;
                msg.map.val = map[n];
                func_8012D1AC(&msg, 4);
                func_8015EBDC(0);
            }
        }
        port++;
    }
    msg.m.op = 4;
    func_8012D1AC(&msg, 4);
    while (1) {
        if (waiting == 0) {
            break;
        }
        func_80138370(1, D_801B39B0[0], 32, 0);
        map2 = func_8016C088(2);
        map3 = func_8016C088(3);
        if (shown <= 0) {
            func_80167228(1, 48, 196, D_800F3A60);
        } else {
            func_80167228(1, 48, 196, buf);
            shown--;
        }
        if (func_8012D290(&msg, 4) == 0) {
            continue;
        }
        switch (msg.m.op) {
        case 0:
            func_8015C008(0);
            func_8015EBDC(0);
            func_80138370(1, D_801B39B0[0], 32, 0);
            for (n = 0; n < 180; n++) {
                func_80139F20(D_800F3AE8, 48, 196, &flag);
                func_8015EBDC(0);
            }
            D_801C34FC--;
            func_8012D130();
            if (msg.m.arg == 0) {
                return D_801B394C[D_801C34FC];
            }
            return 1;
        case 3:
            for (i = 0; i < D_801B3960.unk6; i++) {
                if (D_801B38E4[i] == msg.m.arg2) {
                    D_801B38F4[D_801B38E4[i]] = 1;
                    D_801B393C[i] = 1;
                }
            }
            D_801B38E4[msg.m.arg] = msg.m.arg2;
            func_80154AFC(buf, D_800F3AB8, msg.m.arg + 1);
            shown = 10;
            break;
        case 6:
            if (msg.map.port == 2) {
                map2[msg.map.idx] = msg.map.val;
            } else {
                map3[msg.map.idx] = msg.map.val;
            }
            func_8016C070(1, msg.m.arg);
            break;
        case 4:
            waiting = 0;
            break;
        default:
            func_80154AEC(D_800F3B0C, msg.m.op);
            break;
        }
    }
    func_8013B478(0, 100);
    return 11;
}

/* @801351F4: tell the partner we are leaving (message 0, ARG), wait two
 * frames and close the link. */
void __attribute__((section(".text_801351F4"))) func_801351F4(int arg)
{
    LinkMsg msg;

    msg.op = 0;
    msg.arg = arg;
    func_8012D1AC(&msg, 4);
    func_8015EBDC(0);
    func_8015EBDC(0);
    func_8012D130();
    D_801B3960.link_active = 0;
}

/* A node of a loaded model hierarchy (only the fields used here). */
typedef struct Node {
    unsigned short type;        /* type << 4 */
    unsigned char unk2;
    volatile unsigned char count;   /* children (7 bits), flag (bit 7) */
    unsigned char car;          /* +4: selected car (menu model) */
    char pad5[7];
    struct Node *kids[3];       /* +0x0C */
    struct Node *parts[3];      /* +0x18 */
} Node;

/* The car shown in the menu. */
typedef struct {
    Node *volatile obj;
    char pad4[0x10];
    volatile short rx, ry;      /* +0x14 rotation */
    volatile unsigned short rz;
    short pad1A;
    char pad1C[4];
    volatile int model;         /* +0x20 */
    volatile int dist;          /* +0x24 */
    char mat[0x20];             /* +0x28 MATRIX */
} MenuView;

typedef struct {
    int v[17];
} CarModels;

typedef struct {
    int unk0, unk4;
    int left, right;            /* +8, +0xC: sound channels */
    int unk10, unk14;
    int volume;                 /* +0x18 */
} SoundCtl;

extern CarModels D_800F3B60;                     /* model of each car */
extern char D_800F3BA4[];                        /* file names */
extern char D_800F3BB4[];
extern char *D_801B37D0[];                       /* car names */
extern int D_801B3A50[];                         /* car voice */
extern unsigned char D_801B399C[];              /* option bytes; [2] the saved effect volume */
extern SoundCtl D_801C31CC;
extern int D_801C36C0, D_801C36CC, D_801C36D8, D_801C36DC;
extern int D_801C34F4;                           /* sound bank (defined below) */
extern int func_80132ED4(void);
extern void func_8012700C(void);
extern void func_80127148(int type, Node *node);
extern void func_8016428C(void);
extern void func_80178CB8(void);
extern void func_8016CDEC(void);
extern void func_8016F564(void);
extern void func_8016F064(void);
extern void func_80178D44(int model, int a1, int a2);
extern void func_8016CE78(int a0);
extern MenuView *func_801641F8(void);
extern void func_80164168(MenuView *view);
extern int func_801594CC(short angle);           /* rsin */
extern int func_8015959C(short angle);           /* rcos */
extern void func_8015A05C(void *rot, void *mat); /* RotMatrix */
extern void func_8015A01C(void *mat, void *out);
extern void func_8013AF34(int sound);
extern int func_80136718(int player, int car);   /* car unavailable */
extern void func_80138494(int model, int *a1, int *a2, int *a3, int car, volatile int *state);
extern void func_801274CC(Node *part, void *mat);
extern void func_8013C120(int bank, int a1, int voice);
extern void func_8013BDCC(int bank, int a1, int a2);
extern void func_8013BEA8(int bank);

/* Start sound CH on both channels. */
static inline void play_sound(int ch)
{
    D_801C31CC.left = ch;
    D_801C31CC.right = ch;
    func_8013BDCC(D_801C34F4, 0, 0);
}

/* Stop sound CH. */
static inline void stop_sound(int ch)
{
    D_801C31CC.left = ch;
    D_801C31CC.right = ch;
    func_8013BEA8(D_801C34F4);
}

/* Restart sound CH at volume VOL. */
static inline void set_sound_volume(int ch, int vol)
{
    D_801C31CC.left = ch;
    D_801C31CC.right = ch;
    D_801C31CC.volume = vol;
    func_8013BDCC(D_801C34F4, 0, 0);
}
extern int func_8017D580(int channel);           /* sound playing */
extern void func_8016BB58(void);
extern void func_8016BB9C(void);

/* @80135A84: car select. Each local player (both players on one console, or
 * this console's player in a link game) picks a car; a taken car is skipped.
 * In a link game every pick is sent as message 3 (player, car), and the
 * slave then sends its controller maps (6) and "done" (4). */
int __attribute__((section(".text_80135A84"))) func_80135A84(int a0)
{
    CarModels tbl;
    char buf[24];
    Node *parts[17 * 3];
    char mat[32];
    int s168;
    int turnl;
    int turnr;
    int state;
    LinkPacket msg;
    Node *obj, *sub, *kid, *part, *dp, **p, **q;
    MenuView *view;
    int model, nloop, autonext, ret, music;
    int i, j, k, car, player, pl, done, sel, v, size, idx, port, m, vol;
    unsigned int np;
    unsigned int t;

    tbl = D_800F3B60;
    autonext = 0;
    ret = 9;
    music = 0;
    turnr = 0;
    turnl = 0;
    state = 0;
    func_8015C008(0);
    func_8015EBDC(0);
    size = func_80166D2C(0x800201D0, D_800F3BA4);
    func_8013841C((int) ((int *) 0x800201DC + size / 4), D_800F3BB4, D_801B39B0);
    model = func_80132ED4();
    obj = *(Node *volatile *) 0x800201F4;
    sub = obj->parts[0];
    func_8012700C();
    if ((obj->count & 0x7F) >= 2) {
        dp = obj->parts[1];
        func_80127148((dp->type >> 4) - 4020, dp);
        if ((obj->count & 0x7F) >= 3) {
            dp = obj->parts[2];
            func_80127148((dp->type >> 4) - 4020, dp);
        }
    }
    for (car = 0; car < (sub->count & 0x7F); car++) {
        idx = car * 3;
        kid = sub->kids[car];
        for (j = 0; j < (kid->count & 0x7F) && j < 3; j++) {
            part = kid->parts[j];
            t = part->type >> 4;
            if (t < 4012) {
                if (t >= 4010) {
                    parts[idx++] = part;
                    continue;
                }
            }
            parts[idx++] = 0;
            j = kid->count & 0x7F;
        }
    }
    obj->count = (obj->count & 0x80) | 1;
    car = 0;
    func_8016428C();
    func_80178CB8();
    func_8016CDEC();
    func_8016F564();
    func_8016F064();
    func_80178D44(model, 0, 0);
    func_8016CE78(8);
    view = func_801641F8();
    view->obj = obj;
    func_80164168(view);
    view->dist = -600;
    player = 0;
    if (D_801B3960.link_active != 0) {
        np = D_801B3960.unk6;
        nloop = np >> 1;
        if ((*(int *) &D_801B3960.players & 0xFFFF0000) == 0x01030000) {
            nloop = 2;
        }
        if (D_801B3960.link_active == 2) {
            player = np - 1;
            if (np == 4) {
                player = 2;
            }
            ret = 11;
            autonext = 1;
        } else {
            ret = 10;
        }
    } else {
        nloop = 1;
        if (a0 >= 3) {
            nloop = 2;
        }
    }
    pl = 0;
    while (1) {
        if (pl >= nloop) {
            break;
        }
        done = 0;
        func_8016BB58();
        func_8016BB9C();
        state = 0;
        while (1) {
            if (done != 0) {
                break;
            }
            view->rz += 10;
            view->ry = -func_801594CC(view->rz) >> 5;
            view->rx = -func_8015959C(view->rz) >> 5;
            func_8015A05C((void *) &view->rx, view->mat);
            if (func_8016B6DC(0x10, pl) != 0) {
                if (state != 0) {
                    func_8013AF34(45);
                    state = 0;
                } else if (D_801B3960.link_active != 2) {
                    D_801C34FC--;
                    func_8013AF34(45);
                    return D_801B394C[D_801C34FC];
                }
            } else if (func_8016B6DC(0x80, pl) != 0) {
                if (D_801B3960.link_active != 0) {
                    func_801351F4(1);
                }
                func_8013AF34(45);
                return 1;
            } else if (func_8016B6DC(0x20, pl) != 0) {
                func_8013AF34(44);
                if (state == 0) {
                    state = 2;
                }
            } else if (func_8016B6DC(0x2000, pl) != 0 || autonext != 0) {
                car++;
                do {
                    sel = car > 16;
                    if (func_80136718(player, car) != 0) {
                        sel = 1;
                    }
                    if (sel != 0) {
                        if (car < 17) {
                            car++;
                        } else {
                            car = 0;
                        }
                    }
                } while (sel != 0);
                sub->car = car;
                turnr = 6;
                if (state == 1) {
                    state = 2;
                }
                if (autonext == 0) {
                    func_8013AF34(46);
                }
                autonext = 0;
            } else if (func_8016B6DC(0x8000, pl) != 0) {
                car--;
                do {
                    sel = car < 0;
                    if (func_80136718(player, car) != 0) {
                        sel = 1;
                    }
                    if (sel != 0) {
                        if (car < 0) {
                            car = 16;
                        } else {
                            car--;
                        }
                    }
                } while (sel != 0);
                sub->car = car;
                turnl = 6;
                if (state == 1) {
                    state = 2;
                }
                func_8013AF34(46);
            } else {
                sel = 0;
                if (func_8016B6DC(0x1000, pl) != 0 || func_8016B6DC(0x4000, pl) != 0) {
                    sel = 1;
                }
                if (sel != 0 && state == 0) {
                    do {
                        car = func_80154ACC() % 16;
                    } while (func_80136718(player, car) != 0);
                    sub->car = car;
                    if (state == 1) {
                        state = 2;
                    }
                    func_8013AF34(44);
                }
            }
            sel = 0;
            view->model = tbl.v[car];
            if (func_8016B6DC(0x40, pl) != 0 || func_8016B6DC(0x800, pl) != 0) {
                sel = 1;
            }
            if (sel != 0) {
                done = 1;
                func_8013AF34(45);
            }
            if (state == 0) {
                func_80154AFC(buf, D_800F3AB8, player + 1);
                func_801670B4(0);
                func_80167020(0, 120, 38, buf);
                func_801670B4(1);
                func_80167104(1);
                func_80167020(1, 160, 200, D_801B37D0[car]);
            }
            func_80138494(model, &s168, &turnl, &turnr, car, &state);
            k = 0;
            func_8017DE0C();
            idx = car * 3;
            func_8015A01C(view->mat, mat);
            for (; k < 3; k++) {
                dp = parts[idx];
                if (dp == 0) {
                    break;
                }
                func_801274CC(dp, mat);
                idx++;
            }
        }
        if (D_801B3960.link_active != 0) {
            msg.m.op = 3;
            msg.m.arg2 = car;
            msg.m.arg = player;
            func_8012D1AC(&msg, 4);
        }
        for (i = 0; i < D_801B3960.unk6; i++) {
            if (D_801B38E4[i] == car) {
                D_801B38F4[car] = 1;
                D_801B393C[i] = 1;
            }
        }
        D_801B38E4[player++] = car;
        autonext = 1;
        done = 0;
        func_8016BB58();
        do {
            sel = 0;
            func_8016BB9C();
            func_8017DE0C();
            if (func_8016B6DC(0x40, 0) != 0 || func_8016B6DC(0x40, 1) != 0) {
                sel = 1;
            }
            if (sel != 0) {
                done = 1;
            }
            sel = 0;
            if (func_8017D580(45) > 0 || func_8017D580(44) > 0 || func_8017D580(46) > 0) {
                sel = 1;
            }
        } while (sel != 0);
        if (done == 0) {
            func_8013C120(D_801C34F4, 30, D_801B3A50[car]);
            if (music == 0) {
                set_sfx_volume(D_801C36C0 * 2 / 3);
                play_sound(49);
                set_sfx_volume(D_801B399C[2]);
                func_8017DE0C();
                music = 1;
            }
            play_sound(109);
            do {
                sel = 0;
                func_8016BB9C();
                func_8017DE0C();
                if (func_8016B6DC(0x40, 0) == 0 && func_8016B6DC(0x40, 1) == 0) {
                    sel = func_8017D580(109) > 0;
                }
            } while (sel != 0);
            if (func_8017D580(109) > 0) {
                vol = 127;
                while (1) {
                    if (vol == 0) {
                        break;
                    }
                    vol--;
                    set_sound_volume(109, vol);
                    func_8017DE0C();
                }
                stop_sound(109);
            }
        }
        pl++;
    }
    if (D_801B3960.link_active == 2) {
        port = 2;
        while (1) {
            if (port >= 4) {
                break;
            }
            if (func_8016C0F0(port) != 0) {
                int *map = func_8016C088(port);

                msg.b[1] = 6;
                msg.b[2] = port + 2;
                for (m = 0; m < 8; m++) {
                    msg.map.idx = m;
                    msg.map.val = map[m];
                    func_8012D1AC(&msg, 4);
                    func_8015EBDC(0);
                }
            }
            port++;
        }
        msg.b[1] = 4;
        func_8012D1AC(&msg, 4);
        func_80133658();
        func_8013B478(0, 100);
    }
    D_801B394C[D_801C34FC] = 8;
    D_801C34FC++;
    return ret;
}

extern void func_8013B5A4(int a0);
extern void func_80120288(void *game);
extern void func_80131AC4(void);
extern void func_80131B34(void);
extern void func_801161F8(int a0);
extern int func_80131F64(int addr, int slot);    /* upload a TMS texture file */
extern void func_801313FC(int addr, int slot);   /* set up a DMD model file */
extern void func_8011425C(int tex, int a1);
extern int func_80126E2C(void *game, int level);
extern void func_80126E7C(void *game);
extern void func_80120B68(void *game);
extern void func_80121008(void *game, int player, int model, int view, int a4);
extern void func_801211B4(void *game, int i, int model);
extern void func_801382EC(int player);
extern void func_8016BD94(int player, int port);  /* set player's port (2/3: link) */
extern void func_8012D7B8(int local, int remote, int car0, int car1);
extern char *D_801B379C[];                       /* level file names */
extern char *D_801B3828[];                       /* car file names */
extern int D_801B386C[];                         /* bonus cars per level */
extern char D_800F3C88[];                        /* bonus track name format */
extern int D_801C3474;                           /* bonus track (defined below) */
extern char D_801C34AC[];                        /* "" */
extern char D_801C348C[];                        /* "DMD\\" */
extern char D_801C3494[];                        /* "DMD" */
extern char D_801C3498[];                        /* "TMS" */
extern char D_801C349C[];                        /* "%s%s.%s" */
extern char D_801C34A4[];                        /* "TMS\\" */
static int D_801C3844, D_801C3848, D_801C384C;   /* .sbss after D_801C3840 */

/* Game mode 1 or 3. */
static inline int mode_1_or_3(void)
{
    return *(volatile int *) (D_801C34EC + 0x7D8) == 1
        || *(volatile int *) (D_801C34EC + 0x7D8) == 3;
}

/* Game mode 2 without the bonus track. */
static inline int mode_2_plain(void)
{
    return *(volatile int *) (D_801C34EC + 0x7D8) == 2
        && *(unsigned char *) (D_801C34EC + 0x127E5) == 0;
}

/* Number of players, in the game data. */
static inline void set_nplayers(int n)
{
    *(volatile int *) (D_801C34EC + 0x12728) = n;
}

/* Load a car's sound bank voice. */
static inline void car_voice(int car)
{
    if (car < 11) {
        func_8013C120(D_801C34F4, car + 3, (int) D_801B3828[car]);
    } else if (car >= 12 && car < 15) {
        func_8013C120(D_801C34F4, car + 2, (int) D_801B3828[car]);
    }
}

/* Per-player byte at +0x8B5 of the player records (0x8B8 bytes each from
 * +0xB788 of the game data). */
static inline void set_player_pad(char *pl, int i)
{
    *(volatile char *) (pl + 0x8B5) = D_801B399C[i];
}

/* The option bytes at D_801B399C as car select reads them. */
typedef struct {
    unsigned char unk0[3];
    unsigned char lock;         /* +3 (D_801B399F) */
    unsigned char unk4[8];
    unsigned char unlocked[3];  /* +C: bonus cars 12..14 */
} CarOptions;

/* @80136718: is CAR unavailable to PLAYER? Car 11 is never selectable. The
 * bonus cars 12-14 need to be unlocked, and car 14 also needs level 11, no
 * lock and no link game, and must not be another player's pick. Any other car
 * is unavailable when another player picked it and it is marked taken (in a
 * link game by message 3). Every "yes" shares one return block in retail,
 * hence the label. */
int __attribute__((section(".text_80136718"))) func_80136718(int player, int car)
{
    int i;

    if (car == 11) {
        goto taken;
    }
    if (car >= 12) {
        CarOptions *opt = (CarOptions *) D_801B399C;
        int bonus = car - 12;

        if (opt->unlocked[bonus] == 0) {
            goto taken;
        }
        if (bonus == 2) {
            if (D_801B3960.players != 11) {
                goto taken;
            }
            if (opt->lock == 1) {
                goto taken;
            }
            if (D_801B3960.link_active != 0) {
            taken:
                return 1;
            }
            for (i = 0; i < D_801B3960.unk6; i++) {
                if (i != player && D_801B38E4[i] == car) {
                    goto taken;
                }
            }
        }
    }
    for (i = 0; i < D_801B3960.unk6; i++) {
        if (i != player && car == D_801B38E4[i]) {
            return D_801B38F4[car] != 0;
        }
    }
    return 0;
}

/* @80136EA4: match setup. D_801B3960.players (+4) is used here as the
 * level number (file names D_801B379C, voices 17 + level). Loads the level's and every player's textures
 * (TMS) and models (DMD), the optional bonus track and the extra (computer)
 * cars, which it picks at random unless a bonus car is due, loads the car
 * voices and creates the players. In a link game (state 1 master, 2 slave)
 * the players are numbered master first; each console sets up the packet
 * layer with its local and remote player counts and the numbers of its
 * local players (8012D7B8), gives its local players controller ports 0/1
 * and the partner's players the link ports 2/3 (8016BD94), and gives its
 * local players views 0/1 and the remote ones no view (-1). */
void __attribute__((section(".text_80136EA4"))) func_80136EA4(void)
{
    char path[56];
    char track[56];
    int extra[12];
    int nextra = 0;
    int tex = 1;
    int want13 = 0;
    int want12 = 0;
    int want14;
    int tpage;
    int i, j, k, n, m, e, c, ok, car, size, base, model;

    func_8013B5A4(nextra);
    *(volatile int *) (D_801C34EC + 0x7D4) = D_801B399C[0];
    set_nplayers(D_801B3960.unk6);
    func_80120288(D_801C34EC);
    func_80131AC4();
    func_801161F8(0);
    func_8013B478(10, 0);
    func_80154AFC(path, D_801C349C, D_801C34A4, D_801B379C[D_801B3960.players], D_801C3498);
    func_80166D2C(0x800201D0, path);
    tpage = func_80131F64(0x800201D0, 0);
    func_8013B478(20, 0);
    want14 = 0;
    if (D_801B399C[3] != 0) {
        *(volatile unsigned char *) (D_801C34EC + 0x127E5) = 1;
    } else {
        *(volatile unsigned char *) (D_801C34EC + 0x127E5) = 0;
    }
    if (func_80126E2C(D_801C34EC, D_801B3960.players) != 0) {
        *(unsigned char *) (D_801C34EC + 0x127E5) = 0;
        func_80126E7C(D_801C34EC);
        D_801C3848 = 0;
        D_801C384C = 0;
    } else if (D_801B3960.players == 4 || D_801B3960.players == 10
               || (D_801B3960.unkA != 0 && D_801B3960.players == 5)) {
        *(unsigned char *) (D_801C34EC + 0x127E5) = 0;
    } else if (D_801B3960.unkB != 0 && D_801B3960.players == 11) {
        *(unsigned char *) (D_801C34EC + 0x127E5) = 0;
    }

    /* bonus track */
    if (*(unsigned char *) (D_801C34EC + 0x127E5) != 0) {
        if (D_801B3960.unkF > 0) {
            D_801C3474 = D_801B3960.unkF - 1;
        } else {
            D_801C3474 = func_80154ACC() & 3;
        }
        func_80154AFC(track, D_800F3C88, D_801C3474);
        func_80154AFC(path, D_801C349C, D_801C34A4, track, D_801C3498);
        func_80166D2C(0x800201D0, path);
        tpage = func_80131F64(0x800201D0, tex++);
    }
    for (i = 0; i < D_801B3960.unk6; i++) {
        func_80154AFC(path, D_801C349C, D_801C34A4, D_801B3828[D_801B38E4[i]], D_801C3498);
        func_80166D2C(0x800201D0, path);
        tpage = func_80131F64(0x800201D0, tex++);
    }
    func_8013B478(30, 0);

    /* extra cars */
    if (D_801B3960.unk5 != 0) {
        if (*(int *) (D_801C34EC + 0x7D8) == 0) {
            nextra = 4;
        } else if (D_801B3960.players == 4
                   && func_80126E2C(D_801C34EC, D_801B3960.players) != 0) {
            nextra = 0;
        } else if (D_801B38E4[0] == 14) {
            nextra = 2;
        } else {
            nextra = D_801B386C[D_801B3960.players];
        }
        if (*(int *) (D_801C34EC + 0x7D8) == 3 && D_801B3960.players != 4) {
            nextra--;
        }
        for (k = 0; k <= nextra; k++) {
            extra[k] = -1;
        }
        /* a due bonus car (12, 13 or 14) is placed first */
        if (D_801B3960.unk9 == 0 && mode_1_or_3()
            && (D_801B3960.players == 2 || D_801B3960.players == 3)) {
            if (D_801B38E4[0] != 208 && D_801B38E4[1] != 208
                && (D_801B3960.players != 2 || (func_80154ACC() & 1) != 0)) {
            give12:                              /* also reached below */
                want12 = 1;
            }
        } else if (D_801B3960.unkA != 0 && mode_1_or_3() && D_801B3960.players == 5) {
            nextra = 1;
            want13 = 1;
        } else if (D_801B3960.unkB != 0 && mode_1_or_3() && D_801B3960.players == 11) {
            nextra = 1;
            want14 = 1;
        } else if (mode_2_plain()) {
            if (D_801B3960.unkC != 0 && D_801B3960.players == 11 && D_801B38E4[0] != 14) {
                nextra = 1;
                want14 = 1;
            } else if (D_801B3960.unkD != 0 && D_801B38E4[0] != 12) {
                nextra = 2;
                goto give12;
            } else if (D_801B3960.unkE != 0 && D_801B38E4[0] != 13) {
                nextra = 1;
                want13 = 1;
            }
        }
        i = 0;
        while (1) {
            if (!(i < nextra)) {
                break;
            }
            ok = 0;
            while (1) {
                if (ok) {
                    break;
                }
                if (want12) {
                    want12 = 0;
                    car = 12;
                    D_801B3960.unk9 = 1;
                } else if (want13) {
                    car = 13;
                } else if (want14) {
                    car = 14;
                } else if (D_801B38E4[0] == 14) {
                    if (i == 0) {
                        car = 12;
                    } else {
                        car = 13;
                    }
                } else {
                    car = func_80154ACC() % D_801C3834;
                }
                if (car != D_801B38E4[0] && car != D_801B38E4[1]) {
                    ok = 1;
                    extra[i] = car;
                    for (j = 0; j < i; j++) {
                        if (car == extra[j]) {
                            ok = 0;
                            break;
                        }
                    }
                    if (ok) {
                        func_80154AFC(path, D_801C349C, D_801C34A4, D_801B3828[car], D_801C3498);
                        func_80166D2C(0x800201D0, path);
                        tpage = func_80131F64(0x800201D0, tex++);
                    }
                }
            }
            i++;
        }
        func_8013B478(45, 0);
    }

    /* sound bank voices */
    func_8013C120(D_801C34F4, 0, (int) D_801C34AC);
    if (D_801B3960.players == 0 || D_801B3960.players == 3 || D_801B3960.players == 4
        || D_801B3960.players == 5 || D_801B3960.players == 7 || D_801B3960.players == 9
        || D_801B3960.players == 10) {
        func_8013C120(D_801C34F4, D_801B3960.players + 17, (int) D_801B379C[D_801B3960.players]);
    }
    if (*(unsigned char *) (D_801C34EC + 0x127E5) != 0) {
        func_8013C120(D_801C34F4, 2, (int) track);
    }
    for (i = 0; i < D_801B3960.unk6; i++) {
        car_voice(D_801B38E4[i]);
    }
    if (D_801B3960.unk5 != 0) {
        for (i = 0; i < nextra; i++) {
            car_voice(extra[i]);
        }
    }
    func_8013B478(60, 0);

    /* models, packed one after the other (4-byte aligned) */
    func_80154AFC(path, D_801C349C, D_801C348C, D_801B379C[D_801B3960.players], D_801C3494);
    size = func_80166D2C(0x800201D0, path);
    while (size & 3) {
        size++;
    }
    func_8013B478(70, 0);
    func_8011425C(tpage, 0);
    tex = 1;
    if (*(unsigned char *) (D_801C34EC + 0x127E5) != 0) {
        base = size;
        func_80154AFC(path, D_801C349C, D_801C348C, track, D_801C3494);
        size = base + func_80166D2C(base + 0x800201D0, path);
        while (size & 3) {
            size++;
        }
        func_801313FC(base + 0x800201D0, tex++);
    }
    n = 0;
    while (1) {
        if (!(n < D_801B3960.unk6)) {
            break;
        }
        base = size;
        func_80154AFC(path, D_801C349C, D_801C348C, D_801B3828[D_801B38E4[n]], D_801C3494);
        size = base + func_80166D2C(base + 0x800201D0, path);
        while (size & 3) {
            size++;
        }
        func_801161F8(D_801B393C[n]);
        func_801313FC(base + 0x800201D0, tex++);
        if (D_801B38E4[n] == 14) {
            *(unsigned char *) (D_801C34EC + 0x127E5) = 0;
        }
        n++;
    }
    func_8013B478(80, 0);
    func_801161F8(0);
    if (D_801B3960.unk5 != 0) {
        for (m = 0; m < nextra; m++) {
            base = size;
            func_80154AFC(path, D_801C349C, D_801C348C, D_801B3828[extra[m]], D_801C3494);
            size = base + func_80166D2C(base + 0x800201D0, path);
            while (size & 3) {
                size++;
            }
            func_801313FC(base + 0x800201D0, tex++);
        }
    }
    func_8013B478(90, 0);
    func_80131B34();
    func_80120B68(D_801C34EC);

    /* players */
    model = (D_801B38E4[0] + 1) * 16;
    func_8013B478(100, 0);
    if (D_801B3960.link_active == 0) {
        set_nplayers(D_801B3960.unk6);
        func_80121008(D_801C34EC, 0, model, 0, D_801B393C[0]);
        set_player_pad(D_801C34EC + 0xB788, 8);
        func_801382EC(0);
        func_8016BD94(0, 0);
        if (D_801B3960.unk6 >= 2) {
            func_80121008(D_801C34EC, 1, (D_801B38E4[1] + 1) * 16, 1, D_801B393C[1]);
            set_player_pad(D_801C34EC + 0xC040, 9);
            func_801382EC(1);
            func_8016BD94(1, 1);
        }
        *(volatile int *) (D_801C34EC + 0x12750) = 0;
        if (D_801B3960.unk5 != 0) {
            *(volatile int *) (D_801C34EC + 0x12750) = nextra;
            e = 0;
            while (1) {
                if (!(e < nextra)) {
                    break;
                }
                model = (extra[e] + 1) * 16;
                if (model == 240) {
                    *(unsigned char *) (D_801C34EC + 0x1106D) = 1;
                    *(volatile int *) (D_801C34EC + 0x12750) = 0;
                } else {
                    func_801211B4(D_801C34EC, e, model);
                }
                e++;
            }
        }
    } else {
        for (c = 0; c < D_801B3960.unk6; c++) {
            D_801B3960.unk10[c] = 0;
        }
        set_nplayers(D_801B3960.unk6);
        if (D_801B3960.link_active == 1) {
            /* master: its players come first */
            if (D_801B3960.unk6 == 2) {
                func_8012D7B8(1, 1, 0, 0);
                func_8016BD94(0, 0);
                func_8016BD94(1, 2);
                func_80121008(D_801C34EC, 0, (D_801B38E4[0] + 1) * 16, 0, D_801B393C[0]);
                func_80121008(D_801C34EC, 1, (D_801B38E4[1] + 1) * 16, -1, D_801B393C[1]);
                set_player_pad(D_801C34EC + 0xB788, 8);
            } else if (D_801B3960.unk6 == 3) {
                func_8012D7B8(2, 1, 0, 1);
                func_8016BD94(0, 0);
                func_8016BD94(1, 1);
                func_8016BD94(2, 2);
                func_80121008(D_801C34EC, 0, (D_801B38E4[0] + 1) * 16, 0, D_801B393C[0]);
                func_80121008(D_801C34EC, 1, (D_801B38E4[1] + 1) * 16, 1, D_801B393C[1]);
                func_80121008(D_801C34EC, 2, (D_801B38E4[2] + 1) * 16, -1, D_801B393C[2]);
                set_player_pad(D_801C34EC + 0xB788, 8);
                set_player_pad(D_801C34EC + 0xC040, 9);
            } else if (D_801B3960.unk6 == 4) {
                func_8012D7B8(2, 2, 0, 1);
                func_8016BD94(0, 0);
                func_8016BD94(1, 1);
                func_8016BD94(2, 2);
                func_8016BD94(3, 3);
                func_80121008(D_801C34EC, 0, (D_801B38E4[0] + 1) * 16, 0, D_801B393C[0]);
                func_80121008(D_801C34EC, 1, (D_801B38E4[1] + 1) * 16, 1, D_801B393C[1]);
                func_80121008(D_801C34EC, 2, (D_801B38E4[2] + 1) * 16, -1, D_801B393C[2]);
                func_80121008(D_801C34EC, 3, (D_801B38E4[3] + 1) * 16, -1, D_801B393C[3]);
                set_player_pad(D_801C34EC + 0xB788, 8);
                set_player_pad(D_801C34EC + 0xC040, 9);
            }
        } else if (D_801B3960.link_active == 2) {
            /* slave: its players follow the master's */
            if (D_801B3960.unk6 == 2) {
                func_8016BD94(0, 2);
                func_8016BD94(1, 0);
                func_8012D7B8(1, 1, 1, 0);
                func_80121008(D_801C34EC, 0, (D_801B38E4[0] + 1) * 16, -1, D_801B393C[0]);
                func_80121008(D_801C34EC, 1, (D_801B38E4[1] + 1) * 16, 0, D_801B393C[1]);
                set_player_pad(D_801C34EC + 0xC040, 9);
            } else if (D_801B3960.unk6 == 3) {
                func_8016BD94(0, 2);
                func_8016BD94(1, 3);
                func_8016BD94(2, 0);
                func_8012D7B8(1, 2, 2, 0);
                func_80121008(D_801C34EC, 0, (D_801B38E4[0] + 1) * 16, -1, D_801B393C[0]);
                func_80121008(D_801C34EC, 1, (D_801B38E4[1] + 1) * 16, -1, D_801B393C[1]);
                func_80121008(D_801C34EC, 2, (D_801B38E4[2] + 1) * 16, 0, D_801B393C[2]);
                set_player_pad(D_801C34EC + 0xC8F8, 8);
            } else if (D_801B3960.unk6 == 4) {
                func_8016BD94(0, 2);
                func_8016BD94(1, 3);
                func_8016BD94(2, 0);
                func_8016BD94(3, 1);
                func_8012D7B8(2, 2, 2, 3);
                func_80121008(D_801C34EC, 0, (D_801B38E4[0] + 1) * 16, -1, D_801B393C[0]);
                func_80121008(D_801C34EC, 1, (D_801B38E4[1] + 1) * 16, -1, D_801B393C[1]);
                func_80121008(D_801C34EC, 2, (D_801B38E4[2] + 1) * 16, 0, D_801B393C[2]);
                func_80121008(D_801C34EC, 3, (D_801B38E4[3] + 1) * 16, 1, D_801B393C[3]);
                set_player_pad(D_801C34EC + 0xC8F8, 8);
                set_player_pad(D_801C34EC + 0xD1B0, 9);
            }
        }
        for (i = 0; i < D_801B3960.unk6; i++) {
            func_801382EC(i);
        }
    }
}

/* A player record (0x8B8 bytes, from +0xB788 of the game data); only the
 * fields car select copies from the options are named. */
typedef struct {
    char unk0[0x196];
    unsigned char opt7;         /* +196 */
    char unk197;
    unsigned char opt6;         /* +198 */
    unsigned char opt5;         /* +199 */
    unsigned char opt4;         /* +19A */
    char unk19B[0x8B8 - 0x19B];
} PlayerRec;

#define PLAYERS ((volatile PlayerRec *) (D_801C34EC + 0xB788))

/* @801382EC: copy option bytes 4-7 into PLAYER's record. Each byte store
 * may alias the game-data pointer, so retail reloads it every time. */
void __attribute__((section(".text_801382EC"))) func_801382EC(int player)
{
    unsigned char *opt = D_801B399C;

    PLAYERS[player].opt7 = opt[7];
    PLAYERS[player].opt6 = opt[6];
    PLAYERS[player].opt4 = opt[4];
    PLAYERS[player].opt5 = opt[5];
}

extern void func_8013BED8(int bank, int a1);
extern void func_80139D54(void);
extern void func_80138788(int frames, const char *text);
extern int func_8013B28C(const char *file, int a1, int hires, void *cb);
extern void func_8013B1FC(void);
extern int func_8013A654(int a0, int ev);
extern void func_80147784(void *player);
extern void func_80125AF8(void *game);
extern void func_80125DA4(void *game);
extern void func_80126FA4(void *game);
extern int func_80138DB8(void);
extern void func_80138F8C(void);
extern int D_801C3508;
extern char D_800F39B0[];                        /* "\\MOVIES\OPENMOV.STR;1" (intro movie) */
extern char D_800F3CAC[];                        /* "DEMO COMPLETE" */
extern char D_800F3CBC[];                        /* "LINK CONNECTION LOST" */
extern char D_800F3CD4[];                        /* "GAME OVER" */
extern char D_800F3CE0[];                        /* "WINS %d   LOSSES %d" */
extern char D_800F3CF4[];                        /* "WINS %d  LOSSES %d" */

/* Tests of the game-data words 0x12750/0x12754 after a life is lost.
 * Retail computes each as a 0/1 flag before testing it, which only these
 * value-context helpers reproduce. */
static inline int life_lost(char *g)
{
    return *(int *) (g + 0x12754) != 0 || *(int *) (g + 0x12750) == 0;
}

static inline int extra_life(char *g)
{
    return *(int *) (g + 0x12750) != 0 && *(int *) (g + 0x12754) == 0;
}

/* Game-data block at +0x6220 (split-screen view layout at +0x3A8). A
 * struct pointer keeps retail's `addiu base,0x6220; lw 0x3A8(base)`. */
typedef struct {
    char pad[0x3A8];
    volatile int unk3A8;
} View6220;

/* Byte +0x82A of the first two player records (+0xB788, +0xC040). */
typedef struct {
    char pad[0x82A];
    unsigned char unk82A;
} Rec82A;

static inline int rec_82A(char *p)
{
    return ((Rec82A *) p)->unk82A;
}

/* Reads the game data pointer itself: passed in as a parameter, the
 * pointer and the flag swap registers (a0/v1). */
static inline int any_82A(void)
{
    return rec_82A(D_801C34EC + 0xB788) || rec_82A(D_801C34EC + 0xC040);
}

/* D_801B3960 as the result screens use it: lives per player, the level
 * (+4), the link state (+7) and the versus score counters (+1C..+26). */
typedef struct {
    unsigned char lives[4];
    unsigned char level;
    unsigned char unk5, unk6;
    unsigned char link_active;
    unsigned char unk8[0x1C - 8];
    /* +1C..+26: wins/losses shown in versus mode */
    unsigned short unk1C, unk1E, unk20, unk22, unk24, unk26;
} GameScore;

/* One of car select's two display buffers (0x80 bytes each, at MODEL and
 * MODEL + 0x80): ordering table, primitive area, then the libgpu
 * environments. */
typedef struct {
    int *ot;                    /* +0: 0x600 entries */
    int unk4;                   /* +4: primitive area */
    int unk8;                   /* +8: next free primitive */
    int padC;
    char draw[0x5C];            /* +10: DRAWENV */
    char disp[0x14];            /* +6C: DISPENV */
} CarDB;

extern void func_8015C4F4(int *ot, int n);       /* ClearOTagR */
extern void func_8015C5FC(int *ot);              /* DrawOTag */
extern void func_8015C66C();                     /* PutDrawEnv */
extern void func_8015C838();                     /* PutDispEnv */
extern void func_80179064(int a0);
extern void func_8016D968(void);
extern void func_8016DA7C(CarDB *db, int a1);
extern void func_80139FC4(int a0);
extern char D_800F3C94[];                        /* "SHELL\BIOS\BIO%d.TIM" */

/* The buffer *CUR points at, re-read on every use. */
#define CUR_DB (*(CarDB * volatile *) cur)

/* @80138494: car select's car display, once per frame (called by 80135A84
 * with the car's model buffers, the buffer in use, the left/right arrow
 * timers, the car and the load state). Swaps to the other display buffer,
 * clears its ordering table and, before the car's portrait is loaded
 * (state 0), draws the 3D view. State 2 (a new car picked) loads
 * SHELL\BIOS\BIO<n>.TIM once the arrows are idle and moves to state 1;
 * states 1/2 show the loaded portrait. State 0 draws the background images
 * (D_801B39B0: the frame and the car's name plate), plus image 20 when
 * this console is the link slave (D_801B3967 == 2), then the arrows while
 * their timers run (different images once the portrait shows). */
void __attribute__((section(".text_80138494"))) func_80138494(int model, int *cur, int *turnl, int *turnr, int car, volatile int *state)
{
    char buf[32];
    int addr;
    int other;
    int go;

    addr = func_80132F8C();
    *cur = *cur == model ? model + 0x80 : model;
    CUR_DB->unk8 = CUR_DB->unk4;
    func_8015C4F4(CUR_DB->ot, 0x600);
    if (*state == 0) {
        func_80179064(0);
        func_8016D968();
        func_8016DA7C(CUR_DB, 0);
    }
    func_8015C008(0);
    func_8016BB9C();
    func_8015C66C(CUR_DB->draw);
    func_8015C838(CUR_DB->disp);
    other = *cur != model;
    if (*state == 2) {
        go = 0;
        if (*turnl <= 0) {
            go = *turnr <= 0;
        }
        if (go) {
            func_80154AFC(buf, D_800F3C94, (car + 1) * 16);
            func_80166D2C(addr, buf);
            *state = 1;
        }
        func_80138370(other, addr, 0, 0);
    } else if (*state == 1) {
        func_80138370(other, addr, 0, 0);
    } else if (*state == 0) {
        func_80138370(other, D_801B39B0[0], 32, 0);
        func_80138370(other, D_801B39B0[car + 3], 202, 10);
        if (D_801B3960.link_active == 2) {
            func_80138370(other, D_801B39B0[20], 148, 211);
        }
    }
    if (*turnl > 0) {
        if (*state == 0) {
            func_80138370(other, D_801B39B0[2], 85, 196);
        } else {
            func_80138370(other, D_801B39B0[21], 34, 212);
        }
        (*turnl)--;
    }
    if (*turnr > 0) {
        if (*state == 0) {
            func_80138370(other, D_801B39B0[1], 222, 195);
        } else {
            func_80138370(other, D_801B39B0[22], 270, 212);
        }
        (*turnr)--;
    }
    func_80139FC4(other);
    func_8015C5FC(CUR_DB->ot + 0x5FF);
}

/* @801387F0: handle a round-ending game event EV (queued by 80132CF4) and
 * return the next game state. Game mode 0 (demo): "DEMO COMPLETE", advance
 * the demo level and after level 11 play the intro movie (OPENMOV.STR).
 * Event 3 (race reset) just ends the round. Event 9, raised by the packet
 * receiver 8012D45C once its empty-read count D_801C3304 reaches 4, shows
 * "LINK CONNECTION LOST" for 300 frames and returns 1. Otherwise by mode
 * (game data +0x7D8): modes 1 and 3 take a life (player 0; mode 3 also
 * player 1) on events 1/2/8 ("GAME OVER" when player 0 has none left;
 * levels 4 and 10 go straight to 80138F8C, state 13) and restart players
 * through 80147784 (state 12), or check 80138DB8 for events 4/5;
 * mode 2 runs 8013A654 and returns 11; mode 5 (versus) counts wins/losses
 * per player and shows "WINS %d LOSSES %d" per view, then restarts both
 * players (state 12). Modes 2 and 5 do this only outside a link game
 * (link state 0); in a link game the event just ends the round (80139D54,
 * state 1). The lookups through the game data pointer are written the way
 * retail addresses them (see the helpers above). */
int __attribute__((section(".text_801387F0"))) func_801387F0(int ev)
{
    char buf[32];
    char *g;
    GameScore *s;
    View6220 *v;

    func_8013BED8(D_801C34F4, 1);
    g = D_801C34EC;
    if (*(volatile int *) (g + 0x7D8) == 0) {
        func_80133708();
        func_80167088(0, 255, 50, 50);
        func_80167020(0, 160, 120, D_800F3CAC);
        func_8015C008(0);
        func_8015EBDC(0);
        if (++D_801B3960.players >= 12) {
            D_801C3508 = 1;
            func_8013B28C(D_800F39B0, 2009, 1, func_8013B1FC);
            D_801B3960.players = 0;
        }
        return 1;
    }
    if (ev == 3) {
        goto out;
    }
    if (ev == 9) {
        func_80139D54();
        func_80133708();
        func_80138788(300, D_800F3CBC);
        return 1;
    }
    switch (*(volatile int *) (g + 0x7D8)) {
    case 1:
        if (ev == 1 || ev == 8) {
            if (D_801B3960.players == 10 || D_801B3960.players == 4) {
                goto over;
            }
            if (--D_801B3960.unk0[0] == 0) {
                func_80139D54();
                func_80133708();
                func_80138788(240, D_800F3CD4);
                return 1;
            }
            if (life_lost(g)) {
                func_80147784(D_801C34EC + 0xB788);
                return 12;
            }
        }
        if (ev == 4 || extra_life(D_801C34EC)) {
            goto check;
        }
        goto out;
    case 3:
        if (ev == 1 || ev == 2 || ev == 8) {
            if (D_801B3960.players == 10 || D_801B3960.players == 4) {
                goto over;
            }
            D_801B3960.unk0[0]--;
            D_801B3960.unk0[1]--;
            if (D_801B3960.unk0[0] == 0) {
                func_80133708();
                func_80138788(240, D_800F3CD4);
                return 1;
            }
            if (life_lost(g)) {
                if (ev == 1) {
                    func_80147784(D_801C34EC + 0xB788);
                }
                if (ev == 2) {
                    func_80147784(D_801C34EC + 0xC040);
                }
                return 12;
            }
        }
        if (ev == 4 || ev == 5 || *(int *) (D_801C34EC + 0x12754) == 0) {
          check:
            if (func_80138DB8() == 0) {
              over:
                func_80138F8C();
                return 13;
            }
        }
        goto out;
    case 2:
        if (D_801B3960.link_active == 0) {
            func_80133708();
            if (func_8013A654(0, ev) != 0) {
                func_8013B478(0, 100);
                return 11;
            }
        }
        goto out;
    case 5:
        s = (GameScore *) &D_801B3960;
        if (s->link_active == 0) {
            func_80133708();
            if (ev == 1) {
                s->unk1E++;
                s->unk24++;
            } else if (ev == 2) {
                s->unk26++;
                s->unk1C++;
            }
            if ((v = (View6220 *) (D_801C34EC + 0x6220))->unk3A8 == 2) {
                GameScore *s = (GameScore *) &D_801B3960;
                const char *fmt = D_800F3CE0;

                func_80154AFC(buf, fmt, s->unk1C, s->unk1E);
                func_80167104(0);
                func_80167020(0, 160, 60, buf);
                func_80154AFC(buf, fmt, s->unk24, s->unk26);
                func_80167104(0);
                func_80167020(0, 160, 180, buf);
            } else {
                GameScore *s = (GameScore *) &D_801B3960;
                const char *fmt = D_800F3CF4;

                func_80154AFC(buf, fmt, s->unk1C, s->unk1E);
                func_80167020(1, 80, 80, buf);
                func_80154AFC(buf, fmt, s->unk24, s->unk26);
                func_80167020(1, 240, 80, buf);
            }
            func_80138788(300, D_801C34AC);
            if (*(unsigned char *) (D_801C34EC + 0x127E5) != 0) {
                func_80125AF8(D_801C34EC);
                if (any_82A()) {
                    func_80125DA4(D_801C34EC);
                }
                func_80126FA4(D_801C34EC);
            }
            func_80147784(D_801C34EC + 0xB788);
            func_80147784(D_801C34EC + 0xC040);
            return 12;
        }
        goto out;
    }
  out:
    func_80139D54();
    return 1;
}

/* @80139DB8: show TEXT at X,Y for up to FRAMES frames (through 80139F20
 * while *FLAG > 0, else as plain font text) and poll the first controller.
 * X (0x40), start (0x800) and circle (0x80, returns 1) end the wait,
 * triangle (0x10) pops the menu stack and returns the entry. Returns 0 when
 * the time runs out. */
int __attribute__((section(".text_80139DB8"))) func_80139DB8(int frames, const char *text, int x, int y, int *flag)
{
    int ret = 0;
    int done = 0;

    while (1) {
        if (frames <= 0) {
            break;
        }
        if (*flag > 0) {
            if (text != 0) {
                func_80139F20(text, x, y, flag);
            }
        } else if (text != 0) {
            func_80167228(1, x, y, text);
        }
        func_8016BB9C();
        if (func_8016B6DC(0x40, 0) != 0) {
            done = 1;
        }
        if (func_8016B6DC(0x800, 0) != 0) {
            done = 1;
        }
        if (func_8016B6DC(0x10, 0) != 0) {
            ret = *(D_801B394C + --D_801C34FC);
            done = 1;
        }
        if (func_8016B6DC(0x80, 0) != 0) {
            done = 1;
            ret = done;
        }
        func_8015EBDC(0);
        frames--;
        if (done != 0) {
            break;
        }
    }
    return ret;
}

/* @8013A06C: link state: 0 no link game, 1 this console is the master,
 * 2 the slave. */
int __attribute__((section(".text_8013A06C"))) func_8013A06C(void)
{
    return D_801B3960.link_active;
}

/* @8013A07C: pause menu for PLAYER. In a link game where the partner
 * paused, show "OTHER PS PAUSE" and apply the partner's packets until they
 * carry resume (flag 19, returns 0) or quit (flag 16, returns 1). Otherwise
 * run the menu; a local link player's choice is sent to the partner in a
 * packet (resume for 0 and 2, quit for 1). The link timeout is off while
 * paused and the link is resynchronised afterwards. */
int __attribute__((section(".text_8013A07C"))) func_8013A07C(int player)
{
    char buf[32];
    int sel = 0;
    int done = 0;
    int port, v, y, n;
    char **items, **item;

    D_801C32F8 = 0;
    D_801C32FC = 0;
    func_80133708();
    func_80120F68(D_801C34EC);
    if (func_8013A06C() != 0 && func_8016BDA8(player) == 0) {
        int r;

        func_80167020(sel, 160, 70, D_800F3EBC);
        r = -1;
        do {
            func_8012D45C();
            if (func_8012DBB0() != 0) {
                r = 0;
            } else if (func_8012DB94() != 0) {
                r = 1;
            }
        } while (r == -1);
        func_8012DBBC();
        func_8012D3D0();
        D_801C32F8 = 1;
        D_801C32FC = 0;
        return r;
    }
    func_8016BE08(0);
    port = func_8016BE60(player);
    while (!done) {
        y = 100;
        func_8016BB9C();
        func_8013A898(70, 70, 180, 80);
        if (func_8016C10C(port) != 0) {
            v = -1;
        } else {
            v = port;
        }
        if (v >= 0) {
            func_80154AFC(buf, D_800F3ECC, func_8016BE60(player) + 1);
            func_80167020(1, 160, 75, buf);
        } else {
            func_80154AFC(buf, D_800F3EE4, player + 1);
            func_80167020(0, 160, 75, buf);
        }
        for (n = 0; D_801B389C[n] != 0; n++) {
            if (n == sel) {
                func_80167104(1);
                func_80167020(1, 160, y, D_801B389C[sel]);
            } else {
                func_801670B4(1);
                func_80167020(1, 160, y, D_801B389C[n]);
            }
            y += 15;
        }
        y += 8;
        func_80167088(1, 200, 200, 50);
        func_80167020(1, 160, y, D_800F3EF4);
        if (func_8016B6DC(0x4000, port)) {
            func_8013AF7C(72, 0);
            if (++sel == n) {
                sel = 0;
            }
        }
        if (func_8016B6DC(0x1000, port)) {
            func_8013AF7C(72, 0);
            if (--sel < 0) {
                sel = n - 1;
            }
        }
        if (func_8016B6DC(0x40, port)) {
            func_8013AF7C(74, 0);
            done = 1;
        }
        func_8017DE0C();
    }
    if (sel == 1) {
        sel = func_8013A440(port, 1);
    }
    if (func_8013A06C() != 0 && func_8016BDA8(player) != 0) {
        if (sel == 0 || sel == 2) {
            func_8012DBA0();
        } else if (sel == 1) {
            func_8012DB84();
        }
        func_8012D80C();
        func_8012D78C();
    }
    if (D_801B3960.link_active != 0) {
        func_8012DBBC();
        func_8012D3D0();
        D_801C32F8 = 1;
        D_801C32FC = 0;
    }
    func_8016BB58();
    func_8016BE08(1);
    return sel;
}


/* Link/versus "continue" support (8013AA08..8013AEC8) and the movie player
 * wrapper 8013B28C. They follow 8013A07C in the text of this module and
 * use its small data (the game data pointer D_801C34EC, "PRESS X" at
 * D_801C34C4, .sbss D_801C3850), so they live here. */

/* A player record (0x8B8 bytes from +0xB788 of the game data), as the
 * continue code reads it. */
typedef struct {
    char pad0[0x8C];
    unsigned char unk8C;        /* +8C: continue pressed */
    char pad8D[0x10C - 0x8D];
    int unk10C;                 /* +10C */
    char pad110[0x7CC - 0x110];
    int view;                   /* +7CC: view the player is drawn in */
    char pad7D0[0x7F4 - 0x7D0];
    int unk7F4;                 /* +7F4: money/score */
    char pad7F8[0x8B8 - 0x7F8];
} ContRec;

/* A flat-shaded quad (POLY_F4). */
typedef struct {
    unsigned long tag;
    unsigned char r0, g0, b0, code;
    short x0, y0, x1, y1, x2, y2, x3, y3;
} PolyF4;

typedef struct {
    unsigned long *ot;
    int unk4;
    PolyF4 *prim;               /* +8: next free primitive */
} ContDB;

extern int D_801DFF40[];                         /* per player: money */
extern int D_801DFF50[];                         /* per player: continue timer */
extern char D_800F3F30[];
extern char D_800F3F44[];
extern char D_800F3F50[];
extern char D_801C34C4[];                        /* "PRESS X" */
extern void func_801796BC(int view, int *x, int *y, int *w, int *h);
extern void func_80167620(int font, int x, int y, const char *text, ContDB *db);
extern void AddPrim(void *ot, void *prim);

static inline ContRec *crec2(char *g, int i)
{
    return (ContRec *) (g + (i * 0x8B8 + 0xB788));
}

#define CREC ((ContRec *) (D_801C34EC + 0xB788))

/* @8013AA08: draw the continue overlay of view VIEW: for each local player
 * (8016BDA8) of the link/versus game drawn in this view, either the
 * continue prompt (player out, countdown D_801DFF50 < 0) or the player's
 * money in a black box at the top right. */
void __attribute__((section(".text_8013AA08"))) func_8013AA08(int view, ContDB *db)
{
    char buf[16];
    int x, y, w, h;
    int i;
    int dy;
    int money;
    volatile PolyF4 *p;
    GameState *gs;

    i = 0;
    gs = &D_801B3960;
    while (1) {
        if (!(i < gs->unk6)) {
            break;
        }
        if (crec2(D_801C34EC, i)->view == view && func_8016BDA8(i)) {
            func_801796BC(view, &x, &y, &w, &h);
            if (*(i + gs->unk10) && D_801DFF50[i] < 0) {
                func_80167088(1, 200, 200, 50);
                func_80167620(1, w >> 1, h / 2 - 15, D_800F3F30, db);
                func_80167088(0, 255, 50, 50);
                func_80167620(0, w >> 1, h / 2 - 5, D_801C34C4, db);
                func_80167088(0, 255, 50, 50);
                func_80167620(0, w >> 1, h / 2 + 10, D_800F3F44, db);
                goto next;
            }
            dy = 0;
            if (view == 1) {
                View6220 *v = (View6220 *) (D_801C34EC + 0x6220);
                dy = (v->unk3A8 != 1) << 3;
            }
            money = CREC[i].unk7F4 + D_801DFF40[i];
            func_80154AFC(buf, D_800F3F50, money);
            func_80167620(1, w - 39, 22 - dy, buf, db);
            p = db->prim;
            ((volatile unsigned char *) p)[3] = 5;
            p->code = 0x28;
            p->r0 = 0;
            p->g0 = 0;
            p->b0 = 0;
            p->x0 = w - 74;
            p->y0 = 21 - dy;
            p->x1 = w - 4;
            p->y1 = 21 - dy;
            p->x2 = w - 74;
            p->y2 = 33 - dy;
            p->x3 = w - 4;
            p->y3 = 33 - dy;
            AddPrim(db->ot, (void *) p);
            db->prim += 4;
        }
    next:
        i++;
    }
}

/* D_801B3960 as the continue code sees it: per player four counters from
 * +1C (8 bytes each). */
typedef struct {
    unsigned short unk0, unk2, unk4, unk6;
} VsCount;

typedef struct {
    unsigned char lives[4];
    unsigned char level;
    unsigned char unk5, unk6;
    unsigned char link_active;
    unsigned char unk8[8];
    unsigned char unk10[4];     /* +10: per player: out, waiting to continue */
    char pad14[0x1C - 0x14];
    VsCount vs[4];              /* +1C */
} ContState;

extern void func_80147784(void *player);
extern void func_801382EC(int player);

/* @8013ACCC: per-frame continue logic. A player who is out (unk10 set)
 * and plays on this console counts D_801DFF50 down; once it is below zero
 * X (button 0x40) continues: 50 points are deducted from the score
 * adjustment D_801DFF40 (not below zero), the player is restarted
 * (80147784) and gets the options again (801382EC). A remote player's
 * record restarts once its +10C goes positive (driven by the link
 * packets). A player whose record flags +8C (knocked out) is marked out
 * with a 60-frame timer; with 2 players the other one is credited. */
void __attribute__((section(".text_8013ACCC"))) func_8013ACCC(void)
{
    int i;
    ContState *gs;
    int *p;

    i = 0;
    gs = (ContState *) &D_801B3960;
    while (1) {
        if (!(i < gs->unk6)) {
            break;
        }
        if (*(i + gs->unk10)) {
            if (func_8016BDA8(i)) {
                if (--D_801DFF50[i] < 0 && func_8016B6DC(0x40, i)) {
                    p = &D_801DFF40[i];
                    if ((*p += CREC[i].unk7F4 - 50) < 0) {
                        *p = 0;
                    }
                    func_80147784(crec2(D_801C34EC, i));
                    *(i + gs->unk10) = 0;
                    func_801382EC(i);
                }
            } else if (crec2(D_801C34EC, i)->unk10C > 0) {
                func_80147784(crec2(D_801C34EC, i));
                *(i + gs->unk10) = 0;
                func_801382EC(i);
            }
        } else if (crec2(D_801C34EC, i)->unk8C) {
            *(i + gs->unk10) = 1;
            gs->vs[i].unk2++;
            D_801DFF50[i] = 60;
            if (gs->unk6 == 2) {
                if (i == 0) {
                    gs->vs[1].unk0++;
                } else {
                    gs->vs[0].unk0++;
                }
            }
        }
        i++;
    }
}

/* libgpu environments, only the fields set here. */
typedef struct {
    short x, y, w, h;           /* disp */
    short sx, sy, sw, sh;       /* screen */
    unsigned char isinter;      /* +10 */
    unsigned char isrgb24;      /* +11 */
    unsigned char pad0, pad1;
} DispEnv;

typedef struct {
    short x, y, w, h;           /* clip */
    short ofs[2];
    short tw[4];
    unsigned short tpage;       /* +14 */
    unsigned char dtd;          /* +16 */
    unsigned char dfe;          /* +17 */
    unsigned char isbg;         /* +18 */
    char rest[0x5C - 0x19];
} DrawEnv;

extern DispEnv D_801CC7D0[2];
extern DrawEnv D_801CC710[2];
extern void func_8015AAF0(DispEnv *env, int x, int y, int w, int h);   /* SetDefDispEnv */
extern void func_8015AA3C(DrawEnv *env, int x, int y, int w, int h);   /* SetDefDrawEnv */
extern void func_8015C838(DispEnv *env);         /* PutDispEnv */
extern void func_8015C66C(DrawEnv *env);         /* PutDrawEnv */
extern void func_8012E0C8(const char *file, void *cb, int a2, unsigned char hires,
                          int a4, int a5, int a6, int x, int y, int w, int h,
                          DispEnv *disp, char *flag);
static int D_801C3850;                           /* .sbss (defined below) */

/* @8013B28C: play the movie FILE (8012E0C8, the streaming player) with the
 * controller ports in race mode (8016BE08(1)) and return its result
 * D_801C3850. HIRES selects a 640-wide interlaced display (screen buffers
 * at x 0 and 480, draw area 480x256); otherwise two 320x240 buffers. CB is
 * the player's per-frame callback. Called from main and the intro/demo
 * code; on return the ports go back to direct mode (8016BE08(0)). */
int __attribute__((section(".text_8013B28C"))) func_8013B28C(const char *file, int a1, int hires, void *cb)
{
    char flag;
    int w;
    int h;

    flag = 1;
    w = 320;
    func_8016BE08(1);
    func_8015EBDC(0);
    h = 240;
    func_8015C008(0);
    if (hires) {
        w = 480;
        func_8015AAF0(&D_801CC7D0[0], 0, 0, 320, h);
        func_8015AAF0(&D_801CC7D0[1], 480, 0, 320, h);
        D_801CC7D0[0].isrgb24 = 1;
        D_801CC7D0[1].isrgb24 = 1;
        func_8015C838(&D_801CC7D0[1]);
        func_8015AA3C(&D_801CC710[0], 0, 0, 480, 256);
        func_8015AA3C(&D_801CC710[1], 480, 0, 480, 256);
        D_801CC710[0].isbg = 1;
        D_801CC710[1].isbg = 1;
        func_8015C66C(&D_801CC710[1]);
    } else {
        func_8015AAF0(&D_801CC7D0[0], 0, 0, 320, h);
        func_8015AAF0(&D_801CC7D0[1], 320, 0, 320, h);
    }
    func_8012E0C8(file, cb, 0, hires, a1, 0, 0, w, 0, 320, h, D_801CC7D0, &flag);
    func_8015C008(0);
    func_8015EBDC(0);
    func_8015EBDC(0);
    func_8015EBDC(0);
    func_8016BE08(0);
    return D_801C3850;
}

/* This module's small data, from the start of its .sdata (801C3470; the
 * short strings belong to functions not reconstructed yet) and the run of
 * .sbss these functions use (from 801C3830). */
int D_801C3470 = 0;                              /* level of a link game */
int D_801C3474 = 0;
char D_801C3478[] = "RTSHELL";
char D_801C3480[] = "%d";
char D_801C3484[] = "%s.%s";
char D_801C348C[] = "DMD\\";
char D_801C3494[] = "DMD";
char D_801C3498[] = "TMS";
char D_801C349C[] = "%s%s.%s";
char D_801C34A4[] = "TMS\\";
char D_801C34AC[] = "";
char D_801C34B0[] = "$%d";
char D_801C34B4[] = "NO";
char D_801C34B8[] = "YES";
char D_801C34BC[] = "SORRY";
char D_801C34C4[] = "PRESS X";
char D_801C34CC[] = "OVR\\";
char D_801C34D4[] = "SHELL";
char D_801C34DC[] = "BIN";
char D_801C34E0[] = "MEMC";
int D_801C34E8 = 0;
char *D_801C34EC = 0;                            /* game data */
int D_801C34F0 = 0;
int D_801C34F4 = 0;
SoundObj *D_801C34F8 = 0;                        /* music player (main) */
int D_801C34FC = 0;                              /* menu stack depth */
int D_801C3500 = 0;
int D_801C3504 = 0;
int D_801C3508 = 0;                              /* set before the intro movie (801387F0) */
static int D_801C3830;
static int D_801C3834;                           /* number of cars */
static int D_801C3838;
static int D_801C383C;
static int D_801C3840;
static int D_801C3844;
static int D_801C3848;
static int D_801C384C;
static int D_801C3850;                           /* movie result (8013B28C) */

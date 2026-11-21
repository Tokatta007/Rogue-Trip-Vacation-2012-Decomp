/* Rogue Trip game-data helpers at 80124B80..80124CF4 (event flags, a model
 * lookup, the effect block), reconstructed from the retail instructions.
 * PsyQ 4.4, -O2 -G8 -fvolatile. See docs/LINK_CABLE.md (Layer 2b). */

extern int func_80126E2C(char *game, int a1);
extern int func_800FF594(void *list);
extern int func_800FF2B0(void *list, int name, int count);
extern void func_801253C8(int a0, int a1);
extern void *memset(void *p, int c, unsigned int n);

/* Event flags: bytes +0x127AE/+0x127AF of the game data. Both are set, then
 * cleared if 80126E2C (with word +0x12688) says so; in mode 1 (word +0x7D8)
 * event 4 clears the first; in mode 3 only event 1 sets the first and
 * event 2 the second. Called by 80132CF4 with the event type (link lost is
 * event 9). */
void __attribute__((section(".text_80124B80"))) func_80124B80(char *game, int event)
{
    char *p = game + 0x10000;

    p[0x27AE] = 1;
    p[0x27AF] = 1;
    if (func_80126E2C(game, *(int *) (p + 0x2688))) {
        p[0x27AE] = 0;
        p[0x27AF] = 0;
        return;
    }
    switch (*(int *) (game + 0x7D8)) {
    case 1:
        if (event == 4)
            p[0x27AE] = 0;
        break;
    case 3:
        p[0x27AE] = 0;
        p[0x27AF] = 0;
        if (event == 1)
            p[0x27AE] = 1;
        else if (event == 2)
            p[0x27AF] = 1;
        break;
    }
}

/* Look NAME up in the list at game +0x15CC and pass entry (32 bytes each)
 * to 801253C8 with A2. Called by 8012E544. */
void __attribute__((section(".text_80124C4C"))) func_80124C4C(char *game, int name, int a2)
{
    void *list = game + 0x15CC;
    int i = func_800FF2B0(list, name, func_800FF594(list));

    func_801253C8(a2, *(int *) (game + 0x15CC) + i * 32);
}

/* Clear the 36-byte effect block at game +0xB744 and return it. The packet
 * receiver 8012D45C calls it when a remote car has just died, fills in the
 * block and starts effect 30 through 8012A154. */
void *__attribute__((section(".text_80124CBC"))) func_80124CBC(char *game)
{
    void *fx = game + 0xB744;

    memset(fx, 0, 36);
    return fx;
}

/* Rogue Trip per-frame round-end check (engine code), reconstructed from the
 * retail instructions at 8011FA30. Built with PsyQ 4.4, -O2 -G8. */

extern int func_8013A06C(void);                  /* link state: 0 no link game */
extern void func_80132CF4(int event, int arg);   /* raise a game event */
extern void func_8011D8AC(void *a, void *b);
extern int func_8016BF3C(int n);
extern void func_80126250(char *game);
extern short func_80178A1C(void);                /* frame time */
extern void func_8011FE2C(char *game);           /* link game: empty stub */

static inline int timed_out(char *g)
{
    return *(int *) (g + 0x12750) != 0 && *(int *) (g + 0x12754) < 1;
}

static inline int timer_running(char *g)
{
    return g[0x127E2] == 0 && *(int *) (g + 0x7D8) == 1
        && *(int *) (g + 0x12688) == 4;
}

/* @8011FA30: per-frame round-end check, called from 8011EE48. Once the
 * round-over flag (+0x127E2) is set it only calls 8011D8AC when the countdown
 * (+0x12750/+0x12754) has run out. Otherwise it tests the end conditions of
 * the game mode (+0x7D8) and raises the matching game event (80132CF4) for
 * the round-end handler 801387F0, setting +0x127E2 so it is raised once:
 * - mode 0 (demo): event 3 when 8016BF3C(0) reports the end, else 80126250;
 * - modes 1 and 2: event 1 when the count at +0x1272C reaches 0; event 4
 *   when the countdown has run out (unless +0x11D2C is set) or on the
 *   level-11 bonus condition (+0x1106D and +0x1106E); in mode 1 on level 4
 *   the timer at +0x12680 counts down by 80178A1C() and raises event 8;
 * - mode 3: the level-4 timer, else event 1 (2 when +0xB894 > 0) when
 *   +0x1272C drops below 2, then the same event 4 tests;
 * - modes 4 and up: only the +0x1272C test.
 *
 * Link game: modes 1, 2 and 4+ first ask 8013A06C for the link state. In a
 * link game none of these local tests run: the function calls 8011FE2C, an
 * empty stub (a bare `jr ra`), and raises nothing. A link round is ended by
 * other paths (for example event 9 "link lost" from the packet receiver
 * 8012D45C, or the race reset), never by one console's own lives or timers,
 * which would let the two consoles leave the round at different times.
 * Modes 0 and 3 do not test the link state.
 *
 * Matching notes: the countdown and bonus tests use the `flag = 0` layout
 * below, with a goto past the second `flag = 0` (the label keeps cse from
 * deleting that store as redundant, and gives reorg retail's delay-slot
 * choices); `timed_out` and `timer_running` are value-context helpers
 * (retail builds a 0/1 flag and tests it); the +0x12680 stores are volatile
 * and so is the mode-3 bonus flag store (retail keeps them out of delay
 * slots). The switch lists cases 4 and 5 so GCC emits retail's 6-entry jump
 * table (800F3654). */
void __attribute__((section(".text_8011FA30"))) func_8011FA30(char *game)
{
    int flag;

    if (game[0x127E2] != 0) {
        if (timed_out(game)) {
            func_8011D8AC(game + 0xB96C, game + 0xB92C);
        }
        return;
    }
    switch (*(unsigned int *) (game + 0x7D8)) {
    case 0:
        if (func_8016BF3C(0) & 0xFF) {
            func_80132CF4(3, 10);
            game[0x127E2] = 1;
            return;
        }
        func_80126250(game);
        return;
    case 1:
    case 2:
        if (func_8013A06C() != 0) {
            goto link;
        }
        if (*(int *) (game + 0x1272C) <= 0) {
            func_80132CF4(1, 300);
            game[0x127E2] = 1;
        }
        if (timed_out(game)) {
            flag = 0;
            if (game[0x11D2C] != 0) {
                goto done0;
            }
            func_80132CF4(4, 300);
            game[0x127E2] = 1;
        }
        flag = 0;
    done0:
        if (*(int *) (game + 0x12688) == 11 && game[0x1106D] != 0) {
            flag = game[0x1106E] != 0;
        }
        if (flag) {
            func_80132CF4(4, 300);
            game[0x127E2] = 1;
        }
        if (timer_running(game)) {
            *(volatile int *) (game + 0x12680) -= func_80178A1C();
            if (*(volatile int *) (game + 0x12680) <= 0) {
                *(volatile int *) (game + 0x12680) = 0;
                func_80132CF4(8, 60);
                game[0x127E2] = 1;
            }
        }
        return;
    case 3:
        if (*(int *) (game + 0x12688) == 4) {
            *(volatile int *) (game + 0x12680) -= func_80178A1C();
            if (*(volatile int *) (game + 0x12680) <= 0) {
                *(volatile int *) (game + 0x12680) = 0;
                func_80132CF4(8, 60);
                game[0x127E2] = 1;
            }
            return;
        }
        if (*(int *) (game + 0x1272C) < 2 && game[0x11D2C] == 0) {
            func_80132CF4(*(int *) (game + 0xB894) > 0 ? 2 : 1, 300);
            game[0x127E2] = 1;
        }
        if (timed_out(game)) {
            flag = 0;
            if (game[0x11D2C] != 0) {
                goto done1;
            }
            func_80132CF4(4, 300);
            game[0x127E2] = 1;
        }
        flag = 0;
    done1:
        if (*(int *) (game + 0x12688) == 11 && game[0x1106D] != 0) {
            flag = game[0x1106E] != 0;
        }
        if (flag) {
            func_80132CF4(4, 300);
            *(volatile char *) (game + 0x127E2) = 1;
        }
        return;
    case 4:
    case 5:
    default:
        if (func_8013A06C() != 0) {
        link:
            func_8011FE2C(game);
            return;
        }
        if (*(int *) (game + 0x1272C) < 2 && game[0x11D2C] == 0) {
            func_80132CF4(*(int *) (game + 0xB894) > 0 ? 2 : 1, 300);
            game[0x127E2] = 1;
        }
        return;
    }
}

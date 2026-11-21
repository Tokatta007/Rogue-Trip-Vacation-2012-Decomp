/* Rogue Trip: hit handler of computer-driven cars, reconstructed from the
 * retail instructions at 800FCC68. PsyQ 4.4, -O2 -G8 -fvolatile, .sbss at
 * 801C3724. See docs/LINK_CABLE.md (Layer 2b, Layer 4). */

#define S32(p, o) (*(int *) ((char *) (p) + (o)))
#define S16(p, o) (*(short *) ((char *) (p) + (o)))
#define U8(p, o) (*(unsigned char *) ((char *) (p) + (o)))
#define S8(p, o) (*(signed char *) ((char *) (p) + (o)))

/* Part of the .sbss of the computer-car module (800F56B0.., its .sbss runs
 * 801C3720..801C377F); only these three words are placed here. D_801C3724
 * lets model 0xD0 take hits; D_801C372C is the threshold for the random
 * special-weapon reply. Both are also used by 800F56B0/800F587C/800F5EBC/
 * 800FD29C (not decompiled; they must join this unit). */
static int D_801C3724;
static int D_801C3728;
static int D_801C372C;

extern char *D_801C34EC;                    /* game data */

extern int func_80124A94(void *game, int id, int *slot);
extern char *func_801244FC(void *game, int slot);
extern int func_801250C8(void *a, void *b);
extern int func_8012BD30(void *w);
extern int rand(void);
extern void func_80148A00(void *car, int a1);
extern void func_8014662C(void *car, int a1, int damage, int cause);
extern short func_800FF828(void *a, void *pos);
extern void func_800F7F9C(void *car);
extern void func_8012A5F0(void *w);
extern void *func_801297D4(void *game, void *pos, int range, void *out);
extern int func_8012E544(void *pos, void *out, int a2, int a3);

/* Damage the computer-driven car P (DAMAGE, CAUSE, A1 as for 8014662C).
 * The hit dispatcher 8012A154 calls it for an object of kind 1 (a car)
 * whose per-slot word game +0xB768 is 2; kind-1 cars with word 1 (player
 * cars, set by 80121008) go straight to 8014662C.
 *
 * Model 0xD0 ignores hits unless D_801C3724 is set. The attacker comes
 * from the current-hit record at game +0xB744 (word +0x18 -> 80124A94 /
 * 801244FC, as in the pickup callback 8012EA50). Attacker record in play
 * (+0x7B8 == 1, set by 8012EB68): the hit adds to a grudge (+0x928) when the
 * car's +0x868 is small; within 4000 of the attacker the car decides to
 * flee when it is nearly wrecked (hit points +0x10C - damage < 15) or the
 * grudge passes its limit (byte +0x956), otherwise, when it has no target
 * yet (+0x934) and 8012BD30 reports at least 2 on its weapon block (+0x264),
 * it may (byte +0x94C, or 1 in 8 by rand) take the attacker as its target
 * (+0x854, timers +0x89C/+0x8C4/+0x8C8/+0x8CC). An attacker not in play does no
 * damage unless byte +0x829 is set, and then half, never enough to wreck.
 * Model 0x90 may also react (80148A00) 1 in 16. The damage itself goes
 * through 8014662C. After that a fleeing car still alive turns away half
 * of the time (state 1, heading 800FF828, 800F7F9C) and may fire a special
 * weapon (slot byte +0x42 = 51, 8012A5F0; byte +0x82A or rand below
 * D_801C372C). Otherwise the damage adds up (+0x918); past the limit
 * (+0x91C) the car picks a new goal: with more than 3000 money (+0x7DC,
 * which 80147784 sets on a restart) something within 3000 (801297D4,
 * state 8), else 8012E544 (state 9).
 *
 * Link role: none of its own (no link-state test). Player cars, local or
 * remote, get word 1 from 80121008, so hits on them (including the ones the
 * link receiver replays) go to 8014662C, where a remote car is wrecked only
 * by cause 30; this handler serves the computer cars, whose rand() calls
 * are not kept in step between two consoles (link games hide the "Auto
 * Mercs" counter and one-player objects, see 80103CE4 / 801143B8).
 *
 * Matching notes: -fvolatile (retail re-reads every field and keeps
 * stores out of delay slots); one flag variable per && / || value; the
 * pointer to game +0xB744 is its own variable (li 0xb744 + offset 24);
 * the target block reads the game pointer into G before the stores; the
 * second `d = 0` in the target test is retail's `move s1,zero` in a delay
 * slot; the element index (+0x5C, lhu first) and the +0x17C short are
 * read into V before use. */
void __attribute__((section(".text_800FCC68"))) func_800FCC68(char *p, int a1, int damage,
                                                             int cause)
{
    int slot;
    char *att;
    int flee;
    int f;
    int f2;
    int f3;
    int f4;
    int f5;
    int d;
    int v;
    char *w;
    void *r;
    char *c;
    int *hit;
    char *g;
    char *e;

    flee = 0;
    if (S32(p, 0x7C0) == 0xD0 && D_801C3724 == 0)
        return;
    hit = (int *) (D_801C34EC + 0xB744);
    if (func_80124A94(D_801C34EC, hit[6], &slot)) {
        att = func_801244FC(D_801C34EC, slot);
        if (S32(att, 0x7B8) == 1) {
            v = S32(p, 0x868);
            if (v < 0)
                v = -v;
            if (v < 853)
                S32(p, 0x928) += damage;
            if (func_801250C8(p + 0x1E4, att + 0x1E4) < 4000) {
                if (S32(p, 0x10C) - damage < 15 || U8(p, 0x956) < S32(p, 0x928)) {
                    flee = 1;
                } else {
                    f2 = 0;
                    if (U8(p, 0x934) == 0)
                        f2 = func_8012BD30(p + 0x264) >= 2;
                    if (f2) {
                        S32(p, 0x8C8) = S32(D_801C34EC, 0x12688) >> 2;
                        d = 0;
                        f = 0;
                        if (S32(att, 0x20C) < S32(att, 0xC8) && S32(p, 0x58) != 11)
                            f = S32(p, 0x58) != 12;
                        if (f) {
                            d = 0;
                            if (U8(p, 0x94C) != 0 || (rand() & 7) == 1)
                                d = 1;
                        }
                        if (d) {
                            U8(p, 0x934) = 1;
                            U8(p, 0x93C) = 0;
                            g = D_801C34EC;
                            *(char **) (p + 0x854) = att;
                            S32(p, 0x89C) = 420;
                            S32(p, 0x8C4) = 0;
                            S32(p, 0x8C8) += S32(g, 0x7D4) * 2;
                            S32(p, 0x8CC) = 0;
                        }
                    }
                }
            }
        } else if (U8(p, 0x829) == 0 || (damage >>= 1, S32(p, 0x10C) - damage <= 0)) {
            damage = 0;
        }
        if (S32(p, 0x7C0) == 0x90) {
            f3 = 0;
            if (U8(p, 0x90) == 0)
                f3 = U8(p, 0x87) == 0;
            if (f3 && (rand() & 15) == 7) {
                v = S16(p, 0x5C);
                e = *(char **) *(char **) (p + 0x44) + v * 32;
                if (S8(e, 0x1C) >= 2) {
                    func_80148A00(p, 1);
                    U8(p, 0x81) = 1;
                }
            }
        }
    }
    func_8014662C(p, a1, damage, cause);
    f4 = 0;
    if (flee && S32(p, 0x10C) > 0)
        f4 = rand() & 1;
    if (f4) {
        S32(p, 0x8) = 1;
        S32(p, 0x8B0) = 0;
        S16(p, 0x64) = func_800FF828(*(void **) (p + 0x44), p + 0x1E4);
        *(char **) (p + 0x34) = *(char **) (p + 0x40) + 0x1C;
        S32(p, 0x58) = 2;
        func_800F7F9C(p);
        f5 = 0;
        if (U8(p, 0x87) == 0) {
            v = S16(p, 0x17C);
            f5 = v < S32(p, 0x920);
        }
        if (f5) {
            d = 0;
            if (U8(p, 0x82A) != 0 || (rand() & 0x40) < D_801C372C)
                d = 1;
            w = p + 0x264;
            if (d && S32(w, 0x28) >= 334) {
                U8(w, 0x42) = 51;
                U8(w, 0x35) = 0;
                U8(w, 0x36) = 0;
                U8(p, 0x29B) = 1;
                U8(w, 0x38) = 0;
                func_8012A5F0(w);
            }
        }
    } else {
        S32(p, 0x918) += damage;
        if (S32(p, 0x918) > S32(p, 0x91C)) {
            S32(p, 0x780) = 0;
            S32(p, 0x8B0) = 0;
            if (S32(p, 0x7DC) > 3000) {
                if (S32(p, 0x58) != 8) {
                    r = func_801297D4(D_801C34EC, p + 0x1E4, 3000, p + 0x8E0);
                    if (r) {
                        *(void **) (p + 0x34) = r;
                        S32(p, 0x8) = 3;
                        S32(p, 0x58) = 8;
                    }
                }
            } else {
                c = p + 0x72C;
                if (func_8012E544(p + 0x1E4, c, 1, 1)) {
                    S32(p, 0x8) = 3;
                    S32(p, 0x58) = 9;
                    *(char **) (p + 0x34) = c;
                }
            }
        }
    }
}

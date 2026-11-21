/* m2c reference for func_80162A8C @ 80162A8C (33 words). Generated; not compiled or validated. */
extern s32 D_801BC108;
extern ? D_801BC138;
extern ? (*D_801EC9D0)(?);

void func_80162A8C(void) {
    s32 (*temp_v0)(s32 *);

    temp_v0 = *(&D_801BC138 + (D_801BC108 * 4));
    D_801BC108 += 1;
    if (temp_v0(&D_801BC108) >= 0) {
        if (D_801BC108 >= 5) {
            D_801BC108 -= 1;
        }
    } else {
        D_801EC9D0(-1);
    }
}

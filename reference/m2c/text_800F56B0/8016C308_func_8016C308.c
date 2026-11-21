/* m2c reference for func_8016C308 @ 8016C308 (54 words). Generated; not compiled or validated. */
s32 func_80162974(void *);                          /* extern */
? func_8016C86C(void *, s32);                       /* extern */
? func_8016CAD0(void *, s32);                       /* extern */
extern s32 D_801BC104;
extern s32 D_801BC108;
extern s32 D_801BC118;
extern void *D_801BC2A8;
extern ? D_801F3338;

void func_8016C308(s32 arg0) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    u8 temp_v0;
    void *temp_s0;

    var_a1 = arg0;
    do {
        temp_s0 = (D_801BC104 * 0xF0) + &D_801F3338;
        if (var_a1 == 0) {
            func_8016C86C(temp_s0, var_a1);
        } else {
            func_8016CAD0(temp_s0, var_a1);
        }
        temp_v0 = temp_s0->unk36;
        temp_s0->unk36 = 0U;
        temp_s0->unk37 = temp_v0;
        D_801BC108 = 0;
        D_801BC2A8->unkA = 0;
        temp_v1 = D_801BC104 + 1;
        D_801BC104 = temp_v1;
        var_v0 = 1;
        if (D_801BC118 >= temp_v1) {
            var_v0 = func_80162974((temp_v1 * 0xF0) + &D_801F3338);
            var_a1 = 0xFFFF;
        } else {
            var_a1 = 0xFFFF;
        }
    } while (var_v0 == 0);
}

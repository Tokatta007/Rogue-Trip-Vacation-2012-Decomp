/* m2c reference for func_80162FD4 @ 80162FD4 (53 words). Generated; not compiled or validated. */
extern s32 (*D_801EC9E4)();
extern ? func_801630A8;
extern ? func_80163150;

s32 func_80162FD4(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_v0;

    if (arg1 != 0) {
        var_v0 = 0;
        if (arg0->unk4 == 0) {
            var_v0 = 1;
            if (D_801EC9E4() != 0) {
                goto block_3;
            }
            arg0->unk49 = 4;
            arg0->unk46 = 1;
            arg0->unk14 = &func_801630A8;
            arg0->unk18 = &func_80163150;
            temp_a1 = ((s32) (arg1 + 3) >> 2) * 4;
            arg0->unk0 = temp_a1;
            arg0->unk47 = 0;
            temp_a1_2 = temp_a1 + (((s32) (arg0->unkE3 + 1) >> 1) * 4);
            arg0->unk4 = temp_a1_2;
            arg0->unk8 = (s32) (temp_a1_2 + (((arg0->unkE9 * 5) + 3) & 0xFFC));
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_3:
    return 0;
}

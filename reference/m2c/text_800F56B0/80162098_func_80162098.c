/* m2c reference for func_80162098 @ 80162098 (48 words). Generated; not compiled or validated. */
extern void *(*D_801EC9D4)();

u8 func_80162098(void) {
    u8 temp_v1;
    u8 var_v0;
    void *temp_v0;

    temp_v0 = D_801EC9D4();
    if ((temp_v0->unk34 & 0xFFFF0000) || ((temp_v0 != temp_v0->unk10) && (temp_v0->unk38 != 0)) || (*temp_v0->unk30 != 0)) {
        temp_v1 = temp_v0->unk49;
        if (temp_v1 != 3) {
            if ((s32) temp_v1 < 4) {
                var_v0 = 1;
                if (temp_v1 != 2) {
                    goto block_11;
                }
            } else {
                var_v0 = 4;
                if (temp_v1 != 6) {
                    goto block_11;
                }
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return var_v0;
        }
        return 1U;
    }
block_11:
    var_v0 = temp_v0->unk49;
    return var_v0;
}

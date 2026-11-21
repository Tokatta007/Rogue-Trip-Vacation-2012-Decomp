/* m2c reference for func_8015871C @ 8015871C (43 words). Generated; not compiled or validated. */
extern s32 D_801E475C;
extern s32 D_801E4770;
extern s32 D_801E4774;

s32 func_8015871C(s32 arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_v0;
    u16 temp_v1_2;
    void *temp_v1;

    temp_a1 = (arg0 - (D_801E4770 + (D_801E4774 << 5))) / 2016;
    temp_v1 = D_801E4770 + (temp_a1 << 5);
    temp_v1_2 = temp_v1->unk6;
    var_v0 = 1;
    if (temp_v1->unk0 == 4) {
        var_a0 = 0;
        if ((s16) temp_v1_2 > 0) {
            do {
                temp_v0 = var_a0 + temp_a1;
                var_a0 += 1;
                *(D_801E4770 + (temp_v0 << 5)) = 0;
            } while (var_a0 < (s16) temp_v1_2);
        }
        D_801E475C = var_a0 + temp_a1;
        var_v0 = 0;
    }
    return var_v0;
}

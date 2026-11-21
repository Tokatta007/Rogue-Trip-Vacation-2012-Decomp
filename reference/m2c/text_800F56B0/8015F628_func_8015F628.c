/* m2c reference for func_8015F628 @ 8015F628 (96 words). Generated; not compiled or validated. */
extern u32 *D_801BBFB8;
extern ? (*D_801BBFBC)(u32 *);
extern s32 D_801BBFDC;
static s8 D_800F4F34[0x1C] = {
    0x44,
    0x4D,
    0x41,
    0x20,
    0x62,
    0x75,
    0x73,
    0x20,
    0x65,
    0x72,
    0x72,
    0x6F,
    0x72,
    0x3A,
    0x20,
    0x63,
    0x6F,
    0x64,
    0x65,
    0x3D,
    0x25,
    0x30,
    0x38,
    0x78,
    0xA,
    0,
    0,
    0,
}; /* const */
static s8 D_800F4F50[0x14] = {
    0x4D,
    0x41,
    0x44,
    0x52,
    0x5B,
    0x25,
    0x64,
    0x5D,
    0x3D,
    0x25,
    0x30,
    0x38,
    0x78,
    0xA,
    0,
    0,
    0,
    0,
    0,
    0,
}; /* const */

void func_8015F628(void) {
    ? (**var_s2)(u32 *);
    ? (*temp_v0)(u32 *);
    s32 temp_a1;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s0_2;
    u32 var_s1;

    var_s1 = ((u32) *D_801BBFB8 >> 0x18) & 0x7F;
    if (var_s1 != 0) {
        do {
            var_s0 = 0;
            if (var_s1 != 0) {
                var_s2 = &D_801BBFBC;
loop_4:
                if (var_s0 < 7) {
                    if (var_s1 & 1) {
                        *D_801BBFB8 &= (1 << (var_s0 + 0x18)) | 0xFFFFFF;
                        temp_v0 = *var_s2;
                        if (temp_v0 != NULL) {
                            temp_v0(D_801BBFB8);
                        }
                    }
                    var_s2 += 4;
                    var_s1 = var_s1 >> 1;
                    var_s0 += 1;
                    if (var_s1 != 0) {
                        goto loop_4;
                    }
                }
            }
            var_s1 = ((u32) *D_801BBFB8 >> 0x18) & 0x7F;
        } while (var_s1 != 0);
    }
    if (((*D_801BBFB8 & 0xFF000000) == 0x80000000) || (*D_801BBFB8 & 0x8000)) {
        var_s0_2 = 0;
        printf(D_800F4F34, *D_801BBFB8);
        do {
            temp_a1 = var_s0_2;
            temp_a2 = *((var_s0_2 * 0x10) + D_801BBFDC);
            var_s0_2 += 1;
            printf(D_800F4F50, temp_a1, temp_a2);
        } while (var_s0_2 < 7);
    }
}

/* m2c reference for func_8016CFF4 @ 8016CFF4 (38 words). Generated; not compiled or validated. */
extern s32 D_801F35B8;
static s32 D_801C3670 = 0;
static s8 D_800F5370[0x38] = {
    0x43,
    0x61,
    0x6E,
    0x27,
    0x74,
    0x20,
    0x61,
    0x64,
    0x64,
    0x3A,
    0x20,
    0x4C,
    0x69,
    0x6D,
    0x69,
    0x74,
    0x20,
    0x6F,
    0x66,
    0x20,
    0x63,
    0x6F,
    0x6E,
    0x73,
    0x74,
    0x61,
    0x6E,
    0x74,
    0x20,
    0x61,
    0x6E,
    0x69,
    0x6D,
    0x61,
    0x74,
    0x69,
    0x6F,
    0x6E,
    0x73,
    0x20,
    0x69,
    0x73,
    0x20,
    0x65,
    0x78,
    0x65,
    0x63,
    0x65,
    0x65,
    0x64,
    0x65,
    0x64,
    0x20,
    0xA,
    0,
    0,
}; /* const */

void func_8016CFF4(s32 arg0) {
    s32 *var_a0;
    s32 var_v1;

    if (arg0 != 0) {
        if (D_801C3670 >= 0x64) {
            printf(D_800F5370, arg0);
            return;
        }
        var_v1 = 0;
        if (D_801C3670 > 0) {
            var_a0 = &D_801F35B8;
loop_5:
            var_v1 += 1;
            if (*var_a0 != arg0) {
                var_a0 += 4;
                if (var_v1 >= D_801C3670) {
                    goto block_7;
                }
                goto loop_5;
            }
        } else {
block_7:
            (&D_801F35B8)[D_801C3670] = arg0;
            D_801C3670 += 1;
        }
    }
}

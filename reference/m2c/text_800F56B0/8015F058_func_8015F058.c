/* m2c reference for func_8015F058 @ 8015F058 (116 words). Generated; not compiled or validated. */
extern ? D_801BAEE0;
extern s16 D_801BAEE2;
extern u16 D_801BAF10;
extern u16 *D_801BBF6C;
extern u16 *D_801BBF70;
extern s32 D_801BBF78;
static s8 D_800F4EF8[0x1C] = {
    0x75,
    0x6E,
    0x65,
    0x78,
    0x70,
    0x65,
    0x63,
    0x74,
    0x65,
    0x64,
    0x20,
    0x69,
    0x6E,
    0x74,
    0x65,
    0x72,
    0x72,
    0x75,
    0x70,
    0x74,
    0x28,
    0x25,
    0x30,
    0x34,
    0x78,
    0x29,
    0xA,
    0,
}; /* const */
static s8 D_800F4F14[0x20] = {
    0x69,
    0x6E,
    0x74,
    0x72,
    0x20,
    0x74,
    0x69,
    0x6D,
    0x65,
    0x6F,
    0x75,
    0x74,
    0x28,
    0x25,
    0x30,
    0x34,
    0x78,
    0x3A,
    0x25,
    0x30,
    0x34,
    0x78,
    0x29,
    0xA,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
}; /* const */

void func_8015F058(void) {
    ? (**var_s2)();
    ? (*temp_v0_3)();
    s32 var_s1;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s0;

    if (D_801BAEE0.unk0 == 0) {
        printf(D_800F4EF8, *D_801BBF6C);
        ReturnFromException();
    }
    D_801BAEE0.unk2 = 1;
    temp_v0 = *D_801BBF70 & (D_801BAEE0.unk30 & *D_801BBF6C);
    var_s0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            var_s1 = 0;
            if (var_s0 != 0) {
                var_s2 = &D_801BAEE0 + 4;
loop_6:
                if (var_s1 < 0xB) {
                    if (var_s0 & 1) {
                        *D_801BBF6C = ~(1 << var_s1);
                        temp_v0_3 = *var_s2;
                        if (temp_v0_3 != NULL) {
                            temp_v0_3();
                        }
                    }
                    var_s2 += 4;
                    var_s0 = var_s0 >> 1;
                    var_s1 += 1;
                    if (var_s0 & 0xFFFF) {
                        goto loop_6;
                    }
                }
            }
            temp_v0_2 = *D_801BBF70 & (D_801BAF10 & *D_801BBF6C);
            var_s0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    if (*D_801BBF6C & *D_801BBF70) {
        D_801BBF78 += 1;
        if (D_801BBF78 >= 0x801) {
            printf(D_800F4F14, *D_801BBF6C, *D_801BBF70);
            D_801BBF78 = 0;
            *D_801BBF6C = 0;
        }
    } else {
        D_801BBF78 = 0;
    }
    D_801BAEE2 = 0;
    ReturnFromException();
}

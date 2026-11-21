/* m2c reference for func_80162B10 @ 80162B10 (100 words). Generated; not compiled or validated. */
s32 func_80162CA0(u8);                              /* extern */
s32 func_80162CF4();                                /* extern */
? func_80162D84();                                  /* extern */
? func_801638B0(?, s8 *);                           /* extern */
s32 func_801638CC();                                /* extern */
extern s32 D_801BC0F8;
extern s32 D_801BC104;
extern s32 D_801BC108;
extern void *D_801BC120;
extern s32 D_801EC9A8;

s32 func_80162B10(s8 arg0) {
    ? var_a0_2;
    s32 var_v0;
    s8 *temp_a1;
    s8 temp_s1;
    s8 var_a0;
    u8 temp_v0;
    void *temp_s0;

    var_a0 = arg0;
    temp_s1 = var_a0;
    D_801EC9A8 = (s32) D_801BC120->unk0;
    temp_s0 = D_801BC0F8 + (D_801BC104 * 0xF0);
    if (temp_s1 < 0) {
        temp_s0->unk44 = 0xFFU;
        temp_s0->unk45 = 1U;
        *temp_s0->unk40 = ~temp_s1;
        do {

        } while (!(D_801BC120->unk4 & 1));
        do {

        } while (func_801638CC() == 0);
        D_801BC120->unk0 = (u8) ~temp_s1;
        goto block_14;
    }
    if (temp_s0->unk44 != 0xFF) {
        var_a0 = (s8) (u8) D_801EC9A8;
        *(temp_s0->unk3C + temp_s0->unk44) = var_a0;
    }
    temp_s0->unk44 = (u8) (temp_s0->unk44 + 1);
    if (func_80162CA0((u8) var_a0) == 0) {
        return -2;
    }
    var_a0_2 = 5;
    if (D_801BC108 == 2) {
        var_a0_2 = 0x3C;
    }
    func_801638B0(var_a0_2);
    do {

    } while (func_801638CC() == 0);
    D_801BC120->unk0 = (u8) temp_s1;
    temp_v0 = temp_s0->unk45;
    temp_a1 = temp_s0->unk40;
    temp_s0->unk45 = (u8) (temp_v0 + 1);
    *(temp_v0 + temp_a1) = temp_s1;
    func_801638B0(0x3C, temp_a1);
    var_v0 = -3;
    if (func_80162CF4() != 0) {
block_14:
        func_80162D84();
        func_801638B0(0x190);
        var_v0 = D_801EC9A8;
    }
    return var_v0;
}

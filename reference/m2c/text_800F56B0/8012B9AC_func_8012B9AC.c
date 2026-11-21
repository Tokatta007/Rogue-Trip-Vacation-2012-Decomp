/* m2c reference for func_8012B9AC @ 8012B9AC (191 words). Generated; not compiled or validated. */
? func_800FE250(void *, ?);                         /* extern */
? func_8010B62C(s32, ?, ?);                         /* extern */
s32 func_80123940(s32, void *, s32, void *, s16 *); /* extern */
? func_80125464(s16 *, void *);                     /* extern */
s32 func_80149D84(s32, s32, void *, void *, s32, s32); /* extern */
static s32 D_801C34EC = 0;

s32 func_8012B9AC(void *arg0) {
    s16 sp18;
    u16 sp1A;
    s16 sp1C;
    ? var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 temp_v0;
    void *temp_a0;
    void *temp_a2;
    void *temp_v1;

    var_s3 = 0;
    var_s2 = 0x1B;
    temp_v0 = arg0->unk42;
    var_s1 = 0;
    switch ((s8) temp_v0) {                         /* irregular */
    case 0x34:
        if (arg0->unk28 >= 0x14D) {
            var_s2 = 9;
            var_s1 = 0x14D;
            if (arg0->unk0->unk820 != 0) {
                var_a1 = 0x34;
block_19:
                func_8010B62C(D_801C34EC + 0x6220, var_a1, 5);
            }
        } else {
block_20:
            arg0->unk42 = 0x32U;
        }
        break;
    case 0x36:
        if (arg0->unk28 >= 0xA6) {
            var_s2 = 0xB;
            arg0->unk24 = 0;
            var_s1 = 0xA6;
            if (arg0->unk0->unk820 != 0) {
                var_a1 = 0x36;
                goto block_19;
            }
        } else {
            goto block_20;
        }
        break;
    case 0x35:
        if (arg0->unk28 >= 0x14D) {
            var_s2 = 0xA;
            var_s1 = 0x14D;
            if (arg0->unk0->unk820 != 0) {
                var_a1 = 0x33;
                goto block_19;
            }
        } else {
            goto block_20;
        }
        break;
    case 0x33:
        if (arg0->unk28 >= 0x14D) {
            arg0->unk0->unk8B = 1;
            arg0->unk0->unk192 = 0xF0;
            func_800FE250(arg0->unk0, 1);
            var_s1 = 0x14D;
            if (arg0->unk0->unk820 != 0) {
                var_a1 = 0x32;
                goto block_19;
            }
        } else {
            goto block_20;
        }
        break;
    }
    if ((var_s1 != 0) || (var_s2 != 0x1B)) {
        var_s3 = 1;
    }
    if ((var_s1 > 0) && (arg0->unk0->unk19F == 0)) {
        arg0->unk28 = (s32) (arg0->unk28 - var_s1);
        if (arg0->unk28 < 0) {
            arg0->unk28 = 0;
        }
    }
    if (var_s2 != 0x1B) {
        temp_v1 = arg0->unk0;
        if (temp_v1->unkBA != 0) {
            sp18 = -(s16) temp_v1->unk738->unk14;
            sp1A = arg0->unk0->unk738->unk16;
            sp1C = arg0->unk0->unk738->unk18 + 0x800;
        } else {
            func_80125464(&sp18, temp_v1->unk738 + 0x14);
        }
        temp_a2 = arg0->unk0;
        temp_a0 = arg0->unk0;
        var_s3 = func_80149D84(D_801C34EC + 0x496C, var_s2, temp_a2, temp_a2 + 0x714, func_80123940(D_801C34EC, arg0->unk0, var_s2, arg0->unk0 + 0x1E4, &sp18), 0);
        temp_a0->unk7E0 = (s32) (temp_a0->unk7E0 + 1);
    }
    arg0->unk42 = 0x32U;
    return var_s3 & 0xFF;
}

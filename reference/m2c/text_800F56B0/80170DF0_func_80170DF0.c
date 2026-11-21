/* m2c reference for func_80170DF0 @ 80170DF0 (154 words). Generated; not compiled or validated. */
? func_80172578(s16, s16, s16, s16);                /* extern */
static s32 D_801C36CC = 0;

void func_80170DF0(void *arg0, ? arg1, ? arg2, ? arg3, s32 arg7, s32 arg10, s32 arg11, s32 arg15) {
    s16 var_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0_2;
    u16 temp_a2;
    void *temp_a1;

    temp_a1 = arg0 + (arg15 * 8);
    temp_a2 = temp_a1->unk240;
    var_a0 = (((arg0->unk321 * D_801C36CC) / 127) * (s16) temp_a1->unk246) / 127;
    if (arg0->unk3D4 >= arg11) {
        var_a0 = 0;
    } else if ((arg10 < arg0->unk3D4) && (arg10 != arg11)) {
        var_a0 = (s32) (var_a0 * (arg0->unk3D4 - arg11)) / (s32) (arg10 - arg11);
    }
    if (arg7 != -1) {
        var_a0 = (var_a0 * arg7) / 99;
    }
    if (arg0->unk3D8 > 0) {
        var_a2 = var_a0;
        var_a1 = var_a0 - ((var_a0 * arg0->unk3D8) / 90);
    } else {
        var_a2 = var_a0;
        if (arg0->unk3D8 < 0) {
            var_a1 = var_a0;
            var_a2 = var_a0 - ((var_a0 * arg0->unk3D8) / -90);
        } else {
            var_a1 = var_a0;
        }
    }
    var_v0 = (s16) var_a1;
    if (var_a1 & 0x8000) {
        var_a1 = 0;
        var_v0 = 0;
    }
    if (var_v0 >= 0x80) {
        var_a1 = 0x7F;
    }
    var_v0_2 = var_a2 << 0x10;
    if (var_a2 & 0x8000) {
        var_a2 = 0;
        var_v0_2 = 0 << 0x10;
    }
    if ((var_v0_2 >> 0x10) >= 0x80) {
        var_a2 = 0x7F;
    }
    func_80172578((s16) temp_a2, (s16) var_a1, (s16) var_a2, (s16) temp_a2);
}

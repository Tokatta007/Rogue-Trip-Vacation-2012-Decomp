/* m2c reference for func_80170598 @ 80170598 (91 words). Generated; not compiled or validated. */
s32 func_8017046C(void *, ?, s32);                  /* extern */
s32 func_8017976C(s32);                             /* extern */

void func_80170598(void *arg0, s32 arg1, s32 arg2, ? arg3, s32 arg11) {
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_v0;

    if (arg1 == 0) {
        arg0->unk3D4 = 0;
        goto block_2;
    }
    temp_a2 = arg2 & 1;
    if (temp_a2 != 0) {
        arg0->unk3D4 = 0;
    } else {
        if (func_8017976C(temp_a2) != 0) {
            temp_s1 = func_8017046C(arg0, 0, arg1);
            temp_v0 = func_8017046C(arg0, 1, arg1);
            if (temp_s1 < temp_v0) {
                arg0->unk3D4 = temp_s1;
                goto block_10;
            }
            arg0->unk3D4 = temp_v0;
            var_v0 = arg0->unk488;
        } else {
            arg0->unk3D4 = func_8017046C(arg0, 0, arg1);
block_10:
            var_v0 = arg0->unk484;
        }
        arg0->unk480 = var_v0;
    }
    if (!(arg2 & 3) && (arg11 >= arg0->unk3D4)) {
        if (arg0->unk3D4 == 0) {
            arg0->unk3D4 = 1;
        }
        arg0->unk3D8 = (s32) ((s32) (arg0->unk480 * 0x5A) / (s32) arg0->unk3D4);
        return;
    }
block_2:
    arg0->unk3D8 = 0;
}

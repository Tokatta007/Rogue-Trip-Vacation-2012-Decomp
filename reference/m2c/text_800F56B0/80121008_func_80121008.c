/* m2c reference for func_80121008 @ 80121008 (107 words). Generated; not compiled or validated. */
? func_8011FF4C(void *, s32);                       /* extern */
? func_80123058(void *, s32, s32);                  /* extern */
? func_8012EB68(void *, void *, s32, s32, void *, s32); /* extern */
static s32 D_801C34F0 = 0;

void func_80121008(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_s3;
    s32 var_v1;
    void *temp_v0;
    void *var_a1;

    var_s3 = 0;
    temp_v0 = arg0 + (arg1 * 4);
    var_a1 = arg0;
loop_1:
    if (var_s3 < arg0->unk1270C) {
        var_v1 = 0;
        if (var_a1->unk1268C == arg2) {
            var_v1 = var_a1->unk126AC == 0;
        }
        if (var_v1 != 0) {
            var_a1->unk126AC = 1;
            temp_v0->unk12718 = var_s3;
            var_s0 = arg1 * 0x120;
            if (var_a1->unk1241C != NULL) {
                temp_v0->unk1240C = (void *) var_a1->unk1241C;
                temp_v0->unk1240C->unkC = 1;
                var_s0 = arg1 * 0x120;
            }
            temp_s0 = (var_s0 - (arg1 * 9)) * 8;
            var_a1->unkB768 = 1;
            var_a1->unk126EC = arg1;
            func_8012EB68(arg0 + (temp_s0 + 0xB788), temp_v0->unk1240C, arg1, arg2, arg0 + 0x15CC, var_a1->unk126CC);
            func_8011FF4C(arg0, arg1);
            **(D_801C34F0 + (var_a1->unk126CC * 4)) = temp_v0->unk1240C + 0x1C;
            (temp_s0 + arg0 + 0xB788)->unk78 = arg4;
            if (arg3 >= 0) {
                func_80123058(arg0, arg3, var_s3);
            }
        } else {
            var_a1 += 4;
            var_s3 += 1;
            goto loop_1;
        }
    }
}

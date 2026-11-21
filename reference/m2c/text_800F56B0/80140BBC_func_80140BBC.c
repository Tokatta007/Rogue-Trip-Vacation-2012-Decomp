/* m2c reference for func_80140BBC @ 80140BBC (109 words). Generated; not compiled or validated. */
? func_80116204(void *, s32, void *, ?, s32, s32);  /* extern */
? func_80118484(void *, s32);                       /* extern */
s32 func_8012A0B8(s32, ?, void *, s32);             /* extern */
static void *D_801C34EC = NULL;
static s32 D_801C34F0 = 0;

void func_80140BBC(void *arg0, void *arg1) {
    s32 temp_ret;
    s32 temp_s1;
    s32 var_v1;
    u32 temp_v1;
    void *var_a2;

    if (arg0->unk320 != 0) {
        var_a2 = NULL;
        if (arg0 != NULL) {
            var_a2 = arg0 + 0x74;
        }
        temp_s1 = func_8012A0B8(D_801C34F0, 0x19, var_a2, arg0->unk320 + 0x1C);
        if (D_801C34EC->unk7D8 == 5) {
            var_v1 = rand() % (s32) arg1->unk74;
        } else {
            temp_v1 = D_801C34EC->unk12688;
            switch (temp_v1) {
            case 0:
                var_v1 = 0x10;
                break;
            case 7:
                var_v1 = 0x61;
                break;
            case 2:
                var_v1 = 0x46;
                break;
            case 5:
                var_v1 = 0x25;
                break;
            case 3:
                var_v1 = 0x50;
                break;
            case 6:
                var_v1 = 0x2A;
                break;
            default:
                var_v1 = 0;
                break;
            }
        }
        func_80116204(arg0, arg0->unk320, arg1, 0x17C, temp_s1, var_v1);
    }
    arg0->unk334 = 0;
    arg0->unk303 = 0;
    arg0->unk309 = 0;
    arg0->unk308 = 0;
    arg0->unk338 = 0;
    temp_ret = rand();
    arg0->unk340 = (s32) ((temp_ret % 600) + 0x12C);
    arg0->unk290 = 0x32;
    func_80118484(arg0, (temp_ret / 600) * 5);
}

/* m2c reference for func_80170388 @ 80170388 (57 words). Generated; not compiled or validated. */
? func_80170C14(void *, ?);                         /* extern */
? func_8017173C(void *, s16);                       /* extern */
? func_80171998(void *, ?);                         /* extern */
? func_80171A4C();                                  /* extern */
? func_8017222C(s16);                               /* extern */
? func_80173E5C(s32);                               /* extern */

void func_80170388(void *arg0) {
    s16 var_s1;
    s32 var_a0;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    void *var_v1;
    void *var_v1_2;

    var_s1 = 0;
    arg0->unk3D0 = 0x18;
    arg0->unk3D4 = 0;
    arg0->unk3D8 = 0;
    do {
        func_8017173C(arg0, var_s1);
        func_8017222C(var_s1);
        var_s1 += 1;
    } while (var_s1 < 0x18);
    func_80170C14(arg0, 0x18);
    var_s1_2 = 0;
    func_80171A4C();
    var_v1 = arg0;
    do {
        var_v1->unk370 = 0;
        var_s1_2 += 1;
        var_v1 += 4;
    } while (var_s1_2 < 0x18);
    var_s1_3 = 0;
    var_v1_2 = arg0;
    do {
        var_v1_2->unk3DC = -1;
        var_s1_3 += 1;
        var_v1_2 += 4;
    } while (var_s1_3 < 0x28);
    var_s1_4 = 0;
    var_a0 = 0 << 0x10;
    do {
        func_80173E5C(var_a0 >> 0x10);
        var_s1_4 += 1;
        var_a0 = var_s1_4 << 0x10;
    } while (var_s1_4 < 0x10);
    func_80171998(arg0, -1);
}

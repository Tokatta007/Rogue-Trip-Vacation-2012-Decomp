/* m2c reference for func_80100FBC @ 80100FBC (98 words). Generated; not compiled or validated. */
? func_801011E4(void *, s32, ?, ?);                 /* extern */
? func_80103608(void *);                            /* extern */
? func_80125518(void *, ?, ?, ?);                   /* extern */
void *func_801793A4(s32);                           /* extern */

void func_80100FBC(void *arg0) {
    s32 var_s1;
    s32 var_s4;
    void *temp_v0;
    void *var_s0;
    void *var_s3;

    var_s1 = 0;
    var_s0 = arg0;
    var_s4 = 0;
    var_s3 = arg0;
    do {
        var_s0->unk390 = func_801793A4(var_s1);
        var_s0->unk3A0 = 0;
        if (var_s0->unk390 != NULL) {
            var_s0->unk390->unk48 = 3;
            func_80125518(var_s0->unk390 + 0x4C, 0, -0x38, 0);
            func_80125518(var_s0->unk390 + 0x54, 0x58, 0, 0);
            func_80125518(var_s0->unk390 + 0x5C, -0x58, 0, 0);
            func_80125518(var_s0->unk390 + 0x64, 0, 0, 0x28);
            func_80125518(var_s0->unk390 + 0x6C, 0, 0, -0x28);
            var_s3->unk198 = 0;
            (arg0 + (var_s1 * 8))->unk382 = 0;
        }
        func_801011E4(arg0, var_s1, 1, 0);
        var_s0->unk3D8 = 0;
        (arg0 + var_s4)->unk3E8 = 0;
        temp_v0 = arg0 + var_s1;
        var_s0->unk0 = 1;
        temp_v0->unk3EC = 0;
        temp_v0->unk3EE = 1;
        var_s0->unk3D0 = 0;
        temp_v0->unk3F0 = 0;
        temp_v0->unk3F2 = 0;
        var_s0->unk3E0 = 0;
        var_s0 += 4;
        var_s4 += 2;
        var_s3 += 0x198;
        var_s1 += 1;
        temp_v0->unk3F4 = 1;
    } while (var_s1 < 2);
    func_80103608(arg0);
    arg0->unk3CC = 1;
    arg0->unk3A8 = 2;
    arg0->unk1AE4 = 0;
}

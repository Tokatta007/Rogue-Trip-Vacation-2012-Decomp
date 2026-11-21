/* m2c reference for func_80167698 @ 80167698 (107 words). Generated; not compiled or validated. */
? func_801679F0(void *, s32, u8);                   /* extern */
? func_8016FD98(void *, void *, ?);                 /* extern */
extern ? D_801BC180;
static u16 D_801C363C = 0;
static u16 D_801C363E = 0;

void func_80167698(s32 arg0, u8 *arg1, void *arg2) {
    u32 var_v1;
    u8 *var_s3;
    u8 var_s1;
    void *temp_a1;
    void *temp_s0;
    void *var_s2;

    var_s3 = arg1;
    var_s2 = arg2->unk8;
    var_s1 = *var_s3;
    temp_s0 = (arg0 * 0x28) + &D_801BC180;
    if (var_s1 != 0) {
        var_v1 = var_s1 - 8;
        do {
            switch (var_v1) {
            case 2:
                D_801C363C = 0;
                /* fallthrough */
            case 5:
                D_801C363E += temp_s0->unk1;
                var_s3 += 1;
                break;
            case 24:
                D_801C363C += temp_s0->unk0 + temp_s0->unk2;
                var_s3 += 1;
                break;
            case 1:
                D_801C363C += ((u8) temp_s0->unk2 >> 1) + temp_s0->unk0;
                var_s3 += 1;
                break;
            case 0:
                D_801C363C -= 1;
                var_s3 += 1;
                break;
            default:
                func_8016FD98(var_s2, temp_s0 + 8, 5);
                func_801679F0(var_s2, arg0, var_s1);
                temp_a1 = var_s2;
                var_s2 += 0x14;
                AddPrim(arg2->unk0, temp_a1);
                var_s3 += 1;
                break;
            }
            var_s1 = *var_s3;
            var_v1 = var_s1 - 8;
        } while (var_s1 != 0);
    }
    temp_s0->unkC = (u8) temp_s0->unk4;
    temp_s0->unkD = (u8) temp_s0->unk5;
    temp_s0->unkE = (u8) temp_s0->unk6;
    func_8016FD98(var_s2, temp_s0 + 0x1C, 3);
    AddPrim(arg2->unk0, var_s2);
    arg2->unk8 = (void *) (var_s2 + 0xC);
}

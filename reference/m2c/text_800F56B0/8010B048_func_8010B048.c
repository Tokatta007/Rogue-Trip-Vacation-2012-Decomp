/* m2c reference for func_8010B048 @ 8010B048 (97 words). Generated; not compiled or validated. */
? func_8015CE18(void *, ?, ?, s32, s32);            /* extern */
? func_80167ED0(?, s32, ?);                         /* extern */

void func_8010B048(void *arg0, ? arg1) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_fp;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_s7;
    s32 var_t2;
    s32 var_t4;
    s32 var_v1;
    s8 var_t3;
    void *temp_a0;
    void *temp_a0_2;
    void *var_s2;

    func_80167ED0(arg1, arg0 + 0x44E4, 0xA);
    var_t4 = 0;
    var_t3 = 0x24;
    var_t2 = 0;
    var_s7 = 0;
    do {
        var_fp = 0;
        var_s6 = 0;
        var_s0 = 0;
loop_2:
        var_s4 = 0;
        var_s3 = 0x4334;
        var_s2 = arg0;
        var_s1 = 0;
loop_3:
        var_a3 = 0;
        var_a2 = var_s7;
        var_a1 = var_s7 + (var_s0 + var_s2);
        var_v1 = var_a2 + var_s0;
loop_4:
        var_a2 += 0x14;
        temp_a0 = var_a1 + 0x3D94;
        var_a1 += 0x14;
        var_a3 += 1;
        temp_a0->unk3 = 4;
        temp_a0->unk7 = 0x64;
        (arg0 + (var_v1 + var_s1))->unk3DA2 = (u16) arg0->unk44EA;
        temp_a0->unk4 = var_t3;
        temp_a0->unk5 = 0x96;
        temp_a0->unk6 = var_t3;
        var_v1 = var_a2 + var_s0;
        if (var_a3 < 2) {
            goto loop_4;
        }
        temp_a0_2 = arg0 + var_s3 + var_s6 + var_t2;
        var_s3 += 0x30;
        var_s2 += 0xA0;
        var_s1 += 0xA0;
        var_s4 += 1;
        sp18 = var_t2;
        sp1C = (s32) var_t3;
        sp20 = var_t4;
        func_8015CE18(temp_a0_2, 0, 0, arg0->unk44E8 & 0xFFFF, 0);
        if (var_s4 < 9) {
            goto loop_3;
        }
        var_s6 += 0x18;
        var_fp += 1;
        var_s0 += 0x50;
        if (var_fp < 2) {
            goto loop_2;
        }
        var_t2 += 0xC;
        var_t4 += 1;
        var_s7 += 0x28;
    } while (var_t4 < 2);
}

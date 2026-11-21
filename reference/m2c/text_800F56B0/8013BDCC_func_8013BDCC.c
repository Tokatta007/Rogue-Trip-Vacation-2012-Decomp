/* m2c reference for func_8013BDCC @ 8013BDCC (55 words). Generated; not compiled or validated. */
? func_8017D5BC(s32, void *);                       /* extern */
? func_8017D6E4(s32, void *);                       /* extern */
? func_8017DDC8();                                  /* extern */
extern ? D_801B3A94;
extern ? D_801C31CC;

void func_8013BDCC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 var_v0;
    void *temp_a3;
    void *temp_v0;

    temp_a3 = (D_801C31CC.unk8 * 0x14) + &D_801B3A94;
    if (((arg0 + (temp_a3->unk4 * 4))->unk8 != 0) && (D_801C31CC.unk8 != -1)) {
        D_801C31CC.unk34 = (u16) temp_a3->unk4;
        D_801C31CC.unk36 = (u16) temp_a3->unk6;
        if (arg2 != 0) {
            var_v0 = 0x18;
        } else {
            var_v0 = temp_a3->unk8;
        }
        D_801C31CC.unk1C = var_v0;
        temp_v0 = (D_801C31CC.unk8 * 0x14) + &D_801B3A94;
        temp_a0 = temp_v0->unkC;
        D_801C31CC.unk24 = temp_a0;
        D_801C31CC.unk28 = (s32) temp_v0->unk10;
        if (arg1 != 0) {
            func_8017D5BC(temp_a0, temp_a3);
        } else {
            func_8017D6E4(temp_a0, temp_a3);
        }
    }
    func_8017DDC8();
}

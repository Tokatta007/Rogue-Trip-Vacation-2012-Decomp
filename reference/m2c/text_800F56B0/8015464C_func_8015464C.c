/* m2c reference for func_8015464C @ 8015464C (100 words). Generated; not compiled or validated. */
? func_8011BC6C(? *, ?, s32, ?, s32, s32);          /* extern */
? func_801251C0(s16 *, ? *);                        /* extern */
? func_8014A344(s32, ?, ? *, ? *, s32, s32, s32, s32); /* extern */
extern ? D_801C3860;
extern ? D_801E4720;
static s32 D_801C34EC = 0;

void func_8015464C(void *arg1) {
    s16 sp20;
    s16 sp22;
    s16 sp24;
    s32 temp_s0_2;
    void *temp_s0;

    temp_s0 = D_801C34EC + (((rand() % 3) * 0x64) + 0x1191C);
    if (((temp_s0->unk4 << 0x18) > 0) && (rand() < 0x3E8)) {
        D_801E4720.unk0 = (s32) temp_s0->unk1C;
        D_801E4720.unk8 = 0x4D8;
        D_801E4720.unk4 = (s32) temp_s0->unk20;
        sp20 = arg1->unk0 - (u16) D_801E4720.unk0;
        sp22 = arg1->unk4 - (u16) D_801E4720.unk4;
        sp24 = arg1->unk8 - (u16) D_801E4720.unk8;
        func_801251C0(&sp20, &D_801C3860);
        func_8014A344(D_801C34EC + 0x496C, 0x19, &D_801E4720, &D_801C3860, 0, (s32) (s16) temp_s0->unk8, (s32) (s16) temp_s0->unkA, 0);
        temp_s0_2 = (rand() & 0x1F) + 0x19;
        func_8011BC6C(&D_801E4720, 0, temp_s0_2, 0x18, (rand() & 0x1F) + 0x14, 1);
    }
}

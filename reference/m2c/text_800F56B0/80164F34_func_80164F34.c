/* m2c reference for func_80164F34 @ 80164F34 (46 words). Generated; not compiled or validated. */
? func_80164FEC(? *, ?, ?, s32);                    /* extern */
extern ? D_801F2530;

void func_80164F34(void *arg0, void *arg1, ? arg2, ? arg3, s32 arg4) {
    if (arg0 != NULL) {
        if ((arg0->unk0 & 0xF) == 4) {
            D_801F2530.unk1C = (s32) (arg1->unk0 - arg0->unk4);
            D_801F2530.unk20 = (s32) (arg1->unk4 - arg0->unk8);
            D_801F2530.unk24 = (s32) (arg1->unk8 - arg0->unkC);
        } else {
            D_801F2530.unk1C = (s32) arg1->unk0;
            D_801F2530.unk20 = (s32) arg1->unk4;
            D_801F2530.unk24 = (s32) arg1->unk8;
        }
        D_801F2530.unk0 = arg0;
        func_80164FEC(&D_801F2530, arg2, arg3, arg4);
    }
}

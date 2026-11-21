/* m2c reference for func_8012277C @ 8012277C (98 words). Generated; not compiled or validated. */
? func_800F5E1C(void *, s32);                       /* extern */
? func_801253C8(void *, s32);                       /* extern */

void func_8012277C(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 var_v1;

    if (arg0->unk12754 == 1) {
        var_v1 = 0;
        if (arg0->unk124D8 != NULL) {
            var_v1 = arg0->unk124D8->unk58 == 0x12;
        }
        if (var_v1 != 0) {
            arg0->unk124DC = (void *) arg0->unk124D8;
        } else {
            arg0->unk124DC = NULL;
        }
    }
    if (arg0->unk124DC != NULL) {
        arg0->unk124D8 = (void *) arg0->unk124DC;
        arg0->unk12798 = (s32) arg0->unk124D8->unk7D0;
        arg0->unk124D8->unk8 = 3;
        arg0->unk124D8->unk58 = 0x12;
        arg0->unk124D8->unk942 = 1;
        temp_s0 = arg1 + 0x1E4;
        arg0->unk124D8->unk34 = temp_s0;
        arg0->unk124D8->unk780 = 0;
        arg0->unk124D8->unk8F0 = 0;
        arg0->unk124D8->unk8F8 = (s32) (arg0->unk124D8->unk8FC + (rand() & 1));
        arg0->unk124D8->unk8F4 = 0;
        func_800F5E1C(arg0->unk124D8, (arg0 + (arg1->unk7D0 * 4))->unk1240C);
        arg0->unk124D8->unk918 = 0;
        func_801253C8(arg0 + 0x7C8, temp_s0);
    }
}

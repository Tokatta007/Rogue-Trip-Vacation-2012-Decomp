/* m2c reference for func_8012A0B8 @ 8012A0B8 (26 words). Generated; not compiled or validated. */
s32 func_8012A0B8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    (arg0 + (arg0->unk7D0 * 4))->unk3E8 = arg1;
    *(arg0 + (arg0->unk7D0 * 4)) = arg2;
    if (arg2 != 0) {
        **(arg0 + (arg0->unk7D0 * 4)) = arg3;
    }
    arg0->unk7D0 = (s32) (arg0->unk7D0 + 1);
    return arg0->unk7D0 - 1;
}

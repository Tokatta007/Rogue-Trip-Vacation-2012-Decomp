/* m2c reference for func_80179BC0 @ 80179BC0 (23 words). Generated; not compiled or validated. */
void func_80179BC0(void *arg0, u8 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk0 != NULL) {
        var_v1 = (u32) (arg0->unk0->unk12 ^ arg1) > 0U;
    }
    if (var_v1 != 0) {
        arg0->unk1EC = 0;
        arg0->unk0->unk12 = arg1;
        arg0->unk0->unk11 = 0;
        arg0->unk1F8 = 0;
        arg0->unk1FC = 0;
    }
}

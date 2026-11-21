/* m2c reference for func_800F90BC @ 800F90BC (19 words). Generated; not compiled or validated. */
void func_800F90BC(void *arg0, void *arg1) {
    s32 var_v1;

    if (arg1->unk20 != 8) {
        var_v1 = 0;
        if (arg0->unk934 != 0) {
            var_v1 = (u32) arg0->unk8C4 > 0U;
        }
        if (var_v1 != 0) {
            arg0->unk8CC = (s32) (arg0->unk8CC + 1);
        }
    }
}

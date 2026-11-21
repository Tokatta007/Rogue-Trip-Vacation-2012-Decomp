/* m2c reference for func_800F5E1C @ 800F5E1C (40 words). Generated; not compiled or validated. */
s32 func_8012340C(s32, s32);                        /* extern */
s32 func_801244FC(s32, s32);                        /* extern */
static s32 D_801C34EC = 0;

void func_800F5E1C(void *arg0, s32 arg1) {
    void *var_v1;

    arg0->unk40 = arg1;
    arg0->unk884 = func_8012340C(D_801C34EC, arg0->unk40);
    arg0->unk858 = arg1;
    arg0->unk888 = func_8012340C(D_801C34EC, arg0->unk858);
    var_v1 = NULL;
    arg0->unk850 = func_801244FC(D_801C34EC, arg0->unk888);
    if (arg0 != NULL) {
        var_v1 = arg0 + 4;
    }
    var_v1->unk6C = 1;
    arg0->unk34 = (s32) (arg0->unk40 + 0x1C);
}

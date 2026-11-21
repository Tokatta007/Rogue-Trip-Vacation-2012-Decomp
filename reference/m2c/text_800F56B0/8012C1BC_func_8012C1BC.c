/* m2c reference for func_8012C1BC @ 8012C1BC (53 words). Generated; not compiled or validated. */
? func_8012AF9C(s32, ?, ?);                         /* extern */
? func_8012BCB0(?);                                 /* extern */
static void *D_801C34EC = NULL;

void func_8012C1BC(s32 arg0) {
    ? var_a1;
    ? var_a2;

    func_8012BCB0(0);
    var_a1 = 2;
    if (D_801C34EC->unk12688 == 4) {
        var_a2 = 0xF;
        goto block_4;
    }
    if (D_801C34EC->unk12688 == 0xA) {
        func_8012AF9C(arg0, 1, 4);
        func_8012AF9C(arg0, 2, 4);
        func_8012AF9C(arg0, 3, 4);
        func_8012AF9C(arg0, 4, 4);
        func_8012AF9C(arg0, 5, 4);
        func_8012AF9C(arg0, 7, 4);
        var_a1 = 8;
        var_a2 = 4;
block_4:
        func_8012AF9C(arg0, var_a1, var_a2);
    }
}

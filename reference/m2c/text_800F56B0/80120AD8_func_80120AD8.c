/* m2c reference for func_80120AD8 @ 80120AD8 (36 words). Generated; not compiled or validated. */
? func_801254DC(void *, ?, ?, ?);                   /* extern */

void func_80120AD8(void *arg0) {
    s32 var_a1;
    void *var_v0;
    void *var_v1;

    var_a1 = 0;
    var_v1 = arg0;
    arg0->unk12750 = 0;
    var_v0 = var_v1 + 0x10000;
    do {
        var_v1 += 4;
        var_a1 += 1;
        var_v0->unk243C = 0;
        var_v0->unk2734 = -1;
        var_v0 = var_v1 + 0x10000;
    } while (var_a1 < 7);
    arg0->unk124D8 = 0;
    arg0->unk124DC = 0;
    func_801254DC(arg0 + 0x7C8, 0, 0, 0);
    arg0->unk127E6 = 0;
    arg0->unk127AC = 0;
    arg0->unk127AD = 0;
    arg0->unk127A4 = 0;
}

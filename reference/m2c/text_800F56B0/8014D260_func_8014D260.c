/* m2c reference for func_8014D260 @ 8014D260 (32 words). Generated; not compiled or validated. */
? func_8014F1BC(void *, void *);                    /* extern */

void func_8014D260(void *arg1) {
    s16 var_v0;
    void *temp_a2;
    void *temp_a3;

    if (arg1->unk24 != 3) {
        temp_a2 = arg1->unk14;
        var_v0 = (s16) temp_a2->unk14;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        temp_a3 = temp_a2 + 0x14;
        if (var_v0 >= 0x401) {
            temp_a2->unk14 = (u16) (0x800 - temp_a2->unk14);
            temp_a3->unk4 = (u16) (temp_a3->unk4 + 0x800);
            func_8014F1BC(temp_a2, temp_a3);
        }
    }
}

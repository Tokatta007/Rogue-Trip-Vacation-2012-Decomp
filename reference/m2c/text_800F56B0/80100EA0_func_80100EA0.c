/* m2c reference for func_80100EA0 @ 80100EA0 (20 words). Generated; not compiled or validated. */
void func_80100EA0(void *arg0) {
    s32 var_a2;
    s32 var_v1;
    void *temp_v0;
    void *var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a2 = 0;
    do {
        var_v1 = 0;
        var_a1 = var_a0;
        var_a0->unk4A = 0;
        var_a0->unk4C = -1;
loop_2:
        var_a1->unk14 = 0;
        var_a1 += 2;
        temp_v0 = var_a0 + var_v1;
        var_v1 += 1;
        temp_v0->unk4E = -1;
        if (var_v1 < 0x1B) {
            goto loop_2;
        }
        var_a2 += 1;
        var_a0 += 0x84;
    } while (var_a2 < 0x1B);
}

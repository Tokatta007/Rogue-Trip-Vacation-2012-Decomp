/* m2c reference for func_80120A00 @ 80120A00 (18 words). Generated; not compiled or validated. */
void func_80120A00(void *arg0) {
    s32 var_v1;
    void *var_a0;
    void *var_v0;

    var_a0 = arg0;
    var_a0->unk1270C = 0;
    var_v1 = 0;
    var_v0 = var_a0 + 0x10000;
    do {
        var_a0 += 4;
        var_v1 += 1;
        var_v0->unk241C = 0;
        var_v0->unk268C = 0;
        var_v0->unk26AC = 0;
        var_v0->unk26CC = 0;
        var_v0->unk26EC = 0;
        var_v0 = var_a0 + 0x10000;
    } while (var_v1 < 8);
}

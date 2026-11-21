/* m2c reference for func_80120A48 @ 80120A48 (36 words). Generated; not compiled or validated. */
? func_8012EEA0(void *);                            /* extern */

void func_80120A48(void *arg0) {
    s32 var_s1;
    s32 var_s2;
    void *temp_a0;
    void *var_s0;

    var_s2 = 0;
    var_s1 = 0xB788;
    var_s0 = arg0;
    arg0->unk12728 = 0;
    do {
        temp_a0 = arg0 + var_s1;
        var_s0->unk1240C = 0;
        var_s0->unk12718 = -1;
        var_s1 += 0x8B8;
        func_8012EEA0(temp_a0);
        var_s2 += 1;
        var_s0 += 4;
    } while (var_s2 < 4);
}

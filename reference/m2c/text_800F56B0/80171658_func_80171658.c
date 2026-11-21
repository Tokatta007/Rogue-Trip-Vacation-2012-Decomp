/* m2c reference for func_80171658 @ 80171658 (33 words). Generated; not compiled or validated. */
? func_8017173C(void *, s16);                       /* extern */
? func_80171A4C();                                  /* extern */
? func_8017222C(s16);                               /* extern */
? func_801761FC(s16, ?);                            /* extern */

void func_80171658(void *arg0) {
    s16 var_s1;
    void *var_s2;

    var_s1 = 0;
    var_s2 = arg0;
    do {
        func_801761FC(var_s1, 5);
        func_8017222C(var_s1);
        func_8017173C(arg0, var_s1);
        var_s2->unk370 = 0;
        var_s1 += 1;
        var_s2 += 4;
    } while (var_s1 < 0x18);
    func_80171A4C();
}

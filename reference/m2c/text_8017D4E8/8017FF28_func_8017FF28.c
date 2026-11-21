/* m2c reference for func_8017FF28 @ 8017FF28 (27 words). Generated; not compiled or validated. */
? func_801800C0();                                  /* extern */
? func_80180154();                                  /* extern */
? func_801801C4();                                  /* extern */
s32 func_80180284();                                /* extern */

void func_8017FF28(s32 arg0) {
    s32 var_s0;

    var_s0 = arg0;
    ChangeClearPAD(0);
    EnterCriticalSection();
    if (func_80180284() == 0) {
        var_s0 = 0;
    }
    InitCARD(var_s0);
    func_801801C4();
    func_801800C0();
    func_80180154();
    ExitCriticalSection();
}

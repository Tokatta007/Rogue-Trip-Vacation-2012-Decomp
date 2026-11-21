/* m2c reference for func_8012DE04 @ 8012DE04 (40 words). Generated; not compiled or validated. */
? func_80020B5C(s32, s32);                          /* extern */
s32 func_8012DEA4(void *, ?);                       /* extern */
? func_8015871C(s32);                               /* extern */
extern ? D_7FFFFF;

s32 func_8012DE04(void *arg0, ? arg1) {
    ? *var_s2;
    s32 temp_v0;

    var_s2 = &D_7FFFFF;
loop_1:
    temp_v0 = func_8012DEA4(arg0, arg1);
    if (temp_v0 != 0) {
        arg0->unk8 = (s32) (arg0->unk8 == 0);
        func_80020B5C(temp_v0, *(arg0 + (arg0->unk8 * 4)));
        func_8015871C(temp_v0);
        return 0;
    }
    if (var_s2 == NULL) {
        return -1;
    }
    goto loop_1;
}

/* m2c reference for func_8010B5BC @ 8010B5BC (28 words). Generated; not compiled or validated. */
? func_80103CE4(void *, ?);                         /* extern */
? func_801057B8(void *, ?);                         /* extern */
? func_801072E0(void *, ?);                         /* extern */
s32 func_80133040();                                /* extern */

void func_8010B5BC(void *arg0, ? arg1) {
    if (func_80133040() != 0) {
        if (arg0->unk3A8 == 1) {
            func_801072E0(arg0, arg1);
            return;
        }
        func_801057B8(arg0, arg1);
        return;
    }
    func_80103CE4(arg0, arg1);
}

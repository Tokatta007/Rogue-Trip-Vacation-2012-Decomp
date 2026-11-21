/* m2c reference for func_8010B71C @ 8010B71C (43 words). Generated; not compiled or validated. */
s32 func_80132ED4();                                /* extern */
s32 func_80133034();                                /* extern */
? func_80178D44(s32, ?, ?);                         /* extern */

void func_8010B71C(void *arg0) {
    if (arg0->unk3A8 == 1) {
        func_80178D44(func_80132ED4(), 2, 0);
        func_80178D44(func_80133034(), 3, 1);
        arg0->unk3A8 = 2;
        return;
    }
    func_80178D44(func_80132ED4(), 5, 0);
    func_80178D44(func_80133034(), 6, 1);
    arg0->unk3A8 = 1;
}

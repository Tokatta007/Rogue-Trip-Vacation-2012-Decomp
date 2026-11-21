/* m2c reference for func_8012DCA0 @ 8012DCA0 (27 words). Generated; not compiled or validated. */
? func_8002027C(?);                                 /* extern */
? func_80020520(?);                                 /* extern */
? func_8012E080(s32);                               /* extern */
? func_8015541C(s32, ?);                            /* extern */
? func_8015868C(u8, ?, ?, ?, s32);                  /* extern */
extern u8 D_801C37CC;
extern s32 D_801C37D4;
extern s32 D_801C37D8;

void func_8012DCA0(s32 arg0, ? arg1) {
    func_8002027C(0);
    D_801C37D4 = 0;
    func_80020520(arg1);
    func_8015541C(D_801C37D8, 0x20);
    func_8015868C(D_801C37CC, 1, -1, 0, 0);
    func_8012E080(arg0);
}

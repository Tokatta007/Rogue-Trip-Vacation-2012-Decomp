/* m2c reference for func_8010FCFC @ 8010FCFC (50 words). Generated; not compiled or validated. */
? func_80125050(s32, s32, s32 *);                   /* extern */
? func_801253C8(s32 *, ?);                          /* extern */
? func_80147A6C(void *, ?);                         /* extern */
static s32 D_801C34EC = 0;

void func_8010FCFC(void *arg0, ? arg1) {
    s32 sp10;
    s32 sp20;
    void *temp_v1;

    func_80125050(arg0 + 0x1E4, arg0->unk38, &sp10);
    func_801253C8(&sp20, arg1);
    if (((sp10 * sp20) + (sp14 * sp24) + (sp18 * sp28)) > 0) {
        temp_v1 = D_801C34EC + 0xB744;
        if (temp_v1->unk1C >= 0) {
            arg0->unk914 = (s32) temp_v1->unk1C;
            func_80147A6C(arg0, -0x320);
        }
    }
}

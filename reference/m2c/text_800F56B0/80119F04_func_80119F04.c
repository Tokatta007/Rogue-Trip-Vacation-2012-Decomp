/* m2c reference for func_80119F04 @ 80119F04 (124 words). Generated; not compiled or validated. */
? func_80140AE0(void *, s32, s32);                  /* extern */
? func_80140BA4(void *, s32, s32);                  /* extern */
? func_801F5468(s32, ?, s32);                       /* extern */
? func_801F5470(s32, s32, s32);                     /* extern */
? func_801F54A4(s32, s32, s32);                     /* extern */
? func_801F5E34(s32, s32, s32);                     /* extern */
? func_801F5EE4(s32, ?, s32);                       /* extern */
? func_801F64AC(s32, ?, s32);                       /* extern */
? func_801F75EC(s32, s32, s32);                     /* extern */
? func_801F7B98(s32, ?, s32);                       /* extern */
? func_801F7F84(s32, s32, s32);                     /* extern */
? func_801F82A4(s32, s32, s32);                     /* extern */
static void *D_801C34EC = NULL;

void func_80119F04(s32 arg1, s32 arg2) {
    if (arg2 == 0x17D) {
        if (D_801C34EC->unk127E5 != 0) {
            func_80140BA4(D_801C34EC + 0x10A64, arg1, arg1);
        }
    } else if (arg2 == 0x17E) {
        if (D_801C34EC->unk127E5 != 0) {
            (D_801C34EC + 0x10A64)->unk32C = arg1;
        }
    } else if (arg2 == 0x17C) {
        if (D_801C34EC->unk127E5 != 0) {
            func_80140AE0(D_801C34EC + 0x10A64, arg1, arg1);
        }
    } else {
        if (arg2 < 0x130) {
            func_801F54A4(arg1, arg2, arg1);
            return;
        }
        if ((u32) (arg2 - 0x168) < 2U) {
            func_801F5E34(arg1, arg2, arg1);
            return;
        }
        if (arg2 == 0x136) {
            func_801F7B98(arg1, 0x136, arg1);
            return;
        }
        if ((u32) (arg2 - 0x140) < 6U) {
            func_801F7F84(arg1, arg2, arg1);
            return;
        }
        if ((u32) (arg2 - 0x14A) < 6U) {
            func_801F75EC(arg1, arg2, arg1);
            return;
        }
        switch (arg2) {                             /* irregular */
        case 0x154:
            func_801F5EE4(arg1, 0x154, arg1);
            return;
        case 0x155:
            func_801F82A4(arg1, arg2, arg1);
            return;
        case 0x15E:
            func_801F64AC(arg1, 0x15E, arg1);
            return;
        case 0x150:
            func_801F5468(arg1, 0x150, arg1);
            return;
        default:
            if ((u32) (arg2 - 0x186) < 5U) {
                func_801F5470(arg1, arg2, arg1);
            }
            return;
        }
    }
}

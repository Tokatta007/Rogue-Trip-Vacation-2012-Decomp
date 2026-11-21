/* m2c reference for func_80160450 @ 80160450 (47 words). Generated; not compiled or validated. */
? func_80160AE8();                                  /* extern */
extern void *D_801BC000;
extern ? (*D_801BC038)(?);
extern s32 D_801BC050;

void func_80160450(void) {
    u32 var_v1;

    if (D_801BC050 == 0) {
        func_80160AE8();
    }
    D_801BC000->unk1AA = (u16) (D_801BC000->unk1AA & 0xFFCF);
    if (D_801BC000->unk1AA & 0x30) {
        var_v1 = 1;
loop_4:
        if (var_v1 < 0xF01U) {
            var_v1 += 1;
            if (D_801BC000->unk1AA & 0x30) {
                goto loop_4;
            }
        }
    }
    if (D_801BC038 != NULL) {
        D_801BC038(0xF0000000);
        return;
    }
    DeliverEvent(0xF0000009U, 0x20U);
}

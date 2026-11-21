/* m2c reference for func_801547DC @ 801547DC (59 words). Generated; not compiled or validated. */
? func_8011B994(void *);                            /* extern */
void *func_8011D40C(void *, ?, s32, ?);             /* extern */

void func_801547DC(void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg1->unk88 == 0) && (arg1->unk8B == 0)) {
        var_v1 = arg1->unk7D == 0;
    }
    if (var_v1 != 0) {
        arg1->unk88 = 1U;
        arg1->unk182 = 0;
        func_8011B994(arg1->unk740);
        arg1->unk740 = func_8011D40C(arg1 + 0x244, 0xC8, arg1->unk738, 0x44);
        arg1->unk740->unkC = 0;
        arg1->unk740->unk10 = 0;
        arg1->unk740->unk14 = 4;
        arg1->unk740->unk33 = 3;
        arg1->unk740->unk34 = 0xA;
        arg1->unk740->unk35 = 0;
        arg1->unk740->unk36 = 0;
        arg1->unk740->unk37 = 2;
        arg1->unk740->unk38 = 0;
    }
}

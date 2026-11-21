/* m2c reference for func_80150BB8 @ 80150BB8 (177 words). Generated; not compiled or validated. */
? func_801253C8(s32, void *);                       /* extern */
? func_8012CDF4(void *, ?);                         /* extern */
? func_8014EAA8(void *, void *);                    /* extern */
? func_8014F214(void *, s32 *, ? *, ?);             /* extern */
? func_801683EC(void *, ? *, ?, ?, s32);            /* extern */

void func_80150BB8(void *arg0, s32 arg1, ? arg2, s32 arg3) {
    s32 sp18;
    ? sp28;
    s32 sp2C;
    s32 sp4C;
    void *temp_s0;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s3;

    temp_s0 = (arg0 + (arg1 * 4))->unk17B8;
    func_801683EC(temp_s0, &sp28, 1, arg2, arg3);
    if ((sp4C != 0) && (sp6A >= 0x190) && (sp6A < 0x1A3)) {
        sp2C = 0;
        sp4C = 0;
    }
    if ((sp2C != 0) && (temp_s2 = arg0 + (arg1 * 4), (sp48 != (*temp_s2->unk17C0->unk738)->unk2))) {
        func_8014F214(arg0, &sp18, &sp28, 0);
        temp_s0->unk1C = (s32) (temp_s0->unk1C + sp18);
        temp_s0->unk20 = (s32) (temp_s0->unk20 + sp1C);
        temp_s0->unk24 = (s32) (temp_s0->unk24 + sp20);
        if ((sp38 >= -0x7FF) || ((sp48 != 0) && (sp4A != 0x284) && (sp4A != 0x285))) {
            func_801253C8(arg0->unk1064 + 0x1C, temp_s0 + 0x1C);
            arg0->unk106C = (void *) temp_s2->unk17C0;
            arg0->unk1070 = 0xD;
            arg0->unk1098 = 0x14;
            arg0->unk109A = 0x258;
            arg0->unk10AA = 0;
            temp_s0->unk24 = (s32) (temp_s0->unk24 - 0x38);
            func_8014EAA8(arg0, arg0 + 0x1050);
            (arg0 + arg1)->unk17D2 = 1;
            temp_s2->unk17C8 = 0;
        }
    } else {
        temp_s0->unk24 = (s32) (temp_s0->unk24 - 2);
    }
    if (sp4C != 0) {
        temp_s3 = arg0 + (arg1 * 4);
        temp_s2_2 = arg0 + arg1;
        if ((sp68 != (*temp_s3->unk17C0->unk738)->unk2) && (temp_s2_2->unk17D2 == 0) && (sp68 != 0) && (sp6A != 0x284) && (sp6A != 0x285)) {
            func_801253C8(arg0->unk1064 + 0x1C, temp_s0 + 0x1C);
            arg0->unk106C = (void *) temp_s3->unk17C0;
            arg0->unk1070 = 0xD;
            arg0->unk1098 = 0x14;
            arg0->unk109A = 0x258;
            arg0->unk10AA = 0;
            temp_s0->unk24 = (s32) (temp_s0->unk24 - 0x38);
            func_8014EAA8(arg0, arg0 + 0x1050);
            temp_s2_2->unk17D2 = 1U;
            temp_s3->unk17C8 = 0;
            if (temp_s2_2->unk17D6 == 0) {
                func_8012CDF4(temp_s3->unk17C0 + 0x264, 0);
                temp_s2_2->unk17D6 = 1U;
            }
        }
    }
}

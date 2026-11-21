/* m2c reference for func_8012B180 @ 8012B180 (446 words). Generated; not compiled or validated. */
? func_800FD278(void *, ?);                         /* extern */
s32 func_80123940(s32, void *, s32, void *, s16 *); /* extern */
? func_80125464(s16 *, void *, void *);             /* extern */
? func_8012B878(void *);                            /* extern */
s32 func_80149D84(s32, s32, void *, s32 *, s32, s32); /* extern */
? func_8014F2CC(s32, s32, void *);                  /* extern */
? func_80150710(s32, void *, s32, void *);          /* extern */
? func_8015100C(s32, void *, s32, void *);          /* extern */
? func_80151864(s32, void *, s32, s32);             /* extern */
? func_80151944(s32, void *, s32, s32);             /* extern */
? func_801FA4EC(s32, void *);                       /* extern */
static s32 D_801C34EC = 0;

s32 func_8012B180(void *arg0) {
    s16 sp18;
    u16 sp1A;
    s16 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_v1;
    void *temp_a0;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a3;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_a3 = arg0->unk0;
    var_s2 = 0x1B;
    temp_v1 = temp_a3->unk7C0;
    var_s0 = 1;
    if (temp_v1 != 0x80) {
        if (temp_v1 < 0x81) {
            if (temp_v1 != 0x40) {
                if (temp_v1 < 0x41) {
                    if (temp_v1 != 0x20) {
                        if (temp_v1 < 0x21) {
                            if (temp_v1 != 0x10) {
                                var_s2 = 1;
                            } else {
                                temp_a1 = temp_a3->unk78;
                                if ((D_801C34EC + temp_a1)->unk6122 == 0) {
                                    func_8014F2CC(D_801C34EC + 0x496C, temp_a1, temp_a3);
                                    goto block_44;
                                }
                                goto block_55;
                            }
                        } else if (temp_v1 != 0x30) {
                            var_s2 = 1;
                        } else if ((D_801C34EC + 0x496C + temp_a3->unk78)->unk17D8 == 0) {
                            temp_a2 = arg0->unk0;
                            temp_v0 = func_80149D84(D_801C34EC + 0x496C, 0xE, temp_a2, temp_a2 + 0x714, func_80123940(D_801C34EC, arg0->unk0, 0x11, arg0->unk0 + 0x1E4, &sp18), 0);
                            temp_a0 = arg0->unk0;
                            temp_a0->unk7E0 = (s32) (temp_a0->unk7E0 + 1);
                            var_s0 = temp_v0;
                            var_v1 = arg0->unk0->unk7B8;
                            goto block_45;
                        }
                    } else {
                        temp_a0_2 = D_801C34EC + 0x496C;
                        if ((temp_a0_2 + temp_a3->unk78)->unk17D0 == 0) {
                            func_80150710(temp_a0_2, temp_a3, temp_a3->unk78, temp_a3);
                        } else {
                            goto block_55;
                        }
                    }
                } else if (temp_v1 != 0x60) {
                    if (temp_v1 < 0x61) {
                        if (temp_v1 != 0x50) {
                            var_s2 = 1;
                        } else {
                            temp_a0_3 = D_801C34EC + 0x496C;
                            if ((temp_a0_3 + temp_a3->unk78)->unk17F8 == 0) {
                                func_8015100C(temp_a0_3, temp_a3->unk738, temp_a3->unk78, temp_a3);
                                goto block_44;
                            }
                            goto block_55;
                        }
                    } else if (temp_v1 != 0x70) {
                        var_s2 = 1;
                    } else if ((D_801C34EC + 0x496C + temp_a3->unk78)->unk1850 == 0) {
                        if (temp_a3->unkBA != 0) {
                            sp18 = -(s16) temp_a3->unk738->unk14;
                            sp1A = arg0->unk0->unk738->unk16;
                            sp1C = arg0->unk0->unk738->unk18 + 0x800;
                        } else {
                            func_80125464(&sp18, temp_a3->unk738 + 0x14, temp_a3);
                        }
                        temp_v1_2 = arg0->unk0;
                        func_80151944(D_801C34EC + 0x496C, temp_v1_2->unk738, func_80123940(D_801C34EC, arg0->unk0, 0x12, arg0->unk0 + 0x1E4, &sp18), temp_v1_2->unk78);
                    } else {
                        goto block_55;
                    }
                } else {
                    if ((D_801C34EC + 0x496C + temp_a3->unk78)->unk17FC == 0) {
                        if (temp_a3->unkBA != 0) {
                            sp18 = -(s16) temp_a3->unk738->unk14;
                            sp1A = arg0->unk0->unk738->unk16;
                            sp1C = arg0->unk0->unk738->unk18 + 0x800;
                        } else {
                            func_80125464(&sp18, temp_a3->unk738 + 0x14, temp_a3);
                        }
                        temp_v1_3 = arg0->unk0;
                        func_80151864(D_801C34EC + 0x496C, temp_v1_3->unk738, func_80123940(D_801C34EC, arg0->unk0, 0x11, arg0->unk0 + 0x1E4, &sp18), temp_v1_3->unk78);
block_44:
                        var_v1 = arg0->unk0->unk7B8;
                        goto block_45;
                    }
                    goto block_55;
                }
            } else {
                var_s2 = 0xF;
                var_v1 = temp_a3->unk7B8;
block_45:
                if (var_v1 == 2) {
                    func_800FD278(arg0->unk0, 0xB4);
                }
            }
        } else if (temp_v1 != 0xE0) {
            if (temp_v1 < 0xE1) {
                if (temp_v1 != 0xA0) {
                    if (temp_v1 < 0xA1) {
                        if (temp_v1 != 0x90) {
                            var_s2 = 1;
                        } else {
                            goto block_55;
                        }
                    } else {
                        var_s2 = 1;
                        if (temp_v1 != 0xB0) {

                        } else {
                            var_s2 = 0x16;
                        }
                    }
                } else if ((D_801C34EC + 0x496C + temp_a3->unk78)->unk18A0 == 0) {
                    var_s2 = 0x15;
                } else {
block_55:
                    var_s0 = 0;
                }
            } else if (temp_v1 != 0x100) {
                if (temp_v1 < 0x101) {
                    if (temp_v1 != 0xF0) {
                        var_s2 = 1;
                    } else {
                        func_801FA4EC(D_801C34EC + 0x10FF4, temp_a3);
                    }
                } else {
                    var_s2 = 1;
                    if (temp_v1 != 0x110) {

                    } else {
                        var_s2 = 0;
                    }
                }
            } else {
                var_s2 = 0x18;
            }
        } else {
            temp_v0_2 = func_80123940(D_801C34EC, arg0->unk0, 0, arg0->unk0 + 0x1E4, &sp18);
            sp20 = arg0->unk0->unk714 + 0x20;
            sp24 = arg0->unk0->unk718;
            sp28 = arg0->unk0->unk71C;
            func_80149D84(D_801C34EC + 0x496C, 1, arg0->unk0, &sp20, temp_v0_2, 0);
            sp20 = arg0->unk0->unk714 - 0x40;
            sp28 = arg0->unk0->unk71C + 0x20;
            var_s0 = func_80149D84(D_801C34EC + 0x496C, 1, arg0->unk0, &sp20, temp_v0_2, 0);
        }
    } else {
        var_s2 = 0x13;
    }
    if (var_s2 != 0x1B) {
        temp_v1_4 = arg0->unk0;
        if (temp_v1_4->unkBA != 0) {
            sp18 = -(s16) temp_v1_4->unk738->unk14;
            sp1A = arg0->unk0->unk738->unk16;
            sp1C = arg0->unk0->unk738->unk18 + 0x800;
        } else {
            func_80125464(&sp18, temp_v1_4->unk738 + 0x14);
        }
        temp_s0 = func_80123940(D_801C34EC, arg0->unk0, var_s2, arg0->unk0 + 0x1E4, &sp18);
        if (arg0->unk4C != 0) {
            temp_a2_2 = arg0->unk0;
            var_s0 = func_80149D84(D_801C34EC + 0x496C, var_s2, temp_a2_2, temp_a2_2 + 0x714, temp_s0, 1);
            arg0->unk4C = (u8) (arg0->unk4C - 1);
        } else {
            temp_a2_3 = arg0->unk0;
            var_s0 = func_80149D84(D_801C34EC + 0x496C, var_s2, temp_a2_3, temp_a2_3 + 0x714, temp_s0, 0);
        }
    }
    func_8012B878(arg0);
    return var_s0 & 0xFF;
}

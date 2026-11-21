/* m2c reference for func_801011E4 @ 801011E4 (347 words). Generated; not compiled or validated. */
? func_80125464(s32, s32);                          /* extern */
? func_801254DC(s32, ?, s32, s32);                  /* extern */
? func_80125518(s32, s16, ?, ?);                    /* extern */
extern ? D_801807B8;
extern ? D_80180800;
extern ? D_80180848;
extern ? D_80180890;
extern ? D_801808D8;
extern ? D_80180920;
static void *D_801C34EC = NULL;

void func_801011E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_a0_3;
    s32 *var_a0_3;
    s32 temp_a0_5;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 temp_v1_10;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s0;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_4;

    var_t0 = 0;
    if (arg1 < 2) {
        if (arg1 == 1) {
            var_t0 = -0x28;
        }
        temp_a0 = arg0 + (arg1 * 4);
        if (temp_a0->unk0 == 5) {
            (arg0 + arg1)->unk3F4 = 1;
        }
        temp_a0->unk0 = arg2;
        var_v1 = 0;
        if ((temp_a0->unk390 == 0) || (temp_a0->unk3A0 == 0)) {
            var_v1 = 1;
        }
        if (var_v1 == 0) {
            temp_v0 = arg0 + (arg1 * 4);
            temp_a0_2 = temp_v0->unk3A0;
            var_a1 = 0;
            temp_v0->unk398 = arg3;
            switch (temp_a0_2->unk7C0) {            /* switch 1; irregular */
            case 0xF0:                              /* switch 1 */
                if (temp_a0_2->unk10C < 0xFA) {
                case 0x100:                         /* switch 1 */
                case 0x110:                         /* switch 1 */
                    var_a1 = 1;
                }
                break;
            }
            if (var_a1 != 0) {
                temp_a0_3 = arg0 + (arg1 * 4);
                if (*temp_a0_3 != 5) {
                    *temp_a0_3 = 3;
                }
            }
            temp_v1 = arg0 + (arg1 * 4);
            temp_v1_2 = temp_v1->unk0;
            temp_s4 = ((s32) temp_v1->unk3A0->unk7C0 >> 4) - 1;
            switch (temp_v1_2) {                    /* switch 2 */
            case 4:                                 /* switch 2 */
                temp_v1_3 = temp_s4 * 4;
                temp_a0_4 = arg0 + (arg1 * 4);
                temp_a0_4->unk3AC = (s32) (*(temp_v1_3 + &D_80180848) + var_t0);
                temp_a0_4->unk3B4 = (s32) *(temp_v1_3 + &D_80180890);
                var_v0 = arg1 * 4;
                break;
            case 0:                                 /* switch 2 */
                temp_a0_5 = temp_s4 * 4;
                temp_v1_4 = arg0 + (arg1 * 4);
                temp_v1_4->unk3AC = (s32) (*(temp_a0_5 + &D_801807B8) + 0xA0);
                if (temp_v1_4->unk3AC >= -0x97) {
                    temp_v1_4->unk3AC = -0x98;
                }
                temp_v1_4->unk3B4 = (s32) (*(temp_a0_5 + &D_80180800) - 0x20);
                if (temp_v1_4->unk3B4 < 0x40) {
                    temp_v1_4->unk3B4 = 0x40;
                    var_v0 = arg1 * 4;
                } else {
block_42:
                    var_v0 = arg1 * 4;
                }
                break;
            case 2:                                 /* switch 2 */
                temp_v1_5 = temp_s4 * 4;
                temp_a0_6 = arg0 + (arg1 * 4);
                temp_a0_6->unk3AC = (s32) (*(temp_v1_5 + &D_801807B8) - 0x80);
                temp_a0_6->unk3B4 = (s32) (*(temp_v1_5 + &D_80180800) + 0x28);
                var_v0 = arg1 * 4;
                break;
            case 3:                                 /* switch 2 */
                temp_a0_7 = arg0 + (arg1 * 4);
                temp_a1 = temp_a0_7->unk3A0;
                temp_a0_7->unk3AC = -0x190;
                temp_a0_7->unk3B4 = 0x190;
                if (temp_a1->unk7C0 == 0xF0) {
                    var_s0 = arg1 * 2;
                    if (temp_a1->unk10C >= 0xFB) {
                        temp_a0_7->unk3AC = (s32) (temp_a0_7->unk3AC - 0xA0);
                        temp_a0_7->unk3B4 = (s32) (temp_a0_7->unk3B4 + 0x118);
                        var_s0 = arg1 * 2;
                    }
                } else {
                    var_a0 = 0;
                    if ((temp_a1->unk7C0 == 0x110) || (temp_a1->unk7C0 == 0x100)) {
                        var_a0 = 1;
                    }
                    if (var_a0 != 0) {
                        temp_v0_2 = arg0 + (arg1 * 4);
                        temp_v0_2->unk3AC = (s32) (temp_v0_2->unk3AC + 0xA0);
                        temp_v0_2->unk3B4 = (s32) (temp_v0_2->unk3B4 - 0x140);
                    }
                    var_s0 = arg1 * 2;
                }
                temp_s0 = (var_s0 + arg1) * 4;
                temp_s1 = arg0 + (arg1 * 4);
                func_801254DC(arg0 + (temp_s0 + 0x338), 0, temp_s1->unk3AC, temp_s1->unk3B4);
                func_801254DC(arg0 + (temp_s0 + 0x350), 0, temp_s1->unk3AC, temp_s1->unk3B4);
                var_v0 = arg1 * 4;
                break;
            case 6:                                 /* switch 2 */
                temp_v1_6 = D_801C34EC->unk7D8;
                if (temp_v1_6 < 6) {
                    var_a0_2 = arg1 * 4;
                    if (temp_v1_6 >= 3) {
                        temp_v1_7 = temp_s4 * 4;
                        var_a0_3 = arg0 + var_a0_2;
                        var_a0_3->unk3AC = (s32) (*(temp_v1_7 + &D_80180848) + var_t0);
                        var_a0_3->unk3B4 = (s32) *(temp_v1_7 + &D_80180890);
                        var_v0_2 = 4;
                    } else {
                        goto block_39;
                    }
                } else {
                    var_a0_2 = arg1 * 4;
block_39:
                    temp_v1_8 = temp_s4 * 4;
                    var_a0_3 = arg0 + var_a0_2;
                    var_a0_3->unk3AC = (s32) *(temp_v1_8 + &D_801807B8);
                    var_a0_3->unk3B4 = (s32) *(temp_v1_8 + &D_80180800);
                    var_v0_2 = 1;
                }
                *var_a0_3 = var_v0_2;
                temp_s0_2 = arg1 * 0xC;
                temp_s1_2 = arg0 + (arg1 * 4);
                func_801254DC(arg0 + (temp_s0_2 + 0x350), 0, temp_s1_2->unk3AC, temp_s1_2->unk3B4);
                func_801254DC(arg0 + (temp_s0_2 + 0x338), 0, temp_s1_2->unk3AC, temp_s1_2->unk3B4);
                func_80125518(arg0 + ((arg1 * 8) + 0x380), (s16) temp_s1_2->unk3A0->unk1F0, 0, 0);
                var_v0 = arg1 * 4;
                break;
            default:                                /* switch 2 */
                temp_v1_9 = temp_s4 * 4;
                temp_a1_2 = arg0 + (arg1 * 4);
                temp_a1_2->unk3AC = (s32) *(temp_v1_9 + &D_801807B8);
                temp_a1_2->unk3B4 = (s32) *(temp_v1_9 + &D_80180800);
                func_80125464(arg0 + ((arg1 * 8) + 0x380), temp_a1_2->unk390 + 0x14);
                goto block_42;
            }
            temp_a0_8 = arg0 + var_v0;
            temp_a1_3 = temp_a0_8->unk3A0;
            if ((temp_a1_3->unk7C0 == 0xF0) && (temp_a0_8->unk0 != 3) && (temp_a1_3->unk10C >= 0x7E)) {
                temp_a0_8->unk3B4 = (s32) (temp_a0_8->unk3B4 - 0x168);
            }
            temp_v1_10 = temp_s4 * 4;
            temp_a0_9 = arg0 + (arg1 * 4);
            temp_a0_9->unk3BC = (s32) *(temp_v1_10 + &D_801808D8);
            temp_a0_9->unk3C4 = (s32) *(temp_v1_10 + &D_80180920);
        }
    }
}

/* m2c reference for func_8012A154 @ 8012A154 (167 words). Generated; not compiled or validated. */
? func_800FCC68(void *);                            /* extern */
? func_801168B4(void *);                            /* extern */
? func_8011A4AC(void *);                            /* extern */
? func_8012EA50(void *);                            /* extern */
? func_80140D70(void *);                            /* extern */
? func_8014662C(void *);                            /* extern */
? func_801F5550(void *);                            /* extern */
? func_801F556C(void *);                            /* extern */
? func_801F55B8(void *);                            /* extern */
? func_801F55C8(void *);                            /* extern */
? func_801F58D0(void *);                            /* extern */
? func_801F59A8(void *);                            /* extern */
? func_801F5A58(void *);                            /* extern */
? func_801F5DA0(void *);                            /* extern */
? func_801F5DE8(void *);                            /* extern */
? func_801F65C0(void *);                            /* extern */
? func_801F67BC(void *);                            /* extern */
? func_801F67D4(void *);                            /* extern */
? func_801F6B88(void *);                            /* extern */
? func_801F6F34(void *);                            /* extern */
? func_801F7254(void *);                            /* extern */
? func_801F76B8(void *);                            /* extern */
? func_801F7A54(void *);                            /* extern */
? func_801F8784(void *);                            /* extern */
? func_801F8C38(void *);                            /* extern */
? func_801F8D40(void *);                            /* extern */
? func_801F9D9C(void *);                            /* extern */
? func_801FAC24(void *);                            /* extern */
? func_801FB668(void *);                            /* extern */
static s32 D_801C34EC = 0;

void func_8012A154(void *arg0, s32 arg4) {
    s32 temp_v0_2;
    s32 temp_v1;
    void *temp_a0;
    void *temp_v0;
    void *var_v0;
    void *var_v0_2;
    void *var_v0_3;

    if ((arg4 >= 2) && (arg4 < arg0->unk7D0)) {
        temp_v0 = arg0 + (arg4 * 4);
        temp_a0 = temp_v0->unk0;
        temp_v0_2 = temp_v0->unk3E8;
        switch (temp_v0_2) {                        /* switch 1 */
        case 1:                                     /* switch 1 */
            temp_v1 = (D_801C34EC + (temp_a0->unk7C8 * 4))->unkB768;
            switch (temp_v1) {                      /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                func_8014662C(temp_a0);
                return;
            case 2:                                 /* switch 2 */
                func_800FCC68(temp_a0);
                return;
            }
            break;
        case 25:                                    /* switch 1 */
            var_v0 = NULL;
            if (temp_a0 != NULL) {
                var_v0 = temp_a0 - 0x74;
            }
            func_80140D70(var_v0);
            return;
        case 26:                                    /* switch 1 */
            func_801F8C38(temp_a0);
            return;
        case 2:                                     /* switch 1 */
            var_v0_2 = NULL;
            if (temp_a0 != NULL) {
                var_v0_2 = temp_a0 - 0x74;
            }
            func_801168B4(var_v0_2);
            return;
        case 3:                                     /* switch 1 */
            var_v0_3 = NULL;
            if (temp_a0 != NULL) {
                var_v0_3 = temp_a0 - 0x74;
            }
            func_801F8D40(var_v0_3);
            return;
        case 4:                                     /* switch 1 */
            func_801F76B8(temp_a0);
            return;
        case 5:                                     /* switch 1 */
            func_801F8784(temp_a0);
            return;
        case 6:                                     /* switch 1 */
            func_801F59A8(temp_a0);
            return;
        case 11:                                    /* switch 1 */
            func_801F67BC(temp_a0);
            return;
        case 12:                                    /* switch 1 */
            func_801F5DA0(temp_a0);
            return;
        case 7:                                     /* switch 1 */
            func_801F7254(temp_a0);
            return;
        case 8:                                     /* switch 1 */
            func_801F6B88(temp_a0);
            return;
        case 9:                                     /* switch 1 */
            func_801F65C0(temp_a0);
            return;
        case 10:                                    /* switch 1 */
            func_801F55B8(temp_a0);
            return;
        case 13:                                    /* switch 1 */
            func_801F9D9C(temp_a0);
            return;
        case 14:                                    /* switch 1 */
            func_801F55C8(temp_a0);
            return;
        case 15:                                    /* switch 1 */
            func_801F7A54(temp_a0);
            return;
        case 16:                                    /* switch 1 */
            func_801F6F34(temp_a0);
            return;
        case 17:                                    /* switch 1 */
            func_801F67D4(temp_a0);
            return;
        case 18:                                    /* switch 1 */
            func_801F556C(temp_a0);
            return;
        case 19:                                    /* switch 1 */
            func_801F58D0(temp_a0);
            return;
        case 20:                                    /* switch 1 */
            func_801F5DE8(temp_a0);
            return;
        case 21:                                    /* switch 1 */
            func_801F5A58(temp_a0);
            return;
        case 22:                                    /* switch 1 */
            func_801F5550(temp_a0);
            return;
        case 23:                                    /* switch 1 */
            func_801FB668(temp_a0);
            return;
        case 24:                                    /* switch 1 */
            func_801FAC24(temp_a0);
            return;
        case 27:                                    /* switch 1 */
            func_8011A4AC(temp_a0);
            return;
        case 28:                                    /* switch 1 */
            func_8012EA50(temp_a0);
            break;
        }
    } else {
    default:                                        /* switch 1 */
    }
}

/* m2c reference for func_80124B80 @ 80124B80 (51 words). Generated; not compiled or validated. */
s32 func_80126E2C(s32);                             /* extern */

void func_80124B80(void *arg0, s32 arg1) {
    s32 temp_a0;

    arg0->unk127AE = 1;
    arg0->unk127AF = 1;
    if (func_80126E2C(arg0->unk12688) != 0) {
        arg0->unk127AE = 0;
        arg0->unk127AF = 0;
        return;
    }
    temp_a0 = arg0->unk7D8;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        if (arg1 == 4) {
            arg0->unk127AE = 0;
            return;
        }
        return;
    case 3:                                         /* switch 1 */
        arg0->unk127AE = 0;
        arg0->unk127AF = 0;
        switch (arg1) {                             /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            arg0->unk127AE = 1;
            return;
        case 2:                                     /* switch 2 */
            arg0->unk127AF = 1;
            break;
        }
        break;
    }
}

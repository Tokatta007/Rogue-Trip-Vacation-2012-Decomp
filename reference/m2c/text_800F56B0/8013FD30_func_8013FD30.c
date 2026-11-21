/* m2c reference for func_8013FD30 @ 8013FD30 (145 words). Generated; not compiled or validated. */
void func_8013FD30(void *arg0, s32 arg1, s32 arg2, u16 arg3) {
    s16 var_s1;
    s16 var_v1;
    s16 var_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s3;
    u32 var_v0;

    if ((arg0->unk6F8 << 0x10) <= 0) {
        arg0->unk6C8 = arg1;
        arg0->unk6D0 = arg2;
    }
    var_a0 = 0;
    if (arg0->unk6CC >= arg1) {
        var_a0 = (arg0->unk6FA << 0x10) > 0;
    }
    if (var_a0 == 0) {
        arg0->unk6CC = arg1;
        arg0->unk6F8 = arg3;
        arg0->unk6FA = arg3;
        arg0->unk6FC = 0;
        switch (arg1) {
        case 5:
            var_s1 = 0x71;
block_9:
            var_s3 = 0x1F;
            var_s0 = 0;
            break;
        case 4:
            var_s1 = 0x44;
            goto block_9;
        case 3:
            var_s1 = 0x2D;
            var_s3 = 0xF;
            var_s0 = 1;
            break;
        case 2:
            var_s1 = 0x16;
            var_s3 = 7;
            var_s0 = 3;
            break;
        default:
            var_s1 = 5;
            var_s3 = 1;
            var_s0 = 5;
            break;
        }
        arg0->unk6FA = (u16) ((rand() & var_s0) + 1);
        if ((arg2 == 0) || (arg2 == 2)) {
            if (rand() & 1) {
                var_s1 = -var_s1;
            }
            arg0->unk6E0 = var_s1;
            var_v0 = arg2 - 1;
        } else {
            arg0->unk6E0 = 0;
            var_v0 = arg2 - 1;
        }
        if (var_v0 < 2U) {
            if (rand() & 1) {
                var_s1 = -var_s1;
            }
            arg0->unk6E2 = var_s1;
        } else {
            arg0->unk6E2 = 0;
        }
        arg0->unk700 = 0x156;
        arg0->unk702 = 0x156;
        if (((u16) arg0->unk6E0 << 0x10) > 0) {
            var_v1 = (u16) arg0->unk6E0 - (rand() & var_s3);
            goto block_28;
        }
        if ((u16) arg0->unk6E0 & 0x8000) {
            var_v1 = (u16) arg0->unk6E0 + (rand() & var_s3);
block_28:
            arg0->unk6E8 = var_v1;
        }
        if (((u16) arg0->unk6E2 << 0x10) > 0) {
            var_v1_2 = (u16) arg0->unk6E2 - (rand() & var_s3);
            goto block_33;
        }
        if ((u16) arg0->unk6E2 & 0x8000) {
            var_v1_2 = (u16) arg0->unk6E2 + (rand() & var_s3);
block_33:
            arg0->unk6EA = var_v1_2;
        }
    }
}

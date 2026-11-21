/* m2c reference for func_80175DBC @ 80175DBC (111 words). Generated; not compiled or validated. */
extern void *D_801BC000;
extern s32 D_801C2664;
extern s32 D_801C268C;
extern s32 D_801C2690;
extern s32 D_801C2AC4;
extern ? D_801EC950;

void func_80175DBC(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v0;
    u16 temp_a1;
    u32 temp_a2;

    temp_a1 = arg1 & 0xFFFFFF;
    temp_a2 = temp_a1 >> 0x10;
    switch (arg0) {                                 /* irregular */
    case 1:
        if (D_801C2AC4 & 1) {
            D_801EC950.unk0 = temp_a1;
            D_801EC950.unk2 = (u16) temp_a2;
            D_801C2690 |= 1;
            D_801C268C |= temp_a1;
            if (D_801EC950.unk4 & temp_a1) {
                D_801EC950.unk4 = (u16) (D_801EC950.unk4 & ~temp_a1);
            }
            if (D_801EC950.unk6 & temp_a2) {
                D_801EC950.unk6 = (u16) (D_801EC950.unk6 & ~temp_a2);
                return;
            }
        } else {
            var_v0 = D_801C2664 | temp_a1;
            D_801BC000->unk188 = temp_a1;
            D_801BC000->unk18A = (s16) temp_a2;
block_14:
            D_801C2664 = var_v0;
            return;
        }
        break;
    case 0:
        if (D_801C2AC4 & 1) {
            D_801EC950.unk4 = temp_a1;
            D_801EC950.unk6 = (u16) temp_a2;
            D_801C2690 |= 1;
            temp_v1 = ~temp_a1;
            D_801C268C &= temp_v1;
            if (D_801EC950.unk0 & temp_a1) {
                D_801EC950.unk0 = (u16) (D_801EC950.unk0 & temp_v1);
            }
            if (D_801EC950.unk2 & temp_a2) {
                D_801EC950.unk2 = (u16) (D_801EC950.unk2 & ~temp_a2);
                return;
            }
        } else {
            D_801BC000->unk18C = temp_a1;
            D_801BC000->unk18E = (s16) temp_a2;
            var_v0 = D_801C2664 & ~temp_a1;
            goto block_14;
        }
        break;
    }
}

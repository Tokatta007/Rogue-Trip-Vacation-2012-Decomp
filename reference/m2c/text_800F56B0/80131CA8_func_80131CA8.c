/* m2c reference for func_80131CA8 @ 80131CA8 (87 words). Generated; not compiled or validated. */
s32 func_8015B5AC(s32, ?, s16, s16);                /* extern */
extern s32 D_801C37EC;
extern s32 D_801C37F8;
extern s32 D_801C37FC;
extern s32 D_801C3800;
extern s32 D_801C3808;
static s32 D_801C335C = 0;

void func_80131CA8(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;
    void *temp_s0;
    void *temp_v0;

    if (D_801C335C != 0) {
        temp_s0 = D_801C37F8 + (D_801C3800 * 0x18);
        temp_s0->unk0 = (s32) *((arg1 * 4) + D_801C37FC);
        if (arg2 != 0) {
            temp_v0 = (((D_801C3808 * 0x1A) + arg1) * 0x14) + D_801C37EC;
            temp_s0->unk4 = (s32) temp_v0->unk0;
            temp_s0->unk8 = (s32) temp_v0->unk4;
            temp_s0->unkC = (s32) temp_v0->unk8;
            temp_s0->unk10 = (s32) temp_v0->unkC;
            var_v0 = temp_v0->unk10;
        } else {
            temp_s0->unk4 = (s32) (func_8015B5AC(arg0->unk0, 0, (s16) arg0->unk4, (s16) arg0->unk6) & 0x1F);
            temp_s0->unk8 = (s32) (s16) arg0->unk4;
            temp_s0->unkC = (s32) (s16) arg0->unk6;
            temp_s0->unk10 = (s32) (s16) arg0->unk10;
            var_v0 = (s32) (s16) arg0->unk12;
        }
        temp_s0->unk14 = var_v0;
        D_801C3800 += 1;
    }
}

/* m2c reference for func_8012DC10 @ 8012DC10 (36 words). Generated; not compiled or validated. */
extern u8 D_801C37CC;

void func_8012DC10(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s16 var_v0;

    arg0->unk0 = 0x800501D0;
    arg0->unk4 = 0x80062DD0;
    arg0->unk8 = 0;
    arg0->unkC = 0x800759D0;
    arg0->unk20 = (s32) (arg1 ^ 1);
    arg0->unk2C = 0;
    arg0->unk10 = arg2;
    arg0->unk12 = arg3;
    arg0->unk14 = (s16) arg6;
    arg0->unk16 = (s16) arg7;
    arg0->unk18 = (s16) arg4;
    arg0->unk1A = (s16) arg5;
    arg0->unk1C = (s16) arg6;
    arg0->unk1E = (s16) arg7;
    var_v0 = 0x10;
    if (D_801C37CC != 0) {
        var_v0 = 0x18;
    }
    arg0->unk24 = arg2;
    arg0->unk26 = arg3;
    arg0->unk28 = var_v0;
    arg0->unk2A = (s16) arg7;
}

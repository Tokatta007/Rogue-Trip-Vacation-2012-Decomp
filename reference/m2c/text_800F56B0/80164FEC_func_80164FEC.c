/* m2c reference for func_80164FEC @ 80164FEC (180 words). Generated; not compiled or validated. */
? func_8015982C(s32, s16 *);                        /* extern */
void *func_801652BC();                              /* extern */
? func_8016CD60(s32);                               /* extern */
extern void *D_801C3878;

void func_80164FEC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp10;
    s32 var_a0;
    void *temp_v0;
    void *var_v1;

    temp_v0 = func_801652BC();
    if (temp_v0 != NULL) {
        temp_v0->unk10 = (s32) (rand() & 0x1F);
        temp_v0->unk14 = (s32) (rand() & 0x1F);
        temp_v0->unk18 = (s32) ((rand() & 0xF) + arg2);
        temp_v0->unk1C = (s32) (rand() & 0x1F);
        temp_v0->unk20 = (s32) -(rand() & 0x1F);
        temp_v0->unk24 = (s32) ((rand() & 7) + 5);
        temp_v0->unk28 = (s32) -(rand() & 0x1F);
        temp_v0->unk2C = (s32) (rand() & 0x1F);
        temp_v0->unk30 = arg2;
        temp_v0->unk34 = (s32) -(rand() & 0x1F);
        temp_v0->unk38 = (s32) -(rand() & 0x1F);
        temp_v0->unk3C = (s32) ((rand() & 0x1F) + arg2);
        temp_v0->unk40 = (s32) (rand() & 0x1F);
        temp_v0->unk44 = (s32) (rand() & 0x1F);
        temp_v0->unk48 = (s32) ((rand() & 0x1F) + arg2);
        temp_v0->unk4C = (s32) (rand() & 0x1F);
        temp_v0->unk50 = (s32) -(rand() & 0x1F);
        temp_v0->unk54 = (s32) ((rand() & 7) + arg2);
        temp_v0->unk58 = (s32) -(rand() & 0x1F);
        temp_v0->unk5C = (s32) (rand() & 0x1F);
        temp_v0->unk60 = (s32) ((rand() & 7) + arg2);
        temp_v0->unk64 = (s32) -(rand() & 0x1F);
        temp_v0->unk68 = (s32) -(rand() & 0x1F);
        var_a0 = 0;
        var_v1 = temp_v0;
        temp_v0->unk6C = (s32) ((rand() & 7) + arg2);
        do {
            var_v1->unk70 = 0;
            var_v1->unk74 = 0;
            var_v1->unk78 = 0;
            var_a0 += 1;
            var_v1 += 0xC;
        } while (var_a0 < 8);
        if (arg1 == 0) {
            temp_v0->unkD0 = 0;
            temp_v0->unkD2 = 0;
            temp_v0->unkD4 = 0;
        } else {
            func_8015982C(arg1, &sp10);
            temp_v0->unkD0 = (s16) (sp10 / 64);
            temp_v0->unkD2 = (s16) (sp12 / 64);
            temp_v0->unkD4 = (s16) (sp14 / 64);
        }
        if (arg0 != 0) {
            temp_v0->unk8 = 0;
            temp_v0->unkC = arg3;
            D_801C3878 = temp_v0;
            temp_v0->unk4 = 0;
            func_8016CD60(arg0);
            temp_v0->unk0 = 1;
        }
    }
}

/* m2c reference for func_8015BAE0 @ 8015BAE0 (65 words). Generated; not compiled or validated. */
extern ? (*D_801BAD44)(? *, s16, s16, s16, s32);
static ? D_800F4BC4;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4BEC;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4C04;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4C14;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4C2C;                                /* unable to generate initializer: unknown type; const */
static ? D_800F4C38;                                /* unable to generate initializer: unknown type; const */

void func_8015BAE0(void *arg0) {
    u16 temp_v1;

    D_801BAD44(&D_800F4BEC, arg0->unk0, arg0->unk2, arg0->unk4, (s32) arg0->unk6);
    D_801BAD44(&D_800F4C04, arg0->unk8, arg0->unkA);
    D_801BAD44(&D_800F4C14, arg0->unkC, arg0->unkE, arg0->unk10, (s32) arg0->unk12);
    D_801BAD44(&D_800F4C2C, (s16) arg0->unk16);
    D_801BAD44(&D_800F4C38, (s16) arg0->unk17);
    temp_v1 = arg0->unk14;
    D_801BAD44(&D_800F4BC4, ((s32) temp_v1 >> 7) & 3, ((s32) temp_v1 >> 5) & 3, (temp_v1 << 6) & 0x7C0, ((temp_v1 * 0x10) & 0x100) + (((s32) temp_v1 >> 2) & 0x200));
}

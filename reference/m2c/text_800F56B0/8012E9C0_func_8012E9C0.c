/* m2c reference for func_8012E9C0 @ 8012E9C0 (36 words). Generated; not compiled or validated. */
s8 func_8012A0B8(s32, ?, void *, void *);           /* extern */
extern ? D_801CB990;
static s32 D_801C34F0 = 0;

void func_8012E9C0(void *arg0, void *arg1, void *arg2) {
    arg0->unk8 = arg1;
    arg0->unkC = (s32) arg2->unk0;
    arg0->unk10 = (s32) arg2->unk4;
    arg0->unk14 = (s32) arg2->unk8;
    arg0->unk4 = (u8) *(((((u16) arg0->unk8->unk0 >> 4) - 0x190) * 4) + &D_801CB990);
    arg0->unk8->unk2 = func_8012A0B8(D_801C34F0, 0x1C, arg0, arg0 + 0xC);
}

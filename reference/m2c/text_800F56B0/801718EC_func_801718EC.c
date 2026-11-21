/* m2c reference for func_801718EC @ 801718EC (24 words). Generated; not compiled or validated. */
s32 func_801718D8(s16);                             /* extern */
? func_80173E5C(s16);                               /* extern */

void func_801718EC(s32 arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = arg0 + ((s32) (arg1 << 0x10) >> 0xE);
    if (func_801718D8((s16) temp_s0->unk3DC) != 0) {
        func_80173E5C((s16) temp_s0->unk3DC);
        temp_s0->unk3DC = -1;
    }
}

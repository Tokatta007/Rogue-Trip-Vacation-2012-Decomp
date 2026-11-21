/* m2c reference for func_8017F628 @ 8017F628 (23 words). Generated; not compiled or validated. */
static ? D_800F568C;                                /* unable to generate initializer: unknown type; const */

void func_8017F628(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_v0;

    arg1->unk0 = (unaligned s32) D_800F568C.unk0;
    arg1->unk4 = (s8) D_800F568C.unk4;
    arg1->unk5 = (s8) D_800F568C.unk5;
    var_v0 = arg0;
    if (arg0 < 0) {
        var_v0 = arg0 + 0xF;
    }
    temp_v0 = var_v0 >> 4;
    arg1->unk2 = (s8) (temp_v0 + 0x30);
    arg1->unk3 = (s8) ((arg0 - (temp_v0 * 0x10)) + 0x30);
}

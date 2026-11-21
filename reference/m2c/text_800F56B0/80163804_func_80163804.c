/* m2c reference for func_80163804 @ 80163804 (40 words). Generated; not compiled or validated. */
s32 func_80162B10(s32);                             /* extern */
extern s32 D_801BC130;
extern u8 *D_801BC134;
extern ? (*D_801EC9D0)(?);
extern s32 (*D_801EC9E8)();

s32 func_80163804(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_v1;

    temp_v0_2 = D_801BC130 - 1;
    D_801BC130 = temp_v0_2;
    if (temp_v0_2 > 0) {
        temp_v0 = func_80162B10(D_801EC9E8() & 0xFF);
        if (temp_v0 < 0) {
            return temp_v0;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    temp_v1 = arg0->unk44;
    arg0->unk44 = (u8) (temp_v1 + 1);
    *(temp_v1 + arg0->unk3C) = *D_801BC134;
    D_801EC9D0(0);
    return 0;
}

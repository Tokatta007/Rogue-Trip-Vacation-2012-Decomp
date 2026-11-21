/* m2c reference for func_8012E7D4 @ 8012E7D4 (123 words). Generated; not compiled or validated. */
? func_8012DBF8(s8);                                /* extern */
s32 func_8013A06C();                                /* extern */
s16 func_80178A1C();                                /* extern */
extern ? D_8018462C;
extern s32 D_801C37E0;
extern s32 D_801C37E4;
extern s8 D_801C37E8;
extern s8 D_801C37E9;
extern ? D_801CB9E0;
extern ? D_801CBA30;
static s32 D_801C3348 = 0x1F4;
static s32 D_801C334C = 0x7D0;
static s32 D_801C3350 = 1;

void func_8012E7D4(void) {
    s8 *temp_a0;
    s8 *temp_a0_2;
    void *temp_v1;
    void *temp_v1_2;

    if ((D_801C3350 != 0) && (func_8013A06C() != 2)) {
        if (D_801C37E0 < D_801C3348) {
            D_801C37E0 += func_80178A1C();
            goto block_6;
        }
        D_801C37E0 = 0;
        if (D_801C37E8 > 0) {
            temp_a0 = (rand() % (s8) D_801C37E8) + &D_801CB9E0;
            temp_v1 = ((*temp_a0 * 0x18) + &D_8018462C)->unk8;
            temp_v1->unk3 = (u8) ((temp_v1->unk3 & 0x80) | 1);
            func_8012DBF8(*temp_a0);
block_6:
            if (D_801C37E4 < D_801C334C) {
                D_801C37E4 += func_80178A1C();
                return;
            }
            D_801C37E4 = 0;
            if (D_801C37E9 > 0) {
                temp_a0_2 = (rand() % (s8) D_801C37E9) + &D_801CBA30;
                temp_v1_2 = ((*temp_a0_2 * 0x18) + &D_8018462C)->unk8;
                temp_v1_2->unk3 = (u8) ((temp_v1_2->unk3 & 0x80) | 1);
                func_8012DBF8(*temp_a0_2);
            }
        }
    }
}

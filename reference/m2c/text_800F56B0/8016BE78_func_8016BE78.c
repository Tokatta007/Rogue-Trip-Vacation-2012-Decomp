/* m2c reference for func_8016BE78 @ 8016BE78 (49 words). Generated; not compiled or validated. */
extern ? D_801BC218;
extern ? D_801C38B4;
extern u8 D_801C38B8;

u8 func_8016BE78(s16 arg0, s16 arg1) {
    s16 var_v1;
    void *temp_v1;

    var_v1 = arg1;
    if (D_801C38B8 == 1) {
        var_v1 = (s16) *(arg1 + &D_801C38B4);
    }
    temp_v1 = (var_v1 * 0x24) + &D_801BC218;
    if (arg0 != 1) {
        if (arg0 < 2) {
            if (arg0 != 0) {
                return 0x50U;
            }
            return temp_v1->unk4;
        }
        switch (arg0) {                             /* irregular */
        case 2:
            return temp_v1->unk6;
        case 3:
            return temp_v1->unk7;
        default:
            return 0x50U;
        }
    } else {
        return temp_v1->unk5;
    }
}

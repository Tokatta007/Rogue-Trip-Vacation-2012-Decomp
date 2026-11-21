/* m2c reference for func_80162158 @ 80162158 (62 words). Generated; not compiled or validated. */
extern void *(*D_801EC9D4)();

u16 func_80162158(s32 arg1, s32 arg2) {
    void *temp_v1;

    temp_v1 = D_801EC9D4();
    if (arg1 != 3) {
        if (arg1 < 4) {
            switch (arg1) {                         /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                return (u16) temp_v1->unkE8;
            case 2:                                 /* switch 1 */
                return temp_v1->unkE6;
            default:                                /* switch 1 */
                return 0U;
            }
        } else {
            switch (arg1) {                         /* switch 2; irregular */
            case 0x4:                               /* switch 2 */
                if (arg2 < 0) {
                    return (u16) temp_v1->unkE3;
                }
                if (arg2 < (s32) temp_v1->unkE3) {
                    return *((arg2 * 2) + temp_v1->unk0);
                }
                return 0U;
            case 0x64:                              /* switch 2 */
                return (u16) temp_v1->unk4C;
            default:                                /* switch 2 */
                return 0U;
            }
        }
    } else {
        return (u16) temp_v1->unkE4;
    }
}

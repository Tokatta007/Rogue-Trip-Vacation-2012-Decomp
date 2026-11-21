/* m2c reference for func_801638CC @ 801638CC (46 words). Generated; not compiled or validated. */
extern u32 D_801ECA08;
extern u32 D_801ECA0C;

s32 func_801638CC(void) {
    u16 temp_v0;
    u16 var_a0;
    u32 var_v0;

    if (*(u16 *)0x1F801124 != -1U) {
        do {

        } while (*(void *)0x1F801124 != *(void *)0x1F801124);
    }
    var_a0 = *(u16 *)0x1F801120;
    if (var_a0 < (u32) D_801ECA08) {
        temp_v0 = *(u16 *)0x1F801128;
        if (temp_v0 != 0) {
            var_a0 += temp_v0;
        } else {
            var_a0 += 0x10000;
        }
    }
    if (!(*(void *)0x1F801124 & 0x200)) {
        var_v0 = (u32) (var_a0 - D_801ECA08) >> 3;
    } else {
        var_v0 = var_a0 - D_801ECA08;
    }
    return var_v0 >= D_801ECA0C;
}

/* m2c reference for func_80122E88 @ 80122E88 (39 words). Generated; not compiled or validated. */
void *func_80122E88(void *arg0) {
    s32 var_a2;
    s32 var_a3;
    s32 var_t1;
    void *var_a1;
    void *var_t0;
    void *var_v1;

    var_t1 = 0;
    if (arg0->unk7D8 == 0) {
        return (arg0 + 0x10A64)->unk330;
    }
    var_a3 = 0;
    var_t0 = NULL;
    if (arg0->unk12728 > 0) {
        var_a2 = 0xB788;
        var_a1 = arg0;
        var_v1 = var_a1 + 0xB788;
        do {
            if (var_t1 < var_v1->unk10C) {
                var_t0 = arg0 + var_a2;
                var_t1 = var_v1->unk10C;
            }
            var_a2 += 0x8B8;
            var_a1 += 0x8B8;
            var_a3 += 1;
            var_v1 = var_a1 + 0xB788;
        } while (var_a3 < arg0->unk12728);
    }
    return var_t0;
}

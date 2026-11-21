/* m2c reference for func_800FDCE0 @ 800FDCE0 (58 words). Generated; not compiled or validated. */
extern s32 D_801C3778;
extern s32 D_801C377C;

void func_800FDCE0(void *arg0) {
    s32 var_a1;
    s32 var_a1_2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_a0;
    void *var_a2;

    temp_a3 = arg0->unk10;
    var_a1 = 0;
    if (temp_a3->unk3 & 0x7F) {
        var_a2 = temp_a3;
        do {
            temp_v1 = var_a2->unk18;
            if ((temp_v1->unk0 & 0xF) == 4) {
                temp_v1->unk10 = (s32) D_801C3778;
            }
            var_a2 += 4;
            var_a1 += 1;
        } while (var_a1 < (temp_a3->unk3 & 0x7F));
    }
    if ((u32) (arg0->unk3 & 0x7F) >= 3U) {
        temp_a3_2 = arg0->unk14;
        var_a1_2 = 0;
        if (temp_a3_2->unk3 & 0x7F) {
            var_a0 = temp_a3_2;
            do {
                temp_v1_2 = var_a0->unk18;
                if ((temp_v1_2->unk0 & 0xF) == 4) {
                    temp_v1_2->unk10 = (s32) D_801C377C;
                }
                var_a0 += 4;
                var_a1_2 += 1;
            } while (var_a1_2 < (temp_a3_2->unk3 & 0x7F));
        }
    }
}

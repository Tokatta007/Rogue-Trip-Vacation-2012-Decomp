/* m2c reference for func_800F6010 @ 800F6010 (204 words). Generated; not compiled or validated. */
s32 func_80123464(void *, s32, s32);                /* extern */
s32 func_80123488(void *, s32, s32);                /* extern */
s32 func_80125094(void *, void *);                  /* extern */
? func_80125130(s32, s32 *);                        /* extern */
? func_8016408C(void *);                            /* extern */
static void *D_801C34EC = NULL;

void func_800F6010(void *arg0) {
    s32 sp10;
    s32 *temp_v1;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_s0;

    arg0->unk78C = func_80123464(D_801C34EC, arg0->unk7C8, arg0->unk884);
    arg0->unk788 = func_80123464(D_801C34EC, arg0->unk7C8, arg0->unk888);
    arg0->unk931 = 0;
    arg0->unk932 = 0;
    arg0->unk945 = (s8) (arg0->unk78C < 0xFA0);
    if (arg0->unk829 == 0) {
        arg0->unk88C = (s32) (arg0->unk88C + arg0->unk7D4);
    }
    func_80125130(func_80123488(D_801C34EC, arg0->unk7C8, arg0->unk884), &sp10);
    arg0->unk868 = (s32) (sp18 - (s16) arg0->unk40->unk18);
    func_8016408C(arg0 + 0x868);
    func_80125130(func_80123488(D_801C34EC, arg0->unk884, arg0->unk7C8), &sp10);
    arg0->unk86C = (s32) (sp18 - arg0->unk1F8);
    func_8016408C(arg0 + 0x86C);
    arg0->unk870 = (s32) (sp10 - arg0->unk1F0);
    func_8016408C(arg0 + 0x870);
    if (arg0->unk78C < 0x12C0) {
        if (arg0->unk78C < 0x640) {
            arg0->unk931 = 1;
        }
        var_v0 = arg0->unk868;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < 0x355) {
            arg0->unk932 = 1;
            arg0->unk931 = 1;
        } else {
            goto block_9;
        }
    } else {
block_9:
        if (arg0->unk928 != 0) {
            arg0->unk928 = (s32) (arg0->unk928 - 1);
        }
    }
    var_v1 = 0;
    if ((arg0->unk58 < 7) || (arg0->unk8D != 0)) {
        var_v1 = 1;
    }
    if (var_v1 == 0) {
        temp_v1 = arg0->unk44;
        arg0->unk85C = (s32) (s16) (temp_v1 + ((s32) ((((s32) (arg0->unk5C << 0x10) >> 0xB) + *temp_v1)->unk1D << 0x18) >> 0x16))->unk8->unk4A;
        if (func_80125094(arg0 + 0x1E4, arg0->unk34) < arg0->unk18) {
            var_v1_2 = arg0->unk1EC - arg0->unk34->unk8;
            if (var_v1_2 < 0) {
                var_v1_2 = -var_v1_2;
            }
            if (var_v1_2 >= 0xF1) {
                goto block_19;
            }
        }
    } else {
block_19:
        arg0->unk85C = 0;
    }
    arg0->unk878 = (s32) arg0->unk788;
    arg0->unk8DC = 0;
    temp_s4 = D_801C34EC->unk12728;
    var_s3 = 1;
    if (temp_s4 >= 2) {
        var_s2 = 0xC040;
loop_22:
        if (var_s3 < temp_s4) {
            temp_s0 = D_801C34EC + var_s2;
            temp_v0 = func_80123464(D_801C34EC, arg0->unk7C8, temp_s0->unk7C8);
            if (temp_v0 < arg0->unk878) {
                arg0->unk8DC = (s32) temp_s0->unk7D0;
                arg0->unk878 = temp_v0;
            }
            var_s2 += 0x8B8;
            var_s3 += 1;
            goto loop_22;
        }
    }
}

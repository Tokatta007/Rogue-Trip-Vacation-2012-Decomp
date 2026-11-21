/* m2c reference for func_8012B878 @ 8012B878 (77 words). Generated; not compiled or validated. */
s32 func_800FD454(void *, void *);                  /* extern */
s32 func_800FD498(void *);                          /* extern */
static void *D_801C34EC = NULL;

void func_8012B878(void **arg0) {
    void *temp_a1;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk7E0 = (s32) (temp_v1->unk7E0 + 1);
    temp_a1 = D_801C34EC->unk124D8;
    if ((temp_a1 != NULL) && (temp_v0 = *arg0, (temp_v0 != NULL)) && (temp_v0->unk7B8 == 2) && (temp_s0 = *arg0, (temp_a1->unk7C0 == temp_s0->unk7C0)) && (temp_s0->unk8F0 = 0, (func_800FD454(temp_s0, temp_a1) != 0))) {
        if (func_800FD498(temp_s0) != 0) {
            temp_s0->unk8F4 = (s32) (temp_s0->unk8F4 + 1);
            if ((temp_s0->unk8F4 >= 0xB) && (temp_s0->unk8F8 > 0)) {
                temp_s0->unk8F8 = (s32) (temp_s0->unk8F8 - 1);
            }
        } else if ((temp_s0->unk8F8 > 0) && (temp_s0->unk82D == 0)) {
            temp_s0->unk8F8 = (s32) (temp_s0->unk8F8 - 1);
        }
    }
}

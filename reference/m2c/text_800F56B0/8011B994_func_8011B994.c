/* m2c reference for func_8011B994 @ 8011B994 (37 words). Generated; not compiled or validated. */
? func_8016B504(? *, s8, ? *);                      /* extern */
? func_8016B574(? *, s8, ? *);                      /* extern */
extern ? D_80183200;
extern ? D_801832F0;
extern ? D_801C3790;
extern ? D_801C3794;

void func_8011B994(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && !(arg0->unk3D & 0x80)) {
        var_v1 = (s8) arg0->unk3D < 0x14;
    }
    if (var_v1 != 0) {
        func_8016B574(&D_80183200, (s8) arg0->unk3D, &D_801C3790);
        func_8016B504(&D_801832F0, (s8) arg0->unk3D, &D_801C3794);
    }
}

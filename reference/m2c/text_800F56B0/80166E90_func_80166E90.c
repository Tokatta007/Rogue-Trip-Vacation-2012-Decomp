/* m2c reference for func_80166E90 @ 80166E90 (33 words). Generated; not compiled or validated. */
s32 func_80155488(?);                               /* extern */
? func_801555D0(? *);                               /* extern */
? func_801555E4(? *);                               /* extern */
? func_80158454(? *);                               /* extern */
? func_80158468(?);                                 /* extern */
extern ? func_80166F14;
extern ? func_80166F3C;
extern ? func_80166F64;
static s8 D_800F51B4[0x20] = {
    0x43,
    0x64,
    0x49,
    0x6E,
    0x69,
    0x74,
    0x3A,
    0x20,
    0x49,
    0x6E,
    0x69,
    0x74,
    0x20,
    0x66,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0xA,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
}; /* const */

s32 func_80166E90(void) {
    s32 var_s0;

    var_s0 = 4;
loop_1:
    var_s0 -= 1;
    if (func_80155488(1) == 1) {
        func_801555D0(&func_80166F14);
        func_801555E4(&func_80166F3C);
        func_80158454(&func_80166F64);
        func_80158468(0);
        return 1;
    }
    if (var_s0 == -1) {
        printf(D_800F51B4);
        return 0;
    }
    goto loop_1;
}

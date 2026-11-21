/* m2c reference for func_8013AECC @ 8013AECC (26 words). Generated; not compiled or validated. */
void func_8013AECC(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = ((arg0 / 60) / 60) / 60;
    *arg2 = ((arg0 / 60) / 60) % 60;
    *arg3 = (arg0 / 60) % 60;
}

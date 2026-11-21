/* m2c reference for AddPrim @ 8015B6D8 (15 words). Generated; not compiled or validated. */
void AddPrim(void *ot, void *prim) {
    *prim = (s32) ((*prim & 0xFF000000) | (*ot & 0xFFFFFF));
    *ot = (s32) ((*ot & 0xFF000000) | ((s32) prim & 0xFFFFFF));
}

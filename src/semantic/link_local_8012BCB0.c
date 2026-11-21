/* Rogue Trip: set every weapon slot's "has ammo" flag, reconstructed from
 * the retail instructions at 8012BCB0. PsyQ 4.4, -O2 -G8. See
 * docs/LINK_CABLE.md (Layer 2b, Layer 4). */

extern void func_8012BD20(unsigned char *w, int slot, int armed);

/* Set the "has ammo" byte of all 9 slots of the weapon block W (car +0x264)
 * to ARMED through 8012BD20, the same setter the link receiver 8012D45C uses
 * for the weapon slot/flag of packet byte 1. ARMED = -1 also sets the block's
 * word +0x28 to 1000 (every slot filled, e.g. a cheat or bonus). */
void __attribute__((section(".text_8012BCB0"))) func_8012BCB0(unsigned char *w, signed char armed)
{
    int i;

    if (armed == -1)
        *(int *) (w + 0x28) = 1000;
    i = 0;
    do {
        func_8012BD20(w, i, armed);
        i++;
    } while (i < 9);
}

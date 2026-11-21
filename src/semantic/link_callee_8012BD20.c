/* Rogue Trip: set a weapon slot's flag, reconstructed from the retail
 * instructions at 8012BD20. PsyQ 4.4, -O2 -G8 -fvolatile. See docs/LINK_CABLE.md
 * (Layer 2b). */

/* Set byte +0x43 + SLOT of the weapon block W (the "slot has ammo" flag).
 * The packet receiver 8012D45C calls it with the weapon slot and flag of
 * packet byte 1, so the partner's car shows the same armed weapon. */
void __attribute__((section(".text_8012BD20"))) func_8012BD20(unsigned char *w, int slot, int armed)
{
    (w + slot)[0x43] = armed;
}

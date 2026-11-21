/* PsyQ libcomb: installs the "sio" BIOS device that carries link-cable
 * (PS-Link) play over serial port SIO1 (1F801050). The game opens it as
 * "sio:" (801C3308) and drives it through _comb_control (80161468).
 * See docs/LINK_CABLE.md. Retail-owned storage stays extern:
 *   D_801BC0A0  the device control block passed to AddDrv
 *   D_800F5000  "sio", the device name passed to DelDrv
 * Built like all of libcomb: patched GCC 2.7.2 (compiler gcc2.7.2-psyqlib,
 * tools/patch_cc1_win.py), -O2 -G8, GNU as. See docs/COMPILER.md. */

extern int EnterCriticalSection(void);
extern void ExitCriticalSection(void);
extern long AddDrv(void *dcb);
extern long DelDrv(const char *name);
extern void FlushCache(void);

extern char D_801BC0A0[];
extern char D_800F5000[];

/* @80160E70: register the "sio" device with interrupts disabled; only
 * re-enable them if this call was the one that disabled them. */
void __attribute__((section(".text_80160E70"))) AddCOMB(void)
{
    int entered = EnterCriticalSection();

    AddDrv(D_801BC0A0);
    if (entered == 1) {
        ExitCriticalSection();
    }
}

/* @80160EB4: remove the "sio" device, then flush the instruction cache
 * because the BIOS device table held pointers into driver code. */
void __attribute__((section(".text_80160EB4"))) DelCOMB(void)
{
    int entered = EnterCriticalSection();

    DelDrv(D_800F5000);
    FlushCache();
    if (entered == 1) {
        ExitCriticalSection();
    }
}

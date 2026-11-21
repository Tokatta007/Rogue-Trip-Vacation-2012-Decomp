/* PsyQ libcomb control entry for the link cable (SIO1), reconstructed from
 * the retail instructions at 80161468. See docs/LINK_CABLE.md.
 *
 * _comb_control(cmd, sub, arg) reads or changes the SIO1 registers through
 * the pointer cell D_801BC068 (= 1F801050). Driver state at 801EC968: a
 * shadow of the SIO1 registers (same layout; mode/control/baud are restored
 * from it on reset), the transfer callback and one transfer record per
 * direction. Retail re-reads every field after each store, so all of it is
 * volatile.
 *
 * Its jump tables are this unit's .rodata, placed at 800F5004 (the manifest
 * "sections" entry); retail pads each table to 8 bytes within the section.
 * Built like all of libcomb: patched GCC 2.7.2 (compiler gcc2.7.2-psyqlib,
 * tools/patch_cc1_win.py), -O2 -G8, GNU as. See docs/COMPILER.md. */

extern int EnterCriticalSection(void);
extern void ExitCriticalSection(void);
extern void func_8015BC8C(int mode);

typedef struct {
    unsigned long data;       /* +0  SIO1_DATA */
    unsigned short stat;      /* +4  SIO1_STAT */
    unsigned short pad6;
    unsigned short mode;      /* +8  SIO1_MODE */
    unsigned short ctrl;      /* +A  SIO1_CTRL */
    unsigned short padC;
    unsigned short baud;      /* +E  SIO1_BAUD reload value */
} SioRegs;

typedef struct {
    long active;              /* +0 transfer in progress */
    long unk4;
    long remaining;           /* +8 bytes still to move */
    long unkC;
} SioTransfer;

typedef char sio_regs_layout[sizeof(SioRegs) == 0x10 ? 1 : -1];

/* Register shadow and callback form one object (the callback is addressed
 * as a member: la 801EC978; lw 0(reg)); the two transfer records are
 * separate objects (each gets its own full address, never one relative to
 * the other). */
typedef struct {
    SioRegs regs;             /* +00 801EC968 */
    long callback;            /* +10 801EC978 */
    long unk14;
} SioState;

extern volatile SioRegs *D_801BC068;         /* SIO1 register block */
extern volatile SioState D_801EC968;         /* register shadow + callback */
extern volatile SioTransfer D_801EC980;      /* write side, TX interrupt (arg 0) */
extern volatile SioTransfer D_801EC990;      /* read side, RX interrupt (arg != 0) */
extern short D_801BC084[];                   /* RX-interrupt threshold bits by byte count */

#define SIO_CLOCK 0x1FA400                   /* 2073600: baud reload = clock / rate */

/* @80161468 */
long __attribute__((section(".text_80161468")))
_comb_control(unsigned long cmd, unsigned long sub, unsigned long arg)
{
    long ret = 0;
    int entered;
    volatile SioTransfer *xfer;

    switch (cmd) {
    case 0: /* queries */
        switch (sub) {
        case 0: /* raw status register */
            ret = D_801BC068->stat;
            break;
        case 1: /* control lines as driven: bit0 DTR, bit1 RTS */
            ret = (D_801BC068->ctrl >> 1) & 1;
            if (D_801BC068->ctrl & 0x20) {
                ret |= 2;
            }
            break;
        case 2: /* configured mode */
            ret = D_801EC968.regs.mode;
            break;
        case 3: /* configured bit rate */
            ret = SIO_CLOCK / D_801EC968.regs.baud;
            break;
        case 4:
            ret = 1;
            break;
        case 5: /* bytes still to transfer (arg 0 write, else read) */
            if (arg == 0) {
                ret = D_801EC980.remaining;
            } else {
                ret = D_801EC990.remaining;
            }
            break;
        case 6: /* transfer in progress */
            ret = (arg == 0 ? &D_801EC980 : &D_801EC990)->active != 0;
            break;
        }
        break;

    case 1: /* configuration */
        switch (sub) {
        case 0: /* nothing to configure; retail's table has this entry */
            break;
        case 1: /* set DTR (arg bit 0) and RTS (arg bit 1) */
        {
            volatile SioRegs *shadow = &D_801EC968.regs;
            int ctrl;
            unsigned char t;
            int d;

            /* The DTR bit goes through a byte: combine turns `d = t` into a
             * copy of the shift (retail's `move a1,a3`), and an int d keeps
             * ctrl as the first operand of the else arm's `or`. */
            shadow->ctrl = D_801BC068->ctrl & 0xFFDD;
            t = (arg & 1) << 1;
            d = t;
            ctrl = shadow->ctrl;
            if (arg & 2) {
                shadow->ctrl = ctrl | 0x20 | (int) ((arg & 1) << 1);
            } else {
                shadow->ctrl = ctrl | d;
            }
            D_801BC068->ctrl = D_801EC968.regs.ctrl;
            break;
        }
        case 2: /* mode register */
        {
            volatile SioRegs *shadow = &D_801EC968.regs;

            shadow->mode = arg;
            D_801BC068->mode = shadow->mode;
            break;
        }
        case 3: /* bit rate; must divide the SIO clock exactly */
            if (SIO_CLOCK % arg != 0) {
                ret = -1;
                break;
            }
            {
                volatile SioRegs *shadow = &D_801EC968.regs;

                shadow->baud = SIO_CLOCK / arg;
                D_801BC068->baud = shadow->baud;
            }
            D_801BC068->ctrl |= 0x10;
            break;
        case 4: /* receive-interrupt threshold: 1, 2, 4 or 8 bytes */
            if (arg - 1 < 8) {
                ret = D_801BC084[arg];
                if (ret < 0) {
                    break;
                }
                {
                    volatile SioRegs *shadow = &D_801EC968.regs;

                    shadow->ctrl &= 0xFCFF;
                    shadow->ctrl |= ret;
                    D_801BC068->ctrl = shadow->ctrl;
                }
            }
            break;
        }
        break;

    case 2: /* resets */
        switch (sub) {
        case 0: /* reset the port and restore the shadowed configuration */
            entered = EnterCriticalSection();
            D_801BC068->ctrl |= 0x50;
            D_801BC068->mode = D_801EC968.regs.mode;
            D_801BC068->ctrl = D_801EC968.regs.ctrl;
            D_801BC068->baud = D_801EC968.regs.baud;
            ret = 0;
            D_801BC068->ctrl |= 0x10;
            if (entered == 1) {
                ExitCriticalSection();
            }
            break;
        case 1: /* acknowledge the interrupt/error flags */
            ret = 0;
            D_801BC068->ctrl |= 0x10;
            break;
        case 2: /* cancel the pending write (TX interrupt off) */
            entered = EnterCriticalSection();
            D_801BC068->ctrl &= 0xFBFF;
            D_801EC980.active = 0;
            D_801EC980.remaining = 0;
            if (entered == 1) {
                ExitCriticalSection();
            }
            break;
        case 3: /* cancel the pending read (RX interrupt and RTS off) */
            entered = EnterCriticalSection();
            D_801BC068->ctrl &= 0xF7DF;
            D_801EC990.active = 0;
            D_801EC990.remaining = 0;
            if (entered == 1) {
                ExitCriticalSection();
            }
            break;
        }
        break;

    case 3: /* handshake lines */
        switch (sub) {
        case 0: /* drive RTS */
            if (arg != 0) {
                D_801BC068->ctrl |= 0x20;
            } else {
                D_801BC068->ctrl &= 0xFFDF;
            }
            break;
        case 1: /* partner's line (status bit 8) */
            if (D_801BC068->stat & 0x100) {
                ret = 1;
            }
            break;
        }
        break;

    case 4: /* install the transfer callback, returning the previous one */
        if (sub == 0) {
            long *cb = (long *)&D_801EC968.callback;

            ret = *cb;
            *cb = arg;
        }
        break;

    case 5:
        if (sub == 0) {
            func_8015BC8C(5);
        }
        break;
    }
    return ret;
}

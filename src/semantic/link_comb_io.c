/* PsyQ libcomb "sio" device transfer functions (SIO1 link cable),
 * reconstructed from the retail instructions at 80160F00..80161468. The
 * driver's read/write entry (80161EA8) starts a transfer here; the SIO1
 * interrupt handler (801619B8) then moves the bytes. See docs/LINK_CABLE.md
 * and link_comb_control.c for the shared state.
 * Built like all of libcomb: patched GCC 2.7.2 (compiler gcc2.7.2-psyqlib,
 * tools/patch_cc1_win.py), -O2 -G8, GNU as. See docs/COMPILER.md. */

typedef struct {
    unsigned char data;       /* +0  SIO1_DATA (read as a byte) */
    unsigned char pad1[3];
    unsigned short stat;      /* +4  SIO1_STAT */
    unsigned short pad6;
    unsigned short mode;      /* +8  SIO1_MODE */
    unsigned short ctrl;      /* +A  SIO1_CTRL */
    unsigned short padC;
    unsigned short baud;      /* +E  SIO1_BAUD reload value */
} SioRegs;

typedef struct {
    long active;              /* +0 transfer in progress */
    long buf;                 /* +4 next byte */
    long remaining;           /* +8 bytes still to move */
    long status;              /* +C write: SIO1_STAT bit 7 (DSR) at start */
} SioTransfer;

/* Register shadow (restored after a line error) and the transfer callback. */
typedef struct {
    SioRegs regs;             /* +00 801EC968 */
    long callback;            /* +10 801EC978 */
    long unk14;
} SioState;

extern volatile SioRegs *D_801BC068;         /* SIO1 register block */
extern volatile SioState D_801EC968;         /* register shadow + callback */
extern volatile SioTransfer D_801EC980;      /* write side (TX interrupt) */
extern volatile SioTransfer D_801EC990;      /* read side (RX interrupt) */
extern short D_801BC098[];                   /* bytes per DTR toggle, by RX-interrupt mode */

extern void DeliverEvent(unsigned long ev, unsigned long spec);

typedef long (*SioCallback)(long dir, long tries);
extern SioCallback D_801EC978;

/* @80160F00 */
void __attribute__((section(".text_80160F00"))) func_80160F00(void)
{
}

/* @80160F08: start an interrupt-driven read of len bytes into buf (RX
 * interrupt on, RTS raised). Returns -1 if a read is already in progress. */
long __attribute__((section(".text_80160F08"))) func_80160F08(char *buf, long len)
{
    volatile SioTransfer *x = &D_801EC990;

    if (x->active == 0) {
        x->remaining = len;
        x->buf = (long)buf;
        x->active = 1;
        D_801BC068->ctrl |= 0x800;
        D_801BC068->ctrl |= 0x20;
        return 0;
    }
    return -1;
}

/* @80160F60: blocking read of len bytes into buf. Raises RTS, toggles DTR
 * every D_801BC098[] bytes (flow control), and asks the callback between
 * polls; returns the number of bytes read. A line error (overrun, framing,
 * parity) resets the port from the shadow registers. */
long __attribute__((section(".text_80160F60"))) func_80160F60(char *buf, long len)
{
    volatile SioTransfer *x;
    long tries = 0;
    long n;
    long thresh;
    unsigned short ctrl;

    if (D_801EC990.active != 0) {
        return -1;
    }
    thresh = D_801BC098[(D_801EC968.regs.ctrl & 0x300) >> 8];
    D_801EC990.remaining = len;
    D_801EC990.buf = (long)buf;
    D_801EC990.active = 0;
    D_801BC068->ctrl |= 0x20;
    n = 0;
    if (D_801EC990.remaining != 0) {
        x = &D_801EC990;
        do {
                if (D_801BC068->stat & 0x38) {
                    ctrl = D_801BC068->ctrl;
                    D_801BC068->ctrl = 0x50;
                    D_801BC068->mode = D_801EC968.regs.mode;
                    D_801BC068->baud = D_801EC968.regs.baud;
                    D_801BC068->ctrl |= 0x10;
                    D_801BC068->ctrl = ctrl;
                    D_801BC068->ctrl &= ~0x20;
                    DeliverEvent(0xF000000B, 0x8000);
                    return len - D_801EC990.remaining;
                }
                while (!(D_801BC068->stat & 2)) {
                    if (D_801EC978 != 0 && D_801EC978(1, tries++) == 0) {
                        D_801BC068->ctrl &= ~0x20;
                        DeliverEvent(0xF000000B, 0x100);
                        return len - D_801EC990.remaining;
                    }
                }
                *(char *)D_801EC990.buf = D_801BC068->data;
                x->buf += 1;
                n++;
                x->remaining -= 1;
                if (n == thresh) {
                    n = 0;
                    D_801BC068->ctrl ^= 2;
                }
        } while (x->remaining != 0);
    }
    D_801BC068->ctrl &= ~0x20;
    return len - D_801EC990.remaining;
}

/* @801611B4: start an interrupt-driven write of len bytes from buf (TX
 * interrupt on; records DSR). Returns -1 if a write is already in progress. */
long __attribute__((section(".text_801611B4"))) func_801611B4(char *buf, long len)
{
    volatile SioTransfer *x = &D_801EC980;

    if (x->active == 0) {
        x->remaining = len;
        x->buf = (long)buf;
        x->active = 1;
        x->status = D_801BC068->stat & 0x80;
        D_801BC068->ctrl |= 0x400;
        return 0;
    }
    return -1;
}

/* @8016120C: blocking write of len bytes from buf. Waits for the
 * transmitter (stat bits 0 and 2) before each byte and asks the callback
 * between polls. Every D_801BC098[] bytes it waits for the partner's DSR
 * line to change from its level at the start of the block (flow control).
 * Returns the number of bytes written. */
long __attribute__((section(".text_8016120C"))) func_8016120C(char *buf, long len)
{
    volatile SioTransfer *x;
    long tries = 0;
    long n;
    long thresh;

    if (D_801EC980.active != 0) {
        return -1;
    }
    thresh = D_801BC098[(D_801EC968.regs.ctrl & 0x300) >> 8];
    D_801EC980.remaining = len;
    D_801EC980.buf = (long)buf;
    n = 0;
    if (D_801EC980.remaining != 0) {
        x = &D_801EC980;
        do {
            while ((D_801BC068->stat & 5) != 5) {
                if (D_801EC978 != 0 && D_801EC978(2, tries++) == 0) {
                    DeliverEvent(0xF000000B, 0x100);
                    goto done;
                }
            }
            if (n == 0) {
                x->status = D_801BC068->stat & 0x80;
            }
            D_801BC068->data = *(char *)D_801EC980.buf;
            x->buf += 1;
            n++;
            x->remaining -= 1;
            if (n == thresh) {
                if ((D_801BC068->stat & 0x80) == x->status) {
                    volatile long *st = &D_801EC980.status;

                    do {
                        if (D_801EC978 != 0 && D_801EC978(2, tries++) == 0) {
                            DeliverEvent(0xF000000B, 0x100);
                            return len - D_801EC980.remaining - 1;
                        }
                    } while ((D_801BC068->stat & 0x80) == *st);
                }
                n = 0;
            }
        } while (D_801EC980.remaining != 0);
    }
done:
    return len - D_801EC980.remaining;
}

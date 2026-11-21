/* PsyQ libcomb "sio" device driver entries (SIO1 link cable), reconstructed
 * from the retail instructions at 8016193C..80161F97. The BIOS reaches these
 * through the device control block at 801BC0A0 (see link_comb.c) and the
 * interrupt-handler record at 801BC070. See docs/LINK_CABLE.md.
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

typedef struct {
    long stat;                /* I_STAT (1F801070) */
    long mask;                /* I_MASK (1F801074) */
} IrqRegs;

/* BIOS file control block as passed to a device's read/write entry. */
typedef struct {
    unsigned long mode;       /* +00 open mode; 0x8000 = no wait */
    long unk4;
    long buf;                 /* +08 */
    long len;                 /* +0C */
    long unk10;
    long unk14;
    long err;                 /* +18 errno */
} DevFile;

extern volatile SioRegs *D_801BC068;         /* SIO1 register block */
extern volatile IrqRegs *D_801BC080;         /* interrupt controller */
extern volatile SioRegs D_801EC968;          /* SIO1 register shadow */
extern volatile long D_801EC978;                      /* transfer callback */
extern volatile SioTransfer D_801EC980;      /* write side (TX interrupt) */
extern volatile SioTransfer D_801EC990;      /* read side (RX interrupt) */
extern char D_801BC070[];                    /* interrupt handler record */
extern volatile long *D_801BC06C;            /* SIO1_DATA read as a word */
extern short D_801BC098[];                   /* bytes per RX interrupt, by RX-interrupt mode */
extern void DeliverEvent(unsigned long ev, unsigned long spec);

extern long SysEnqIntRP(long prio, void *rp);
extern long SysDeqIntRP(long prio, void *rp);
extern long func_80160F08(long buf, long len);
extern long func_80160F60(long buf, long len);
extern long func_801611B4(long buf, long len);
extern long func_8016120C(long buf, long len);

/* @8016193C: interrupt verifier. Claims SIO interrupts (I_STAT & I_MASK bit
 * 8); while an interrupt-driven write is running and the transmitter is
 * ready (stat bit 0), drops the TX-interrupt enable. */
long __attribute__((section(".text_8016193C"))) func_8016193C(void)
{
    if (!(D_801BC080->stat & D_801BC080->mask & 0x100)) {
        return 0;
    }
    if (D_801EC980.active != 0 && (D_801BC068->stat & 1)) {
        D_801BC068->ctrl &= ~0x400;
    }
    return 1;
}

/* @801619B8: SIO interrupt handler. Acknowledges the interrupt; on a line
 * error resets the port and aborts the interrupt-driven read. Otherwise it
 * moves 1, 2, 4 or 8 received bytes (the RX-interrupt threshold) into the
 * read buffer, toggling DTR per block, and sends the next byte of an
 * interrupt-driven write when the transmitter is ready and the partner's DSR
 * has changed (one byte per handshake). Completion is signalled with
 * DeliverEvent(HwSIO, 0x400 read done / 0x800 write done / 0x8000 error). */
long __attribute__((section(".text_801619B8"))) func_801619B8(void)
{
    volatile SioTransfer *r;
    long n;
    unsigned short ctrl;

    if (D_801BC080->stat & 0x100) {
        D_801BC080->stat = ~0x100;
    }
    if (D_801BC068->stat & 0x38) {
        D_801BC068->ctrl &= ~0x820;
        {
            volatile SioTransfer *e = &D_801EC990;

            e->remaining = 0;
            e->active = 0;
        }
        ctrl = D_801BC068->ctrl;
        D_801BC068->ctrl = 0x50;
        D_801BC068->mode = D_801EC968.mode;
        D_801BC068->baud = D_801EC968.baud;
        D_801BC068->ctrl |= 0x10;
        DeliverEvent(0xF000000B, 0x8000);
        return 0;
    }
    if (D_801EC990.active != 0 && D_801EC990.remaining != 0 && (D_801BC068->stat & 2)) {
        n = D_801BC098[(D_801EC968.ctrl & 0x300) >> 8];
        switch (n) {
        case 1:
            *(char *)D_801EC990.buf = D_801BC068->data;
            break;
        case 2:
            ((char *)D_801EC990.buf)[0] = D_801BC068->data;
            ((char *)D_801EC990.buf)[1] = D_801BC068->data;
            break;
        case 4:
            *(long *)D_801EC990.buf = *D_801BC06C;
            break;
        case 8:
            ((long *)D_801EC990.buf)[0] = *D_801BC06C;
            ((long *)D_801EC990.buf)[1] = *D_801BC06C;
            break;
        }
        r = &D_801EC990;
        r->buf += n;
        r->remaining -= n;
        if (r->remaining == 0) {
            r->active = 0;
            D_801BC068->ctrl &= ~0x820;
            DeliverEvent(0xF000000B, 0x400);
        }
        D_801BC068->ctrl ^= 2;
    }
    if (D_801EC980.active != 0 && (D_801BC068->stat & 1)
        && (D_801BC068->stat & 0x80) == D_801EC980.status) {
        if (D_801EC980.remaining == 0) {
            D_801EC980.active = 0;
            DeliverEvent(0xF000000B, 0x800);
        } else {
            D_801EC980.status ^= 0x80;
            D_801BC068->data = *(char *)D_801EC980.buf;
            D_801EC980.buf += 1;
            D_801EC980.remaining -= 1;
            D_801BC068->ctrl |= 0x400;
        }
    }
    D_801BC068->ctrl |= 0x10;
    return 0;
}

/* @80161D14: device init. Default line setup (8N1-style mode 0xCE,
 * baud reload 0xD8 = 9600 bit/s, TX/RX enabled), resets the port with it,
 * installs the interrupt handler, unmasks the SIO interrupt and clears
 * both transfers and the callback. */
long __attribute__((section(".text_80161D14"))) func_80161D14(void)
{
    volatile SioRegs *sh = &D_801EC968;

    sh->ctrl = 5;
    sh->mode = 0xCE;
    sh->baud = 0xD8;
    D_801BC068->ctrl = 0x50;
    D_801BC068->mode = sh->mode;
    D_801BC068->baud = sh->baud;
    D_801BC068->ctrl |= 0x10;
    D_801BC068->ctrl = sh->ctrl;
    SysDeqIntRP(3, D_801BC070);
    SysEnqIntRP(3, D_801BC070);
    D_801BC080->mask |= 0x100;
    D_801EC980.active = D_801EC990.active = 0;
    D_801EC980.buf = D_801EC990.buf = 0;
    {
        long r = D_801EC990.remaining = 0;

        D_801EC978 = 0;
        D_801EC980.remaining = r;
    }
    return 0;
}

/* @80161E08 */
long __attribute__((section(".text_80161E08"))) func_80161E08(void)
{
    return 0;
}

/* @80161E10 */
long __attribute__((section(".text_80161E10"))) func_80161E10(void)
{
    return 0;
}

/* @80161E18: device shutdown. Masks the SIO interrupt, resets the port and
 * restores the shadow control word, removes the interrupt handler and
 * clears both transfers. */
long __attribute__((section(".text_80161E18"))) func_80161E18(void)
{
    D_801BC080->mask &= ~0x100;
    D_801BC068->ctrl |= 0x50;
    D_801BC068->ctrl = D_801EC968.ctrl;
    SysDeqIntRP(3, D_801BC070);
    D_801EC980.active = D_801EC990.active = 0;
    D_801EC980.remaining = D_801EC990.remaining = 0;
    return 0;
}

/* @80161EA8: device read (op 1) / write (op 2). With the no-wait open mode
 * the transfer is only started (interrupt driven); otherwise it blocks.
 * Errors: EBUSY (16) if a transfer is running, EINVAL (22) for other ops,
 * EIO (5) if a blocking transfer fails. */
long __attribute__((section(".text_80161EA8"))) func_80161EA8(DevFile *f, long op)
{
    long r;

    f->err = 0;
    if (op == 1) {
        if (f->mode & 0x8000) {
            if (func_80160F08(f->buf, f->len) != 0) {
                f->err = 16;
                return -1;
            }
            return 0;
        } else {
            r = func_80160F60(f->buf, f->len);
            if (r < 0) {
                f->err = 5;
            }
            return r;
        }
    } else if (op == 2) {
        if (f->mode & 0x8000) {
            if (func_801611B4(f->buf, f->len) == 0) {
                return 0;
            }
            f->err = 16;
            return -1;
        } else {
            r = func_8016120C(f->buf, f->len);
            if (r < 0) {
                f->err = 5;
            }
            return r;
        }
    }
    f->err = 22;
    return -1;
}

/* @80161F90 */
long __attribute__((section(".text_80161F90"))) func_80161F90(void)
{
    return 0;
}

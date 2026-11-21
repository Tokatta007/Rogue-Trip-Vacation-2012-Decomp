/* Rogue Trip link-cable session layer (engine code, not SDK), reconstructed
 * from the retail instructions at 8012CF24..8012D458. It opens the "sio:"
 * device installed by libcomb, negotiates which console answered first over
 * the handshake lines, exchanges checksummed packets and shuts the link down.
 * All seven functions are byte-exact. Built with -fvolatile, like the packet
 * layer (every access through a pointer is volatile). See docs/LINK_CABLE.md.
 *
 * State lives in small data ($gp-relative in retail, hence plain ints):
 *   D_801C32E0  read handle        D_801C32E4  write handle
 *   D_801C32E8  this console's role (0 = partner answered first, 1 = we did)
 *   D_801C32EC  link established   D_801C32F0  time of the last link call
 *   D_801C32F4  timeout flag (set by the transfer callback)
 *   D_801C32F8  timeout enabled (written by game code)
 *   D_801C3300  cleared on each received packet
 *   D_801C3304  empty-read counter D_801C37C8  last send was incomplete
 *   D_801C3310  our handshake line is raised */

extern void AddCOMB(void);
extern void DelCOMB(void);
extern unsigned long _comb_control(unsigned long cmd, unsigned long sub, unsigned long arg);
extern long open(const char *name, unsigned long mode);
extern long close(long fd);
extern int func_801788E4(void);              /* GetCurTics (TM2 match) */
extern void func_8015BC8C(int mode);
extern void func_8015BF70(int mode);
extern int func_8015EBDC(int mode);          /* VSync */
extern long read(long fd, void *buf, long n);   /* 8015F96C */
extern long write(long fd, void *buf, long n);  /* 8015F97C */

/* This module's small data in retail address order: retail reaches it
 * $gp-relative, which the toolchain only does for variables the file itself
 * defines (other modules use absolute lui/sw for the same words, e.g. main
 * at 80134500). The unit's .sdata is placed at 801C32E0 and its .sbss at
 * 801C37C8 by the manifest.
 *
 * The device name and the handshake flag are only declared here and defined
 * after the functions (still in address order, GCC emits data in definition
 * order). While compiling 8012CF84 the compiler therefore sees an array of
 * unknown size, treats its address as a two-instruction constant and keeps
 * it in s0 across both open() calls, as retail does. */
int D_801C32E0 = 0;                          /* read handle */
int D_801C32E4 = 0;                          /* write handle */
int D_801C32E8 = 0;                          /* role */
int D_801C32EC = 0;                          /* link established */
int D_801C32F0 = 0;                          /* time of the last link call */
int D_801C32F4 = 0;
int D_801C32F8 = 0;                          /* also used by main */
int D_801C32FC = 0;                          /* also used by main */
int D_801C3300 = 0;
int D_801C3304 = 0;
extern char D_801C3308[];
extern int D_801C3310;
static int D_801C37C8;                       /* .sbss */

/* @8012CF24: transfer callback, installed by the handshake. While the link
 * is timed (D_801C32F8), a call that has taken longer than 3,000,000 tics
 * (doubled per consecutive failed send, D_801C37C8) raises the timeout flag
 * D_801C32F4 and returns 0 (abort); otherwise it returns 1 (keep waiting). */
int __attribute__((section(".text_8012CF24"))) func_8012CF24(void)
{
    if (D_801C32F8 != 0) {
        if ((unsigned int)(func_801788E4() - D_801C32F0) > (3000000U << D_801C37C8)) {
            D_801C32F4 = 1;
            return 0;
        }
        D_801C32F4 = 0;
    }
    return 1;
}

/* @8012CF84: open the link. Fails (0) when the port reports status bit 7.
 * Retail tests the negated bit (srl, xori, andi, beqz to the failure path). */
int __attribute__((section(".text_8012CF84"))) func_8012CF84(void)
{
    D_801C32EC = 0;
    AddCOMB();
    if (!(((_comb_control(0, 0, 0) >> 7) ^ 1) & 1)) {
        DelCOMB();
        return 0;
    }
    {
        _comb_control(2, 0, 0);
        _comb_control(3, 0, 0);
        _comb_control(1, 3, 1036800);
        _comb_control(1, 4, 4);
        D_801C32E4 = open(D_801C3308, 2);
        D_801C32E0 = open(D_801C3308, 1);
        D_801C3310 = 0;
        D_801C37C8 = 0;
        D_801C3304 = 0;
        return 1;
    }
}

/* @8012D058: one handshake poll. Returns -1 while waiting, else the role. */
int __attribute__((section(".text_8012D058"))) func_8012D058(void)
{
    int ret = -1;

    D_801C32F0 = func_801788E4();
    if (_comb_control(3, 1, 0) != 0) {
        if (D_801C3310 == 0) {
            /* the partner's line was up before ours: it answered first */
            D_801C32E8 = 0;
            D_801C32EC = 1;
            _comb_control(3, 0, 1);
            ret = 0;
        } else {
            goto answered;
        }
    } else if (D_801C3310 != 0) {
    answered:
        /* our line was up first and the partner has answered */
        if (_comb_control(3, 1, 0) != 0) {
            D_801C32E8 = 1;
            D_801C32EC = 1;
            ret = 1;
        }
    } else {
        _comb_control(3, 0, 1);
        D_801C3310 = 1;
    }
    _comb_control(4, 0, (unsigned long)func_8012CF24);
    return ret;
}
char D_801C3308[] = "sio:";
int D_801C3310 = 0;

/* @8012D130: close the link and remove the device. */
void __attribute__((section(".text_8012D130"))) func_8012D130(void)
{
    D_801C32EC = 0;
    D_801C32E8 = 0;
    D_801C32F0 = func_801788E4();
    _comb_control(4, 0, 0);
    if (D_801C32E4 != 0) {
        close(D_801C32E4);
        D_801C32E4 = 0;
    }
    if (D_801C32E0 != 0) {
        close(D_801C32E0);
        D_801C32E0 = 0;
    }
    DelCOMB();
}

/* @8012D1AC: send one packet. Byte 0 becomes the 8-bit sum of the others;
 * a short write is continued up to 3 more times. D_801C37C8 records whether
 * the packet went out incomplete. Returns the bytes written. */
int __attribute__((section(".text_8012D1AC"))) func_8012D1AC(unsigned char *buf, int len)
{
    int tries = 3;
    int i, sent;
    unsigned char *sum = buf;
    unsigned char *p;

    p = buf + 1;
    *sum = 0;
    for (i = 1; i < len; i++) {
        *sum += *p++;
    }
    D_801C32F0 = func_801788E4();
    sent = write(D_801C32E4, buf, len);
    while (sent != len && tries != 0) {
        sent += write(D_801C32E4, buf + sent, len - sent);
        tries--;
    }
    if (sent != len) {
        D_801C37C8 = 1;
    } else {
        D_801C37C8 = 0;
    }
    return sent;
}

/* @8012D290: receive one packet. A short read is continued up to 3 more
 * times; the callback's timeout flag aborts. Returns 1 when byte 0 equals the
 * 8-bit sum of the others, else 0. Empty reads count in D_801C3304.
 * Byte 0 is read through a copy of buf. */
int __attribute__((section(".text_8012D290"))) func_8012D290(unsigned char *buf, int len)
{
    int tries, i, got;
    unsigned char sum;
    unsigned char *q;
    unsigned char *p;

    D_801C32F0 = func_801788E4();
    got = read(D_801C32E0, buf, len);
    tries = 3;
    while (got != len) {
        if (tries == 0) {
            break;
        }
        D_801C32F0 = func_801788E4();
        got += read(D_801C32E0, buf + got, len - got);
        if (D_801C32F4 != 0) {
            if (got == 0) {
                D_801C3304++;
            }
            return 0;
        }
        tries--;
    }
    if (got != len && got == 0) {
        D_801C3304++;
        return 0;
    }
    sum = 0;
    p = buf + 1;
    q = buf;
    for (i = 1; i < len; i++) {
        sum += *p++;
    }
    D_801C3300 = 0;
    if (sum == *q) {
        D_801C37C8 = 0;
        D_801C3304 = 0;
    }
    return sum == *q;
}

/* @8012D3D0: drain and resynchronise: hold our line up until the partner
 * drops its line, cancel transfers, drop ours and wait one frame. */
void __attribute__((section(".text_8012D3D0"))) func_8012D3D0(void)
{
    D_801C32F0 = func_801788E4();
    func_8015BC8C(1);
    _comb_control(3, 0, 1);
    while (_comb_control(3, 1, 0) != 0) {
    }
    func_8015BF70(0);
    _comb_control(5, 0, 0);
    _comb_control(3, 0, 0);
    func_8015EBDC(0);
    func_8015BF70(1);
}

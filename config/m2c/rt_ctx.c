/* m2c context for Rogue Trip (SLUS_006.43). Preprocessed by
 * tools/m2c_reference.py with the project cpp; the result is passed to m2c
 * with --context. Types come from the PsyQ 3.30 headers; prototypes cover
 * functions already named in config/US/names.tsv. Keep declarations here
 * minimal and evidence-based: a wrong prototype misleads every caller. */
#include <sys/types.h>
#include <libgte.h>
#include <libgpu.h>

/* BIOS A0/B0/C0 and syscall interfaces (src/semantic/bios_calls.c). */
int setjmp(int *context);
char *strcat(char *dst, const char *src);
int strcmp(const char *a, const char *b);
int strncmp(const char *a, const char *b, int n);
char *strcpy(char *dst, const char *src);
int strlen(const char *s);
char *strstr(const char *s, const char *find);
void bzero(void *p, int n);
void *memcpy(void *dst, const void *src, int n);
void *memset(void *dst, int c, int n);
void *memchr(const void *s, int c, int n);
int rand(void);
void srand(unsigned int seed);
void free(void *p);
void InitHeap(unsigned long *base, unsigned long size);
int printf(const char *fmt, ...);
void FlushCache(void);
void GPU_cw(unsigned long cmd);
int _bu_init(void);
int _96_remove(void);
long _card_info(long chan);
long _card_load(long chan);
long DeliverEvent(unsigned long ev, unsigned long spec);
long OpenEvent(unsigned long desc, long spec, long mode, long (*func)(void));
long CloseEvent(long event);
long WaitEvent(long event);
long TestEvent(long event);
long EnableEvent(long event);
long DisableEvent(long event);
int InitPAD2(char *buf1, long len1, char *buf2, long len2);
int StartPAD2(void);
void StopPAD2(void);
int PAD_init(long mode, long *buf);
void ReturnFromException(void);
void ResetEntryInt(void);
void HookEntryInt(int *context);
long open(const char *name, unsigned long mode);
long lseek(long fd, long offset, long whence);
long read(long fd, void *buf, long n);
long write(long fd, void *buf, long n);
long close(long fd);
void exit(int status);
int puts(const char *s);
long format(const char *fs);
void *firstfile(const char *name, void *dir);
void *nextfile(void *dir);
long erase(const char *name);
long AddDrv(void *dev);
long DelDrv(const char *name);
void InitCARD(long val);
long StartCARD(void);
long StopCARD(void);
long _card_write(long chan, long block, unsigned char *buf);
long _new_card(void);
void ChangeClearPAD(long val);
void *SysEnqIntRP(int prio, void *queue);
void *SysDeqIntRP(int prio, void *queue);
void ChangeClearRCnt(long t, long m);
int EnterCriticalSection(void);
void ExitCriticalSection(void);

/* libgpu / libgte (src/semantic/gpu_control.c, gte_setters.c). */
void AddPrim(void *ot, void *prim);
unsigned long _status(void);
void _cwc(unsigned long *head);
unsigned long _param(unsigned long selector);
void SetRotMatrix(MATRIX *m);
void SetLightMatrix(MATRIX *m);
void SetColorMatrix(MATRIX *m);
void SetTransMatrix(MATRIX *m);
void SetBackColor(long r, long g, long b);
void SetGeomOffset(long x, long y);
void SetGeomScreen(long h);
void gteStoreSZ3(long *a, long *b, long *c);
void gteStoreSZ4(long *a, long *b, long *c, long *d);

/* Engine math shared with TM2 (src/semantic/math_vec.c). */
void mathMulVec(MATRIX *m, VECTOR *in, VECTOR *out);
void mathMulTransVec(MATRIX *m, VECTOR *in, VECTOR *out);
void mathMulVec2(MATRIX *m, VECTOR *in, VECTOR *out);

void __start(void);
int main(void);

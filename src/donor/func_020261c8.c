/* compiler: 2.0/sp1p5  */
/* func_0205d7e4 from projets/tom-and-jerry-tales/src/auto/func_0205d7e4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern s32 errno;
extern void __StringRead(void);
extern double __strtold(s32 a, void *f, s32 *s, s32 *n, s32 *e);
extern double func_02029ea8(double x);
double func_020261c8(s32 s, s32 *end) {
    s32 n;
    s32 e;
    s32 sp4[2];
    double r;
    double d;
    sp4[1] = 0;
    sp4[0] = s;
    r      = __strtold(0x7fffffff, (void *) __StringRead, sp4, &n, &e);
    if (end != 0) {
        *end = s + n;
    }
    d = func_02029ea8(r);
    if (e != 0 || (r != 0.0 && (d < 2.2250738585072014e-308 || d > 1.7976931348623157e308))) {
        errno = 0x22;
    }
    return r;
}

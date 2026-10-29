/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02060afc from projets/tom-and-jerry-tales/src/donor/func_02060afc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;
extern double frexp(double x, int *eptr);
extern double ldexp(double value, int exp);
extern int func_0202b860(double x);
extern void __ull2dec(decimal *result, unsigned long long val);
extern void func_0202a564(decimal *result, const decimal *x, const decimal *y);
extern void func_0202a784(decimal *result, long exp);
extern void func_0202af6c(decimal *d, double x);
extern int func_0202b7b8(unsigned long long x);
extern int func_0202b84c(double x);
inline int __count_trailing_zero(double x) {
    unsigned long long m = *(unsigned long long *) &x | 0x0010000000000000ULL;
    return func_0202b7b8((m & -m) - 1);
}
void func_0202af6c(decimal *d, double x) {
    char sgn = (char) (func_0202b84c(x) != 0);

    if (x == 0.0) {
        d->sgn         = sgn;
        d->exp         = 0;
        d->sig.length  = 1;
        d->sig.text[0] = 0;
        return;
    }

    if (!(((sizeof(x) == sizeof(float)) ? __fpclassifyf((float) (x)) : func_0202b860((double) (x))) > 2)) {
        d->sgn        = sgn;
        d->exp        = 0;
        d->sig.length = 1;
        d->sig.text[0] =
            (((sizeof(x) == sizeof(float)) ? __fpclassifyf((float) (x)) : func_0202b860((double) (x))) == 1) ? 'N' : 'I';
        return;
    }

    if (sgn) {
        x = -x;
    }

    {
        int exp;
        double frac           = frexp(x, &exp);
        long num_bits_extract = 53 - __count_trailing_zero(frac);
        decimal int_d, pow2_d;

        func_0202a784(&pow2_d, exp - num_bits_extract);
        __ull2dec(&int_d, (unsigned long long) ldexp(frac, num_bits_extract));
        func_0202a564(d, &int_d, &pow2_d);
        d->sgn = sgn;
    }
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __num2dec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/ansi_fp.c (license: none), reused by
 * tools/donor_match.py */
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
typedef struct decform {
    char style;
    char unused;
    short digits;
} decform;
extern void func_0202b0ec(const decform *f, double x, decimal *d);
extern void func_0202a458(decimal *d, int digits);
extern void func_0202af6c(decimal *d, double x);
void func_0202a458(decimal *d, int digits);
void func_0202af6c(decimal *d, double x);
void func_0202b0ec(const decform *form, double x, decimal *d) {
    short digits = form->digits;
    int i;

    func_0202af6c(d, x);

    if (d->sig.text[0] > 9) {
        return;
    }

    if (digits > 32) {
        digits = 32;
    }

    func_0202a458(d, digits);

    while (d->sig.length < digits) {
        d->sig.text[d->sig.length++] = 0;
    }

    d->exp -= d->sig.length - 1;

    for (i = 0; i < d->sig.length; i++) {
        d->sig.text[i] += '0';
    }
}

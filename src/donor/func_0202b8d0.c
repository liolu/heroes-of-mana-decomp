/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* scalbn from https://github.com/zeldaret/st libs/c/src/extras.c (license: CC0-1.0), reused by tools/donor_match.py */
extern double frexp(double x, int *eptr);
extern double ldexp(double value, int exp);
extern double func_0202b8d0(double x, int n);
double func_0202b8d0(double x, int n) {
    double value;
    int exp;

    value = frexp(x, &exp);
    exp += n;

    return ldexp(value, exp);
}

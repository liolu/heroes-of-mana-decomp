/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* scalbn from https://github.com/zeldaret/st libs/c/src/extras.c (license: CC0-1.0), reused by tools/donor_match.py */
extern double func_0202a088(double x, int *eptr);
extern double func_0202a144(double value, int exp);
extern double func_0202b8d0(double x, int n);
double func_0202b8d0(double x, int n) {
    double value;
    int exp;

    value = func_0202a088(x, &exp);
    exp += n;

    return func_0202a144(value, exp);
}

/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

extern s32 func_0202b860(double);
extern double func_02029e80(double, double);

double ldexp(double x, int n) {
    static const double two54  = 1.80143985094819840000e+16;
    static const double twom54 = 5.55111512312578270212e-17;
    static const double huge   = 1.0e+300;
    static const double tiny   = 1.0e-300;
    int k, hx, lx;
    if (func_0202b860(x) <= 2 || x == 0.0) {
        return x;
    }
    hx = *(1 + (int *) &x);
    lx = *(int *) &x;
    k  = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) {
            return x;
        }
        x *= two54;
        hx = *(1 + (int *) &x);
        k  = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) {
            return tiny * x;
        }
    }
    if (k == 0x7ff) {
        return x + x;
    }
    k = k + n;
    if (k > 0x7fe) {
        return huge * func_02029e80(huge, x);
    }
    if (k > 0) {
        *(1 + (int *) &x) = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) {
            return huge * func_02029e80(huge, x);
        } else {
            return tiny * func_02029e80(tiny, x);
        }
    }
    k += 54;
    *(1 + (int *) &x) = (hx & 0x800fffff) | (k << 20);
    return x * twom54;
}

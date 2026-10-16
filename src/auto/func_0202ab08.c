#include "m2c.h"
typedef struct {
    char sign;
    char dig_a;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[36];
        unsigned char dummy;
    } sig;
} decimal;
int func_0202ab08(const decimal *x, const decimal *y) {
    int i;
    int n, xl, yl;
    if (x->sig.text[0] == 0) {
        return y->sig.text[0] == 0;
    }
    if (y->sig.text[0] == 0) {
        return x->sig.text[0] == 0;
    }
    if (x->exp == y->exp) {
        xl = x->sig.length;
        yl = y->sig.length;
        n  = xl;
        if (xl > yl) {
            n = yl;
        }
        for (i = 0; i < n; i++) {
            if (x->sig.text[i] != y->sig.text[i]) {
                return 0;
            }
        }
        if (n == xl) {
            x = y;
        }
        for (; i < x->sig.length; i++) {
            if (x->sig.text[i] != 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

#include "m2c.h"

typedef struct {
    double a[17];
    double y[17];
    double c[17];
    double e[17];
    double h[17];
    s32 n;
} Spl;

void func_ov111_020e9cf8(s32 count, Spl *s) {
    double t[17];
    s32 i;

    s->n = count - 1;
    for (i = 0; i <= s->n; i++) {
        s->y[i] = s->a[i];
    }
    s->e[s->n] = 0.0;
    s->e[0]    = s->e[s->n];
    for (i = 1; i < s->n; i++) {
        s->e[i] = 3.0 * (s->y[i + 1] + (s->y[i - 1] - 2.0 * s->y[i]));
    }
    t[0] = 0.0;
    for (i = 1; i < s->n; i++) {
        double p = 4.0 - t[i - 1];
        s->e[i]  = (s->e[i] - s->e[i - 1]) / p;
        t[i]     = 1.0 / p;
    }
    for (i = s->n - 1; i > 0; i--) {
        s->e[i] = s->e[i] - s->e[i + 1] * t[i];
    }
    s->h[s->n] = 0.0;
    s->c[s->n] = s->h[s->n];
    for (i = 0; i < s->n; i++) {
        s->h[i] = (s->e[i + 1] - s->e[i]) / 3.0;
        s->c[i] = s->y[i + 1] - s->y[i] - s->e[i] - s->h[i];
    }
}

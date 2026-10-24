#include "m2c.h"

typedef struct P {
    u8 pad0[0x88];
    double c0[17];
    double c1[17];
    double c2[17];
    double c3[17];
    s32 n;
} P;

extern void func_02029ec8(void);
extern s32 func_0202c014(void);
extern double func_0202c0ec(s32);

double func_ov111_020e9fcc(double x, P *p) {
    s32 i;
    double d;
    func_02029ec8();
    i = func_0202c014();
    if (i < 0) {
        i = 0;
    } else if (i >= p->n) {
        i = p->n - 1;
    }
    d = x - func_0202c0ec(i);
    return p->c0[i] + d * (p->c1[i] + d * (p->c2[i] + d * p->c3[i]));
}

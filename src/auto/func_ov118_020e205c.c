#include "m2c.h"
void func_ov118_020e205c(u16 *a) {
    s32 i;
    u16 f;
    f = a[1];
    i = 1;
    do {
        u16 t = a[i + 1];
        a[i]  = t;
        i++;
    } while (i < 15);
    a[15] = f;
}

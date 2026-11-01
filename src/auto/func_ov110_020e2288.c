/* compiler: 1.2/sp3 */
#include "m2c.h"

void VX_Free(void *);

void func_ov110_020e2288(u32 n, void **a, void **b, void *c, void *d, void *e) {
    u32 i;

    if (a != 0 && b != 0) {
        for (i = 0; i < n; i++) {
            if (a[i] != 0) {
                VX_Free(a[i]);
            }
            if (b[i] != 0) {
                VX_Free(b[i]);
            }
        }
        VX_Free(a);
        VX_Free(b);
    }
    if (c != 0) {
        VX_Free(c);
    }
    if (d != 0) {
        VX_Free(d);
    }
    if (e != 0) {
        VX_Free(e);
    }
}

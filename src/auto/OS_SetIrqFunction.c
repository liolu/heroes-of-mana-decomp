#include "m2c.h"

typedef struct {
    int fn;
    int a;
    int b;
} CB;
extern CB OSi_IrqCallbackInfo[];
extern int SDK_AUTOLOAD_DTCM_START[];

void OS_SetIrqFunction(u32 mask, int fn) {
    int i;
    for (i = 0; i < 22; i++, mask >>= 1) {
        if (mask & 1) {
            CB *p = 0;
            if (i >= 8 && i <= 11) {
                p = &OSi_IrqCallbackInfo[i - 8];
            } else if (i >= 3 && i <= 6) {
                p = &OSi_IrqCallbackInfo[i + 1];
            } else {
                SDK_AUTOLOAD_DTCM_START[i] = fn;
            }
            if (p != 0) {
                p->fn = fn;
                p->b  = 0;
                p->a  = 1;
            }
        }
    }
}

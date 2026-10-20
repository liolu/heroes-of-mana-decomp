#include "m2c.h"

typedef struct {
    u8 pad[8];
    volatile s32 count;
    u8 *volatile arr;
} S;

void *func_ov004_020bf6c0(S *arg0, u8 *arg1) {
    s32 i;
    u8 *p;

    i = 0;
    if (arg0->count > 1) {
        p = arg0->arr;
        do {
            if (p == arg1) {
                return arg0->arr + (i + 1) * 0x18;
            }
            i++;
            p += 0x18;
        } while (i + 1 < arg0->count);
    }
    return 0;
}

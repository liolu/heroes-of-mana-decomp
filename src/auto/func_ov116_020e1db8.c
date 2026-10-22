#include "m2c.h"

typedef struct {
    u16 lo : 9;
    u16 hi : 7;
} H;

extern void *data_0203673c;

void func_ov116_020e1db8(s32 arg0, s32 arg1) {
    s32 i;
    s32 base;
    H *p;
    s32 t;

    if (arg0 == 0) {
        return;
    }
    base = M2C_FIELD(data_0203673c, s32 *, 0x28);
    p    = (H *) (base + 0x10);
    i    = 0;
    while (i < 0x100) {
        if (arg0 == p->lo) {
            t = arg1 + p->hi;
            if (t > 0x63) {
                p->hi = 0x63;
            } else {
                p->hi = t;
            }
            return;
        }
        i += 1;
        p += 1;
    }
    p = (H *) (base + 0x10);
    if (arg1 > 0x63) {
        arg1 = 0x63;
    }
    i = 0;
    while (i < 0x100) {
        if (p->lo == 0) {
            p->lo = arg0;
            p->hi = arg1;
            return;
        }
        i += 1;
        p += 1;
    }
}

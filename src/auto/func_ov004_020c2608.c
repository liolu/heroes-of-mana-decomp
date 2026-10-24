#include "m2c.h"
typedef struct {
    u8 pad[8];
    s32 n;
    s32 *arr;
} L;
typedef struct {
    u8 pad[0x10];
    L *l;
    u8 pad2[0x2c];
    s32 a;
    u8 pad3[4];
    s32 b;
} O;
s32 func_ov004_020c2988(void *);
s32 func_ov004_020c2998(void *);
s32 func_ov004_020c2608(O *o) {
    s32 i;
    s32 r;
    for (i = 0; i < o->l->n; i++) {
        void *e = (void *) o->l->arr[i];
        if (func_ov004_020c2988(e) == 0) {
            if (func_ov004_020c2998(e) > o->a) {
                return 0;
            }
        }
    }
    r = 0;
    if (o->a < 0) {
        return r;
    }
    if (o->b <= 0) {
        r = 1;
    }
    return r;
}

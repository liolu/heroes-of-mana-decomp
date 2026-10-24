#include "m2c.h"
typedef struct {
    u8 pad[8];
    s32 n;
    s32 *arr;
} L;
typedef struct {
    u8 pad[0x10];
    L *l;
} O;
s32 func_ov004_020c2988(void *);
s32 func_ov004_020c2998(void *);
void func_ov004_020c2538(void *, void *, s32, s32);
void func_ov004_020c2378(O *o, s32 id) {
    s32 i = 0;
    if (o->l->n <= 0) {
        return;
    }
    do {
        void *e = (void *) o->l->arr[i];
        if (func_ov004_020c2988(e) == 0 && id == func_ov004_020c2998(e)) {
            func_ov004_020c2538(o, e, 0, 0);
        }
        i++;
    } while (i < o->l->n);
}

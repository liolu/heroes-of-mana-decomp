#include "m2c.h"

typedef struct {
    u8 pad[8];
    s32 a;
    s32 *arr;
} Ov004Obj;

s32 func_ov004_020c9450(Ov004Obj *o, s32 i) {
    return o->a + o->arr[i];
}

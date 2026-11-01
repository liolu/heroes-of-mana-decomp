#include "m2c.h"

typedef struct {
    u8 pad[0xc];
    s32 *ptr;
} Ov004Stream;

void func_ov004_020b9d1c(s32 *out, Ov004Stream *s) {
    s32 *p = s->ptr;
    s32 v  = *p;
    s->ptr = p + 1;
    *out   = v;
}

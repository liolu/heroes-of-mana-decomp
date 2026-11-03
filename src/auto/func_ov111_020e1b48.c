#include "m2c.h"

u64 func_0202d478(s32, u16);

typedef struct {
    u16 a;
    u16 b;
    u16 c;
    u16 w;
    s32 out;
} Ent;

void func_ov111_020e1b48(void *arg0, void *arg1, s32 arg2) {
    Ent *e  = (Ent *) arg0;
    u8 *src = (u8 *) arg1;

    e->w = (u16) (func_0202d478(e->w + e->a, e->b) >> 32);
    switch (arg2) {
        case 0:
            e->out = ((s32 *) *(void **) (src + 0x24))[e->w + e->c];
            return;
        case 1:
            e->out = ((s32 *) *(void **) (src + 0x2C))[e->w + e->c];
            return;
        case 2:
            e->out = ((s32 *) *(void **) (src + 0x34))[e->w + e->c];
            return;
    }
}

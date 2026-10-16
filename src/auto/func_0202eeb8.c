#include "m2c.h"
s32 func_0202f92c(void *, u32, void *);
typedef struct Tab {
    u32 count;
    u32 pad[2];
    u8 *data;
} Tab;

s32 func_0202eeb8(void *a, Tab *t) {
    struct {
        u32 out;
        u32 val;
    } s;
    u8 *p = t->data;
    u32 i = 0;
    while (i < t->count) {
        s.val = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
        if (func_0202f92c(a, s.val, &s) != 0) {
            return 1;
        }
        i++;
        p += 4;
    }
    return 0;
}

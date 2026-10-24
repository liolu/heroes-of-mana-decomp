#include "m2c.h"
typedef struct {
    u8 pad[0x404];
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 1;
    u32 p3 : 8;
    u32 cur : 9;
    u32 end : 9;
    u32 f29 : 1;
    u32 f30 : 1;
    u32 f31 : 1;
    s32 pos;
    s32 len;
} W;
void func_ov111_020e92c8(void *, void *, void *, s32, s32);
void func_ov111_020e9424(void *, void *, void *, s32, s32, u32);
void func_ov111_020e964c(W *w) {
    s32 n;
    u32 i;
    u8 *q;
    u8 *p;
    if (w->f1 == 0) {
        return;
    }
    if (w->f2 == 0) {
        n = w->pos;
    } else {
        n = w->len - w->pos;
    }
    i = w->cur;
    if (i < w->end) {
        q = (u8 *) w + 0x200 + i * 2;
        p = (u8 *) w + i * 2;
        do {
            if (w->f29 == 0) {
                func_ov111_020e92c8(p, (u8 *) w + 0x400, q, n, w->len - 1);
            } else {
                func_ov111_020e9424(p, (u8 *) w + 0x400, q, n, w->len - 1, w->f30);
            }
            i++;
            q += 2;
            p += 2;
        } while (i < w->end);
    }
    if (w->pos >= w->len) {
        w->f1 = 0;
    }
    w->pos = w->pos + 1;
    w->f0  = 1;
}

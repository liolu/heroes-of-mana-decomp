#include "m2c.h"

typedef struct {
    u8 pad[0x14];
    u8 *buf;
    u8 pad2[0x4E0];
    u16 pos;
} G;
typedef struct {
    u32 pad[0xD];
    u32 v;
} R;
extern G *data_ov119_020f2f68;
extern R data_ov119_020f2258;

void func_ov119_020f04bc(void) {
    G *g = data_ov119_020f2f68;
    R *r = &data_ov119_020f2258;
    r->v = (r->v & ~0x2000) | ((g->buf[g->pos + 1] & 1) << 13);
    g->pos += 2;
}

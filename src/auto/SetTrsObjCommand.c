/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x268];
    u32 *buf;
    s32 n;
} G;
extern G *data_ov000_02051548;
void SetTrsObjCommand(u32 a, u32 b, u32 c, u32 d) {
    G *g         = data_ov000_02051548;
    g->buf[g->n] = a | (b << 8) | (c << 16) | (d << 24);
    data_ov000_02051548->n++;
}

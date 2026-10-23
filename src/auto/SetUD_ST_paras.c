/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Hd {
    u32 type : 5;
    u32 size : 11;
    u32 off : 16;
} Hd;
typedef struct Root {
    u8 pad[0x4c4];
    u8 *buf;
    u8 pad2[8];
    s32 pos;
} Root;
typedef struct G {
    u8 pad[0x24];
    s32 base;
} G;
extern Root *data_ov000_02051548;
extern G *data_0203673c;
void MI_CpuCopy8(void *, void *, s32);
void SetUD_ST_paras(u8 *src, s32 n) {
    Hd *h   = (Hd *) (data_ov000_02051548->buf + data_ov000_02051548->pos);
    h->type = 14;
    h->size = n;
    h->off  = (s32) src - data_0203673c->base;
    MI_CpuCopy8(src, h + 1, n);
    data_ov000_02051548->pos += ((n + 3) & ~3) + 4;
}

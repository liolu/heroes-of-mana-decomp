/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Dst {
    u32 a : 5;
    u32 size : 11;
    u32 off : 16;
} Dst;
typedef struct G {
    u8 pad[0x4c4];
    u8 *base;
    u8 pad2[0x4d0 - 0x4c8];
    s32 off;
} G;
typedef struct H {
    u8 pad[0x28];
    s32 start;
} H;
extern G *data_ov000_02051548;
extern H *data_0203673c;
extern void MIi_CpuCopy16(s32, void *, s32);
void SetKUNI_paras(s32 src, s32 size) {
    Dst *d  = (Dst *) (data_ov000_02051548->base + data_ov000_02051548->off);
    d->a    = 13;
    d->size = size;
    d->off  = src - data_0203673c->start;
    MIi_CpuCopy16(src, (u8 *) d + 4, size);
    data_ov000_02051548->off += ((size + 3) & ~3) + 4;
}

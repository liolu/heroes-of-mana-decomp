/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Arc {
    u8 pad0[8];
    u32 size;
    u8 pad1[0x2C];
    s32 base;
    u32 tbl[1];
} Arc;

extern u8 func_020059a8;
s32 SND_GetWaveDataAddress(Arc *, u32);
s32 func_020116d8(Arc *);
s32 NNS_SndHeapAlloc(s32, s32, void *, Arc *, u32);
s32 func_02004ea0(s32, s32, s32, s32);
void DC_StoreRange(s32, s32);
void SND_SetWaveDataAddress(Arc *, u32, s32);

s32 func_020058c8(Arc *arc, u32 idx, s32 src, s32 heap) {
    s32 len;
    s32 start;
    s32 buf;
    u32 last;
    u32 *e;
    if (SND_GetWaveDataAddress(arc, idx) != 0) {
        return 1;
    }
    last  = func_020116d8(arc);
    e     = (u32 *) ((u8 *) arc + (arc->base + idx) * 4);
    start = e[0x3C / 4];
    len   = ((idx < last - 1) ? e[0x40 / 4] : arc->size) - start;
    if (heap == 0) {
        return 0;
    }
    buf = NNS_SndHeapAlloc(heap, len + 0x20, &func_020059a8, arc, idx);
    if (buf == 0) {
        return 0;
    }
    if (len != func_02004ea0(src, buf, len, start)) {
        return 0;
    }
    DC_StoreRange(buf, len);
    SND_SetWaveDataAddress(arc, idx, buf);
    return 1;
}

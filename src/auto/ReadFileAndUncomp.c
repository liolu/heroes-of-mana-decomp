/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s32 changePosNoForOverSea(s32, s32 *, void *);
extern u32 *ReadAnaFile(s32, s32, void *);
extern void *func_0200ed38(u32, s32, s32);
extern void MI_UncompressLZ8(u32 *, void *);
extern void OS_FreeToHeap(u32, s32, void *);
void *ReadFileAndUncomp(s32 a, s32 b, u32 *size, s32 d) {
    u8 v[4];
    u8 buf[0x28];
    u32 *src;
    u32 len;
    void *dst;
    s32 pos = changePosNoForOverSea(b, &a, buf);
    src     = ReadAnaFile(a, pos, v);
    len     = *src >> 8;
    *size   = len;
    dst     = func_0200ed38(0, -1, len);
    MI_UncompressLZ8(src, dst);
    if (src != 0) {
        OS_FreeToHeap(0, -1, src);
    }
    return dst;
}

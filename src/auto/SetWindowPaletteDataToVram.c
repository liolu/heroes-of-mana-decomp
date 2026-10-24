/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void *ReadAnaFile(s32 a, s32 *ids, s32 *size);
void MIi_CpuCopy16(void *src, void *dst, s32 n);
void OS_FreeToHeap(u32 a, s32 b, void *p);
void SetWindowPaletteDataToVram(void *dst) {
    s32 size;
    s32 ids[4];
    void *p;
    ids[0] = 5;
    ids[1] = 7;
    ids[2] = 0;
    p      = ReadAnaFile(3, ids, &size);
    MIi_CpuCopy16(p, dst, size);
    if (p != 0) {
        OS_FreeToHeap(0, -1, p);
    }
}

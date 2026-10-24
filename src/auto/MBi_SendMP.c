#include "m2c.h"

typedef struct MbS {
    u8 pad[0x508];
    u32 f508;
    u8 f50c;
    u8 pad2[0x24 - 0x0D];
    u16 f524;
    u16 f526;
    u16 f528;
    u16 f52a;
    u16 f52c;
} MbS;

typedef struct DmaNo {
    u32 a;
    u32 b;
    MbS *mb;
} DmaNo;

extern DmaNo WM_DMA_NO;
extern u8 MBi_ChildCallback;
s32 MBi_SetMPData(void *, u32, u16, u16, u16);

s32 MBi_SendMP(u32 param_1, u32 param_2, u32 param_3) {
    MbS *m = WM_DMA_NO.mb;
    u16 p2 = param_2;
    u16 p3 = param_3;
    s32 r;
    if (m->f528 == 0 || m->f526 == 1) {
        return 1;
    }
    switch (m->f524) {
        case 1: {
            u16 v = (m->f52c == 0) ? 1000 : 0;
            r     = MBi_SetMPData((void *) m->f508, param_1, p2, v, p3);
            if (r == 2) {
                WM_DMA_NO.mb->f50c = 1;
            }
            if (r == 2) {
                r = 0;
            }
            return r;
        }
        case 2:
            r = MBi_SetMPData(&MBi_ChildCallback, param_1, p2, 0, p3);
            if (r == 2) {
                WM_DMA_NO.mb->f50c = 1;
            }
            if (r == 2) {
                r = 0;
            }
            return r;
        default:
            return 1;
    }
}

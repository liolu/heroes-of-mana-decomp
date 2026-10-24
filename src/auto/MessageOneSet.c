/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void MIi_CpuClear16(s32, void *, s32);
void OS_FreeToHeap(s32, s32, void *);
void *func_0200ed38(s32, s32, s32);

typedef struct {
    u32 pad0 : 3;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 pad5 : 27;
} F44;
typedef struct {
    u32 b012 : 3;
    u32 pad : 29;
} F4C;
typedef struct {
    u8 p0[0x33C];
    s16 h33C;
    u16 h33E;
    u16 h340;
    u16 h342;
    u8 p344[4];
    void *w348;
    u8 slots[1];
} G;
extern G *data_ov000_02051550;
extern u8 data_ov000_02051244;

void MessageOneSet(void *a, void *b, s32 c, s32 idx) {
    u8 *g;
    s32 off;
    u8 *p;
    void *q;
    off                                                       = idx * 0xD0;
    g                                                         = (u8 *) data_ov000_02051550;
    ((F44 *) (g + off + 0x44))->b3                            = 1;
    ((F44 *) ((u8 *) data_ov000_02051550 + off + 0x44))->b4   = 0;
    ((F4C *) ((u8 *) data_ov000_02051550 + off + 0x4C))->b012 = 0;
    data_ov000_02051550->h342                                 = 0;
    data_ov000_02051550->h33E                                 = 0;
    data_ov000_02051550->h340                                 = data_ov000_02051550->h33E;
    *(void **) ((u8 *) data_ov000_02051550 + off + 0xB8)      = func_0200ed38(0, -1, 0x900);
    MIi_CpuClear16(0, *(void **) ((u8 *) data_ov000_02051550 + off + 0xB8), 0x900);
    *(u8 **) ((u8 *) data_ov000_02051550 + data_ov000_02051550->h342 * 16 + 0x34C) = (u8 *) data_ov000_02051550 + 0x22C;
    p = (u8 *) data_ov000_02051550 + data_ov000_02051550->h342 * 16;
    q = *(void **) (p + 0x350);
    if (q != 0) {
        OS_FreeToHeap(0, -1, q);
        *(s32 *) ((u8 *) data_ov000_02051550 + data_ov000_02051550->h342 * 16 + 0x350) = 0;
    }
    *(void **) ((u8 *) data_ov000_02051550 + data_ov000_02051550->h342 * 16 + 0x350) = a;
    *(void **) ((u8 *) data_ov000_02051550 + data_ov000_02051550->h342 * 16 + 0x354) = a;
    *(void **) ((u8 *) data_ov000_02051550 + data_ov000_02051550->h342 * 16 + 0x358) = b;
    data_ov000_02051550->h33C                                                        = c;
    data_ov000_02051550->w348 = *(void **) ((u8 *) data_ov000_02051550 + off + 0xB8);
}

#include "m2c.h"

typedef struct {
    u8 p[0x74];
    s16 h;
    u8 q[0x242];
    u32 f;
} G;
typedef struct {
    u32 lo : 16;
    u32 hi : 16;
} B;
void MIi_CpuCopy16(void *, void *, s32);
s16 func_ov121_020f4310(void *);
extern G data_ov121_020f5d60;
extern u8 data_ov121_020f5dbc[];
extern u8 data_ov121_020f5dc0[];
extern B data_ov121_020f6608;

s32 func_ov121_020f4338(u8 *src) {
    MIi_CpuCopy16(src, data_ov121_020f5dbc, 0x5C);
    data_ov121_020f5d60.h  = func_ov121_020f4310(data_ov121_020f5dc0);
    data_ov121_020f6608.hi = *(u32 *) (src + 0x54) >> 16;
    data_ov121_020f5d60.f |= 2;
    return 1;
}

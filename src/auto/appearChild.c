/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 a;
    u8 b;
    u8 pad[2];
    u8 data[0x14];
    u8 pad2[0x38];
    u32 lo50 : 16;
    u32 hi50 : 16;
    u32 lo54 : 16;
    u32 hi54 : 16;
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 8;
    u32 f3 : 4;
    u32 f4 : 4;
    u32 f5 : 4;
    u32 f6 : 4;
    u32 f7 : 6;
} Beacon;
typedef struct {
    u8 b0;
    u8 b1;
    u8 b2;
    u8 pad[0x26];
    u8 b29;
    u8 b2a;
    u8 b2b;
    u8 b2c;
    u8 b2d;
    u8 b2e;
    u8 b2f;
} Cfg;
void MIi_CpuCopy16(void *, void *, s32);
void SetEntryflagBeacon(s32);
s32 func_ov121_020f4148(u8);
void func_ov121_020f4338(Beacon *);
extern s32 data_ov000_02051540;
extern Cfg data_ov003_020b532c;
extern u8 data_ov003_020b535c;

void appearChild(void) {
    Beacon s;

    SetEntryflagBeacon(0);
    if (data_ov000_02051540 != 0) {
        MIi_CpuCopy16(&data_ov003_020b535c, s.data, 0x14);
        s.b    = data_ov003_020b532c.b2f;
        s.f6   = func_ov121_020f4148(data_ov003_020b532c.b29);
        s.f0   = 1;
        s.lo50 = data_ov003_020b532c.b2b + data_ov003_020b532c.b2c + data_ov003_020b532c.b2d;
        s.hi50 = data_ov003_020b532c.b2b;
        s.lo54 = data_ov003_020b532c.b2c;
        s.f4   = data_ov003_020b532c.b29;
        s.f1   = data_ov003_020b532c.b2a;
        s.f3   = data_ov003_020b532c.b1;
        s.f5   = data_ov003_020b532c.b2;
        s.f2   = data_ov003_020b532c.b0;
        s.hi54 = 0;
        func_ov121_020f4338(&s);
    }
}

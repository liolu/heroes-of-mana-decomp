#include "m2c.h"

typedef struct {
    u8 f0;
    u8 f1;
    u16 f2;
    u16 f4;
    u16 f6;
    u32 b0_7 : 8;
    u32 b8 : 1;
    u32 b9 : 1;
    u32 b10_17 : 8;
    u32 b18_31 : 14;
    u16 fC;
    u16 fE;
} S;

void func_ov122_02051a20(S *arg0) {
    arg0->f0 = 0;
    arg0->f1 = 0;
    arg0->f2 = 0;
    arg0->f4 = 0;
    arg0->f6 = 0;
    arg0->b8 = 0;
    arg0->b9 = 0;
    arg0->fC = 0;
    arg0->fE = 0;
    arg0->b10_17 = 0;
    arg0->b0_7 = 0x34;
}

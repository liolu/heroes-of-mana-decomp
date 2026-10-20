#include "m2c.h"

typedef struct {
    u8 b0;
    u8 b1;
    u16 h2;
    u16 h4;
    u16 h6;
    u32 f0 : 8;
    u32 f8 : 1;
    u32 f9 : 1;
    u32 f10 : 8;
    u32 f18 : 14;
    u16 hC;
    u16 hE;
} Obj216c;

void func_ov115_020e216c(Obj216c *arg0) {
    arg0->b0 = 0;
    arg0->b1 = 0;
    arg0->h2 = 0;
    arg0->h4 = 0;
    arg0->h6 = 0;
    arg0->f8 = 0;
    arg0->f9 = 0;
    arg0->hC = 0;
    arg0->hE = 0;
    arg0->f10 = 0;
    arg0->f0 = 0x34;
}
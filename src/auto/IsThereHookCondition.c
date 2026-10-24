/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 a : 8;
    u32 id : 4;
    u32 b : 20;
} A;
typedef struct {
    u8 pad[0x14];
    A w;
} G;
typedef struct {
    u32 w0 : 2;
    u32 f29 : 1;
    u32 w1 : 29;
} W8;
typedef struct {
    u8 pad[8];
    u32 p : 29;
    u32 f : 1;

    u8 pad2[0x2c - 0xc];
    u16 h : 1;
    u16 g : 1;
    u16 hh : 14;
    u8 pad3[0xa8 - 0x2e];
    u16 lo : 14;
    u16 st : 2;
} Aoo;
extern G *data_ov000_02051548;
Aoo *GetShipAooSt(s32);
s32 IsThereHookCondition(void) {
    Aoo *o = GetShipAooSt(data_ov000_02051548->w.id);
    if (o != NULL && o->f && o->g && o->st == 2) {
        return 1;
    }
    return 0;
}

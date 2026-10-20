/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 f0;
    u32 f4;
    u32 lo:8;
    u32 hi:8;
    u32 mid:5;
    u32 rest:11;
    u8 fC;
    u8 fD;
    u8 pad[2];
    void *f10;
} RollObj;

void *func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
extern void *data_ov000_02051548;

void SetColorRoll(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    RollObj *p;

    p = (RollObj *) func_0200ed38(0, -1, 0x14);
    p->f0 = arg0;
    p->f4 = arg1;
    p->lo = arg2;
    p->hi = arg3;
    p->fC = arg4;
    p->fD = arg6;
    p->mid = arg5;
    p->f10 = M2C_FIELD(data_ov000_02051548, void **, 0x7A4);
    M2C_FIELD(data_ov000_02051548, void **, 0x7A4) = p;
}

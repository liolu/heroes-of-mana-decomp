#include "m2c.h"

extern void OS_GetOwnerInfo(void *p);

void func_ov123_020d27d8(u16 *out) {
    u8 info[0x50];
    u8 loc[8];
    OS_GetOwnerInfo(info);
    loc[2]           = info[2];
    loc[3]           = info[3];
    *(u16 *) &loc[0] = 0;
    *(u16 *) &loc[4] = 0;
    loc[6]           = 0;
    loc[7]           = 0;
    out[0]           = 0;
    out[1]           = *(u16 *) &loc[2];
    out[2]           = *(u16 *) &loc[4];
    out[3]           = *(u16 *) &loc[6];
}

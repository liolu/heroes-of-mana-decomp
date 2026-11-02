#include "m2c.h"

void func_ov123_020ca400(s32 arg0, s32 arg1) {
    u32 t;

    if (arg0 == 1) {
        t                            = *(volatile s32 *) 0x04001000 & 0x1F00;
        *(volatile s32 *) 0x04001000 = (*(volatile s32 *) 0x04001000 & ~0x1F00) | ((arg1 | (t >> 8)) << 8);
        return;
    }
    t                            = *(volatile s32 *) 0x04000000 & 0x1F00;
    *(volatile s32 *) 0x04000000 = (*(volatile s32 *) 0x04000000 & ~0x1F00) | ((arg1 | (t >> 8)) << 8);
}

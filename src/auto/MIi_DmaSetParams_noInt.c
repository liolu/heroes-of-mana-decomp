#include "m2c.h"

void MIi_DmaSetParams_noInt(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_ip;
    volatile s32 *temp_r0;

    temp_ip                                  = arg0 * 0xC;
    *(volatile s32 *) (temp_ip + 0x040000B0) = arg1;
    temp_r0                                  = (volatile s32 *) (temp_ip + 0x040000B0);
    temp_r0[1]                               = arg2;
    temp_r0[2]                               = arg3;
}
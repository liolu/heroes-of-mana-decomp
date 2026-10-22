/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void OS_SleepThread(s32);
extern void *data_ov000_02051548;
extern void *data_ov000_0205154c;

void WaitSyncCounter(u16 arg0) {
    s32 temp_r2;
    u16 temp_r0_2;
    void *temp_r1;

    if (arg0 != 0) {
        if ((u32) M2C_FIELD(data_ov000_02051548, u16 *, 0x3C) < 2U) {
            M2C_FIELD(data_ov000_02051548, u16 *, 0x3C) = arg0;
        }
        temp_r1 = data_ov000_02051548;
        if (M2C_FIELD(temp_r1, u16 *, 0x3C) != 0) {
        loop_5:
            M2C_FIELD(temp_r1, s32 *, 0x760) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x760) & ~1);
            OS_SleepThread(0);
            temp_r0_2 = M2C_FIELD(data_ov000_02051548, u16 *, 0x3C);
            temp_r2   = M2C_FIELD(data_ov000_0205154c, s32 *, 0xAF4);
            if ((s32) temp_r0_2 >= temp_r2) {
                M2C_FIELD(data_ov000_02051548, u16 *, 0x3C) = (u16) (temp_r0_2 - temp_r2);
                temp_r1                                     = data_ov000_02051548;
                if (M2C_FIELD(temp_r1, u16 *, 0x3C) != 0) {
                    goto loop_5;
                }
            }
        }
        M2C_FIELD(data_ov000_02051548, u16 *, 0x3C) = 1;
    }
}

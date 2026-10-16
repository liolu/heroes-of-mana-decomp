#include "m2c.h"

s32 PM_SetLCDPower();                        /* extern */
M2C_UNK VBlankIntrWait();                        /* extern */

void func_020035ec(void) {
    s32 temp_r0;

    if (PM_SetLCDPower(0) != 1) {
        do {
            VBlankIntrWait();
        } while (PM_SetLCDPower(0) != 1);
    }
loop_4:
    temp_r0 = (s32) (*(u16 *)0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        VBlankIntrWait(temp_r0);
        goto loop_4;
    }
    if (PM_SetLCDPower(1) == 1) {
        return;
    }
    do {
        VBlankIntrWait();
    } while (PM_SetLCDPower(1) != 1);
}

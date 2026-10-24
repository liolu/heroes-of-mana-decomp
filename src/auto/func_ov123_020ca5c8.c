/* compiler: 1.2/sp3 */
#include "m2c.h"

extern s32 PM_SetLCDPower(s32);
extern u8 data_ov123_020e472c;

void func_ov123_020ca5c8(void) {
    if (data_ov123_020e472c != 0) {
        if ((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 15 != 0) {
            return;
        }
        if (PM_SetLCDPower(1) != 0) {
            data_ov123_020e472c = 0;
        }
        return;
    }
    if ((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 15 == 0) {
        return;
    }
    if (PM_SetLCDPower(0) != 0) {
        data_ov123_020e472c = 1;
    }
}

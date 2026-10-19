/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov000_02051110;
extern void *data_ov000_02051550;

void SetWinBGscrolOut(void) {
    M2C_FIELD(data_ov000_02051550, s8 *, 0x455)  = 0;
    M2C_FIELD(data_ov000_02051550, u16 *, 0x338) = (u16) (M2C_FIELD(data_ov000_02051550, u16 *, 0x338) | 0x40);
    if (M2C_FIELD(data_ov000_02051550, s8 *, 0x454) == 0) {
        M2C_FIELD(data_ov000_02051550, s8 *, 0x454) = 1;
    }
}

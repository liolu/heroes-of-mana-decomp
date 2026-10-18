#include "m2c.h"

extern M2C_UNK data_ov123_020d9680;
s32 func_ov123_020d4b34(s32 arg0) {
    s32 i;
    u8 *p = (u8 *) &data_ov123_020d9680;
    for (i = 0; i < 0x1E; i++) {
        if (arg0 == *(u16 *) (p + 0xA)) {
            return *(s32 *) ((u8 *) &data_ov123_020d9680 + i * 0xC);
        }
        p += 0xC;
    }
    return 0;
}

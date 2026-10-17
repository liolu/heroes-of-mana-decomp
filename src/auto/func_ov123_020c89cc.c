/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK CARD_LockRom(u16);                          /* extern */
M2C_UNK CARD_UnlockRom(u16);                        /* extern */
extern void *data_ov123_020e4710;

s32 func_ov123_020c89cc(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            CARD_LockRom(M2C_FIELD(data_ov123_020e4710, u16 *, 0xE4));
            return 0;
        case 10:
            CARD_UnlockRom(M2C_FIELD(data_ov123_020e4710, u16 *, 0xE4));
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}

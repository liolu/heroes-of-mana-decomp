#include "m2c.h"

extern M2C_UNK data_ov123_020de4c8;
extern M2C_UNK data_ov123_020de6e8;
extern M2C_UNK data_ov123_020de6f0;
extern M2C_UNK (*data_ov123_020e4704)(M2C_UNK, M2C_UNK *, s32);
extern void *data_ov123_020e4708;

void func_ov123_020c7738(s32 arg0) {
    if (data_ov123_020e4704 != NULL) {
        data_ov123_020e4704(0x08000000, &data_ov123_020de6e8,
                            *(s32 *) ((u8 *) &data_ov123_020de4c8 + (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) * 4)));
    }
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) = arg0;
    if (data_ov123_020e4704 == NULL) {
        return;
    }
    data_ov123_020e4704(0x08000000, &data_ov123_020de6f0,
                        *(s32 *) ((u8 *) &data_ov123_020de4c8 + (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) * 4)));
}

#include "m2c.h"

extern void *data_ov123_020e47a0;

s32 func_ov123_020cd668(u32 *arg0, u32 arg1) {
    M2C_UNK (*temp_ip)(M2C_UNK, void *, u32, s32);

    if ((arg1 >= 0xCU) && (arg1 >= (u32) *arg0)) {
        M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) & ~0x10);
        temp_ip = M2C_FIELD(data_ov123_020e47a0, M2C_UNK(**)(M2C_UNK, void *, u32, s32), 0x19F0);
        if (temp_ip != NULL) {
            temp_ip(1, data_ov123_020e47a0 + 0x19FC, arg1, M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19F4));
        }
        return 1;
    }
    return 0;
}

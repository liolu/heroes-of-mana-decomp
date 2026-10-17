/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02019d20(M2C_UNK *, void *, u16, void *, s32, s32); /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern void *data_ov123_020e4708;
extern M2C_UNK func_ov123_020c7170;

s32 func_ov123_020c72cc(void) {
    if ((u32) (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) - 4) <= 2U) {
        return 1;
    }
    func_ov123_020c7738(4);
    if (func_02019d20(&func_ov123_020c7170, data_ov123_020e4708 + 0x1060, (u16) M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A4),
                      data_ov123_020e4708 + 0xF80, (s32) (u16) M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A0), 1) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    return 0;
}

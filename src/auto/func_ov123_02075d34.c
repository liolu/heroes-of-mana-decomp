/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK *, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_ov123_02077e80(void *, M2C_UNK *);     /* extern */
M2C_UNK func_ov123_02077ef4(void *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_ov123_02077fb4(void *);                /* extern */
extern M2C_UNK data_ov123_020d9910;
extern M2C_UNK data_ov123_020d9918;

void func_ov123_02075d34(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2) {
    u8 sp0[40];
    void *temp_r4;

    temp_r4 = (void *) ((u8 *) arg0 + 0x2EC);
    if ((M2C_FIELD(arg0, u8 *, 0x454) ^ arg2) != 0) {
        func_ov123_02077ef4(temp_r4, &data_ov123_020d9910, 4);
    } else {
        func_ov123_02077ef4(temp_r4, &data_ov123_020d9918, 4);
    }
    func_ov123_02077ef4(temp_r4, arg0, 0x30);
    MI_CpuFill8((void *) sp0, 0x36, 0x28);
    func_ov123_02077ef4(temp_r4, (void *) sp0, 0x28);
    func_ov123_02077e80(temp_r4, arg1);
    func_ov123_02077fb4(temp_r4);
    func_ov123_02077ef4(temp_r4, arg0, 0x30);
    MI_CpuFill8((void *) sp0, 0x5C, 0x28);
    func_ov123_02077ef4(temp_r4, (void *) sp0, 0x28);
    func_ov123_02077ef4(temp_r4, arg1, 0x14);
    func_ov123_02077e80(temp_r4, arg1);
}

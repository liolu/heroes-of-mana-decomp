/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, s32);          /* extern */
M2C_UNK func_ov123_02099524(M2C_UNK, s32);          /* extern */
extern M2C_UNK data_ov123_020dc680;
extern void *data_ov123_020e1718;

s32 func_ov123_02099138(void *(*arg0)(M2C_UNK *, s32), s32 arg1) {
    void *temp_r0;

    if (data_ov123_020e1718 != NULL) {
        func_ov123_02099524(9, 0xFFFFA1DC);
        return 0;
    }
    temp_r0             = arg0(&data_ov123_020dc680, 0x1C20);
    data_ov123_020e1718 = temp_r0;
    if (temp_r0 == NULL) {
        func_ov123_02099524(9, 0xFFFFA1DC);
        return 0;
    }
    MI_CpuFill8(temp_r0, 0, 0x1C20);
    M2C_FIELD(data_ov123_020e1718, void *(**) (M2C_UNK *, s32), 0) = arg0;
    M2C_FIELD(data_ov123_020e1718, s32 *, 4)                       = arg1;
    return 1;
}

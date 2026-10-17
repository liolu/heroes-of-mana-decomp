/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c8f8c(s32);                   /* extern */
M2C_UNK func_ov123_020cb618(s32, M2C_UNK *);        /* extern */
extern void *data_ov123_020e45bc;
extern M2C_UNK func_ov123_020aee94;

void func_ov123_020b062c(void) {
    func_ov123_020c8f8c(M2C_FIELD(data_ov123_020e45bc, s32 *, 0x114));
    func_ov123_020cb618(M2C_FIELD(data_ov123_020e45bc, s32 *, 0x118), &func_ov123_020aee94);
}

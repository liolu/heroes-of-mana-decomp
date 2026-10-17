/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208c8d8(M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_ov123_0208d384(void *, M2C_UNK *);     /* extern */
extern M2C_UNK data_ov123_020db764;

void func_ov123_0208c86c(M2C_UNK arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0x800) = 1;
    M2C_FIELD(arg1, s8 *, 0)      = 0x5C;
    func_ov123_0208c8d8(arg0, arg1, 0);
    func_ov123_0208c8d8(arg0, arg1, 1);
    func_ov123_0208c8d8(arg0, arg1, 2);
    func_ov123_0208d384(arg1, &data_ov123_020db764);
    M2C_FIELD(arg1, s32 *, 0x800) = (s32) (M2C_FIELD(arg1, s32 *, 0x800) - 1);
}

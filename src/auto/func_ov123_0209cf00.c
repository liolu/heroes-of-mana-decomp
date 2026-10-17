/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02024d8c(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_ov123_0207bd34(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_ov123_020dd37c;
extern M2C_UNK func_ov123_0209bf40;

s32 func_ov123_0209cf00(M2C_UNK arg0, void *arg1) {
    if (func_02024d8c(M2C_FIELD(arg1, s32 *, 8), &data_ov123_020dd37c) != 0) {
        return 0;
    }
    func_ov123_0207bd34(arg0, M2C_FIELD(arg1, s32 *, 0), 0, 0, &func_ov123_0209bf40, 0);
    return 1;
}

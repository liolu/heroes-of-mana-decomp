/* compiler: 1.2/sp3 */
#include "m2c.h"
M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 func_ov123_02081b14(s32, s32, s32);
M2C_UNK func_ov123_02086078(M2C_UNK, M2C_UNK *);
extern M2C_UNK data_ov123_020daa34;
extern M2C_UNK data_ov123_020daa78;
extern M2C_UNK data_ov123_020daa90;
s32 func_ov123_02081a64(M2C_UNK arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 a, b, c;
    a = (arg1 >> 24) & 0xFF;
    b = (arg1 >> 16) & 0xFF;
    c = arg1 & 0xFFFF;
    if (func_ov123_02081b14(a, b, c) == 0) {
        func_02020d04(&data_ov123_020daa78, &data_ov123_020daa34, 0, 0xB7);
    }
    if (func_ov123_02081b14(a, b, c) == 0) {
        func_ov123_02086078(arg0, &data_ov123_020daa90);
        return 2;
    }
    *arg2 = a;
    *arg3 = b;
    *arg4 = c;
    return 0;
}

#include "m2c.h"

M2C_UNK func_0200fb08();                            /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b2420();                      /* extern */
M2C_UNK func_ov123_020b2478();                      /* extern */
M2C_UNK func_ov123_020b2794();                      /* extern */
s32 func_ov123_020b2864(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov123_020c3710();                      /* extern */
M2C_UNK func_ov123_020ca5c8();                      /* extern */
M2C_UNK func_ov123_020cabb4();                      /* extern */
M2C_UNK func_ov123_020cb2c8();                      /* extern */
M2C_UNK func_ov123_020cb6c8(M2C_UNK);               /* extern */
extern u8 data_ov123_020e45d0;
extern s32 data_ov123_020e45d4;
extern M2C_UNK (*data_ov123_020e45dc)();
extern M2C_UNK func_ov123_020b3280;

s32 func_ov123_020b2908(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    data_ov123_020e45d4 = arg0;
    if (func_ov123_020b2864(arg1, arg2) == 0) {
        return -1;
    }
    data_ov123_020e45d0 = 0;
    func_ov123_020b2794();
    func_ov123_020b2478();
    func_ov123_020c3710();
    func_ov123_020b2410(&func_ov123_020b3280);
    do {
        func_ov123_020cabb4();
        data_ov123_020e45dc();
        func_ov123_020cb6c8(0);
        func_ov123_020ca5c8();
        func_ov123_020cb2c8();
        func_0200fb08();
    } while (data_ov123_020e45d0 == 0);
    func_ov123_020b2420();
    return 0;
}

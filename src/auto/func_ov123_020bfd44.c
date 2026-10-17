/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae0c0();                          /* extern */
M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020ae628();                      /* extern */
M2C_UNK func_ov123_020b23c0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020bac64(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c8840(s32);                   /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern s8 data_ov123_020e469c;
extern u8 data_ov123_020e46a0;
extern s32 data_ov123_020e46a4;
extern M2C_UNK func_ov123_020b70a8;
extern M2C_UNK func_ov123_020bd1bc;
extern M2C_UNK func_ov123_020be768;
extern M2C_UNK func_ov123_020bed10;
extern M2C_UNK func_ov123_020bfb84;

void func_ov123_020bfd44(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if (func_ov123_020ae0c0() == 0) {
        return;
    }
    func_ov123_020ae628();
    func_ov123_020ae260();
    func_ov123_020c8840(data_ov123_020e46a4);
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x14);
    if (data_ov123_020e46a0 == 0) {
        func_ov123_020b23fc(2, 0);
        func_ov123_020b2410(&func_ov123_020bfb84);
        return;
    }
    switch (data_ov123_020e469c) {
        case 0:
            func_ov123_020b23fc(2, 1);
            func_ov123_020b2410(&func_ov123_020bed10);
            return;
        case 1:
            func_ov123_020b23fc(2, 1);
            func_ov123_020b2410(&func_ov123_020b70a8);
            return;
        case 2:
            func_ov123_020b23fc(2, 1);
            func_ov123_020b2410(&func_ov123_020be768);
            return;
        case 3:
            func_ov123_020b23fc(2, 0);
            func_ov123_020b23c0(0, 0);
            func_ov123_020bac64(1);
            func_ov123_020b2410(&func_ov123_020bd1bc);
            return;
        default:
            return;
    }
}

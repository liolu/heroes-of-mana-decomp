/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020ae0c0();                          /* extern */
M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020ae628();                      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c8840(s32);                   /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020cae80(s32);                   /* extern */
extern u8 data_ov123_020e460c;
extern u8 data_ov123_020e4610;
extern s32 data_ov123_020e4614;
extern s32 data_ov123_020e4618;
extern M2C_UNK func_ov123_020b3a24;
extern M2C_UNK func_ov123_020b3ef4;
extern M2C_UNK func_ov123_020b46dc;
extern M2C_UNK func_ov123_020b5ac0;

void func_ov123_020b47ec(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if (func_ov123_020ae0c0() == 0) {
        return;
    }
    func_ov123_020cae80(data_ov123_020e4618);
    func_ov123_020ae628();
    func_ov123_020ae260();
    func_ov123_020c8840(data_ov123_020e4614);
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x14);
    if (data_ov123_020e4610 == 0) {
        func_ov123_020b23fc(0, 0);
        func_ov123_020b2410(&func_ov123_020b3a24);
        return;
    }
    switch (data_ov123_020e460c) {                  /* irregular */
        case 0:
            func_ov123_020b23fc(0, 1);
            func_ov123_020b2410(&func_ov123_020b46dc);
            return;
        case 1:
            func_ov123_020b23fc(0, 1);
            func_ov123_020b2410(&func_ov123_020b3ef4);
            return;
        case 2:
            func_ov123_020b23fc(0, 1);
            func_ov123_020b2410(&func_ov123_020b5ac0);
            return;
    }
}

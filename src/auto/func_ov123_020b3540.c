/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020ae628();                      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c8840(s32);                   /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern u8 data_ov123_020e4600;
extern s32 data_ov123_020e4604;
extern M2C_UNK func_ov123_020b4e18;
extern M2C_UNK func_ov123_020bfb84;

void func_ov123_020b3540(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    func_ov123_020ae628();
    func_ov123_020ae260();
    func_ov123_020c8840(data_ov123_020e4604);
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x14);
    switch (data_ov123_020e4600) {                  /* irregular */
        case 0:
            func_ov123_020b23fc(1, 0);
            func_ov123_020b2410(&func_ov123_020bfb84);
            return;
        case 1:
            func_ov123_020b23fc(0, 0);
            func_ov123_020b2410(&func_ov123_020b4e18);
            return;
    }
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ada60();                      /* extern */
s32 func_ov123_020ae0c0();                          /* extern */
M2C_UNK func_ov123_020ae260();                      /* extern */
M2C_UNK func_ov123_020b23c0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b23fc(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c280c();                          /* extern */
M2C_UNK func_ov123_020c29e0();                      /* extern */
M2C_UNK func_ov123_020c3094(u8);                    /* extern */
void *func_ov123_020c35d4();                        /* extern */
s32 func_ov123_020c9820(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_020c9af4(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020ca3a4(M2C_UNK, M2C_UNK);      /* extern */
extern u8 data_ov123_020e4688;
extern M2C_UNK func_ov123_020b8a48;
extern M2C_UNK func_ov123_020c0334;

void func_ov123_020be850(void) {
    if (func_ov123_020c9820(1) != 0) {
        return;
    }
    if (func_ov123_020c9820(0) != 0) {
        return;
    }
    if (func_ov123_020ae0c0() == 0) {
        return;
    }
    do {

    } while (func_ov123_020c280c() == 0);
    func_ov123_020ada60();
    func_ov123_020c9af4(0);
    func_ov123_020ae260();
    func_ov123_020ca3a4(1, 1);
    func_ov123_020ca3a4(0, 0x15);
    if (data_ov123_020e4688 != 1) {
        func_ov123_020c29e0();
        func_ov123_020c3094(M2C_FIELD(func_ov123_020c35d4(), u8 *, 0xF4));
        func_ov123_020b23fc(2, 1);
        func_ov123_020b2410(&func_ov123_020c0334);
        return;
    }
    func_ov123_020b23fc(0, 1);
    func_ov123_020b23c0(0, 0);
    func_ov123_020b2410(&func_ov123_020b8a48);
}

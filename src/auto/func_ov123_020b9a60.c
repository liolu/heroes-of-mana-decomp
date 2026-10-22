/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
u8 func_ov123_020c530c();                           /* extern */
M2C_UNK func_ov123_020c5320();                      /* extern */
extern void *data_ov123_020e465c;
extern M2C_UNK func_ov123_020b99ac;

void func_ov123_020b9a60(void) {
    u8 v;

    M2C_FIELD(data_ov123_020e465c, u8 *, 0x15) = func_ov123_020c530c();
    v                                          = M2C_FIELD(data_ov123_020e465c, u8 *, 0x15);
    switch (v) {
        case 0:
            func_ov123_020c36bc(7);
            break;
        case 1:
            func_ov123_020c36bc(0xE);
            break;
        default:
            return;
    }
    func_ov123_020c5320();
    func_ov123_020b2410(&func_ov123_020b99ac);
}

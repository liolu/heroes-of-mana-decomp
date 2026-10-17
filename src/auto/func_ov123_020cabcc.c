/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK TP_RequestAutoSamplingStopAsync();          /* extern */
M2C_UNK TP_WaitBusy(M2C_UNK);                       /* extern */
s32 func_020158e0(M2C_UNK);                         /* extern */
M2C_UNK func_ov123_020ca49c(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov123_020e4734;

void func_ov123_020cabcc(void) {
    do {
        TP_RequestAutoSamplingStopAsync();
        TP_WaitBusy(4);
    } while (func_020158e0(4) != 0);
    func_ov123_020ca49c(&data_ov123_020e4734);
}

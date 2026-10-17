/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ca49c(s32 **);                /* extern */
M2C_UNK func_ov123_020cb5ec(M2C_UNK, s32);          /* extern */
extern s32 *data_ov123_020e46bc;

void func_ov123_020c1d58(void) {
    func_ov123_020cb5ec(1, *data_ov123_020e46bc);
    func_ov123_020ca49c(&data_ov123_020e46bc);
}

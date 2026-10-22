/* compiler: 1.2/sp3 */
#include "m2c.h"

s64 func_0200f510();                                /* extern */
extern void *data_ov123_020e18dc;

void func_ov123_0209cd6c(void) {
    if (data_ov123_020e18dc == NULL) {
        return;
    }
    M2C_FIELD(data_ov123_020e18dc, s32 *, 8)   = 0;
    M2C_FIELD(data_ov123_020e18dc, s64 *, 0xC) = func_0200f510();
}
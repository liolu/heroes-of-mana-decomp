#include "m2c.h"

s32 func_ov123_0208eed8(u32 *);                     /* extern */
s32 func_ov123_0208f1f0(u32 *);                     /* extern */
M2C_UNK func_ov123_0209104c();                      /* extern */

s32 func_ov123_0208ee8c(u32 *arg0) {
    u32 temp_r0;

    func_ov123_0209104c();
    temp_r0 = *arg0;
    switch (temp_r0) {
    case 2:
    case 3:
        return func_ov123_0208f1f0(arg0);
    case 0:
        return func_ov123_0208eed8(arg0);
    default:
    case 1:
        return 0;
    }
}

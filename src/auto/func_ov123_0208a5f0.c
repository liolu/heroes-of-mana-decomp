/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 *func_ov123_0207a194(s32, s32);                 /* extern */
s32 func_ov123_0207a204(s32);                       /* extern */
M2C_UNK func_ov123_0208a880(s32);                   /* extern */

void func_ov123_0208a5f0(void *arg0) {
    s32 var_r4;

    var_r4 = func_ov123_0207a204(M2C_FIELD(arg0, s32 *, 0x10)) - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        func_ov123_0208a880(*func_ov123_0207a194(M2C_FIELD(arg0, s32 *, 0x10), var_r4));
        var_r4 -= 1;
    } while (var_r4 >= 0);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0208e8bc(s32);                       /* extern */
M2C_UNK func_ov123_0208eab8(s32 *);                 /* extern */

void func_ov123_0209104c(void *arg0) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x5D0);
    if (temp_r0 == 0) {
        return;
    }
    sp0 = temp_r0;
    if (temp_r0 != 0) {
        do {
            temp_r5 = func_ov123_0208e8bc(sp0);
            func_ov123_0208eab8(&sp0);
            sp0 = temp_r5;
        } while (temp_r5 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0x5D0) = 0;
}

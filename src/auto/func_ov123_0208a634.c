/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207a3fc(s32, M2C_UNK *, s32 *);     /* extern */
s32 func_ov123_0207b3f4();                          /* extern */
extern M2C_UNK func_ov123_0208a670;

s32 func_ov123_0208a634(void *arg0) {
    s32 sp0;

    sp0 = func_ov123_0207b3f4();
    if (func_ov123_0207a3fc(M2C_FIELD(arg0, s32 *, 0xC), &func_ov123_0208a670, &sp0) == 0) {
        return 1;
    }
    return 0;
}

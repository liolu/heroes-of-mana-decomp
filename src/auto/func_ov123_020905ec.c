#include "m2c.h"

M2C_UNK func_ov123_0207a20c();                      /* extern */
M2C_UNK func_ov123_0208eadc(void *);                /* extern */
M2C_UNK func_ov123_02090624();                      /* extern */
M2C_UNK func_ov123_02090ff4(void *);                /* extern */

void func_ov123_020905ec(void *arg0) {
    func_ov123_02090624();
    func_ov123_02090ff4(arg0);
    func_ov123_0208eadc(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_ov123_0207a20c();
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

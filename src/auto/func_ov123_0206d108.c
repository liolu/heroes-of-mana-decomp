/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206d164(void *);                /* extern */
M2C_UNK func_ov123_0207465c(void *);                /* extern */
extern M2C_UNK OSi_ThreadInfo;

s32 func_ov123_0206d108(void) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r0 != NULL) {
        if (M2C_FIELD(temp_r0, u8 *, 9) != 0) {
            return func_ov123_0207465c(temp_r0);
        }
        return func_ov123_0206d164(temp_r0);
    }
    return 1;
}

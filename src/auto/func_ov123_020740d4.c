/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OSi_ReferSymbol(s32);                       /* extern */
extern M2C_UNK OSi_ThreadInfo;

void func_ov123_020740d4(s8 arg0) {
    void *temp_r0;

    OSi_ReferSymbol(0x02000BEC);
    temp_r0 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 9) = arg0;
    }
}

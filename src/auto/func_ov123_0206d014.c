/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206d058(void *);                /* extern */
M2C_UNK func_ov123_02074144(void *);                /* extern */
extern M2C_UNK OSi_ThreadInfo;

void func_ov123_0206d014(void) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r4, u8 *, 9) != 0) {
        func_ov123_02074144(temp_r4);
    }
    func_ov123_0206d058(temp_r4);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206d298(void *);                 /* extern */
M2C_UNK func_ov123_020747b4(void *);               /* extern */
extern M2C_UNK OSi_ThreadInfo;

void func_ov123_0206d228(void) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 9) != 0) {
        func_ov123_020747b4(temp_r0);
        return;
    }
    func_ov123_0206d298(temp_r0);
}

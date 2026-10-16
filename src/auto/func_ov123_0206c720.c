/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206c8bc(s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK OSi_ThreadInfo;

void func_ov123_0206c720(void) {
    s32 temp_r1;
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r4 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x60);
    if (temp_r1 == 0) {
        return;
    }
    func_ov123_0206c8bc(M2C_FIELD(temp_r4, s32 *, 0x5C), temp_r1, 0, 0);
    M2C_FIELD(temp_r4, s32 *, 0x60) = 0;
}

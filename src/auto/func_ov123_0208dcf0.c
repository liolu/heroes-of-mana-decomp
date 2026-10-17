/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_ov123_0207b3f4();                          /* extern */
M2C_UNK func_ov123_0208e374(void *);                /* extern */

void func_ov123_0208dcf0(void *arg0) {
    u32 temp_r5;
    void *temp_r3;

    temp_r5 = func_ov123_0207b3f4();
    if (M2C_FIELD(arg0, void **, 8) == NULL) {
        return;
    }
loop_3:
    if (temp_r5 <= (u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x1C) + 0x9C4)) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0x15)  = (u8) (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0x15) | 0x10);
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x1C) = 0x9C4;
    temp_r3                                             = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r3, u8 *, 0x15)                      = (u8) (M2C_FIELD(temp_r3, u8 *, 0x15) & 0xD3);
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, void *, s32), 0x44)(arg0, 1, M2C_FIELD(arg0, void **, 8),
                                                                     M2C_FIELD(arg0, s32 *, 0x48));
    func_ov123_0208e374(arg0 + 8);
    if (M2C_FIELD(arg0, void **, 8) == NULL) {
        return;
    }
    goto loop_3;
}

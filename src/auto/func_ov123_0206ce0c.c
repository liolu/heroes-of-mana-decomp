/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_0206ce94(void *, void *);            /* extern */
s32 func_ov123_0206cf20(void *, void *);            /* extern */
s32 func_ov123_02074578(void *, void *);            /* extern */
extern M2C_UNK OSi_ThreadInfo;

s32 func_ov123_0206ce0c(s32 *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r1 != NULL) {
        if ((u32) (u8) (M2C_FIELD(temp_r1, u8 *, 8) + 0xF6) <= 1U) {
            return func_ov123_0206cf20(arg0, temp_r1);
        }
        if (M2C_FIELD(temp_r1, u8 *, 9) != 0) {
            return func_ov123_02074578(arg0, temp_r1);
        }
        return func_ov123_0206ce94(arg0, temp_r1);
    }
    *arg0 = 0;
    return 0;
}

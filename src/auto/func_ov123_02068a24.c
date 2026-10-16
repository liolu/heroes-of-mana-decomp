/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_ov123_02067bac();                        /* extern */

void func_ov123_02068a24(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r2_2;
    void *var_r3;

    temp_r0   = func_ov123_02067bac();
    temp_r1   = temp_r0 + 0x2000;
    temp_r0_2 = M2C_FIELD(temp_r0, void **, 0x2270);
    if (arg0 == NULL) {
        return;
    }
    if (temp_r0_2 == NULL) {
        return;
    }
    if ((u32) M2C_FIELD(temp_r1, u32 *, 0x274) <= 0xCU) {
        return;
    }
    var_r3 = M2C_FIELD(temp_r0_2, void **, 4);
    if (var_r3 != NULL) {
    loop_7:
        if (var_r3 == arg0) {
            temp_r2 = M2C_FIELD(var_r3, void **, 8);
            if (temp_r2 != NULL) {
                M2C_FIELD(temp_r2, void **, 0xC) = (void *) M2C_FIELD(var_r3, void **, 0xC);
            } else {
                M2C_FIELD(temp_r0_2, void **, 4) = (void *) M2C_FIELD(var_r3, void **, 0xC);
            }
            temp_r2_2 = M2C_FIELD(var_r3, void **, 0xC);
            if (temp_r2_2 != NULL) {
                M2C_FIELD(temp_r2_2, void **, 8) = (void *) M2C_FIELD(var_r3, void **, 8);
            } else {
                M2C_FIELD(temp_r0_2, void **, 8) = (void *) M2C_FIELD(var_r3, void **, 8);
            }
        } else {
            var_r3 = M2C_FIELD(var_r3, void **, 0xC);
            if (var_r3 != NULL) {
                goto loop_7;
            }
        }
    }
    M2C_FIELD(arg0, s32 *, 0xC)      = 0;
    M2C_FIELD(arg0, void **, 8)      = (void *) M2C_FIELD(temp_r0_2, void **, 8);
    M2C_FIELD(temp_r0_2, void **, 8) = arg0;
    temp_r1_2                        = M2C_FIELD(arg0, void **, 8);
    if (temp_r1_2 != NULL) {
        M2C_FIELD(temp_r1_2, void **, 0xC) = arg0;
    } else {
        M2C_FIELD(temp_r0_2, void **, 4) = arg0;
    }
    if (var_r3 == NULL) {
        M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(temp_r0_2, s32 *, 0);
        M2C_FIELD(temp_r0_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r0_2, s32 *, 0) + 1);
    }
}

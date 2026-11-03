/* compiler: 1.2/sp2p3 */
/* near start: 11 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect(s32);                 /* extern */
s32 func_0200fa98(void);                            /* extern */
void func_0200faac(s32);                            /* extern */
extern M2C_UNK OSi_ThreadInfo;
extern M2C_UNK data_ov123_020e0c04;

void func_ov123_02073fe4(s32 arg0) {
    s32 var_r6;
    M2C_UNK *var_r4;
    void *temp_r1;
    void *var_r4_2;
    s32 e;

    e      = func_0200fa98();
    var_r4 = &data_ov123_020e0c04;
    var_r6 = 0;
    do {
        if ((M2C_FIELD(var_r4, u8 *, 0x5A) != 0) && ((s32) (arg0 - M2C_FIELD(var_r4, s32 *, 0x50)) > 0x3BD)) {
            M2C_FIELD(var_r4, u8 *, 0x5A) = 0U;
        }
        var_r6 += 1;
        var_r4 = (void *) ((u8 *) (u8 *) var_r4 + 0x5C);
    } while (var_r6 < 4);
    func_0200faac(e);
    var_r4_2 = M2C_FIELD(&OSi_ThreadInfo, void **, 8);
    if (var_r4_2 == NULL) {
        return;
    }
    do {
        temp_r1 = M2C_FIELD(var_r4_2, void **, 0xA4);
        if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, s32 *, 0) != 0) && (M2C_FIELD(temp_r1, u8 *, 9) != 0) &&
            (M2C_FIELD(temp_r1, u8 *, 8) == 4) && ((u32) M2C_FIELD(M2C_FIELD(temp_r1, void **, 0xC), u8 *, 0x455) < 8U) &&
            ((s32) (arg0 - M2C_FIELD(temp_r1, s32 *, 0x10)) > 0xEF) && (M2C_FIELD(temp_r1, s32 *, 4) == 2)) {
            M2C_FIELD(temp_r1, u8 *, 8)  = 0U;
            M2C_FIELD(temp_r1, s32 *, 4) = 0;
            OS_WakeupThreadDirect(M2C_FIELD(temp_r1, s32 *, 0));
        }
        var_r4_2 = M2C_FIELD(var_r4_2, void **, 0x68);
    } while (var_r4_2 != NULL);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae090();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
s32 func_ov123_020c27ac(void **);                   /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c536c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern s8 data_ov123_020e4688;
extern u16 data_ov123_020e468c;
extern M2C_UNK func_ov123_020be818;
extern M2C_UNK func_ov123_020be990;

void func_ov123_020bea24(void) {
    void *sp4;
    s32 temp_r0;
    s32 var_r3;
    void *var_r2;

    data_ov123_020e468c += 1;
    if ((u32) data_ov123_020e468c < 0x12CU) {
        return;
    }
    func_ov123_020c3658();
    temp_r0 = func_ov123_020c27ac(&sp4);
    if (temp_r0 == 0) {
        data_ov123_020e4688 = 2;
        func_ov123_020c536c(0xF, 1, 1, -1, 0);
        func_ov123_020c36bc(0x12);
        func_ov123_020ae090();
        func_ov123_020b2410(&func_ov123_020be818);
        return;
    }
    var_r3 = 0;
    if (temp_r0 > 0) {
        var_r2 = sp4;
    loop_6:
        if (M2C_FIELD(var_r2, u8 *, 0x28) == 2) {
            var_r3 += 1;
            var_r2 += 0x2A;
            if (var_r3 < temp_r0) {
                goto loop_6;
            }
        }
    }
    if (var_r3 == temp_r0) {
        data_ov123_020e4688 = 3;
        func_ov123_020c536c(0xE, 1, 1, -1, 0);
        func_ov123_020c36bc(0x12);
        func_ov123_020ae090();
        func_ov123_020b2410(&func_ov123_020be818);
        return;
    }
    data_ov123_020e4688 = 1;
    func_ov123_020c36bc(0xF);
    func_ov123_020b2410(&func_ov123_020be990);
}

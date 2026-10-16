/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_JoinThread(s32);                         /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_ov123_0206cf80();                      /* extern */
M2C_UNK func_ov123_0206d014();                      /* extern */
M2C_UNK func_ov123_0206d2f8();                      /* extern */
M2C_UNK func_ov123_0206d3e4();                      /* extern */
M2C_UNK func_ov123_02070df8(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov123_02073454(void *);                /* extern */
M2C_UNK func_ov123_0207346c(void *);                /* extern */

s32 func_ov123_02072cc4(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s8 temp_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    var_r1  = 1;
    temp_r0 = M2C_FIELD(temp_r4, s8 *, 0x73);
    if ((temp_r0 != 0) && (temp_r0 != 4)) {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        OS_JoinThread(M2C_FIELD(temp_r4, s32 *, 0x68) + 0x20);
        func_ov123_0206d014();
        func_ov123_0206cf80();
        func_ov123_0206d2f8();
    }
    func_ov123_0206d3e4();
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) & ~6);
    if (M2C_FIELD(temp_r4, s8 *, 0x73) == 2) {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x68);
    } else {
        var_r0 = M2C_FIELD(temp_r4, s32 *, 0x64);
    }
    func_ov123_02070df8(var_r0, 0);
    temp_r5 = func_0200fa98();
    func_ov123_02073454(temp_r4);
    func_ov123_0207346c(temp_r4);
    func_0200faac(temp_r5);
    M2C_FIELD(temp_r4, s16 *, 0x70) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x70) | 0x20);
    return 0;
}

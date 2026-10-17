/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, void *, M2C_UNK);   /* extern */
M2C_UNK MIi_CpuCopy16(u16 *, void *, s32);          /* extern */
M2C_UNK func_ov123_02079a50(s32);                   /* extern */
s32 func_ov123_02099548();                          /* extern */
s32 func_ov123_02099970();                          /* extern */
u32 func_ov123_02099d64(u16 *);                     /* extern */
M2C_UNK func_ov123_0209a880(M2C_UNK);               /* extern */
M2C_UNK func_ov123_0209bce0(M2C_UNK, s32);          /* extern */
extern void *data_ov123_020e1748;

s32 func_ov123_0209ac98(u16 *arg0, void *arg1, s32 arg2, s32 arg3) {
    u32 var_r5;

    if (arg0 == NULL) {
        return 0;
    }
    if ((func_ov123_02099548() != 0) || (M2C_FIELD(data_ov123_020e1748, s32 *, 0x24) != 0)) {
        return 0;
    }
    M2C_FIELD(data_ov123_020e1748, s32 *, 0x70) = arg2;
    M2C_FIELD(data_ov123_020e1748, s32 *, 0x74) = arg3;
    if ((arg0 == NULL) || (*arg0 == 0)) {
        var_r5 = 0;
    } else {
        MIi_CpuClear16(0, data_ov123_020e1748 + 0x2E, 0x34);
        if (func_ov123_02099d64(arg0) > 0x19U) {
            var_r5 = 0x19;
        } else {
            var_r5 = func_ov123_02099d64(arg0);
        }
        MIi_CpuCopy16(arg0, data_ov123_020e1748 + 0x2E, var_r5 * 2);
    }
    M2C_FIELD((data_ov123_020e1748 + (var_r5 * 2)), s16 *, 0x2E) = 0;
    if (func_ov123_02099970() != 4) {
        func_ov123_0209bce0(2, 0xFFFF1596);
        return 1;
    }
    func_ov123_0209a880(1);
    func_ov123_02079a50(M2C_FIELD(data_ov123_020e1748, s32 *, 0x68));
    return 1;
}

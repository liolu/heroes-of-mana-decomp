/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(u8 *, void *, M2C_UNK);         /* extern */
u16 WM_GetDispersionScanPeriod();                   /* extern */
s32 func_ov123_02067800(M2C_UNK);                   /* extern */
M2C_UNK func_ov123_02067bbc(M2C_UNK);               /* extern */
extern u8 data_ov123_020d4e88;
extern u8 data_ov123_020d4e90;
extern void *data_ov123_020df180;

void func_ov123_020678c4(u8 *arg0, u8 *arg1, M2C_UNK arg2) {
    s16 var_r2;
    s32 var_r1;
    u16 var_r0;
    u8 *var_r4;

    var_r4 = arg1;
    func_ov123_02067bbc(arg2);
    M2C_FIELD(data_ov123_020df180, void **, 0x2288) = (void *) (data_ov123_020df180 + 0x1500);
    M2C_FIELD(data_ov123_020df180, s16 *, 0x228C)   = 0x400;
    M2C_FIELD(data_ov123_020df180, s16 *, 0x228E)   = (s16) ((s32) (1 << func_ov123_02067800(0)) >> 1);
    var_r0                                          = M2C_FIELD(data_ov123_020df180, u16 *, 0x2268);
    if (var_r0 == 0) {
        var_r0 = WM_GetDispersionScanPeriod();
    }
    M2C_FIELD(data_ov123_020df180, u16 *, 0x2290) = var_r0;
    if ((M2C_FIELD(data_ov123_020df180, s32 *, 0x2264) & 0x300000) != 0x300000) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    M2C_FIELD(data_ov123_020df180, s16 *, 0x2298) = var_r2;
    if (arg0 == NULL) {
        MI_CpuCopy8(&data_ov123_020d4e88, data_ov123_020df180 + 0x2292, 6);
    } else {
        MI_CpuCopy8(arg0, data_ov123_020df180 + 0x2292, 6);
    }
    if ((var_r4 == NULL) || (var_r4 == &data_ov123_020d4e90)) {
        MI_CpuCopy8(&data_ov123_020d4e90, data_ov123_020df180 + 0x229C, 0x20);
        M2C_FIELD(data_ov123_020df180, s16 *, 0x229A) = 0;
    } else {
        MI_CpuCopy8(var_r4, data_ov123_020df180 + 0x229C, 0x20);
        var_r1 = 0;
    loop_12:
        if (*var_r4 != 0) {
            var_r1 += 1;
            var_r4 += 1;
            if (var_r1 < 0x20) {
                goto loop_12;
            }
        }
        M2C_FIELD(data_ov123_020df180, s16 *, 0x229A) = (s16) var_r1;
    }
    M2C_FIELD(data_ov123_020df180, s32 *, 0x2284) = 0;
}

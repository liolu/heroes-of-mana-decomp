/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_ov123_02071014(void *, void *, void *);  /* extern */
void *func_ov123_0207108c(void *, void *, u16);     /* extern */
extern void *data_ov123_020e0a10;

void *func_ov123_020710b8(void *arg0, void *arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;
    void *temp_r5_2;
    u8 *var_r4;

    var_r4                      = (u8 *) (arg0 + 0x80);
    M2C_FIELD(arg0, s8 *, 0x73) = (s8) M2C_FIELD(arg1, s8 *, 0);
    M2C_FIELD(arg0, s8 *, 0x72) = (s8) M2C_FIELD(arg1, s8 *, 1);
    if (M2C_FIELD(arg1, u16 *, 2) != 0) {
        M2C_FIELD(arg0, void **, 0x64) = var_r4;
        M2C_FIELD(var_r4, u16 *, 0xFC) = (u16) M2C_FIELD(arg1, u16 *, 4);
        temp_r5                        = var_r4;
        temp_r0 = func_ov123_0207108c(func_ov123_0207108c(func_ov123_02071014(var_r4 + 0x114, var_r4, arg1 + 0x10),
                                                          arg0 + 0x3C, M2C_FIELD(arg1, u16 *, 2)),
                                      arg0 + 0x50, M2C_FIELD(arg1, u16 *, 8));
        M2C_FIELD((temp_r5 + 0x100), u16 *, 0xA) = (u16) M2C_FIELD(arg1, u16 *, 0xE);
        M2C_FIELD(temp_r5, s32 *, 0x110)         = 0;
        temp_r1                                  = M2C_FIELD(temp_r5, s32 *, 0x110);
        var_r4                                   = (u8 *) (temp_r0);
        M2C_FIELD(temp_r5, s32 *, 0x10C)         = temp_r1;
    }
    if (M2C_FIELD(arg1, u16 *, 6) == 0) {
        M2C_FIELD(arg0, void **, 0x68) = (void *) M2C_FIELD(data_ov123_020e0a10, void **, 0x68);
    } else {
        M2C_FIELD(arg0, void **, 0x68)    = var_r4;
        M2C_FIELD(var_r4, void **, 0x10C) = arg0;
        temp_r5_2                         = var_r4;
        temp_r0_2                         = func_ov123_0207108c(
            func_ov123_0207108c(func_ov123_0207108c(func_ov123_02071014(var_r4 + 0x110, var_r4, arg1 + 0x14), arg0 + 0x48,
                                                                            M2C_FIELD(arg1, u16 *, 6)),
                                                        arg0 + 0x58, M2C_FIELD(arg1, u16 *, 0xA)),
            var_r4 + 0xF8, M2C_FIELD(arg1, u16 *, 0xC));
        var_r4                             = (u8 *) (temp_r0_2);
        M2C_FIELD(temp_r5_2, s32 *, 0x108) = 0;
        M2C_FIELD(temp_r5_2, s32 *, 0x104) = M2C_FIELD(temp_r5_2, s32 *, 0x108);
    }
    return var_r4;
}

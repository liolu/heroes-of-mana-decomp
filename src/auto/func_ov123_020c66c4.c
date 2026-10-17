/* compiler: 1.2/sp3 */
#include "m2c.h"

s16 WM_GetDispersionBeaconPeriod();                 /* extern */
M2C_UNK func_0200fddc();                            /* extern */
s32 func_ov123_020c76c8();                          /* extern */
M2C_UNK func_ov123_020c7738(M2C_UNK);               /* extern */
extern M2C_UNK data_ov123_020de59c;
extern M2C_UNK data_ov123_020de5b4;
extern M2C_UNK data_ov123_020de5cc;
extern M2C_UNK (*data_ov123_020e4704)(M2C_UNK, M2C_UNK *, s32);
extern void *data_ov123_020e4708;

s32 func_ov123_020c66c4(s32 arg0, s16 arg1, s16 arg2) {
    s16 var_r4;

    if (M2C_FIELD(data_ov123_020e4708, s32 *, 0x40) != 1) {
        func_0200fddc();
    }
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A4) = 0x180;
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A0) = 0xE0;
    if (data_ov123_020e4704 != NULL) {
        data_ov123_020e4704(0x08000000, &data_ov123_020de59c, M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A4));
    }
    if (data_ov123_020e4704 != NULL) {
        data_ov123_020e4704(0x08000000, &data_ov123_020de5b4, M2C_FIELD(data_ov123_020e4708, s32 *, 0x12A0));
    }
    M2C_FIELD(data_ov123_020e4708, s32 *, 0x44) = arg0;
    func_ov123_020c7738(3);
    M2C_FIELD(data_ov123_020e4708, s16 *, 0xC)  = arg1;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x32) = arg2;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x18) = WM_GetDispersionBeaconPeriod();
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x34) = 0xD0;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x36) = 0x44;
    var_r4                                      = 1;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x10) = 2;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x16) = 0;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x12) = 0;
    M2C_FIELD(data_ov123_020e4708, s16 *, 0xE)  = 1;
    if (arg0 != 2) {
        var_r4 = 0;
    }
    M2C_FIELD(data_ov123_020e4708, s16 *, 0x14) = var_r4;
    if ((arg0 == 0) || (arg0 == 2) || (arg0 == 4)) {
        return func_ov123_020c76c8();
    }
    if (data_ov123_020e4704 != NULL) {
        data_ov123_020e4704(0x08000000, &data_ov123_020de5cc, arg0);
    }
    return 0;
}

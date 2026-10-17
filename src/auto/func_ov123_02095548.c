/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 OS_GetThreadPriority(s32);                      /* extern */
s32 func_02024d8c(s32, M2C_UNK *);                  /* extern */
s32 func_ov123_02094bbc(s32, void *, void *);       /* extern */
M2C_UNK func_ov123_02097308(s32, s32);              /* extern */
s32 func_ov123_020973d4(s32);                       /* extern */
s32 func_ov123_0209746c(s32);                       /* extern */
M2C_UNK func_ov123_020a5a9c(M2C_UNK *);             /* extern */
extern M2C_UNK OSi_ThreadInfo;
extern M2C_UNK data_ov123_020dbf0c;
extern M2C_UNK data_ov123_020dbffc;
extern void *data_ov123_020e1678;
extern M2C_UNK data_ov123_020e167c;

s32 func_ov123_02095548(s32 arg0) {
    if (func_02024d8c(M2C_FIELD(&data_ov123_020dbf0c, s32 *, 0), &data_ov123_020dbffc) != 0) {
        M2C_FIELD(&data_ov123_020dbf0c, s32 *, 0x14) = 1;
    }
    M2C_FIELD(&data_ov123_020dbf0c, s32 *, 0xC)  = (s32) M2C_FIELD(data_ov123_020e1678, s32 *, 0x120C);
    M2C_FIELD(&data_ov123_020dbf0c, s32 *, 0x10) = (s32) M2C_FIELD(data_ov123_020e1678, s32 *, 0x1210);
    if (func_ov123_0209746c(M2C_FIELD(data_ov123_020e1678, s32 *, 0x1314)) != 0) {
        return 4;
    }
    if (arg0 == 1) {
        func_ov123_020a5a9c(&data_ov123_020e167c);
    }
    M2C_FIELD(data_ov123_020e1678, s32 *, 0x1004) = func_ov123_02094bbc(
        M2C_FIELD(data_ov123_020e1678, s32 *, 0x1314), data_ov123_020e1678 + 0x1200, data_ov123_020e1678 + 0x11CC);
    if (M2C_FIELD(data_ov123_020e1678, s32 *, 0x1004) != 0) {
        return 4;
    }
    if (func_ov123_020973d4(M2C_FIELD(data_ov123_020e1678, s32 *, 0x1314)) != 0) {
        return 4;
    }
    func_ov123_02097308(M2C_FIELD(data_ov123_020e1678, s32 *, 0x1314),
                        OS_GetThreadPriority(M2C_FIELD(&OSi_ThreadInfo, s32 *, 4)) - 1);
    return 0;
}

#include "m2c.h"

M2C_UNK DC_FlushRange(M2C_UNK *);                   /* extern */
M2C_UNK MIi_CpuCopy16(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_ov120_020f46ec;

void func_ov120_020ec220(s32 arg0, M2C_UNK arg1) {
    DC_FlushRange(&data_ov120_020f46ec);
    MIi_CpuCopy16(&data_ov120_020f46ec, arg0 + 0x07000400, arg1);
}

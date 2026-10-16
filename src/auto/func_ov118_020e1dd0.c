#include "m2c.h"

M2C_UNK DC_FlushRange(M2C_UNK *);                   /* extern */
M2C_UNK MIi_CpuCopy16(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_ov118_020e3330;

void func_ov118_020e1dd0(s32 arg0, M2C_UNK arg1) {
    DC_FlushRange(&data_ov118_020e3330);
    MIi_CpuCopy16(&data_ov118_020e3330, arg0 + 0x07000000, arg1);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK DC_FlushRange(s32, M2C_UNK);                /* extern */
M2C_UNK GXS_LoadOAM(s32, M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK GX_LoadOAM(s32, M2C_UNK, M2C_UNK);          /* extern */
extern s32 data_ov123_020e4750;

void func_ov123_020caf1c(void) {
    DC_FlushRange(data_ov123_020e4750, 0x800);
    GX_LoadOAM(data_ov123_020e4750, 0, 0x400);
    GXS_LoadOAM(data_ov123_020e4750 + 0x400, 0, 0x400);
}

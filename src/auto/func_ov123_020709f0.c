/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov123_020df1ec;
extern s32 data_ov123_020df1fc;
extern s32 data_ov123_020df220;
extern M2C_UNK data_ov123_020df238;
extern void *data_ov123_020e0a00;
extern s32 data_ov123_020e0a0c;

void func_ov123_020709f0(void) {
    data_ov123_020df220                       = M2C_FIELD(data_ov123_020e0a00, s32 *, 4);
    data_ov123_020df1ec                       = M2C_FIELD(data_ov123_020e0a00, s32 *, 8);
    data_ov123_020df1fc                       = M2C_FIELD(data_ov123_020e0a00, s32 *, 0xC);
    M2C_FIELD(&data_ov123_020df238, s32 *, 0) = (s32) M2C_FIELD(data_ov123_020e0a00, s32 *, 0x10);
    M2C_FIELD(&data_ov123_020df238, s32 *, 4) = (s32) M2C_FIELD(data_ov123_020e0a00, s32 *, 0x14);
    data_ov123_020e0a0c |= 2;
}

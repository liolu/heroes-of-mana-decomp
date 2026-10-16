/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_ov123_020a9e9c();                          /* extern */
extern s32 data_ov123_020dd57c;
extern s32 data_ov123_020e3068;
extern s32 data_ov123_020e30a8;

s32 func_ov123_020a9bb8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) data_ov123_020e3068;
    if (data_ov123_020dd57c == -1) {
        M2C_FIELD(arg0, s32 *, 4) = -1;
    } else {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (data_ov123_020dd57c - func_ov123_020a9e9c());
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) data_ov123_020e30a8;
    return 1;
}

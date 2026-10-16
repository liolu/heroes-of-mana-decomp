/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

void func_ov123_020aa8b8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0)    = 0x67452301;
    M2C_FIELD(arg0, s32 *, 4)    = 0xEFCDAB89;
    M2C_FIELD(arg0, s32 *, 8)    = 0x98BADCFE;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0x10325476;
}

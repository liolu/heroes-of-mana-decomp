/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_02077fb4(void *arg0) {
    MI_CpuFill8(arg0, 0, 0x5C);
    M2C_FIELD(arg0, s32 *, 0)    = 0x67452301;
    M2C_FIELD(arg0, s32 *, 4)    = 0xEFCDAB89;
    M2C_FIELD(arg0, s32 *, 8)    = 0x98BADCFE;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0x10325476;
    M2C_FIELD(arg0, s32 *, 0x10) = 0xC3D2E1F0;
}

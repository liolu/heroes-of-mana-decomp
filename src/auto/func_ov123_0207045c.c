/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_SetThreadPriority(M2C_UNK *, s32);       /* extern */
extern s32 data_ov123_020d9840;
extern M2C_UNK data_ov123_020df3bc;
extern M2C_UNK data_ov123_020df47c;

void func_ov123_0207045c(s32 arg0) {
    data_ov123_020d9840 = arg0;
    OS_SetThreadPriority(&data_ov123_020df47c, arg0);
    OS_SetThreadPriority(&data_ov123_020df3bc, arg0);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK func_ov123_020761b0(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK data_ov123_020d9920;
extern M2C_UNK data_ov123_020d9924;
extern M2C_UNK data_ov123_020d9928;

void func_ov123_0207614c(M2C_UNK arg0) {
    M2C_UNK sp0[12];

    func_ov123_020761b0(sp0, &data_ov123_020d9920, arg0);
    func_ov123_020761b0(sp0 + 4, &data_ov123_020d9924, arg0);
    func_ov123_020761b0(sp0 + 8, &data_ov123_020d9928, arg0);
    MI_CpuCopy8(sp0, arg0, 0x30);
}

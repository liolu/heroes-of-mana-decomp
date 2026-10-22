/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206d27c(M2C_UNK *);
M2C_UNK func_ov123_0206d2e0(s32);
M2C_UNK func_ov123_0206d318();
M2C_UNK func_ov123_0206d3bc();
M2C_UNK func_ov123_0206d3fc(void *);
extern M2C_UNK func_ov123_02071950;

s32 func_ov123_020712f8(void *arg0) {
    s8 temp_r0;
    s32 temp_r1;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    func_ov123_0206d3fc(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s8 *, 0x73);
    temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x68);
    switch (temp_r0) {
        default:
            break;
        case 0:
        case 4:
            func_ov123_0206d2e0(temp_r1 + 0x20);
            func_ov123_0206d318();
            break;
        case 1:
            func_ov123_0206d318();
            func_ov123_0206d3bc();
            func_ov123_0206d27c(&func_ov123_02071950);
            break;
        case 2:
            func_ov123_0206d3bc();
            break;
    }
    M2C_FIELD(temp_r4, s16 *, 0x70) = 1;
    return 0;
}

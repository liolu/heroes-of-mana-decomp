#include "m2c.h"

M2C_UNK MIi_CheckDma0SourceAddress(s32, M2C_UNK, s32, M2C_UNK);
void func_01ff81f4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, u32 arg3);

void MI_DmaCopy16(s32 param_1, M2C_UNK param_2, M2C_UNK param_3, u32 param_4) {
    volatile u32 *ctrl;

    if (param_4 == 0) {
        return;
    }
    MIi_CheckDma0SourceAddress(param_1, param_2, param_4, 0);
    ctrl = (volatile u32 *) (0x040000B0 + (((param_1 * 3) + 2) * 4));
    while (*ctrl & 0x80000000) {
    }
    func_01ff81f4(param_1, param_2, param_3, (param_4 >> 1) | 0x80000000);
    while (*ctrl & 0x80000000) {
    }
}

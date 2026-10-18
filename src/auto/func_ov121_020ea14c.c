/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov121_020f5b80;
extern M2C_UNK data_ov121_020f60a4;

void func_ov121_020ea14c(void) {
    M2C_UNK *var_r2;
    s32 var_r1;

    var_r2 = &data_ov121_020f60a4;
    var_r1 = 0;
    do {
        var_r1 += 1;
        M2C_FIELD(var_r2, s32 *, 0x58) = (s32) (M2C_FIELD(var_r2, s32 *, 0x58) & ~1);
        var_r2                         = (void *) ((u8 *) (u8 *) var_r2 + 0x5C);
    } while (var_r1 < 0xF);
    M2C_FIELD(&data_ov121_020f5b80, s32 *, 0x498) = (s32) (M2C_FIELD(&data_ov121_020f5b80, s32 *, 0x498) | 4);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_ov112_020ed784;
void func_ov112_020ea5fc(void) {
    u8 *var_r3;
    s32 var_r2;
    u16 temp_r1;
    void *temp_r0;
    var_r3 = &data_ov112_020ed784;
    var_r2 = 0;
    do {
        temp_r0 = ((void *) ((u8 *) var_r3 + 0x200));
        var_r2 += 1;
        M2C_FIELD(var_r3, u16 *, 0x202) = (u16) (M2C_FIELD(var_r3, u16 *, 0x202) & ~4);
        temp_r1                         = M2C_FIELD(var_r3, u16 *, 0x202);
        M2C_FIELD(temp_r0, s16 *, 2)    = (s16) (temp_r1 & ~8);
        var_r3 += 0x204;
    } while (var_r2 < 0xB);
}

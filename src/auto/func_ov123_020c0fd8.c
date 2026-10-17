/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae580(M2C_UNK *, M2C_UNK *);  /* extern */
extern M2C_UNK data_ov123_020de250;
extern M2C_UNK func_0200bb64;

void func_ov123_020c0fd8(void) {
    func_ov123_020ae580(&data_ov123_020de250, &func_0200bb64);
    *(volatile u16 *) 0x04001008 = (*(volatile u16 *) 0x04001008 & ~3) | 3;
    *(volatile u16 *) 0x0400100A = (*(volatile u16 *) 0x0400100A & ~3) | 3;
    *(volatile u16 *) 0x04000008 = (*(volatile u16 *) 0x04000008 & ~3) | 3;
    *(volatile u16 *) 0x0400000A = (*(volatile u16 *) 0x0400000A & ~3) | 3;
    *(volatile u16 *) 0x0400000C = (*(volatile u16 *) 0x0400000C & ~3) | 3;
}

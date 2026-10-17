/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae580(M2C_UNK *, M2C_UNK *);  /* extern */
extern M2C_UNK GX_LoadBGPltt;
extern M2C_UNK data_ov123_020dde24;
extern M2C_UNK data_ov123_020dde3c;
extern M2C_UNK data_ov123_020dde54;
extern M2C_UNK func_0200bb64;
extern M2C_UNK func_0200be04;

void func_ov123_020b6fe4(void) {
    func_ov123_020ae580(&data_ov123_020dde24, &func_0200be04);
    func_ov123_020ae580(&data_ov123_020dde3c, &GX_LoadBGPltt);
    func_ov123_020ae580(&data_ov123_020dde54, &func_0200bb64);
    *(volatile u16 *) 0x04001008 = (*(volatile u16 *) 0x04001008 & ~3) | 3;
    *(volatile u16 *) 0x0400100A = (*(volatile u16 *) 0x0400100A & ~3) | 3;
    *(volatile u16 *) 0x04000008 = (*(volatile u16 *) 0x04000008 & ~3) | 3;
    *(volatile u16 *) 0x0400000A = (*(volatile u16 *) 0x0400000A & ~3) | 3;
    *(volatile u16 *) 0x0400000C = (*(volatile u16 *) 0x0400000C & ~3) | 3;
}

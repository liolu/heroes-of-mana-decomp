/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae580(M2C_UNK *, M2C_UNK *);  /* extern */
extern M2C_UNK GX_LoadBGPltt;
extern M2C_UNK GX_LoadOBJPltt;
extern M2C_UNK data_ov123_020ddf1c;
extern M2C_UNK data_ov123_020ddf30;
extern M2C_UNK data_ov123_020ddf48;
extern M2C_UNK data_ov123_020ddf60;
extern M2C_UNK func_0200bb64;
extern M2C_UNK func_0200be04;

void func_ov123_020ba2e0(void) {
    func_ov123_020ae580(&data_ov123_020ddf1c, &GX_LoadOBJPltt);
    func_ov123_020ae580(&data_ov123_020ddf30, &func_0200be04);
    func_ov123_020ae580(&data_ov123_020ddf48, &GX_LoadBGPltt);
    func_ov123_020ae580(&data_ov123_020ddf60, &func_0200bb64);
    *(volatile u16 *) 0x04001008 = (*(volatile u16 *) 0x04001008 & ~3) | 3;
    *(volatile u16 *) 0x0400100A = (*(volatile u16 *) 0x0400100A & ~3) | 3;
    *(volatile u16 *) 0x04000008 = (*(volatile u16 *) 0x04000008 & ~3) | 2;
    *(volatile u16 *) 0x0400000A = (*(volatile u16 *) 0x0400000A & ~3) | 3;
    *(volatile u16 *) 0x0400000C = (*(volatile u16 *) 0x0400000C & ~3) | 3;
}

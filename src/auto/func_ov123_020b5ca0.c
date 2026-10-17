/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae580(M2C_UNK *, M2C_UNK *);  /* extern */
extern M2C_UNK data_ov123_020dddd4;
extern M2C_UNK func_0200bb64;

void func_ov123_020b5ca0(void) {
    func_ov123_020ae580(&data_ov123_020dddd4, &func_0200bb64);
    *(u16 *) 0x04001008 = (*(u16 *) 0x04001008 & ~3) | 3;
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & ~3) | 3;
    *(u16 *) 0x0400000A = (*(u16 *) 0x0400000A & ~3) | 3;
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & ~3) | 3;
}

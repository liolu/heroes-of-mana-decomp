#include "m2c.h"

M2C_UNK func_02009754(u16);                         /* extern */
extern u16 data_02038580;

u16 func_0200a470(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_02038580 |= temp_r4;
    func_02009754(temp_r4);
    return temp_r4;
}

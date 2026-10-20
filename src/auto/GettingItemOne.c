/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_02002b6c(s32, s32, u32);               /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac744;

void GettingItemOne(void *arg0, void *arg1) {

    func_02002b6c(arg0, arg1, (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C);
}

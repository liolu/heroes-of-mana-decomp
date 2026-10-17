/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK AddPutOrderSub(s32, s32);              /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a81d0;

void AddPutOrder(s32 arg0) {
    AddPutOrderSub(data_ov000_02051548 + 0x4AC, arg0);
}

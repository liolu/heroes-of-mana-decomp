/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WH_SendData(s32 *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_ov003_020aaa3c;
extern s32 data_ov003_020b5374;
extern M2C_UNK OkSend2;

void Send_startTrsTrig(void) {
    data_ov003_020b5374 = 0x98765432;
    WH_SendData(&data_ov003_020b5374, 4, &OkSend2);
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncMessageEnd();                      /* extern */
M2C_UNK MessagePut(s32);                   /* extern */
extern M2C_UNK data_ov003_020ac304;

void MessagePutAndWait(M2C_UNK arg0) {
    MessagePut(arg0);
    WaitSyncMessageEnd();
}

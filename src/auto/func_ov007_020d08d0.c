#include "m2c.h"

M2C_UNK Routine_FadeOutAllByCount(M2C_UNK);               /* extern */
M2C_UNK Routine_FadeInAllByCount(M2C_UNK);               /* extern */
M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK CancelPutShipInner();                      /* extern */
M2C_UNK WaitShipInnerToBtlField();                      /* extern */
M2C_UNK StartPictureEvent(M2C_UNK);               /* extern */

void func_ov007_020d08d0(M2C_UNK arg0) {
    WaitSyncCounter(0x10);
    CancelPutShipInner();
    WaitShipInnerToBtlField();
    Routine_FadeOutAllByCount(0x20);
    StartPictureEvent(arg0);
    Routine_FadeInAllByCount(0x20);
    WaitSyncCounter(0x20);
}

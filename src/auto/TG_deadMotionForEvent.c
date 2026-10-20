/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK ObjSet(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Routine_SoundEffect(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020ad304;

void TG_deadMotionForEvent(void *arg0) {

    WaitSyncCounter(8);
    ObjSet(arg0, 0xE, 7, 0);
    WaitSyncCounter(0x10);
    ObjSet(arg0, 0xE, 9, 0);
    ObjSet(arg0, 0x1B, 1, 0);
    Routine_SoundEffect(0x6C);
    WaitSyncCounter(0x10);
    ObjSet(arg0, 0x15, 1, 0);
}

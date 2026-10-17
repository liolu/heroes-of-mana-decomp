#include "m2c.h"

M2C_UNK WaitSyncCounter(M2C_UNK);               /* extern */
M2C_UNK Routine_BGMchange(M2C_UNK);               /* extern */
M2C_UNK Routine_BGMvolChange(M2C_UNK, M2C_UNK);      /* extern */

void func_ov105_020d0160(M2C_UNK arg0) {
    Routine_BGMvolChange(0, 0x1E);
    WaitSyncCounter(0x28);
    Routine_BGMchange(arg0);
    Routine_BGMvolChange(0x64, 1);
    WaitSyncCounter(5);
}

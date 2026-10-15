#include "m2c.h"

extern M2C_UNK sCallbackTable;

void SNDi_IncAlarmId(s32 arg0) {
    s32 temp_r1;

    temp_r1                     = (arg0 * 0xC) + (s32) &sCallbackTable;
    M2C_FIELD(temp_r1, u8 *, 8) = (u8) (M2C_FIELD(temp_r1, u8 *, 8) + 1);
}

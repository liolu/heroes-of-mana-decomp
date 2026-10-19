/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
void *SearchComObjByComno(void *, s32);             /* extern */
M2C_UNK Delete_MissionStartCompleteWinLose();                      /* extern */
M2C_UNK MoveOut_MissionStartAndComplete(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020acb48;

void delete__MISSION_START(M2C_UNK arg0, s32 arg5) {
    void *temp_r0;

    MoveOut_MissionStartAndComplete(arg0);
loop_1:
    temp_r0 = SearchComObjByComno(data_ov000_02051548 + 0x78C, 0xFFA5);
    if ((temp_r0 != NULL) && (((u32) (M2C_FIELD(temp_r0, s32 *, 0xC) << 0x16) >> 0x1B) == 0x12)) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
        OS_SleepThread(0);
        goto loop_1;
    }
    Delete_MissionStartCompleteWinLose();
}

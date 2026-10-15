#include "m2c.h"

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

s32 MBi_IsTaskAvailable();

M2C_UNK MBi_SetTask(s32, M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 mbi_task_work;

void MBi_EndTaskThread(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if (MBi_IsTaskAvailable() != 0) {
        MBi_SetTask(mbi_task_work + 0xC4, 0, arg0, 0);
    }
    func_0200faac(temp_r4);
}

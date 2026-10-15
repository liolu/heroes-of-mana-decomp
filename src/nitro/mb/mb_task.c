#include "m2c.h"

extern s32 mbi_task_work;
M2C_UNK MI_CpuFill8(M2C_UNK, M2C_UNK, M2C_UNK);

s32 MBi_IsTaskAvailable(void) {
    if (mbi_task_work != 0) {
        return 1;
    }
    return 0;
}

void MBi_InitTaskInfo(M2C_UNK arg0) {
    MI_CpuFill8(arg0, 0, 0x20);
}

s32 MBi_IsTaskBusy(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1F) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}

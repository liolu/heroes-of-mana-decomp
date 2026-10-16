/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK SND_FlushCommand(M2C_UNK);                  /* extern */
s32 SND_GetCurrentCommandTag();                     /* extern */
M2C_UNK SND_StopTimer(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK SND_WaitForCommandProc(s32);                /* extern */
M2C_UNK ShutdownStrm(void *);                       /* extern */
M2C_UNK func_02016448(void *);                      /* extern */
M2C_UNK func_02016460(void *);                      /* extern */

void func_02004874(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        SND_StopTimer(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_02016448(arg0 + 8);
        func_02016460(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = SND_GetCurrentCommandTag();
        SND_FlushCommand(1);
        SND_WaitForCommandProc(temp_r5);
    }
    ShutdownStrm(arg0);
}

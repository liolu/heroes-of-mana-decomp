#include "m2c.h"

extern M2C_UNK OSi_SystemCallbackInSwitchThread;

s32 OSi_GetUnusedThreadId(void) {
    return M2C_FIELD(&OSi_SystemCallbackInSwitchThread, s32 *, 0x20) =
               (s32) (M2C_FIELD(&OSi_SystemCallbackInSwitchThread, s32 *, 0x20) + 1);
}

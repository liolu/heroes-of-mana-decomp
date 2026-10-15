#include "m2c.h"

M2C_UNK FSi_ReleaseCommand(void *, s32);

s32 FSi_TranslateCommand(void *, s32);

s32 FSi_NextCommand(s32);

M2C_UNK FSi_ExecuteAsyncCommand();

s32 FSi_ExecuteSyncCommand(void *arg0) {
    FSi_ReleaseCommand(arg0, FSi_TranslateCommand(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (FSi_NextCommand(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        FSi_ExecuteAsyncCommand();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}

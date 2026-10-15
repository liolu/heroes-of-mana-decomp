#include "m2c.h"

M2C_UNK func_02013190(M2C_UNK *);

s32 FSi_FindPath(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 FSi_SendCommand(void *, M2C_UNK);

s32 FS_ConvertPathToFileID(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_02013190(sp0);
    if (FSi_FindPath(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}

s32 FS_OpenFileDirect(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 8)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x38) = arg4;
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = arg3;
    if (FSi_SendCommand(arg0, 7) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC) | 0x10) & ~0x20);
    return 1;
}

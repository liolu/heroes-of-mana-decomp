#include "m2c.h"

M2C_UNK FS_CancelFile(s32);
M2C_UNK func_0201360c(void *, M2C_UNK, M2C_UNK);

M2C_UNK FS_SeekFile(void *, s32, M2C_UNK);
M2C_UNK func_020134b8(s32);

void CancelFileStream(s32 arg0) {
    FS_CancelFile(arg0 + 0x5C);
}

void ReadFileStream(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    FS_SeekFile(arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0xA4) + arg3, 0);
    func_0201360c(arg0 + 0x5C, arg1, arg2);
}

void CloseFileStream(s32 arg0) {
    func_020134b8(arg0 + 0x5C);
}

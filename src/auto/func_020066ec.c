/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 NNS_SndArcGetFileAddress(M2C_UNK);              /* extern */
extern M2C_UNK CancelFileStream;
extern M2C_UNK CloseFileStream;
extern M2C_UNK ReadFileStream;
extern M2C_UNK ReadMemoryStream;
extern M2C_UNK func_020065d0;
extern M2C_UNK func_020065f0;
extern M2C_UNK func_020065f4;
extern M2C_UNK func_02006678;

void func_020066ec(void *arg0, M2C_UNK arg1) {
    if (NNS_SndArcGetFileAddress(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_02006678;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &CloseFileStream;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &ReadFileStream;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &CancelFileStream;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &func_020065f4;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020065f0;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &ReadMemoryStream;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020065d0;
}

#include "m2c.h"

M2C_UNK FSi_TranslateCommand(void *, M2C_UNK);

void FSi_SeekDirDirect(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) | 4);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x36) = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = arg1;
    FSi_TranslateCommand(arg0, 2);
}

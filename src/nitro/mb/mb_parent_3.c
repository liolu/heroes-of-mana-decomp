#include "m2c.h"

M2C_UNK MBi_CommChangeParentStateCallbackOnly(s32, s32, M2C_UNK);

s32 IsChildAidValid();

extern s32 mbc;

void MBi_CommChangeParentState(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (IsChildAidValid() != 0) {
        M2C_FIELD((mbc + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    MBi_CommChangeParentStateCallbackOnly(arg0, arg1, arg2);
}

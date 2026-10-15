#include "m2c.h"

M2C_UNK NNS_FndAppendListObject(s32, void *);
M2C_UNK func_02007a78(M2C_UNK *, M2C_UNK);
s32 FindListContainHeap(void *);
extern s32 data_0203856c;
extern M2C_UNK sRootList;

void func_02007aa8(void *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    M2C_FIELD(arg0, volatile s32 *, 0)    = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) & ~0xFF);
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x20) | (u8) arg4);
    func_02007a78(arg0 + 0xC, 4);
    if (data_0203856c == 0) {
        func_02007a78(&sRootList, 4);
        data_0203856c = 1;
    }
    NNS_FndAppendListObject(FindListContainHeap(arg0), arg0);
}

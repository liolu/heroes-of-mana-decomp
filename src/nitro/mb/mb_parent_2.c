#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200fa98(void);
void func_0200faac(M2C_UNK);
void MI_CpuCopy8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK IsChildAidValid(M2C_UNK);
extern s32 mbc;

s32 MB_CommGetChildUser(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if ((mbc != 0) && (IsChildAidValid(arg0) != 0)) {
        MI_CpuCopy8(((arg0 - 1) * 0x16) + (mbc + 0x1340), mbc + 0x1772, 0x16);
        func_0200faac(temp_r4);
        return mbc + 0x1772;
    }
    func_0200faac(temp_r4);
    return 0;
}

s32 MB_CommIsBootable(s32 arg0) {
    if ((mbc != 0) && (IsChildAidValid(arg0) != 0) && (M2C_FIELD((mbc + ((arg0 - 1) * 4)), s32 *, 0x14E8) == 7)) {
        return 1;
    }
    return 0;
}

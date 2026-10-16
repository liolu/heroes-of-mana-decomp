/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK NNS_SndStrmFreeChannel();             /* extern */
M2C_UNK OS_LockMutex();                    /* extern */
M2C_UNK func_020073dc();                      /* extern */
M2C_UNK func_0200e644();                   /* extern */
extern s32 data_02037708;
extern M2C_UNK data_02037f88;

void func_02007140(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    OS_LockMutex(&data_02037f88);
    if (data_02037708 != 0) {
        OS_LockMutex(data_02037708 + 0x4C8);
    }
    func_020073dc(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        NNS_SndStrmFreeChannel(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_0200e644(&data_02037f88);
    if (data_02037708 == 0) {
        return;
    }
    func_0200e644(data_02037708 + 0x4C8);
}

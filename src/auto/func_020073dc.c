/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK OS_LockMutex();                    /* extern */
M2C_UNK func_0200495c();                      /* extern */
M2C_UNK func_02007378();                      /* extern */
M2C_UNK func_0200e644();                   /* extern */
extern s32 data_02037708;
extern M2C_UNK data_02037f88;

void func_020073dc(void *arg0) {
    OS_LockMutex(&data_02037f88);
    if (data_02037708 != 0) {
        OS_LockMutex(data_02037708 + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_0200495c(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x16C)(arg0);
    }
    func_02007378(arg0);
    func_0200e644(&data_02037f88);
    if (data_02037708 == 0) {
        return;
    }
    func_0200e644(data_02037708 + 0x4C8);
}

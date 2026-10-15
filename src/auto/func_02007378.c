#include "m2c.h"

M2C_UNK func_02007264(M2C_UNK *, void *);
M2C_UNK func_0200733c();
M2C_UNK FreePlayer(void *);
extern s32 data_02037708;
extern M2C_UNK data_02037fa0;

void func_02007378(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0200733c(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_02007264(&data_02037fa0, arg0);
    if (data_02037708 != 0) {
        func_02007264(data_02037708 + 0x4E0, arg0);
    }
    FreePlayer(arg0);
}

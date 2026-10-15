#include "m2c.h"

M2C_UNK OS_CreateThread(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32);
M2C_UNK OS_WakeupThreadDirect(M2C_UNK *);
M2C_UNK OS_InitMessageQueue(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern s32 data_02037168;
extern s32 data_0203716c;
extern M2C_UNK data_02037170;
extern M2C_UNK data_02037190;
extern M2C_UNK data_02037204;
extern M2C_UNK sCurrent;
extern M2C_UNK func_02004a80;

void func_02004d84(s32 arg0) {
    if (data_02037168 != 0) {
        return;
    }
    data_0203716c = 0;
    OS_InitMessageQueue(&data_02037170, &data_02037190, 8);
    OS_CreateThread(&data_02037204, &func_02004a80, 0, &sCurrent, 0x400, arg0);
    data_02037168 = 1;
    OS_WakeupThreadDirect(&data_02037204);
}

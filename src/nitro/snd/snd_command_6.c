#include "m2c.h"

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

M2C_UNK SNDi_CallAlarmHandler(M2C_UNK);

void PxiFifoCallback(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    SNDi_CallAlarmHandler(arg1);
    func_0200faac(temp_r4);
}

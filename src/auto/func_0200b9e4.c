#include "m2c.h"

s32 func_0200a7b8();                                /* extern */
M2C_UNK func_0200fef8(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02010294(M2C_UNK, s32, u32);           /* extern */
extern s32 data_02035ab0;

void func_0200b9e4(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_0200a7b8();
    if ((data_02035ab0 != -1) && (arg2 > 0x1CU)) {
        func_0200fef8(data_02035ab0, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02010294(arg0, temp_ip + arg1, arg2);
}

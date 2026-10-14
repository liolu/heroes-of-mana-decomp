#include "m2c.h"

s32 func_020158f4();                                /* extern */
M2C_UNK func_02015efc(s32);                         /* extern */
extern M2C_UNK data_0203a66c;

s32 func_020162d8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_020158f4() == 0) {
        return 1;
    }
    M2C_FIELD(&data_0203a66c, s32 *, 0x1C) = arg1;
    M2C_FIELD(&data_0203a66c, s32 *, 0x20) = arg2;
    M2C_FIELD(&data_0203a66c, s32 *, 0x24) = arg0;
    func_02015efc(0x03006700);
    return 0;
}

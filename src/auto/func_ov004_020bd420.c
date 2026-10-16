#include "m2c.h"

M2C_UNK func_ov004_020bc8e0();                      /* extern */
extern M2C_UNK data_ov004_020cdcec;

void *func_ov004_020bd420(void *arg0, s32 arg1) {
    func_ov004_020bc8e0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cdcec;
    M2C_FIELD(arg0, s32 *, 0x1C)   = arg1;
    return arg0;
}

#include "m2c.h"

M2C_UNK func_ov003_0209e9c0();                      /* extern */
M2C_UNK func_ov003_0209ea48(M2C_UNK);               /* extern */
extern void *data_ov000_02051548;

void func_ov014_020d0160(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x48) != 1) {
        return;
    }
    func_ov003_0209ea48(0);
    func_ov003_0209e9c0();
}

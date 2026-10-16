#include "m2c.h"

M2C_UNK func_ov003_02099b2c(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209d400(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209e92c();                      /* extern */
M2C_UNK func_ov003_0209ea04();                      /* extern */
M2C_UNK func_ov003_0209eb6c();                      /* extern */
M2C_UNK func_ov003_0209ec90();                      /* extern */
M2C_UNK func_ov003_0209edac();                      /* extern */
M2C_UNK func_ov003_0209f06c();                      /* extern */
M2C_UNK func_ov003_020a297c(M2C_UNK);               /* extern */

void func_ov097_020d0330(s32 arg0) {
    if (arg0 == 1) {
        func_ov003_020a297c(5);
        func_ov003_0209ec90();
        func_ov003_0209e92c();
        func_ov003_0209ea04();
        func_ov003_0209d400(1, 0);
        func_ov003_0209eb6c();
    } else {
        func_ov003_020a297c(6);
        func_ov003_0209edac();
    }
    func_ov003_02099b2c(0x5A);
    func_ov003_0209f06c();
}

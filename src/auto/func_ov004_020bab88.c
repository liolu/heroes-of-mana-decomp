#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
s32 func_ov004_020b9ecc();                          /* extern */
M2C_UNK func_ov004_020ba084(s32, s32, s32);         /* extern */
extern M2C_UNK data_ov004_020cd710;

void *func_ov004_020bab88(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cd710;
    func_ov004_020ba084(func_ov004_020b9ecc(), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20));
    func_0202f45c(arg0);
    return arg0;
}

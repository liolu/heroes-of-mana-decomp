#include "m2c.h"

M2C_UNK func_0202f45c(void *);                      /* extern */
M2C_UNK func_0202f49c(s32);                         /* extern */
M2C_UNK func_ov004_020ba5d4();                      /* extern */
M2C_UNK func_ov004_020ba634(void *);                /* extern */
extern M2C_UNK data_ov004_020cd6d8;

void *func_ov004_020b9fd0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cd6d8;
    func_ov004_020ba5d4();
    func_ov004_020ba634(arg0);
    func_0202f49c(M2C_FIELD(arg0, s32 *, 0x3C));
    func_0202f49c(M2C_FIELD(arg0, s32 *, 0x30));
    func_0202f49c(M2C_FIELD(arg0, s32 *, 0x20));
    func_0202f49c(M2C_FIELD(arg0, s32 *, 0x14));
    func_0202f45c(arg0);
    return arg0;
}

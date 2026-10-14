#include "m2c.h"

M2C_UNK func_0200d9a8(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_0200de08(M2C_UNK *);                   /* extern */
M2C_UNK func_0200e330(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern s32 data_02037168;
extern s32 data_0203716c;
extern M2C_UNK data_02037170;
extern M2C_UNK data_02037190;
extern M2C_UNK data_02037204;
extern M2C_UNK data_020376c4;
extern M2C_UNK func_02004a80;

void func_02004d84(s32 arg0) {
    if (data_02037168 != 0) {
        return;
    }
    data_0203716c = 0;
    func_0200e330(&data_02037170, &data_02037190, 8);
    func_0200d9a8(&data_02037204, &func_02004a80, 0, &data_020376c4, 0x400, arg0);
    data_02037168 = 1;
    func_0200de08(&data_02037204);
}

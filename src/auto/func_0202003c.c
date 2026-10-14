#include "m2c.h"

M2C_UNK func_02011750();                            /* extern */
M2C_UNK func_0201185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020118a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0201fd24();                            /* extern */
M2C_UNK func_0201fff4(M2C_UNK);                     /* extern */
M2C_UNK func_020200f0();                            /* extern */
M2C_UNK func_02020354(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02041640;
extern M2C_UNK data_02041720;
extern M2C_UNK func_020202a4;
extern M2C_UNK func_020202d0;
extern M2C_UNK func_02020340;

void func_0202003c(void) {
    if (M2C_FIELD(&data_02041640, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02041640, s32 *, 8) = 1;
    func_0201fd24();
    M2C_FIELD(&data_02041640, s32 *, 0xC) = 0;
    func_02011750();
    do {

    } while (func_020118a8(0xD, 1) == 0);
    func_0201185c(0xD, &func_020202a4);
    func_020200f0();
    func_0201185c(0xD, NULL);
    func_0201185c(0xD, &func_020202d0);
    M2C_FIELD(&data_02041640, s32 *, 0x18) = 0;
    func_02020354(&data_02041720);
    func_0201185c(0x11, &func_02020340);
    func_0201fff4(0);
}

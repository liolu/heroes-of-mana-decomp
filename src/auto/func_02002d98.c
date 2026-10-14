#include "m2c.h"

s32 *func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_0200ee40(M2C_UNK, M2C_UNK, s32 *);     /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_02013190(M2C_UNK *);                   /* extern */
s32 func_02013470(M2C_UNK *, M2C_UNK *);            /* extern */
s32 func_0201360c(M2C_UNK *, s32 *, M2C_UNK);       /* extern */
s32 func_0201361c(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK data_02035a70;
extern s32 data_02036740;
extern M2C_UNK data_02036744;

void func_02002d98(void) {
    s32 *temp_r0_2;
    s32 temp_r0;

    func_02013190(&data_02036744);
    temp_r0       = func_02013470(&data_02036744, &data_02035a70);
    data_02036740 = temp_r0;
    if (temp_r0 == 0) {
        func_0200fddc();
    }
    if (func_0201361c(&data_02036744, 0, 0) != 1) {
        return;
    }
    temp_r0_2 = func_0200ed38(0, -1, 0x10);
    if ((func_0201360c(&data_02036744, temp_r0_2, 4) < 0) || (*temp_r0_2 != 0x47414E41)) {
        func_0200fddc();
    }
    if (temp_r0_2 == NULL) {
        return;
    }
    func_0200ee40(0, -1, temp_r0_2);
}

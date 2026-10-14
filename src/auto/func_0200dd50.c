#include "m2c.h"

M2C_UNK func_0200d678(s32, void *);                 /* extern */
M2C_UNK func_0200de58();                            /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
extern M2C_UNK data_0203863c;

void func_0200dd50(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_0200fa98();
    temp_r5 = *M2C_FIELD(&data_0203863c, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_0200d678(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_0200de58();
    func_0200faac(temp_r4);
}

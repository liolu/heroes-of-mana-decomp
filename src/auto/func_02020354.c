#include "m2c.h"

M2C_UNK func_0200d9a8(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_0200de08(void *);                      /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_020203e0(M2C_UNK *);                   /* extern */
extern void *data_02041808;
extern M2C_UNK data_0204180c;
extern M2C_UNK data_02041c30;
extern M2C_UNK func_020203f4;

void func_02020354(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if (data_02041808 == NULL) {
        data_02041808 = arg0;
        func_020203e0(arg0 + 0xC4);
        func_020203e0(&data_0204180c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_0200d9a8(arg0, &func_020203f4, arg0, &data_02041c30, 0x400, 0x14);
        func_0200de08(arg0);
    }
    func_0200faac(temp_r4);
}

#include "m2c.h"

M2C_UNK func_0200d724(s32, void *);                 /* extern */
M2C_UNK func_0200d808(void *);                      /* extern */
M2C_UNK func_0200dda0(void *);                      /* extern */
M2C_UNK func_0200de58();                            /* extern */
M2C_UNK func_0200e1a4();                            /* extern */
M2C_UNK func_0200e1d8();                            /* extern */
M2C_UNK func_0200e6a0(void *);                      /* extern */
M2C_UNK func_0200fddc();                            /* extern */
extern M2C_UNK data_0203863c;

void func_0200db58(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0203863c, void ***, 8);
    func_0200e1a4();
    func_0200e6a0(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0200d724(temp_r0, temp_r4);
    }
    func_0200d808(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_0200dda0(temp_r4 + 0x9C);
    func_0200e1d8();
    func_0200de58();
    func_0200fddc();
}

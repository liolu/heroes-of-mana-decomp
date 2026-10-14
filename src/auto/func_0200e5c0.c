#include "m2c.h"

M2C_UNK func_0200dd50(void *);                      /* extern */
M2C_UNK func_0200e750(void *, void *);              /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
extern M2C_UNK data_02038660;

void func_0200e5c0(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_0200fa98();
    temp_r7 = M2C_FIELD(&data_02038660, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_0200e750(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        func_0200dd50(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    func_0200faac(temp_r4);
}

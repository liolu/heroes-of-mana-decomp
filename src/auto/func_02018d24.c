#include "m2c.h"

M2C_UNK func_0200e7cc(s32, M2C_UNK);                /* extern */
M2C_UNK func_02010328(s32, s32, M2C_UNK);           /* extern */
void *func_0201866c();                              /* extern */
s32 func_0201867c();                                /* extern */

s32 func_02018d24(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_0201866c();
    temp_r0 = func_0201867c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_0200e7cc(M2C_FIELD(temp_r4, s32 *, 4), 0x7C0);
    func_02010328(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7C0);
    return 0;
}

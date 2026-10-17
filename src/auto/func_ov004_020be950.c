#include "m2c.h"

void **func_ov004_020bb458();                       /* extern */
void **func_ov004_020bbd58();                       /* extern */

void func_ov004_020be950(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r5;
    void **temp_r5_2;

    temp_r5 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r5 != NULL) {
        temp_r0 = func_ov004_020bbd58();
        if ((M2C_FIELD(*temp_r0, s32(**)(void **, void **), 0x1C)(temp_r0, temp_r5) != 0) &&
            (temp_r0_2 = M2C_FIELD(arg0, void ***, 0x18), (temp_r0_2 != NULL))) {
            (*(void (**)(void *))(*(u8 **) temp_r0_2 + 4))(temp_r0_2);
        }
        M2C_FIELD(arg0, void ***, 0x18) = NULL;
    }
    temp_r5_2 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r5_2 == NULL) {
        return;
    }
    temp_r0_3 = func_ov004_020bb458();
    if ((M2C_FIELD(*temp_r0_3, s32(**)(void **, void **), 0x1C)(temp_r0_3, temp_r5_2) != 0) &&
        (temp_r0_4 = M2C_FIELD(arg0, void ***, 0x14), (temp_r0_4 != NULL))) {
        (*(void (**)(void *))(*(u8 **) temp_r0_4 + 4))(temp_r0_4);
    }
    M2C_FIELD(arg0, void ***, 0x14) = NULL;
}

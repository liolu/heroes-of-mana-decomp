/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 flag : 1;
} Obj0;

M2C_UNK OnceDrawObj(void *);                            /* extern */
M2C_UNK oneStatueSetDireByEyePos(void *, s32);          /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020b0cf0;

void changeAnimationObjByMoveLook(void) {
    u8 *var_r4;
    s32 var_r5;
    s32 temp_r0;
    s32 temp_r0_2;
    void *var_r4_2;

    var_r4 = (u8 *) &data_ov003_020b0cf0;
    var_r5 = 0;
    do {
        if ((((u32) M2C_FIELD(var_r4, s32 *, 8) << 2) >> 31) == 0 && ((Obj0 *) var_r4)->flag) {
            OnceDrawObj(var_r4);
        }
        var_r5 += 1;
        var_r4 += 0x110;
    } while (var_r5 < 0x42);
    temp_r0 = -(M2C_FIELD(data_ov000_02051548, s32 *, 0x1E0) - 675);
    var_r5 = (s32) (u16) ((temp_r0 * 0x10000) / 1200) >> 13;
    var_r4_2 = M2C_FIELD(data_ov000_02051548, void **, 0x2F0);
    if (var_r4_2 != NULL) {
        do {
            temp_r0_2 = ((u32) M2C_FIELD(var_r4_2, s32 *, 8) << 3) >> 30;
            if ((temp_r0_2 == 0) || (temp_r0_2 == 2)) {
                oneStatueSetDireByEyePos(var_r4_2, var_r5);
            }
            var_r4_2 = M2C_FIELD(var_r4_2, void **, 0xF0);
        } while (var_r4_2 != NULL);
    }
}

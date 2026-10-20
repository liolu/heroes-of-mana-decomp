/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_ov111_020e3300(s32 *);                 /* extern */
M2C_UNK func_ov111_020e5be4();                      /* extern */
extern M2C_UNK data_ov111_020ec1a0;
extern u8 data_ov111_020ec3f4[];
extern u8 data_ov111_020ec674[];

void func_ov111_020e19d8(void) {
    s32 var_r4;
    u8 *var_r5;
    s32 var_r7;

    OS_FreeToHeap(0, -1, M2C_FIELD(&data_ov111_020ec1a0, s32 *, 4));
    func_ov111_020e5be4();
    var_r5 = data_ov111_020ec3f4;
    var_r4 = 0;
    do {
        if (((u32) (M2C_FIELD(var_r5, s32 *, 0) << 0x1F) >> 0x1F) != 0) {
            func_ov111_020e3300((s32 *) var_r5);
        }
        var_r4 += 1;
        var_r5 += 0x50;
    } while (var_r4 < 8);
    var_r7 = 0;
    do {
        OS_FreeToHeap(0, -1, M2C_FIELD((data_ov111_020ec674 + (var_r7 * 4)), s32 *, 0x414));
        var_r7 += 1;
    } while (var_r7 < 4);
}

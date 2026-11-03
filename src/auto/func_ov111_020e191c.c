/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void OS_FreeToHeap(s32, s32, void *);
void *func_0200ed38(s32, s32, s32);
extern u8 data_ov111_020ec1a0[];
extern u8 data_ov111_020ec674[];

s32 func_ov111_020e191c(void) {
    void *temp_r0;
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    void **temp_r1;

    var_r9 = 0;
    var_r8 = 0;
    do {
        temp_r0 = func_0200ed38(0, -1, 0x800);
        temp_r1 = (void **) (data_ov111_020ec674 + var_r8 * 4);
        var_r8 += 1;
        if (temp_r0 == 0) {
            var_r9 += 1;
        }
        temp_r1[0x414 / 4] = temp_r0;
    } while (var_r8 < 4);
    if (var_r9 != 0) {
        var_r7 = 0;
        do {
            void *p = ((void **) (data_ov111_020ec674 + var_r7 * 4))[0x414 / 4];
            if (p != 0) {
                OS_FreeToHeap(0, -1, p);
            }
            var_r7 += 1;
        } while (var_r7 < 4);
        return 0;
    }
    *(void **) (data_ov111_020ec1a0 + 4) = func_0200ed38(0, -1, 0x2490);
    return 1;
}

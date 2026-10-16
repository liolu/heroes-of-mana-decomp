/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_02007e38(u32 arg0, s32 arg1, s32 arg2);
void func_02007d7c(u32 arg0, s32 arg1, s32 arg2);

void func_02007c00(u32 param_1, s32 param_2, s32 param_3) {
    if (param_2 == 0) {
        param_2 = 1;
    }
    param_2 = (param_2 + 3) & ~3;
    if (param_3 >= 0) {
        func_02007e38(param_1, param_2, param_3);
        return;
    }
    func_02007d7c(param_1, param_2, -param_3);
}

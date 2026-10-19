/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020a4758(M2C_UNK);                      /* extern */
M2C_UNK func_ov123_020a4810();                      /* extern */
extern s32 data_ov123_020e2048;

void func_ov123_020a4c14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 hunt_t;
    if (data_ov123_020e2048 == 0) {
        return;
    }
    if (arg1 == 0) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    if (arg3 != 0) {
        hunt_t = func_ov123_020a4810();
        return;
    }
    func_ov123_020a4758(hunt_t);
}

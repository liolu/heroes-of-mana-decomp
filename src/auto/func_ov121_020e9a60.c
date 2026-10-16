#include "m2c.h"

M2C_UNK func_ov121_020e9be4();                      /* extern */
M2C_UNK func_ov121_020e9cb0();                      /* extern */
M2C_UNK func_ov121_020ea234();                      /* extern */
s32 func_ov121_020ea420();                          /* extern */
M2C_UNK func_ov121_020ea6c0();                      /* extern */
M2C_UNK func_ov121_020ec56c();                      /* extern */
extern s32 data_ov000_02051540;

s32 func_ov121_020e9a60(void) {
    func_ov121_020e9be4();
    func_ov121_020e9cb0();
    if (func_ov121_020ea420() != 1) {
        return 0xF;
    }
    func_ov121_020ec56c();
    func_ov121_020ea234();
    func_ov121_020ea6c0();
    data_ov000_02051540 = 1;
    return 0;
}

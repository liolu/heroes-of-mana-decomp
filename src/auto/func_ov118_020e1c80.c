#include "m2c.h"

M2C_UNK VBlankIntrWaitInGame();                      /* extern */
M2C_UNK func_ov118_020e1adc();                      /* extern */
M2C_UNK func_ov118_020e1b3c();                      /* extern */
M2C_UNK func_ov118_020e1c7c();                      /* extern */
M2C_UNK func_ov118_020e1c9c();                      /* extern */

void func_ov118_020e1c80(void) {
    VBlankIntrWaitInGame();
    func_ov118_020e1c7c();
    func_ov118_020e1b3c();
    func_ov118_020e1adc();
    func_ov118_020e1c9c();
}

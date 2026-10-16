#include "m2c.h"

M2C_UNK func_ov118_020e1dd0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov118_020e1dfc();                      /* extern */
M2C_UNK func_ov118_020e210c(M2C_UNK);               /* extern */
extern M2C_UNK data_ov118_020e31e0;

void func_ov118_020e1c9c(void) {
    M2C_FIELD(&data_ov118_020e31e0, s32 *, 0) = 0x200;
    M2C_FIELD(&data_ov118_020e31e0, s32 *, 8) = 1;
    func_ov118_020e1dfc();
    func_ov118_020e210c(0);
    func_ov118_020e1dd0(0, 0x400);
}

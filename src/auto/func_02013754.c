#include "m2c.h"

M2C_UNK func_02017148(u16);                         /* extern */
M2C_UNK func_02017164(u16);                         /* extern */
extern s32 data_0203a5bc;

s32 func_02013754(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_02017148((u16) data_0203a5bc);
            return 0;
        case 10:
            func_02017164((u16) data_0203a5bc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}

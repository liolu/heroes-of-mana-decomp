#include "m2c.h"

M2C_UNK CARD_UnlockBackup(u16);                     /* extern */
M2C_UNK func_0200cc70(u16);                         /* extern */
extern M2C_UNK data_ov115_020e9a40;

void func_ov115_020e7774(void) {
    CARD_UnlockBackup((u16) M2C_FIELD(&data_ov115_020e9a40, s32 *, 8));
    func_0200cc70((u16) M2C_FIELD(&data_ov115_020e9a40, s32 *, 8));
}

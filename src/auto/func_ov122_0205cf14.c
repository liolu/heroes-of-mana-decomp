#include "m2c.h"

M2C_UNK CARD_UnlockBackup(u16);                     /* extern */
M2C_UNK func_0200cc70(u16);                         /* extern */
extern M2C_UNK data_ov122_020664a4;

void func_ov122_0205cf14(void) {
    CARD_UnlockBackup((u16) M2C_FIELD(&data_ov122_020664a4, s32 *, 8));
    func_0200cc70((u16) M2C_FIELD(&data_ov122_020664a4, s32 *, 8));
}

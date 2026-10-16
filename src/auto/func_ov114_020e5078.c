#include "m2c.h"

M2C_UNK CARD_UnlockBackup(u16);                     /* extern */
M2C_UNK func_0200cc70(u16);                         /* extern */
extern M2C_UNK data_ov114_020e6680;

void func_ov114_020e5078(void) {
    CARD_UnlockBackup((u16) M2C_FIELD(&data_ov114_020e6680, s32 *, 4));
    func_0200cc70((u16) M2C_FIELD(&data_ov114_020e6680, s32 *, 4));
}

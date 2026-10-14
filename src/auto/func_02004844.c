#include "m2c.h"

M2C_UNK func_02003ce8(s32);                         /* extern */
M2C_UNK func_020078b4(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_0203709c;

void func_02004844(void *arg0) {
    func_02003ce8(M2C_FIELD(arg0, s32 *, 0x40));
    func_020078b4(&data_0203709c, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}

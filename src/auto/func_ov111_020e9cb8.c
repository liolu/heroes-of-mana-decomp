#include "m2c.h"

M2C_UNK func_ov111_020e9cf8(s32, void *);           /* extern */

void func_ov111_020e9cb8(void *arg0) {
    func_ov111_020e9cf8(M2C_FIELD(arg0, s32 *, 0x810), arg0);
    func_ov111_020e9cf8(M2C_FIELD(arg0, s32 *, 0x810), arg0 + 0x2AC);
    func_ov111_020e9cf8(M2C_FIELD(arg0, s32 *, 0x810), arg0 + 0x558);
    M2C_FIELD(arg0, s32 *, 0x80C) = (s32) (M2C_FIELD(arg0, s32 *, 0x80C) | 2);
}

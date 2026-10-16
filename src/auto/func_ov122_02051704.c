#include "m2c.h"

M2C_UNK MIi_CpuClear16(s32, s32, M2C_UNK);          /* extern */
M2C_UNK func_ov122_02052a90();                      /* extern */

void func_ov122_02051704(void) {
    func_ov122_02052a90();
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0x1F00);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0x1F00);
    MIi_CpuClear16(0x7FFF, 0x05000000, 0x200);
    MIi_CpuClear16(0x7FFF, 0x05000400, 0x200);
}

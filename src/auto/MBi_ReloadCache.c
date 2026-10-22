#include "m2c.h"

s32 FS_FindArchive(void *, s32);                    /* extern */
s32 FS_OpenFileDirect(M2C_UNK *, s32, s32, s32, s32); /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_02013190(M2C_UNK *);                   /* extern */
M2C_UNK func_020134b8(M2C_UNK *);                   /* extern */
s32 func_0201360c(M2C_UNK *, s32, s32);             /* extern */

void MBi_ReloadCache(void *arg0) {
    u8 sp4[0x48];
    void *temp_r4;
    void *temp_r5;
    s32 temp_r5_2;

    temp_r5 = M2C_FIELD(arg0, void **, 0x14);
    temp_r4 = M2C_FIELD(arg0, void **, 0x10);
    func_02013190((M2C_UNK *) sp4);
    temp_r5_2 = M2C_FIELD(temp_r4, s32 *, 0);
    if (FS_OpenFileDirect((M2C_UNK *) sp4, FS_FindArchive(temp_r5 + 0x10, M2C_FIELD(temp_r5, s32 *, 0x14)), temp_r5_2,
                          temp_r5_2 + M2C_FIELD(temp_r4, s32 *, 4), -1) != 0) {
        if (M2C_FIELD(temp_r4, s32 *, 4) ==
            func_0201360c((M2C_UNK *) sp4, M2C_FIELD(temp_r4, s32 *, 8), M2C_FIELD(temp_r4, s32 *, 4))) {
            M2C_FIELD(temp_r4, s32 *, 0xC) = 2;
        }
        func_020134b8((M2C_UNK *) sp4);
    }
    if (M2C_FIELD(temp_r4, s32 *, 0xC) == 2) {
        return;
    }
    func_0200fddc();
}

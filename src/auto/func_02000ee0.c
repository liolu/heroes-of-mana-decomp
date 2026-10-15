#include "m2c.h"

M2C_UNK func_02013190(M2C_UNK *);
M2C_UNK func_020134b8(M2C_UNK *);
M2C_UNK FS_WaitAsync(M2C_UNK *);
s32 func_02013b00(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK func_02013bfc(M2C_UNK *, M2C_UNK *);
M2C_UNK FS_StartOverlay(M2C_UNK *);

s32 func_02000ee0(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp2C[72];
    u8 sp0[44];

    if (func_02013b00(sp0, arg0, arg1) == 0) {
        return 0;
    }
    func_02013190(sp2C);
    func_02013bfc(sp0, sp2C);
    FS_WaitAsync(sp2C);
    func_020134b8(sp2C);
    FS_StartOverlay(sp0);
    return 1;
}

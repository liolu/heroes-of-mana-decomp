#include "m2c.h"

M2C_UNK func_ov004_020c0644(s32, M2C_UNK *);        /* extern */
s32 func_ov004_020c7668(s32);                       /* extern */

void func_ov004_020c7544(void *arg0) {
    M2C_UNK sp0;
    s32 temp_r5;

    M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), M2C_UNK (**)(void *), 0x18)(M2C_FIELD(arg0, void ***, 0x1C));
    temp_r5 = M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), s32 (**)(void *), 0x14)(M2C_FIELD(arg0, void ***, 0x1C));
    if ((temp_r5 >= M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), s32 (**)(void *), 0x10)(M2C_FIELD(arg0, void ***, 0x1C))) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) < func_ov004_020c7668(M2C_FIELD(arg0, s32 *, 0x14)))) {
        M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), M2C_UNK (**)(void *), 0xC)(M2C_FIELD(arg0, void ***, 0x1C));
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    }
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), M2C_UNK (**)(M2C_UNK *, void *), 8)(&sp0, M2C_FIELD(arg0, void ***, 0x1C));
    func_ov004_020c0644(M2C_FIELD(arg0, s32 *, 0x18), &sp0);
}

#include "m2c.h"

M2C_UNK func_ov004_020c04dc(s32, void *);           /* extern */
M2C_UNK func_ov004_020c37e0(void *, void *);        /* extern */

void func_ov004_020c71c4(void *arg0) {
    s32 sp0[3];
    u8 *obj;

    obj = M2C_FIELD(arg0, u8 **, 0x3C);
    (*(void (**)(u8 *))((u8 *) M2C_FIELD(obj, u8 **, 0) + 0x10))(obj);
    func_ov004_020c37e0(sp0, M2C_FIELD(arg0, void **, 0x3C));
    func_ov004_020c04dc(M2C_FIELD(arg0, s32 *, 0x40), sp0);
}

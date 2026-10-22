#include "m2c.h"

s32 func_ov123_020d23a8(void *arg0) {
    M2C_UNK sp8[2];
    M2C_UNK sp0[2];
    u8 *o24;
    u8 *o14;

    o24 = M2C_FIELD(arg0, u8 **, 0x24);
    (*(void (**)(u8 *))((u8 *) M2C_FIELD(o24, u8 **, 0) + 0x10))(o24);
    o24 = M2C_FIELD(arg0, u8 **, 0x24);
    (*(void (**)(u8 *))((u8 *) M2C_FIELD(o24, u8 **, 0) + 0x18))(o24);
    o24 = M2C_FIELD(arg0, u8 **, 0x24);
    (*(void (**)(u8 *))((u8 *) M2C_FIELD(o24, u8 **, 0) + 0x20))(o24);
    o14 = M2C_FIELD(arg0, u8 **, 0x14);
    (*(void (**)(M2C_UNK *, u8 *))((u8 *) M2C_FIELD(o14, u8 **, 0) + 0x18))(sp8, o14);
    o24 = M2C_FIELD(arg0, u8 **, 0x24);
    (*(void (**)(u8 *, M2C_UNK *))((u8 *) M2C_FIELD(o24, u8 **, 0) + 0x2C))(o24, sp8);
    o14 = M2C_FIELD(arg0, u8 **, 0x14);
    (*(void (**)(M2C_UNK *, u8 *))((u8 *) M2C_FIELD(o14, u8 **, 0) + 0x18))(sp0, o14);
    o24 = M2C_FIELD(arg0, u8 **, 0x24);
    (*(void (**)(u8 *, M2C_UNK *))((u8 *) M2C_FIELD(o24, u8 **, 0) + 0x34))(o24, sp0);
    return 1;
}

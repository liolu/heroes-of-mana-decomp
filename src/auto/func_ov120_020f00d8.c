#include "m2c.h"

s32 func_ov120_020eb600(s16);                       /* extern */
M2C_UNK func_ov120_020ef024();                      /* extern */
M2C_UNK func_ov120_020ef164();                      /* extern */
M2C_UNK func_ov120_020ef4ec();                      /* extern */
M2C_UNK func_ov120_020ef8cc();                      /* extern */
M2C_UNK func_ov120_020efdb4();                      /* extern */
M2C_UNK func_ov120_020efed8();                      /* extern */
extern M2C_UNK data_ov120_020f4210;
extern s16 data_ov120_020f42d4;
extern M2C_UNK data_ov120_020f46dc;

void func_ov120_020f00d8(void) {
    u16 temp_r0;

    temp_r0 = (u16) M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA10);
    switch ((u32) temp_r0) {                        /* irregular */
        case 0x1:
            func_ov120_020ef024();
            return;
        case 0x2:
            if (func_ov120_020eb600(data_ov120_020f42d4) != 0) {
                func_ov120_020ef8cc();
                return;
            }
            func_ov120_020ef024();
            return;
        case 0x8:
            func_ov120_020ef8cc();
            return;
        case 0x4:
            if (func_ov120_020eb600(M2C_FIELD(&data_ov120_020f4210, s16 *, 0x16)) != 0) {
                func_ov120_020ef4ec();
                return;
            }
            func_ov120_020ef024();
            return;
        case 0x10:
            func_ov120_020ef4ec();
            return;
        case 0x20:
            func_ov120_020ef164();
            return;
        case 0x100:
        case 0x40:
            func_ov120_020efed8();
            return;
        case 0x80:
            func_ov120_020efdb4();
            return;
            return;
    }
}

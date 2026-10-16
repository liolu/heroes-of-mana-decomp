#include "m2c.h"

s32 PM_GetLCDPower(s32);                            /* extern */
s32 PM_SetLCDPower(M2C_UNK);                        /* extern */
M2C_UNK func_02000f44(M2C_UNK);                     /* extern */
M2C_UNK func_02000f78(M2C_UNK);                     /* extern */
M2C_UNK func_ov121_020ecbdc(s32);                   /* extern */
extern void *data_0203673c;

s32 func_ov121_020ecc38(void) {
    s32 temp_r0;

    func_02000f44(0xA);
    func_ov121_020ecbdc(((u32) (M2C_FIELD(M2C_FIELD(data_0203673c, void **, 0x2C), s32 *, 0x108C) * 2) >> 0x1E) & 3);
    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if ((temp_r0 == 0) && (PM_GetLCDPower(temp_r0) == 0)) {
        do {

        } while (PM_SetLCDPower(1) != 1);
    }
    func_02000f78(0xA);
    return 0;
}

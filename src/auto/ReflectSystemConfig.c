/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_02003734(u8, M2C_UNK);                 /* extern */
M2C_UNK func_0200378c(u8, M2C_UNK);                 /* extern */
M2C_UNK func_02003bc0(M2C_UNK);                     /* extern */
extern void *data_0203673c;
extern u8 data_ov000_02050718[];
extern u8 data_ov000_02050720[];

void ReflectSystemConfig(void) {
    func_02003734(
        data_ov000_02050718[(u32) (M2C_FIELD(M2C_FIELD(data_0203673c, void **, 0x2C), s32 *, 0x108C) << 0x17) >> 0x1D], 0xA);
    func_0200378c(
        data_ov000_02050720[(u32) (M2C_FIELD(M2C_FIELD(data_0203673c, void **, 0x2C), s32 *, 0x108C) << 0x1A) >> 0x1D], 0xA);
    if (((u32) (M2C_FIELD(M2C_FIELD(data_0203673c, void **, 0x2C), s32 *, 0x108C) << 0x13) >> 0x1C) & 2) {
        func_02003bc0(1);
    } else {
        func_02003bc0(0);
    }
}

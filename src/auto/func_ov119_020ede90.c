#include "m2c.h"
extern u8 *data_ov119_020f2750[];
u16 func_ov119_020ede90(s32 arg0, s32 arg1) {
    u16 *p = *(u16 **) (data_ov119_020f2750[1] + arg0 * 0x4FC + 0x1C);
    return p[arg1];
}

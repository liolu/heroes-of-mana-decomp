#include "m2c.h"

s32 func_ov111_020e5d98(s32);                       /* extern */
extern s32 data_ov111_020ec23c[];
extern u8 *data_ov111_020f1bd8;

void func_ov111_020e8f98(void) {
    s32 *p;

    p                                            = data_ov111_020ec23c;
    p[0x18 / 4]                                  = func_ov111_020e5d98(1) << 10;
    p[0x20 / 4]                                  = func_ov111_020e5d98(3) << 10;
    p[0x1C / 4]                                  = func_ov111_020e5d98(5) << 10;
    p[0]                                         = func_ov111_020e5d98(7);
    p[1]                                         = func_ov111_020e5d98(9);
    p[2]                                         = func_ov111_020e5d98(0xB);
    *(u16 *) (data_ov111_020f1bd8 + 0x500 + 0xC) = *(u16 *) (data_ov111_020f1bd8 + 0x500 + 0xC) + 0xD;
}

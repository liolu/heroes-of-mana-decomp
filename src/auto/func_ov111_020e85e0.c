/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_ov111_020e5d60(s32);
s32 func_ov111_020e5d98(s32);
extern u8 *data_ov111_020f1bd8;
extern s32 data_ov111_020ecac8[][16];
extern s32 data_ov111_020ecacc[][16];
typedef struct {
    u8 pad[0x2c];
    u32 f2c;
    u8 pad2[0x10];
} Row;
extern Row data_ov111_020eca98[];
void func_ov111_020e85e0(void) {
    s32 i;
    Row *r;
    i                                            = func_ov111_020e5d60(1);
    r                                            = &data_ov111_020eca98[i];
    r->f2c                                       = (r->f2c & ~1) | 3;
    data_ov111_020ecac8[i][0]                    = 0;
    data_ov111_020ecacc[i][0]                    = func_ov111_020e5d98(3);
    *(u16 *) (data_ov111_020f1bd8 + 0x500 + 0xC) = *(u16 *) (data_ov111_020f1bd8 + 0x500 + 0xC) + 5;
}

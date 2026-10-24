/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void *func_0200ed38(u32, s32, s32);
extern u8 *data_ov000_02051548;
void SetTex(s32 a, s32 b, s32 c, s32 d) {
    s32 *p                                  = func_0200ed38(0, -1, 0x14);
    p[0]                                    = d;
    p[3]                                    = c;
    p[2]                                    = b;
    p[1]                                    = a;
    p[4]                                    = *(s32 *) (data_ov000_02051548 + 0x278);
    *(s32 **) (data_ov000_02051548 + 0x278) = p;
}

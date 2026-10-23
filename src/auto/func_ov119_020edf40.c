#include "m2c.h"
typedef struct {
    u8 p[0x14];
    u32 buf;
    u8 q[0x4F8 - 0x18];
    u16 pos;
} S;
extern S *data_ov119_020f2f68;
u16 func_ov119_020edf40(s32 a) {
    u32 b = data_ov119_020f2f68->buf;
    s32 i = data_ov119_020f2f68->pos + a;
    return *(u8 *) (b + i) + (*(u8 *) (b + (i + 1)) << 8);
}

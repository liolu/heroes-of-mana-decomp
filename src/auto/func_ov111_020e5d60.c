#include "m2c.h"
typedef struct G {
    u8 pad[0x28];
    u8 *buf;
    u8 pad2[0x4E0];
    u16 off;
} G;
extern G *data_ov111_020f1bd8;
u16 func_ov111_020e5d60(s32 a) {
    s32 i = data_ov111_020f1bd8->off + a;
    u8 *b = data_ov111_020f1bd8->buf;
    return *(u8 *) ((s32) b + i) + (*(u8 *) ((s32) b + (i + 1)) << 8);
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 p[0x28];
    u8 *teams;
} G;
typedef struct {
    u8 p[0xc8];
    u32 q : 1;
    u32 flag : 1;
    u32 r : 30;
} Gs;
extern G *data_0203673c;
extern Gs *data_ov000_02051548;
extern s32 data_ov108_020da3e0;
extern s32 data_ov107_020e0de0;

void SetLogicNoForShipIn(s32 a, s32 b) {
    s32 off;
    s32 k;
    if (a < 4) {
        if (data_ov000_02051548->flag != 0) {
            if (b >= data_ov108_020da3e0) {
                return;
            }
        } else if (b >= data_ov107_020e0de0) {
            return;
        }
        k = 0x2d0;
        if (b == 0) {
            off = a * k;
            *(u32 *) (data_0203673c->teams + off + 0x210) &= ~0x10000000;
            *(u32 *) (data_0203673c->teams + off + 0x24c) &= ~0x100;
            *(u32 *) (data_0203673c->teams + off + 0x25c) &= ~0x100;
        } else {
            off = a * k;
            *(u32 *) (data_0203673c->teams + off + 0x210) |= 0x10000000;
            *(u32 *) (data_0203673c->teams + off + 0x24c) |= 0x100;
            *(u32 *) (data_0203673c->teams + off + 0x25c) |= 0x100;
            *(u32 *) (data_0203673c->teams + off + 4) &= ~0xfc;
        }
        {
            u8 *t              = data_0203673c->teams;
            *(u32 *) (t + off) = (*(u32 *) (t + off) & ~0xfc000000) | (b << 26);
        }
    }
}

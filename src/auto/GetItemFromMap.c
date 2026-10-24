/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;
typedef struct {
    u32 a : 10;
    u32 v : 10;
    u32 b : 12;
} BF;
typedef struct {
    s32 x;
    s32 y;
} P;
u8 *SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32);
void Ring_SoundEffect(s32);
void GetItemFromMap(u8 *obj) {
    u8 *r;
    P *p;
    Ring_SoundEffect(0x94);
    p = *(P **) (obj + 0x84);
    if (p != NULL) {
        r = SetStatusIcon(0xFFB1, 0x45, p->x + 8, p->y + 1, *(u16 *) (data_ov000_0205154c + 0x56C), 0, 10,
                          data_ov000_02051548 + 0x78C, *(s32 *) (data_ov000_02051548 + 0x12C), 0);
        if (*(P **) (obj + 0x84) != NULL) {
            *(s16 *) (r + 0x72) = *(s16 *) (*(u8 **) (obj + 0x84) + 0x72);
        }
        ((BF *) (r + 0xC))->v = 0x12C;
        r[0x3E] |= 0x80;
        r[0x3E] |= 0x20;
    }
}

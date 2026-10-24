/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 x;
    u8 y;
    u8 w;
    u8 h;
    u16 pad : 12;
    u16 kind : 4;
} Box;
typedef struct {
    u8 p[0x28c];
    u8 *tab;
} G;
extern G *data_ov000_02051548;
extern void CheckOneTATElineNinja(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void CheckOneYOKOlineNinja(s32, s32, s32, s32, s32, s32, s32, s32, s32);

void CheckOneLineNinja(Box *b, s32 r1, s32 idx) {
    s32 x;
    s32 y;
    u32 k = b->kind;
    switch (k) {
        case 0:
            x = b->x;
            y = b->y - b->h + 1;
            break;
        case 6:
            y = b->y;
            x = b->x - b->w + 1;
            break;
        case 4:
            y = b->y;
            x = b->x;
            break;
        case 2:
            y = b->y;
            x = b->x;
            break;
        default:
            break;
    }
    switch (k) {
        case 0:
        case 4:
            CheckOneTATElineNinja(2, r1, x, y, 0, -1, b->h, idx, *(s32 *) (data_ov000_02051548->tab + idx * 12 + 8));
            break;
        case 2:
        case 6:
            CheckOneYOKOlineNinja(4, r1, x, y, -1, 0, b->w, idx, *(s32 *) (data_ov000_02051548->tab + idx * 12 + 8));
            break;
    }
}

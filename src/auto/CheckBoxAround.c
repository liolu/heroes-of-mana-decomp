/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 x;
    u8 y;
    u8 w;
    u8 h;
    u16 pad : 12;
    u16 kind : 4;
    u16 pad2;
    s32 extra;
} Box;
extern s32 CheckOneYOKOline(s32, s32, s32, s32, s32, s32, s32);
extern s32 CheckOneTATEline(s32, s32, s32, s32, s32, s32, s32);

void CheckBoxAround(Box *b, s32 r, s32 arg) {
    s32 x;
    s32 y;
    switch (b->kind) {
        case 0:
            x = b->x;
            y = b->y - b->h + 1;
            break;
        case 6:
            y = b->y;
            x = b->x - b->w + 1;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        default:
            y = b->y;
            x = b->x;
            break;
    }
    if (y - 1 >= 0) {
        r = CheckOneYOKOline(0, r, x, y - 1, b->w, arg, b->extra);
    }
    if (y + b->h < 0x28) {
        r = CheckOneYOKOline(4, r, x, y + b->h, b->w, arg, b->extra);
    }
    if (x - 1 >= 0) {
        r = CheckOneTATEline(6, r, x - 1, y, b->h, arg, b->extra);
    }
    if (x + b->w < 0x28) {
        CheckOneTATEline(2, r, x + b->w, y, b->h, arg, b->extra);
    }
}

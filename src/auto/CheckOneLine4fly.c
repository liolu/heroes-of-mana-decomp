/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 x;
    u8 y;
    u8 z;
    u8 w;
    u16 lo : 12;
    u16 kind : 4;
} Rect;

void CheckOneTATEline4fly(s32, s32, s32, s32, s32, s32);
void CheckOneYOKOline4fly(s32, s32, s32, s32, s32, s32);

void CheckOneLine4fly(Rect *r, s32 a, s32 b) {
    s32 x;
    s32 y;
    u32 k = r->kind;
    switch (k) {
        case 0:
            x = r->x;
            y = r->y - r->w + 1;
            break;
        case 6:
            x = r->x - r->z + 1;
            y = r->y;
            break;
        case 4:
            y = r->y;
            x = r->x;
            break;
        case 2:
            y = r->y;
            x = r->x;
            break;
        default:
            break;
    }
    switch (k) {
        case 0:
        case 4:
            CheckOneTATEline4fly(2, a, x, y, r->w, b);
            break;
        case 2:
        case 6:
            CheckOneYOKOline4fly(4, a, x, y, r->z, b);
            break;
        default:
            break;
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 a : 12;
    u16 mode : 4;
} Hd;
extern s32 CheckOneYOKOline4fly(s32, s32, s32, s32, s32, s32);
extern s32 CheckOneTATEline4fly(s32, s32, s32, s32, s32, s32);

void CheckBoxAround4fly(u8 *b, s32 r, s32 c) {
    s32 x;
    s32 y;
    switch (((Hd *) (b + 4))->mode) {
        case 0:
            y = b[1] - b[3] + 1;
            x = b[0];
            break;
        case 6:
            x = b[0] - b[2] + 1;
            y = b[1];
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        default:
            y = b[1];
            x = b[0];
            break;
    }
    if (y - 1 >= 0) {
        r = CheckOneYOKOline4fly(0, r, x, y - 1, b[2], c);
    }
    if (y + b[3] < 0x28) {
        r = CheckOneYOKOline4fly(4, r, x, y + b[3], b[2], c);
    }
    if (x - 1 >= 0) {
        r = CheckOneTATEline4fly(6, r, x - 1, y, b[3], c);
    }
    if (x + b[2] < 0x28) {
        CheckOneTATEline4fly(2, r, x + b[2], y, b[3], c);
    }
}

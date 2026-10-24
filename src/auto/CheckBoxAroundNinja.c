/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 CheckOneTATElineNinja(s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 CheckOneYOKOlineNinja(s32, s32, s32, s32, s32, s32, s32, s32, s32);
typedef struct {
    u8 x;
    u8 y;
    u8 w;
    u8 h;
    u16 pad : 12;
    u16 kind : 4;
    u16 pad2;
    s32 w8;
} Box;

void CheckBoxAroundNinja(Box *box, s32 acc, s32 c) {
    s32 px;
    s32 py;
    switch (box->kind) {
        case 0:
            px = box->x;
            py = box->y - box->h + 1;
            break;
        case 6:
            py = box->y;
            px = box->x - box->w + 1;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        default:
            py = box->y;
            px = box->x;
            break;
    }
    if (py - 1 >= 0) {
        acc = CheckOneYOKOlineNinja(0, acc, px, py - 1, 0, 1, box->w, c, box->w8);
    }
    if (py + box->h < 0x28) {
        acc = CheckOneYOKOlineNinja(4, acc, px, py + box->h, 0, -1, box->w, c, box->w8);
    }
    if (px - 1 >= 0) {
        acc = CheckOneTATElineNinja(6, acc, px - 1, py, 1, 0, box->h, c, box->w8);
    }
    if (px + box->w < 0x28) {
        CheckOneTATElineNinja(2, acc, px + box->w, py, -1, 0, box->h, c, box->w8);
    }
}

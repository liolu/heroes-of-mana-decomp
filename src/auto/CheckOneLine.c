/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u16 a : 12;
    u16 mode : 4;
} Hd;
extern void CheckOneTATEline(s32, s32, s32, s32, s32, s32, s32);
extern void CheckOneYOKOline(s32, s32, s32, s32, s32, s32, s32);
extern u8 *data_ov000_02051548;

void CheckOneLine(u8 *b, s32 r, s32 idx) {
    s32 x;
    s32 y;
    u32 m = ((Hd *) (b + 4))->mode;
    switch (m) {
        case 0:
            y = b[1] - b[3] + 1;
            x = b[0];
            break;
        case 6:
            x = b[0] - b[2] + 1;
            y = b[1];
            break;
        case 4:
            y = b[1];
            x = b[0];
            break;
        case 2:
            y = b[1];
            x = b[0];
            break;
        case 1:
        case 3:
        case 5:
            break;
    }
    switch (m) {
        case 0:
        case 4:
            CheckOneTATEline(2, r, x, y, b[3], idx, *(s32 *) (*(u8 **) (data_ov000_02051548 + 0x28c) + idx * 12 + 8));
            break;
        case 2:
        case 6:
            CheckOneYOKOline(4, r, x, y, b[2], idx, *(s32 *) (*(u8 **) (data_ov000_02051548 + 0x28c) + idx * 12 + 8));
            break;
        case 1:
        case 3:
        case 5:
            break;
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x60];
    s8 x;
    s8 y;
} P;
s32 GetType_3Grid(P *a, P *b, s32 c, s32 t) {
    s32 d;
    switch (t) {
        case 0:
            d = a->x - b->x;
            if (d < 0) {
                d = -d;
            }
            if (d < 2 && b->y - a->y == 1) {
                return 1;
            }
            break;
        case 4:
            d = a->x - b->x;
            if (d < 0) {
                d = -d;
            }
            if (d < 2 && a->y - b->y == 1) {
                return 1;
            }
            break;
        case 6:
            d = a->y - b->y;
            if (d < 0) {
                d = -d;
            }
            if (d < 2 && b->x - a->x == 1) {
                return 1;
            }
            break;
        case 2:
            d = a->y - b->y;
            if (d < 0) {
                d = -d;
            }
            if (d < 2 && a->x - b->x == 1) {
                return 1;
            }
            break;
        default:
            return 0;
    }
    return 0;
}

#include "m2c.h"

typedef struct {
    u8 pad[0x54];
    u32 f54;
    u8 pad2[0xc];
    u32 sel;
} G;

extern G *data_ov000_02051548;
extern s32 checkRectPosCamp(s32, s32, s32, s32, s32);
extern void ObjSet(s32, s32, s32, s32);

s32 func_ov032_020d3708(void) {
    s32 r = 0;
    switch (data_ov000_02051548->sel) {
        default:
            break;
        case 0:
            if (checkRectPosCamp(0, 20, 23, 22, 25) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 0, 0);
            } else if (checkRectPosCamp(0, 16, 19, 18, 21) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 2, 0);
            } else if (checkRectPosCamp(0, 20, 15, 22, 17) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 4, 0);
            } else if (checkRectPosCamp(0, 24, 19, 26, 21) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 6, 0);
            }
            break;
        case 1:
            if (checkRectPosCamp(0, 6, 6, 8, 8) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 4, 0);
            } else if (checkRectPosCamp(0, 10, 10, 12, 12) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 6, 0);
            } else if (checkRectPosCamp(0, 6, 14, 8, 16) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 0, 0);
            } else if (checkRectPosCamp(0, 2, 10, 4, 12) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 2, 0);
            }
            break;
        case 2:
            if (checkRectPosCamp(0, 34, 26, 36, 28) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 6, 0);
            } else if (checkRectPosCamp(0, 30, 30, 32, 32) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 0, 0);
            } else if (checkRectPosCamp(0, 26, 26, 28, 28) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 2, 0);
            } else if (checkRectPosCamp(0, 30, 22, 32, 24) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 4, 0);
            }
            break;
        case 3:
            if (checkRectPosCamp(0, 29, 4, 31, 6) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 4, 0);
            } else if (checkRectPosCamp(0, 33, 8, 35, 10) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 6, 0);
            } else if (checkRectPosCamp(0, 29, 12, 31, 14) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 0, 0);
            } else if (checkRectPosCamp(0, 25, 8, 27, 10) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 2, 0);
            }
            break;
        case 4:
            if (checkRectPosCamp(0, 10, 30, 12, 32) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 0, 0);
            } else if (checkRectPosCamp(0, 6, 26, 8, 28) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 2, 0);
            } else if (checkRectPosCamp(0, 10, 22, 12, 24) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 4, 0);
            } else if (checkRectPosCamp(0, 14, 26, 16, 28) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 6, 0);
            }
            break;
        case 5:
            if (checkRectPosCamp(0, 15, 6, 17, 8) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 4, 0);
            } else if (checkRectPosCamp(0, 19, 10, 21, 12) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 6, 0);
            } else if (checkRectPosCamp(0, 15, 14, 17, 16) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 0, 0);
            } else if (checkRectPosCamp(0, 12, 10, 14, 12) > 0) {
                r = 1;
                ObjSet(0xF00, 3, 2, 0);
            }
            break;
    }
    if (r != 1) {
        return 0;
    }
    data_ov000_02051548->f54 |= 1;
    data_ov000_02051548->f54 |= 2;
    data_ov000_02051548->f54 |= 4;
    return 1;
}

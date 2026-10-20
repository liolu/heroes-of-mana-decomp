/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;

void SetMapCanThere(void) {
    s32 col;
    s32 row;
    u16 *p;
    s32 minx;
    s32 maxx;
    s32 miny;
    s32 maxy;

    minx = 0x28;
    maxx = 0;
    miny = 0x28;
    maxy = 0;
    p = M2C_FIELD(data_ov000_02051548, u16 **, 0x2E0);
    row = 0;
    do {
        col = 0;
        do {
            if (M2C_FIELD(M2C_FIELD(data_ov000_02051548, u8 **, 0x2E0) + *p, M2C_UNK *, 0) != 0) {
                if (minx > col) {
                    minx = col;
                }
                if (maxx < col) {
                    maxx = col;
                }
                if (miny > row) {
                    miny = row;
                }
                if (maxy < row) {
                    maxy = row;
                }
            }
            col++;
            p++;
        } while (col < 0x28);
        row++;
    } while (row < 0x28);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x1D4) = (s16) minx;
    M2C_FIELD(data_ov000_02051548, s16 *, 0x1D8) = (s16) maxx;
    M2C_FIELD(data_ov000_02051548, s16 *, 0x1D6) = (s16) miny;
    M2C_FIELD(data_ov000_02051548, s16 *, 0x1DA) = (s16) maxy;
}

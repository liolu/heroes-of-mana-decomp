/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 p0[0x40];
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} A;
typedef struct {
    u8 p[0x1c0];
    s32 x;
    s32 y;
    s32 z;
} B;
extern B *data_ov000_02051548;
void CameraPosToObj(A *a) {
    data_ov000_02051548->x = a->x;
    data_ov000_02051548->y = a->y + a->w + 0x2800;
    data_ov000_02051548->z = a->z;
}

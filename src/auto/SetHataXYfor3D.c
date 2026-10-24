/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 x;
    s32 y;
} P;
typedef struct {
    u8 pad[0x260];
    P *p;
} G;
extern G *data_ov000_02051548;
void GetHata3Dto2DZahyou(s32 *, s32 *);

void SetHataXYfor3D(void) {
    s32 x;
    s32 y;
    if (data_ov000_02051548->p != 0) {
        GetHata3Dto2DZahyou(&x, &y);
        data_ov000_02051548->p->x = x;
        data_ov000_02051548->p->y = y;
    }
}

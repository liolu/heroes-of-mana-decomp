/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void ClearAreaMapMaskForEnemy(void);
typedef struct {
    u8 pad[0x480];
    u16 *map;
} Mp;
extern Mp *data_ov000_02051548;

void InitOfAreaMap(void) {
    s32 i;
    u16 *p;
    u32 *q;
    u16 *r;
    s32 j;
    s32 k;

    data_ov000_02051548->map = (u16 *) 0x6204000;
    p                        = data_ov000_02051548->map;
    for (i = 0; i < 0x400; i++) {
        *p++ = i;
    }
    q = (u32 *) 0x6208000;
    r = (u16 *) ((u8 *) q - 0x3000);
    for (j = 0; j < 0x2000; j++) {
        *q++ = 0x22222222;
    }
    for (k = 0; k < 0x300; k++) {
        *r++ = k;
    }
    ClearAreaMapMaskForEnemy();
}

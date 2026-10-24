/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    s16 x0;
    s16 y0;
    u32 st : 2;
} Rc;

typedef struct {
    u8 pad0[0x46c];
    void *p46c;
    u8 pad1[0x4fc - 0x470];
    s16 x1;
    s16 y1;
    Rc rc;
    u8 pad2[0x78c - 0x508];
    void *p78c;
} G;

typedef struct {
    u8 pad[0x28];
    u16 x;
    u16 y;
} T;

extern G *data_ov000_02051548;
extern T *data_ov000_0205154c;
s32 GetTouchPanelStatus(void);
s32 getComIcon(void *, s32, s32);
void DrawLine(void *, s32, s32, s32, s32);
void PaintScreenOutRect(void);

s32 SelectUnitByDrawRect(void) {
    switch (GetTouchPanelStatus()) {
        case 3:
            if (getComIcon(data_ov000_02051548->p78c, (s16) data_ov000_0205154c->x, (s16) data_ov000_0205154c->y) == 0xffb4) {
                return 1;
            }
            data_ov000_02051548->rc.st = 1;
            data_ov000_02051548->rc.x0 = data_ov000_0205154c->x;
            data_ov000_02051548->x1    = data_ov000_02051548->rc.x0;
            data_ov000_02051548->rc.y0 = data_ov000_0205154c->y;
            data_ov000_02051548->y1    = data_ov000_02051548->rc.y0;
            return 0;
        case 1:
            DrawLine(data_ov000_02051548->p46c, data_ov000_02051548->rc.x0, data_ov000_02051548->rc.y0,
                     (s16) data_ov000_0205154c->x, (s16) data_ov000_0205154c->y);
            data_ov000_02051548->rc.x0 = data_ov000_0205154c->x;
            data_ov000_02051548->rc.y0 = data_ov000_0205154c->y;
            return 0;
        case 0:
        case 2:
        default:
            if (data_ov000_02051548->rc.st == 1) {
                DrawLine(data_ov000_02051548->p46c, data_ov000_02051548->rc.x0, data_ov000_02051548->rc.y0,
                         data_ov000_02051548->x1, data_ov000_02051548->y1);
                PaintScreenOutRect();
                data_ov000_02051548->rc.st = 2;
            }
            return 0;
    }
}

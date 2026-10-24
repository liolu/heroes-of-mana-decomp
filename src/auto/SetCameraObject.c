/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

void CameraPosToObj(int);
extern u8 data_ov003_020aa1b4;
typedef struct {
    u8 p0[0x1c];
    u32 lo : 30;
    u32 cam : 1;
    u32 hi : 1;
    u8 p1[0x1ac];
    int mode;
    int obj;
} G;
extern G *data_ov000_02051548;

void SetCameraObject(int a, int b) {
    G *g = data_ov000_02051548;
    if (g->cam) {
        g->cam                    = 0;
        data_ov000_02051548->mode = 0;
    } else {
        g->obj                    = a;
        data_ov000_02051548->mode = b;
        if (data_ov000_02051548->mode < 2) {
            CameraPosToObj(a);
            data_ov000_02051548->mode = 1;
        }
    }
}

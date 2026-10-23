/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 a : 10;
    u32 f : 1;
    u32 b : 21;
} B10;
typedef struct {
    u32 a : 17;
    u32 f : 1;
    u32 b : 14;
} B17;
extern void GetObjCenter2D(s32, s32 *);
extern void SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void deleteComObj(void *);
extern u8 *data_ov000_02051548;
extern u8 *data_ov000_0205154c;

void PutTargetOnCameraObj(void) {
    s32 pos[3];
    s32 pos2[3];
    u8 *g = data_ov000_02051548;
    s32 obj;
    if (((B10 *) (g + 0xd0))->f == 0) {
        obj = *(s32 *) (g + 0x1d0);
        if (obj != 0 && ((B17 *) (g + 0x20))->f == 0) {
            if (*(s32 *) (g + 0x794) == 0) {
                u16 t = *(u16 *) (data_ov000_0205154c + 0x500 + 0x6c);
                GetObjCenter2D(obj, pos);
                g = data_ov000_02051548;
                SetStatusIcon(0xFFFF, 0x25, pos[0], pos[1], t, 1, 0, (s32) (g + 0x394 + 0x400), *(s32 *) (g + 0x12c), 0);
            } else {
                s32 *q;
                GetObjCenter2D(obj, pos2);
                q    = *(s32 **) (data_ov000_02051548 + 0x794);
                q[0] = pos2[0];
                q[1] = pos2[1];
            }
        } else if (*(s32 *) (g + 0x794) != 0) {
            deleteComObj(g + 0x394 + 0x400);
            *(s32 *) (data_ov000_02051548 + 0x794) = 0;
        }
    }
}

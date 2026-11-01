/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void CameraMove(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void WaitSyncCamera(void);

void CameraMoveAndWait(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g) {
    CameraMove(a, b, c, d, e, f, g);
    WaitSyncCamera();
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x1d0];
    void *cur;
} Mgr;
extern Mgr *data_ov000_02051548;
void ClearObjGraData(void *);
void MIi_CpuClear16(s32, void *, s32);
void CancelTransTex2Vram(void *);

void ReleaseObjWorkOne(u8 *obj) {
    Mgr *m = data_ov000_02051548;
    if (m->cur == obj) {
        m->cur = 0;
    }
    ClearObjGraData(obj);
    MIi_CpuClear16(0, obj, 0x110);
    *(s32 *) (obj + 0xb4) = -1;
    *(s32 *) (obj + 0xb8) = -1;
    CancelTransTex2Vram(obj);
    *(s32 *) (obj + 0x10c) = 0;
}

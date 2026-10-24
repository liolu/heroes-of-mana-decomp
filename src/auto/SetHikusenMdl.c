/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct V3 {
    s32 x, y, z;
} V3;
typedef struct R3 {
    s16 x, y, z;
} R3;
typedef struct TP {
    u8 a;
    u8 b;
} TP;
extern TP data_ov003_020ad4ac[];
void SetHikusenScale(V3 *);
void AddModel(s32, s32, V3 *, V3 *, R3 *, s32, s32, s32);

void SetHikusenMdl(s32 idx) {
    V3 scale;
    V3 pos;
    R3 rot;
    SetHikusenScale(&scale);
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    rot.x = 0;
    rot.y = 0;
    rot.z = 0;
    AddModel(data_ov003_020ad4ac[idx].a, 0, &scale, &pos, &rot, 0, data_ov003_020ad4ac[idx].b, 0);
}

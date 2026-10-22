/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK Put_MissionStartCompleteWinLose(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020acb20;

typedef struct {
    u8 pad[0xC];
    u32 lo : 12;
    u32 cnt : 12;
    u32 hi : 8;
} S;

typedef struct {
    u8 pad0[0xD];
    u8 f13;
    u8 pad1[0x1F];
    u8 f2d;
} B;

extern S *data_ov000_02051548;
extern B data_ov003_020b532c;

void Put__MISSION_DRAW(void) {
    data_ov000_02051548->cnt++;
    if (data_ov000_02051548->cnt >= 0x63U) {
        data_ov000_02051548->cnt = 0x63U;
    }
    data_ov003_020b532c.f2d++;
    if (data_ov003_020b532c.f2d >= 0x63U) {
        data_ov003_020b532c.f2d = 0x63U;
    }
    data_ov003_020b532c.f13++;
    if (data_ov003_020b532c.f13 >= 0x63U) {
        data_ov003_020b532c.f13 = 0x63U;
    }
    Put_MissionStartCompleteWinLose(7);
}

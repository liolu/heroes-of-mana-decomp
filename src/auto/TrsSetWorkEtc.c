/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct TrsInfo {
    u32 lo : 7;
    u32 flag : 1;
    u32 hi : 24;
} TrsInfo;
typedef struct TrsWork {
    u8 pad0[0x14];
    TrsInfo info;
    u8 pad1[0x4C0 - 0x18];
    s32 *dst;
    u8 pad2[0x4D0 - 0x4C4];
    s32 *src;
} TrsWork;
extern void SetBigTrans(s32 *, s32, s32, s32);
extern TrsWork *data_ov000_02051548;
void TrsSetWorkEtc(void) {
    if (data_ov000_02051548->src != 0) {
        *data_ov000_02051548->dst = (s32) data_ov000_02051548->src;
        SetBigTrans(data_ov000_02051548->dst, (s32) data_ov000_02051548->src + 4, data_ov000_02051548->info.flag + 3, 0);
        data_ov000_02051548->src       = 0;
        data_ov000_02051548->info.flag = data_ov000_02051548->info.flag ^ 1;
    }
}

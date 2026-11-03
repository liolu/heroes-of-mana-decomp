/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 data_ov003_020b6440[];
extern u8 data_ov003_020b7840[];
extern u8 data_ov003_020ae7b8[];
extern void WH_StateOutSetMPData(void);
s32 WM_SetMPDataToPortEx(void *cb, s32 a, s32 b, s32 c, u16 d, u16 e, u16 f);
void DC_FlushRange(u8 *p, s32 n);
char *WH_GetWMErrCodeName(s32 code);

s32 WH_StateInSetMPData(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;

    DC_FlushRange(data_ov003_020b7840, *(s32 *) (data_ov003_020b6440 + 0x28));
    ret = WM_SetMPDataToPortEx(WH_StateOutSetMPData, arg2, arg0, arg1, 0xFFFF, 0xE, 2);
    if (ret != 2) {
        if (*(s32 *) (data_ov003_020b6440 + 0x18) != 0) {
            ((void (*)(u8 *, char *)) * (s32 *) (data_ov003_020b6440 + 0x18))(data_ov003_020ae7b8, WH_GetWMErrCodeName(ret));
        }
        return 0;
    }
    return 1;
}

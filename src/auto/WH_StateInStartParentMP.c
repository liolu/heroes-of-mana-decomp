/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void WH_ChangeSysState(s32);
void WH_SetError(void);
s32 func_02019d20(void *, void *, u16, void *, u16, s32);
extern void WH_StateOutStartParentMP(void);
extern u8 data_ov003_020b6440[];
extern u8 data_ov003_020b7a40[];
extern u8 data_ov003_020b7840[];

s32 WH_StateInStartParentMP(void) {
    s32 r;
    s32 v;

    v = *(s32 *) (data_ov003_020b6440 + 0x10);
    if (!(v != 4 && v != 6 && v != 5)) {
        r = 1;
    } else {
        WH_ChangeSysState(4);
        if (func_02019d20((void *) WH_StateOutStartParentMP, data_ov003_020b7a40, (u16) * (s32 *) (data_ov003_020b6440 + 0x30),
                          data_ov003_020b7840, (u16) * (s32 *) (data_ov003_020b6440 + 0x28), 1) == 2) {
            r = 1;
        } else {
            WH_SetError();
            r = 0;
        }
    }
    return r;
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x28];
    u32 a;
    u32 pad2;
    u32 b;
} D;
extern D data_ov003_020b6440;
extern u8 data_ov003_020b7a40[];
extern u8 data_ov003_020b7840[];
void WH_StateOutStartChildMP(void);
s32 func_02019d20(void *, void *, u16, void *, u16, s32);
void WH_SetError(s32);
s32 WH_StateInStartChildMP(void) {
    s32 r = func_02019d20(WH_StateOutStartChildMP, data_ov003_020b7a40, data_ov003_020b6440.b, data_ov003_020b7840,
                          data_ov003_020b6440.a, 1);
    if (r == 2) {
        return 1;
    }
    WH_SetError(r);
    return 0;
}

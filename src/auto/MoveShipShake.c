/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Gm {
    u32 f0;
    u32 lo : 27;
    u32 cnt : 4;
    u32 top : 1;
} Gm;
typedef struct Mt {
    s32 a[4];
} Mt;
void G2x_SetBGyAffine_(u32, void *, s32, s32, s32, s32);
void func_020083e0(void *);
extern s8 data_ov109_020e9ab0[];
extern Gm *data_ov109_020ea340;

void MoveShipShake(void) {
    Mt m;

    if (data_ov109_020ea340->cnt != 0) {
        data_ov109_020ea340->cnt     = data_ov109_020ea340->cnt - 1;
        *(volatile s32 *) 0x04000010 = data_ov109_020e9ab0[data_ov109_020ea340->cnt] & 0x1FF;
        func_020083e0(&m);
        G2x_SetBGyAffine_(0x04000020, &m, data_ov109_020e9ab0[data_ov109_020ea340->cnt], 0, 0, 0);
        G2x_SetBGyAffine_(0x04000030, &m, data_ov109_020e9ab0[data_ov109_020ea340->cnt], 0, 0, 0);
    }
}

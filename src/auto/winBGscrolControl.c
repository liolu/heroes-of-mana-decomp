/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u16 b0 : 1;
    u16 rest : 15;
} H0;
typedef struct {
    u16 pad : 6;
    u16 b6 : 1;
    u16 rest : 9;
} H6;
typedef struct {
    H0 f0;
    u8 pad0[0xD0 - 2];
    H0 fD0;
    u8 pad1[0x338 - 0xD2];
    H6 f338;
    u8 pad2[0x454 - 0x33A];
    s8 s454;
    s8 s455;
    s8 s456;
} S;
typedef struct {
    u8 pad[0xAF4];
    s32 v;
} T;
extern S *data_ov000_02051550;
extern T *data_ov000_0205154c;

void winBGscrolControl(void) {
    s8 a;
    s32 m;
    s8 r;
    a = data_ov000_02051550->s454;
    if (a != 0) {
        if (data_ov000_02051550->f338.b6 == 0) {
            m = data_ov000_0205154c->v * 6;
            if (a > m) {
                data_ov000_02051550->s454 = a - m;
                data_ov000_02051550->s455 = data_ov000_0205154c->v * 6;
            } else {
                data_ov000_02051550->s455 = a;
                data_ov000_02051550->s454 = 0;
            }
        } else {
            s32 t = data_ov000_0205154c->v;
            if (t * 6 + a < 0x40) {
                data_ov000_02051550->s454 = a + t * 8;
                data_ov000_02051550->s455 = (0 - data_ov000_0205154c->v) * 8;
            } else {
                data_ov000_02051550->s455 = 0 - (data_ov000_02051550->s456 + 0x40);
                data_ov000_02051550->s454 = 0;
            }
        }
        data_ov000_02051550->s456 = data_ov000_02051550->s456 + data_ov000_02051550->s455;
        r                         = data_ov000_02051550->s456;
        if (r < -0x40) {
            r = -0x40;
        }
        if (data_ov000_02051550->f0.b0 != 0) {
            *(s32 *) 0x04000014 = r & 0x1FF;
        }
        if (data_ov000_02051550->fD0.b0 != 0) {
            *(s32 *) 0x04001014 = r & 0x1FF;
        }
    } else {
        data_ov000_02051550->s455 = 0;
    }
}

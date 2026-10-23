/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad0;
    u32 w4;
    u32 pad : 23;
    u32 b23 : 1;
    u32 rest : 8;
    u32 pad1[2];
    u16 wz[1];
} P;
typedef struct {
    u8 pad[0xE8];
    P *pe8;
} O;
typedef struct {
    s32 (*f)(O *);
    u8 pad[0x10];
} T;
typedef struct {
    u8 pad[0xC8];
    u32 pad0 : 1;
    u32 b1 : 1;
    u32 rest : 30;
} G;
extern G *data_ov000_02051548;
extern s32 data_ov108_020da3e4;
extern T data_ov108_020da400[];
extern s32 data_ov107_020e0de4;
extern T data_ov107_020e0e00[];
s32 GetLogicNo(O *);
void SetUseWaza(O *, s32, s32);
void Logic_separateForSelWaza(O *self) {
    s32 n = GetLogicNo(self);
    s32 r;
    if (n != 0 && self->pe8 != 0 && self->pe8->b23 == 0) {
        if (data_ov000_02051548->b1 != 0) {
            if (n < data_ov108_020da3e4) {
                if (data_ov108_020da400[n].f != 0) {
                    r = data_ov108_020da400[n].f(self);
                    if (r == -1) {
                        SetUseWaza(self, 0, 0);
                    } else {
                        SetUseWaza(self, r, *(u16 *) ((u8 *) self->pe8 + r * 2 + 0x14));
                    }
                }
            }
        } else {
            if (n < data_ov107_020e0de4) {
                if (data_ov107_020e0e00[n].f != 0) {
                    r = data_ov107_020e0e00[n].f(self);
                    if (r == -1) {
                        SetUseWaza(self, 0, 0);
                    } else {
                        SetUseWaza(self, r, *(u16 *) ((u8 *) self->pe8 + r * 2 + 0x14));
                    }
                }
            }
        }
    }
}

/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 pad0;
    u32 w4;
    u32 pad : 23;
    u32 b23 : 1;
    u32 rest : 8;
} P;
typedef struct {
    u8 pad[0xE8];
    P *pe8;
} O;
typedef struct {
    s32 (*f)(O *, s32);
    u8 pad[0x10];
} T;
typedef struct {
    u8 pad[0x24];
    u32 p0 : 8;
    u32 b8 : 1;
    u32 r0 : 23;
    u8 pad2[0xC8 - 0x28];
    u32 pad1 : 1;
    u32 b1 : 1;
    u32 rest : 30;
} G;
extern G *data_ov000_02051548;
extern s32 data_ov108_020da3e4;
extern T data_ov108_020da3f8[];
extern s32 data_ov107_020e0de4;
extern T data_ov107_020e0df8[];
s32 GetLogicNo(O *);

s32 Logic_separateInSite(O *self, s32 a) {
    s32 n = GetLogicNo(self);
    s32 r;
    if (n == 0) {
        r = 0;
    } else if (data_ov000_02051548->b8 != 0) {
        r = 0;
    } else if (self->pe8 == 0) {
        r = 0;
    } else if (self->pe8->b23 != 0) {
        r = 0;
    } else if (data_ov000_02051548->b1 != 0) {
        if (n >= data_ov108_020da3e4) {
            r = 0;
        } else if (data_ov108_020da3f8[n].f != 0) {
            r = data_ov108_020da3f8[n].f(self, a);
        } else {
            goto z;
        }
    } else {
        if (n >= data_ov107_020e0de4) {
            r = 0;
        } else if (data_ov107_020e0df8[n].f != 0) {
            r = data_ov107_020e0df8[n].f(self, a);
        } else {
        z:
            r = 0;
        }
    }
    return r;
}

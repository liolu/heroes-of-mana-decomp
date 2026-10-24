#include "m2c.h"
typedef struct {
    s32 m[9];
} Mtx33;
extern void MTX_Identity33_(Mtx33 *);
extern void G3_MultMtx33(Mtx33 *);
extern u8 *data_ov000_02051548;
void func_ov004_020bc48c(void) {
    Mtx33 m;
    u8 *b;
    MTX_Identity33_(&m);
    b      = data_ov000_02051548;
    m.m[0] = *(s32 *) (b + 0x29c);
    m.m[1] = *(s32 *) (b + 0x2a8);
    m.m[2] = *(s32 *) (b + 0x2b4);
    m.m[3] = *(s32 *) (b + 0x2a0);
    m.m[4] = *(s32 *) (b + 0x2ac);
    m.m[5] = *(s32 *) (b + 0x2b8);
    m.m[6] = *(s32 *) (b + 0x2a4);
    m.m[7] = *(s32 *) (b + 0x2b0);
    m.m[8] = *(s32 *) (b + 0x2bc);
    G3_MultMtx33(&m);
}

/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02088d08(void *);

typedef struct {
    s32 w0;
    s32 w1;
    s32 w2;
    s32 w3;
} Quad;

typedef struct {
    u8 pad0[0xC];
    s32 state;
    s32 pad10;
    s32 unk14;
    s32 pad18[4];
    Quad quad;
} Obj;

s32 func_ov123_020883d8(Obj *o, Quad *src) {
    s32 result;

    if (o->unk14 != 0) {
        o->unk14 = 0;
        return 0;
    }
    o->unk14 = 0;
    if (o->state != 4) {
        return 0;
    }
    func_ov123_02088d08(o);
    o->state = 5;
    if (src != NULL) {
        o->quad = *src;
    }
    result = 1;
    return result;
}

#include "m2c.h"

typedef struct H2 {
    u8 a, b;
} H2;
typedef struct Blk {
    s32 w[16];
} Blk;
typedef struct In {
    s32 pad0;
    Blk blk;
    s32 w44;
    s32 w48;
    u8 b4c, b4d, b4e, b4f;
} In;
typedef struct Out {
    Blk blk;
    s32 w40;
    s32 w44;
    u8 b48, b49, b4a, b4b;
} Out;
typedef struct Gl {
    u8 pad[0x2c];
    u8 *p;
} Gl;
extern Gl *data_0203673c;
s32 func_ov123_020cc9fc(Blk *);
void func_ov123_020cca08(Blk *);

s32 func_ov123_020cf058(In *src) {
    Out *dst;
    if (func_ov123_020cc9fc(&src->blk) != 0) {
        func_ov123_020cca08(&src->blk);
    }
    dst               = (Out *) (data_0203673c->p + 0x9c + 0x1000);
    dst->blk          = src->blk;
    dst->w40          = src->w44;
    dst->w44          = src->w48;
    dst->b48          = src->b4c;
    dst->b49          = src->b4d;
    *(H2 *) &dst->b4a = *(H2 *) &src->b4e;
    return 1;
}

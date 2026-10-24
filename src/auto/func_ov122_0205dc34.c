#include "m2c.h"

typedef struct {
    u8 pad[0xde0];
    u32 flags;
} A;
typedef struct {
    u8 pad[0xc];
    s32 f;
} B;
typedef struct {
    u8 pad[0x108c];
    u32 top;
} C;
typedef struct {
    u8 pad[0x2c];
    C *c;
} G;

s32 func_ov122_0205dafc(s32, s32);
s32 func_ov123_020d2ffc(void);
s32 func_ov123_020d3030(void);
void func_ov123_020d3058(void);
extern G *data_0203673c;
extern A data_ov122_02065604;
extern B data_ov122_020664b0;

s32 func_ov122_0205dc34(void) {
    data_ov122_02065604.flags &= ~0x80;
    if (func_ov123_020d2ffc() != 0) {
        if (func_ov122_0205dafc(2, 0) == 2) {
            return 0;
        }
        func_ov123_020d3058();
        data_ov122_020664b0.f = 1;
    } else if (func_ov123_020d3030() == 0) {
        while (1) {
            func_ov122_0205dafc(4, 3);
            if (func_ov122_0205dafc(5, 0) == 2) {
                return 0;
            }
            if (func_ov122_0205dafc(6, 0) == 1) {
                func_ov123_020d3058();
                data_ov122_020664b0.f = 1;
                break;
            }
        }
    } else {
        if (data_0203673c->c->top >> 31) {
            func_ov123_020d3058();
        }
        if (func_ov122_0205dafc(1, 0) == 2) {
            return 0;
        }
    }
    return 1;
}

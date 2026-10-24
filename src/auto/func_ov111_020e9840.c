#include "m2c.h"

typedef struct {
    u32 act : 1;
    u32 p : 9;
    u32 dir : 1;
    u32 rest : 21;
    s32 cur;
    s32 max;
} Fade;

void GXx_SetMasterBrightness_(s32, s32);
s32 func_0202d478(s32, s32);
void func_ov111_020e964c(u8 *);
extern u8 *data_ov111_020ec1a4;
extern Fade data_ov111_020f13a8[];

void func_ov111_020e9840(void) {
    s32 i;
    s32 off;
    Fade *f;
    s32 k;
    s32 v;
    func_ov111_020e964c(data_ov111_020ec1a4);
    func_ov111_020e964c(data_ov111_020ec1a4 + 0x410);
    func_ov111_020e964c(data_ov111_020ec1a4 + 0x820);
    func_ov111_020e964c(data_ov111_020ec1a4 + 0xC30);
    i   = 0;
    off = 0;
    do {
        func_ov111_020e964c(data_ov111_020ec1a4 + 0x1040 + off);
        i++;
        off += 0x410;
    } while (i < 5);
    k = 0;
    f = data_ov111_020f13a8;
    do {
        if (f->act) {
            v = func_0202d478(f->cur * 0x10, f->max);
            if (!f->dir) {
                GXx_SetMasterBrightness_(0x0400006C, v - 0x10);
                *(s16 *) 0x04000050 = 0;
            } else {
                GXx_SetMasterBrightness_(0x0400006C, 0 - v);
            }
            f->cur = f->cur + 1;
            if (f->cur > f->max) {
                f->act = 0;
            }
        }
        k++;
        f++;
    } while (k < 2);
}

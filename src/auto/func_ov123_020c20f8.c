/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Pt {
    u16 x;
    u16 y;
} Pt;
typedef struct O {
    u8 pad[0x10];
    u16 h10;
    u8 pad2[4];
    u16 h16;
    u8 b18;
    u8 b19;
    u8 b1a;
    u8 b1b;
    u8 b1c;
    u8 b1d;
} O;
void func_ov123_020c1de8(s32);
void func_ov123_020c207c(s32);
void func_ov123_020c3658(void);
void func_ov123_020ca658(Pt *);
s32 func_ov123_020ca82c(void *);
extern u8 data_ov123_020d8290[];
extern u8 data_ov123_020d845c[];
extern O *data_ov123_020e46c8;

void func_ov123_020c20f8(void) {
    Pt sp;
    s32 r4;
    if (func_ov123_020ca82c(data_ov123_020d845c) != 0) {
        func_ov123_020ca658(&sp);
        if (sp.x >= data_ov123_020e46c8->h10 - 0x1E) {
            r4 = data_ov123_020e46c8->b18 + (sp.y - data_ov123_020e46c8->h16);
            if (r4 < 0) {
                r4 = 0;
            } else {
                s32 t = data_ov123_020e46c8->b19 - data_ov123_020d8290[data_ov123_020e46c8->b1b];
                if (r4 >= t) {
                    r4 = t;
                }
            }
            func_ov123_020c207c(r4);
            func_ov123_020c1de8(r4);
            data_ov123_020e46c8->b1d = 2;
            return;
        }
    }
    func_ov123_020c3658();
    data_ov123_020e46c8->b1c = 0;
    data_ov123_020e46c8->b1d = 3;
}

#include "m2c.h"

typedef struct G {
    u8 pad[0xD52];
    u8 pos;
    u8 max;
    u8 pad2;
    s8 busy;
} G;
typedef struct H {
    u8 pad[0x50];
    s16 off;
} H;

void func_ov112_020e289c(void);
void func_ov112_020e59bc(s32, s32, s32);
extern G data_ov112_020eca1c;
extern H data_ov112_020ed71c;

s32 func_ov112_020e5aa4(s32 a) {
    s32 i;
    switch (a) {
        case 0x45:
            if (data_ov112_020eca1c.pos == 0) {
                return 0;
            }
            data_ov112_020eca1c.busy = 1;
            data_ov112_020eca1c.pos  = data_ov112_020eca1c.pos - 1;
            func_ov112_020e59bc(0, 0, 0);
            data_ov112_020ed71c.off = -0x18;
            i                       = 0;
            do {
                func_ov112_020e289c();
                i += 4;
                data_ov112_020ed71c.off = data_ov112_020ed71c.off + 4;
            } while (i < 0x18);
            data_ov112_020eca1c.busy = 0;
            data_ov112_020ed71c.off  = 0;
            if (data_ov112_020eca1c.pos == 0) {
                return 0;
            }
            break;
        case 0x46:
            if (data_ov112_020eca1c.pos + 4 >= data_ov112_020eca1c.max - 1) {
                return 0;
            }
            data_ov112_020eca1c.busy = 1;
            func_ov112_020e59bc(5, 0, 0);
            i = 0;
            do {
                func_ov112_020e289c();
                i += 4;
                data_ov112_020ed71c.off = data_ov112_020ed71c.off - 4;
            } while (i < 0x18);
            data_ov112_020eca1c.pos  = data_ov112_020eca1c.pos + 1;
            data_ov112_020ed71c.off  = 0;
            data_ov112_020eca1c.busy = 0;
            if (data_ov112_020eca1c.pos + 4 >= data_ov112_020eca1c.max - 1) {
                return 0;
            }
            break;
    }
    return 1;
}

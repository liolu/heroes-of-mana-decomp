#include "m2c.h"
typedef struct {
    u8 pad[0x9a4];
    u8 c4;
    u8 c5;
    u8 p[2];
    u32 flags;
} A;
typedef struct {
    u8 pad[0xa6];
    s16 s;
} B;
extern A data_ov116_020e71a8;
extern B data_ov116_020e7aa8;
void func_ov116_020e22e4(void);
s32 func_ov116_020e4050(s32 mode) {
    s32 i;
    switch (mode) {
        case 3: {
            if (data_ov116_020e71a8.c5 == 0) {
                return 0;
            }
            data_ov116_020e71a8.flags |= 0x100000;
            data_ov116_020e71a8.c5--;
            data_ov116_020e7aa8.s = -24;
            for (i = 0; i < 24; i += 4) {
                func_ov116_020e22e4();
                data_ov116_020e7aa8.s += 4;
            }
            data_ov116_020e71a8.flags &= ~0x100000;
            data_ov116_020e7aa8.s = 0;
            if (data_ov116_020e71a8.c5 == 0) {
                return 0;
            }
            break;
        }
        case 4: {
            if (data_ov116_020e71a8.c5 + 6 >= data_ov116_020e71a8.c4) {
                return 0;
            }
            data_ov116_020e71a8.flags |= 0x100000;
            for (i = 0; i < 24; i += 4) {
                func_ov116_020e22e4();
                data_ov116_020e7aa8.s -= 4;
            }
            data_ov116_020e71a8.c5++;
            data_ov116_020e7aa8.s = 0;
            data_ov116_020e71a8.flags &= ~0x100000;
            if (data_ov116_020e71a8.c5 + 6 >= data_ov116_020e71a8.c4) {
                return 0;
            }
        }
    }
    return 1;
}

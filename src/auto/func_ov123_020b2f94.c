#include "m2c.h"
typedef struct {
    u8 pad[0x20];
    s32 a;
    s32 b;
    u8 rest[0xec - 0x28];
} B;
extern s32 *data_ov123_020e45f8;
s32 func_ov123_020a9ba0(B *);
void func_0200fddc(void);
s32 func_ov123_020b2f94(s32 arg) {
    B buf;
    switch (*data_ov123_020e45f8) {
        case 0:
        case 1:
        case 3:
        case 5:
            return 0;
        case 2:
            return 1;
        case 4:
            return 2;
        case 6:
            if (func_ov123_020a9ba0(&buf) != 1) {
                func_0200fddc();
            }
            if (buf.a >= 0 && buf.a <= 3 && buf.b == 1) {
                return 3;
            }
            return 5;
        case 7:
            return 4;
    }
    return arg;
}

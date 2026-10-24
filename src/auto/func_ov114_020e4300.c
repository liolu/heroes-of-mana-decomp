#include "m2c.h"

typedef struct D1 {
    u8 pad[0x51c];
    u8 f51c;
    u8 f51d;
} D1;

typedef struct D2 {
    u8 pad[0x1e];
    s16 f1e;
} D2;

void func_ov114_020e2688(void);
extern D1 data_ov114_020e6148;
extern D2 data_ov114_020e6648;

s32 func_ov114_020e4300(s32 mode) {
    s32 i;
    s32 t;
    switch (mode) {
        case 0:
            if (data_ov114_020e6148.f51d == 0) {
                return 0;
            }
            i = 0;
            do {
                func_ov114_020e2688();
                i += 4;
                data_ov114_020e6648.f1e -= 4;
            } while (i < 16);
            t                        = data_ov114_020e6148.f51d - 1;
            data_ov114_020e6148.f51d = t;
            if ((t & 0xff) == 0) {
                return 0;
            }
            break;
        case 1:
            if (data_ov114_020e6148.f51d >= data_ov114_020e6148.f51c - 8) {
                return 0;
            }
            i = 0;
            do {
                func_ov114_020e2688();
                i += 4;
                data_ov114_020e6648.f1e += 4;
            } while (i < 16);
            t                        = data_ov114_020e6148.f51d + 1;
            data_ov114_020e6148.f51d = t;
            if ((t & 0xff) >= data_ov114_020e6148.f51c - 8) {
                return 0;
            }
            break;
    }
    return 1;
}

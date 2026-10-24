#include "m2c.h"

typedef struct D {
    u8 pad[0x410];
    u32 padx : 8;
    u32 fl : 1;
    u32 pad2 : 23;
    u32 b0 : 8;
    u32 b1 : 8;
    u32 b2 : 16;
} D;
extern D data_ov113_020e4944;

s32 func_ov113_020e2c08(u32 arg0) {
    switch (arg0) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            if (arg0 == data_ov113_020e4944.b0) {
                return 1;
            }
            break;
        case 5:
        case 6:
            if (arg0 == data_ov113_020e4944.b1) {
                return 1;
            }
            break;
        case 7:
            if (data_ov113_020e4944.fl) {
                return 1;
            }
            break;
    }
    return 0;
}

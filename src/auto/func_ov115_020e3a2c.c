#include "m2c.h"

typedef struct {
    u8 pad[0x858];
    u32 p0 : 24;
    u32 top : 8;
    u32 a : 8;
    u32 b : 8;
    u32 p1 : 3;
    u32 c : 1;
    u32 d : 1;
    u32 p2 : 3;
    u32 e : 2;
} S9160;
typedef struct {
    u8 pad[0xc];
    u32 a : 8;
} S8d24;
typedef struct {
    u8 pad[0x414];
    u32 a : 8;
} S8d3c;
typedef struct {
    u32 x : 3;
    u32 y : 3;
    u32 z : 3;
    u32 v : 1;
    u32 w : 2;
} S8d20;

extern S8d20 data_ov115_020e8d20;
extern S8d24 data_ov115_020e8d24;
extern S8d3c data_ov115_020e8d3c;
extern S9160 data_ov115_020e9160;

u32 func_ov115_020e3a2c(u32 arg0) {
    switch (arg0) {
        case 3:
            return data_ov115_020e9160.c;
        case 0:
        case 1:
        case 2:
            if (arg0 == data_ov115_020e8d24.a) {
                return 1;
            }
            break;
        case 43:
        case 44:
        case 45:
            if (arg0 == data_ov115_020e8d3c.a) {
                return 1;
            }
            break;
        case 6:
        case 7:
        case 8:
            if (arg0 == data_ov115_020e9160.top) {
                return 1;
            }
            break;
        case 9:
        case 10:
        case 11:
            if (arg0 == data_ov115_020e9160.a) {
                return 1;
            }
            break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
            if (arg0 == data_ov115_020e9160.b) {
                return 1;
            }
            break;
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
            if (!(data_ov115_020e8d20.x < arg0 - 0x18)) {
                return 1;
            }
            break;
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
            if (!(data_ov115_020e8d20.y < arg0 - 0x1d)) {
                return 1;
            }
            break;
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
            if (!(data_ov115_020e8d20.z < arg0 - 0x22)) {
                return 1;
            }
            break;
        case 40:
            return data_ov115_020e9160.d;
        case 39:
            switch (data_ov115_020e8d20.w) {
                case 0:
                    return data_ov115_020e8d20.v == 0;
                case 1:
                    return data_ov115_020e8d20.v == 1 ? 3 : 2;
            }
            break;
        case 41:
            if (data_ov115_020e9160.e == 1) {
                return 1;
            }
            break;
        case 42:
            if (data_ov115_020e9160.e == 2) {
                return 1;
            }
            break;
    }
    return 0;
}

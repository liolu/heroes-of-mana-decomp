#include "m2c.h"
typedef struct {
    s16 a;
    s16 b;
} E;
extern E data_ov004_020ccb18[];
s16 func_ov004_020cad30(s32 x) {
    if (x < 0 || x >= 0xC8) {
        return -1;
    }
    return data_ov004_020ccb18[x].a;
}

#include "m2c.h"

typedef struct A6 {
    s32 v[6];
} A6;
s32 CalRnd(void);
extern A6 data_ov032_020d6bb4;
extern u8 *data_ov000_02051548;

void func_ov032_020d05dc(void) {
    A6 a = data_ov032_020d6bb4;
    s32 i;
    s32 j;
    s32 t;
    for (i = 0; i < 6; i++) {
        t      = a.v[i];
        j      = CalRnd() % 5;
        a.v[i] = a.v[j];
        a.v[j] = t;
    }
    for (i = 0; i < 4; i++) {
        ((s32 *) (data_ov000_02051548 + 0x58))[i] = a.v[i];
    }
}

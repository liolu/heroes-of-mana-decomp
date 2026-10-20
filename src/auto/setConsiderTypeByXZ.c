/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s8 searchSamePosObj(void *, s8, s8);
void SetOrderUnit(void *);
extern s8 data_ov003_020b0d50[];
extern s8 data_ov003_020b0d51[];

typedef struct {
    u32 lo : 24;
    u32 a : 1;
    u32 b : 1;
    u32 hi : 6;
} FLAGS;

void setConsiderTypeByXZ(void *arg0, s8 arg1, s8 arg2) {
    s8 ret;

    if (!((FLAGS *) arg0)->a && !((FLAGS *) arg0)->b) {
        ret = searchSamePosObj(arg0, arg1, arg2);
    } else {
        ret = -1;
    }
    if (ret == -1) {
        M2C_FIELD(arg0, s8 *, 0xCC) = 1;
        M2C_FIELD(arg0, s8 *, 0xCE) = arg1;
        M2C_FIELD(arg0, s8 *, 0xCF) = arg2;
    } else {
        M2C_FIELD(arg0, s8 *, 0xCC) = 2;
        M2C_FIELD(arg0, s8 *, 0xCD) = ret;
        M2C_FIELD(arg0, s8 *, 0xCE) = data_ov003_020b0d50[ret * 0x110];
        M2C_FIELD(arg0, s8 *, 0xCF) = data_ov003_020b0d51[ret * 0x110];
    }
    SetOrderUnit(arg0);
}

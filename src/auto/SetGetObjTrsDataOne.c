/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Tr {
    u32 f0;
    s32 f4;
    s32 f8;
    void *fc;
} Tr;
typedef struct G {
    u8 pad[0x2C];
    Tr *arr;
} G;
void *func_0200ed38(s32, s32, s32);
extern u8 ObjOneParaSet1[];
extern u8 ObjOneParaSet2[];
extern G data_ov003_020b54e8;

void SetGetObjTrsDataOne(s32 i) {
    data_ov003_020b54e8.arr[i].f0 &= ~1;
    data_ov003_020b54e8.arr[i].f0 &= ~2;
    data_ov003_020b54e8.arr[i].f0 |= 4;
    if (i == 3) {
        data_ov003_020b54e8.arr[i].fc = ObjOneParaSet1;
    } else {
        data_ov003_020b54e8.arr[i].fc = ObjOneParaSet2;
    }
    data_ov003_020b54e8.arr[i].f0 &= ~8;
    if (data_ov003_020b54e8.arr[i].f4 == 0) {
        data_ov003_020b54e8.arr[i].f4 = (s32) func_0200ed38(0, -1, 0x804);
    }
    data_ov003_020b54e8.arr[i].f8 = 0x804;
    data_ov003_020b54e8.arr[i].f0 &= 0xFFF0000F;
}

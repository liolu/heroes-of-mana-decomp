/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 lo : 5;
    u32 hi : 27;
    u8 rest[0x48];
} Pk;
typedef struct {
    u8 pad[0x10];
    u32 a : 28;
    u32 f27 : 1;
    u32 b : 3;
} Gs;

extern void MIi_CpuCopy16(void *, void *, s32);
extern void SetTrsDataForEtc(void *, s32);
extern void SetTrsObjCommand(s32, s32, s32, s32);
extern Gs *data_ov000_02051548;
extern u8 data_ov003_020b532c;
extern u8 data_ov003_020b5328[];

void changeParamVS(u32 n) {
    Pk pk;

    if (data_ov000_02051548->f27 == 0) {
        pk.lo = 9;
        MIi_CpuCopy16(&data_ov003_020b532c, pk.rest, 0x48);
        SetTrsDataForEtc(&pk, 0x4C);
        return;
    }
    switch (n) {
        case 2:
        case 3:
            SetTrsObjCommand(10, 0, data_ov003_020b5328[4], 0);
            break;
        case 6:
        case 7:
            SetTrsObjCommand(10, 1, data_ov003_020b5328[5], 0);
            break;
        case 10:
        case 11:
            SetTrsObjCommand(10, 2, data_ov003_020b5328[6], 0);
            break;
        case 17:
        case 18:
            SetTrsObjCommand(10, 3, data_ov003_020b5328[0xE], 0);
            break;
        case 21:
        case 22:
            SetTrsObjCommand(10, 5, data_ov003_020b5328[0xC], 0);
            break;
        case 28:
        case 29:
            SetTrsObjCommand(10, 4, data_ov003_020b5328[0x2E], 0);
            break;
        case 32:
        case 33:
            SetTrsObjCommand(10, 6, data_ov003_020b5328[0x2C], 0);
            break;
    }
}

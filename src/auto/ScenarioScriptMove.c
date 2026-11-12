/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct G {
    u8 pad0[4];
    u32 a4 : 17;
    u32 b4 : 1;
    u32 r4 : 14;
    u8 pad8[8];
    u32 a10 : 29;
    u32 b10 : 1;
    u32 r10 : 2;
    s32 pad14;
    u32 who : 2;
    u32 r18 : 30;
    u8 pad1c[8];
    u32 w24;
    u8 pad28[0x10];
    s16 s38;
    s16 s3a;
    u8 pad3c[0x8c];
    u32 c8a : 1;
    u32 c8b : 1;
    u32 c8r : 30;
    s32 wcc;
    u32 state : 5;
    u32 d0a : 8;
    u32 d0b : 4;
    u32 d0r : 15;
    u8 pad_d4[0x68c];
    u32 w760 : 1;
    u32 w760r : 31;
} G;

typedef struct H {
    u8 pad[0xaf4];
    s32 v;
} H;

extern G *data_ov000_02051548;
extern H *data_ov000_0205154c;
extern s32 data_02036738;

void OS_WakeupThreadDirect(void *);
void DummyCallScript(void);
s32 CallOtherPersonProgramOnStandAlone(s32, s32, s32);
void CarisumaUnitParamUpDownByEquip(void);
void ReleaseSenarioScript(void);
void ReadUnitLogic(s32);
void ReleaseWorkBeforeChangeMap(void);
void SetTEST_Model(void);
void SetETC_TexAndPal(s32);
void SetUpSenarioScript(s32);

s32 ScenarioScriptMove(void) {
    G *g = data_ov000_02051548;

    if (g->b4 != 0) {
        return 1;
    }
    if (g->w760 != 0) {
        return 1;
    }
    if (g->s38 == -1) {
        return 1;
    }
    g->w760 = 1;
    OS_WakeupThreadDirect((u8 *) data_ov000_02051548 + 0x698);
    while (data_ov000_02051548->w760 != 0) {
        DummyCallScript();
    }
    data_ov000_02051548->w760 = 0;
    data_ov000_02051548->wcc += data_ov000_0205154c->v;
    switch (data_ov000_02051548->state) {
        case 9:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(5, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            break;
        case 1:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(3, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            break;
        case 2:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(0, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            break;
        case 7:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(0xB, 0, 1) == 0) {
                return 0;
            }
            break;
        case 10:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(0xC, 0, 1) == 0) {
                return 0;
            }
            break;
        case 8:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(4, 0, 1) == 0) {
                return 0;
            }
            break;
        case 3:
            data_ov000_02051548->state = 0;
            data_02036738              = data_ov000_02051548->d0b;
            if (CallOtherPersonProgramOnStandAlone(2, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            CarisumaUnitParamUpDownByEquip();
            data_02036738 = 5;
            break;
        case 4:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(9, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            break;
        case 13:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(0x17, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            break;
        case 14:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(0x18, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            break;
        case 5:
            ReleaseSenarioScript();
            data_ov000_02051548->c8a   = 0;
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(1, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            break;
        case 6:
            ReleaseSenarioScript();
            data_ov000_02051548->c8a   = 0;
            data_ov000_02051548->state = 0;
            return 0;
        case 12:
            data_ov000_02051548->state = 0;
            if (CallOtherPersonProgramOnStandAlone(0x13, data_ov000_02051548->who, 1) == 0) {
                return 0;
            }
            if (data_ov000_02051548->b10 != 0) {
                data_ov000_02051548->w24 |= 0x100;
            }
            break;
        default:
            data_ov000_02051548->state = 0;
            break;
    }
    if (data_ov000_02051548->c8a != 0) {
        ReleaseSenarioScript();
        data_ov000_02051548->c8a = 0;
    }
    if (data_ov000_02051548->s3a != -1) {
        if (data_ov000_02051548->s3a >= 0x32) {
            data_ov000_02051548->c8b = 1;
        } else {
            data_ov000_02051548->c8b = 0;
        }
        ReadUnitLogic(data_ov000_02051548->c8b);
        ReleaseWorkBeforeChangeMap();
        SetTEST_Model();
        SetETC_TexAndPal(1);
        SetUpSenarioScript(data_ov000_02051548->s3a);
        data_ov000_02051548->s3a = -1;
    }
    return 1;
}

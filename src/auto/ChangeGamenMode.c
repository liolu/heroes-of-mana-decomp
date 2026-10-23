/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Fx {
    u8 p0[0x10];
    u32 p10a : 6;
    u32 f10 : 4;
    u32 p10b : 22;
    u8 p14[8];
    u32 p1c : 10;
    u32 f1c : 1;
    u32 p1cb : 21;
    u32 p20;
    u32 p24 : 8;
    u32 f24 : 1;
    u32 p24b : 23;
    u8 p28[0xc8 - 0x28];
    u32 pc8 : 1;
    u32 fc8 : 1;
    u32 pc8b : 30;
    u8 pcc[0x1cc - 0xcc];
    u32 w1cc;
    u8 p1d0[0x258 - 0x1d0];
    u16 h258;
    u8 p25a[0x7ac - 0x25a];
    u16 h7ac;
} Fx;
typedef struct Ent {
    u32 pa : 16;
    u32 f0 : 1;
    u32 pb : 15;
    u8 p4[0x210 - 4];
    u32 pc : 28;
    u32 f210 : 1;
    u32 pd : 3;
    u8 p214[0x2b4 - 0x214];
    struct {
        u8 lo : 7;
        u8 hi : 1;
    } b[12];
    u8 pad[0x2d0 - 0x2c0];
} Ent;
typedef struct Gp {
    u8 p[0x28];
    Ent *ents;
} Gp;
extern Fx *data_ov000_02051548;
extern Gp *data_0203673c;
extern u8 data_ov003_020b0cf0[];
s32 SearchSetUpEventOccur(s32, s32);
void ReadUnitLogic(s32);
void SetUpSenarioScript(s32);
void ReleaseWorkBeforeChangeMap(void);
void SetTEST_Model(void);
void SetMapCanThere(void);
void SetCameraPoint(void);
void ClearPolWork(void);
void SetCheckMtx(void);
void CutAndMakePolygonType(s32);
void SetETC_TexAndPal(s32);
void Global2Local_ObjPara(void);
void SetUnitPos4VS(void);
void MIi_CpuClear16(s16, void *, s32);
void PutIconInit(s32, s32);
void SetCreateInShipPara(s32);
void ChangeKyotenNo(s32);

void ChangeGamenMode(void) {
    s32 i;
    s32 j;
    s32 ev;
    if (!data_ov000_02051548->f24) {
        ev = SearchSetUpEventOccur(data_ov000_02051548->h258, 0);
        if (ev != -1) {
            if (ev >= 50) {
                data_ov000_02051548->fc8 = 1;
            } else {
                data_ov000_02051548->fc8 = 0;
            }
            ReadUnitLogic(data_ov000_02051548->fc8);
            SetUpSenarioScript(ev);
            return;
        }
    }
    data_ov000_02051548->f10 = 0;
    ReleaseWorkBeforeChangeMap();
    SetTEST_Model();
    SetMapCanThere();
    SetCameraPoint();
    ClearPolWork();
    SetCheckMtx();
    CutAndMakePolygonType(0);
    CutAndMakePolygonType(1);
    if (!data_ov000_02051548->f24) {
        if (data_ov000_02051548->f1c) {
            SetETC_TexAndPal(1);
            Global2Local_ObjPara();
            data_ov000_02051548->f1c = 0;
        } else {
            SetUnitPos4VS();
        }
    } else {
        MIi_CpuClear16(0, data_ov003_020b0cf0, 0x4620);
        SetETC_TexAndPal(1);
    }
    PutIconInit(data_ov000_02051548->h7ac != 0, 0);
    for (i = 0; i < 4; i++) {
        if (data_0203673c->ents[i].f0 && data_0203673c->ents[i].f210) {
            SetCreateInShipPara(i);
        }
        for (j = 0; j < 12; j++) {
            data_0203673c->ents[i].b[j].lo = 0x7f;
            data_0203673c->ents[i].b[j].hi = 0;
        }
    }
    ChangeKyotenNo(data_ov000_02051548->h258);
    data_ov000_02051548->w1cc = 1;
}

#include "m2c.h"
typedef struct {
    u8 pad[0x8c];
    s32 f;
} G;
extern G *data_ov000_02051548;
void ActionWazaByLogic(s32, s32, s32, s32);
s32 GetUnitTypeByNo(s32);
void ReadySetUpWazaAt(s32);
s32 distanceForBattle(s32, s32);
void changeOcc(s32, s32, s32, s32);
void func_ov107_020e09bc(s32 a, s32 b) {
    s32 t = data_ov000_02051548->f;
    if ((t & 0x8000) == 0x8000) {
        data_ov000_02051548->f = t | 0x40000;
        data_ov000_02051548->f ^= 0x8000;
        ActionWazaByLogic(a, 3, 0x12f, -1);
        return;
    }
    if ((t & 0x10000) == 0x10000) {
        data_ov000_02051548->f = t | 0x80000;
        data_ov000_02051548->f ^= 0x10000;
        ActionWazaByLogic(a, 3, 0x12f, -1);
        return;
    }
    if ((t & 0x20000) == 0x20000) {
        data_ov000_02051548->f = t | 0x100000;
        data_ov000_02051548->f ^= 0x20000;
        ActionWazaByLogic(a, 0xe, 0x130, -1);
        return;
    }
    if (GetUnitTypeByNo(b) != 5) {
        return;
    }
    ReadySetUpWazaAt(a);
    if (distanceForBattle(b, a) == 1) {
        changeOcc(3, a, b, 0);
        return;
    }
    changeOcc(2, a, b, 0);
}

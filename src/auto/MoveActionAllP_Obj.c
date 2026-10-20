/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 f0;
    u32 f4;
    u8 pad0[8];
    u32 p28:28;
    u32 b28:1;
    u32 b29:1;
    u32 p2:2;
} SysData;

void ClearRecoverHpSw(void);                  /* extern */
void MoveActionsObj(s32 *);                   /* extern */
void ClearCarisumaMap(void);                  /* extern */
void SetCarisumaMapAllObj(void);              /* extern */
void SetCarisumaEffect4Obj(void);             /* extern */
void AutoRecoveryHP(void);                    /* extern */
void SetHookRecover(void);                    /* extern */
void TrsMoveAction(void);                     /* extern */
void GoTrsObjCommand(void);                   /* extern */
extern SysData *data_ov000_02051548;
extern u8 data_ov003_020b0cf0[];

void MoveActionAllP_Obj(s32 arg4) {
    u8 *var_r4;
    s32 var_r5;

    var_r4 = data_ov003_020b0cf0;
    if (((u32) (data_ov000_02051548->f4 << 0xE) >> 0x1F) == 0) {
        ClearRecoverHpSw();
        var_r5 = 0;
        do {
            if (((u32) (M2C_FIELD(var_r4, s32 *, 0) << 0x1F) >> 0x1F) != 0) {
                MoveActionsObj((s32 *) var_r4);
            }
            var_r5 += 1;
            var_r4 += 0x110;
        } while (var_r5 < 0x42);
        ClearCarisumaMap();
        SetCarisumaMapAllObj();
        SetHookRecover();
        SetCarisumaEffect4Obj();
        if ((data_ov000_02051548->b29 == 0) || (data_ov000_02051548->b28 == 0)) {
            AutoRecoveryHP();
        }
        if (data_ov000_02051548->b29 != 0) {
            if (data_ov000_02051548->b28 == 0) {
                TrsMoveAction();
            } else {
                GoTrsObjCommand();
            }
        }
    }
}

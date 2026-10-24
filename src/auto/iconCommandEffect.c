/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u32 GetTouchPanelStatus();
extern s32 KeepTouchPanelAction();
extern s32 LeaveTouchPanelAction();
extern s32 MomentTouchPanelAction();
extern s32 SelectUnitByDrawRect();
extern s32 getComIcon(s32, s16, s16);

typedef struct GA {
    u8 p0[0x14];
    u32 f14;
    u8 p18[8];
    u32 f20;
    u8 p24[0x798 - 0x24];
    s32 f798;
} GA;
extern GA *data_ov000_02051548;

typedef struct GB {
    u8 p0[0x28];
    s16 f28;
    s16 f2a;
    u8 p2c[0x14a - 0x2c];
    u16 f14a;
} GB;
extern GB *data_ov000_0205154c;

s32 iconCommandEffect(void) {
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;

    if (data_ov000_0205154c->f14a != 0) {
        if (GetTouchPanelStatus() == 1) {
            var_r0 = 0;
        } else {
            data_ov000_0205154c->f14a = 0;
            goto block_4;
        }
    } else {
    block_4:
        temp_r0 = (u32) (data_ov000_02051548->f20 << 0x12) >> 0x1F;
        if (temp_r0 != 0) {
            temp_r0_2 = GetTouchPanelStatus(temp_r0);
            if ((temp_r0_2 != 3) && (temp_r0_2 != 1)) {
                goto block_10;
            }
            if (getComIcon(data_ov000_02051548->f798, data_ov000_0205154c->f28, data_ov000_0205154c->f2a) != 0xFFBD) {
                var_r0 = 0;
            } else {
                goto block_10;
            }
        } else {
        block_10:
            if (((u32) (data_ov000_02051548->f14 << 0x1D) >> 0x1E) == 1) {
                var_r0 = SelectUnitByDrawRect();
            } else {
                temp_r0_3 = GetTouchPanelStatus();
                switch (temp_r0_3) {
                    case 3:
                        var_r0 = MomentTouchPanelAction();
                        break;
                    case 1:
                        var_r0 = KeepTouchPanelAction();
                        break;
                    case 0:
                    case 2:
                        var_r0 = LeaveTouchPanelAction();
                        break;
                    default:
                        var_r0 = 0;
                        break;
                }
            }
        }
    }
    return var_r0;
}

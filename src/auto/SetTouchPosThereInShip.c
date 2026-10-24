/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 p0[0x28];
    u16 x;
    u16 y;
} P;
typedef struct {
    u8 p0[0x44];
    s32 f44;
    s32 *f48;
    u8 p1[0x300];
    u8 f34c;
} Q;

extern s32 GetTouchPanelStatus(void);
extern void Ring_SoundEffect(s32);
extern void SetStatusIcon(s32, s32, u16, u16, s32, s32, s32, s32 **, s32, s32);
extern void deleteComObj(s32 **);
extern P *data_ov000_0205154c;
extern Q *data_ov109_020ea340;

void SetTouchPosThereInShip(void) {
    s32 temp_r0;
    s32 *temp_r2;

    temp_r0 = GetTouchPanelStatus();
    if ((temp_r0 == 1) || (temp_r0 == 3)) {
        temp_r2 = data_ov109_020ea340->f48;
        if (temp_r2 == NULL) {
            SetStatusIcon(0xFFFF, 1, data_ov000_0205154c->x, data_ov000_0205154c->y, data_ov109_020ea340->f34c, 0, 0,
                          &data_ov109_020ea340->f48, data_ov109_020ea340->f44, 0);
            Ring_SoundEffect(0x65);
        } else {
            temp_r2[0] = data_ov000_0205154c->x;
            temp_r2[1] = data_ov000_0205154c->y;
        }
    } else {
        if (data_ov109_020ea340->f48 != NULL) {
            deleteComObj(&data_ov109_020ea340->f48);
            data_ov109_020ea340->f48 = NULL;
        }
    }
}

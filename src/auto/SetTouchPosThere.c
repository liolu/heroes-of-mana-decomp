/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f : 2;
} BF;
s32 GetTouchPanelStatus(void);
void Ring_SoundEffect(s32);
void SetStatusIcon(s32, s32, u16, u16, u16, s32, s32, void *, s32, s32);
void deleteComObj(void *);
extern u8 *data_ov000_02051548;
extern u8 *data_ov000_0205154c;

void SetTouchPosThere(void) {
    s32 st = GetTouchPanelStatus();
    if (!(st != 1 && st != 3)) {
        s32 *obj = *(s32 **) (data_ov000_02051548 + 0x790);
        if (obj == NULL) {
            s32 ip;
            u8 *p;
            u8 *q;
            ip = (*(u16 *) (data_ov000_02051548 + 0x7ac) != 0) ? 1 : 0;
            q  = data_ov000_0205154c;
            p  = data_ov000_02051548;
            SetStatusIcon(0xFFFF, 0x26, *(u16 *) (q + 0x28), *(u16 *) (q + 0x2a), *(u16 *) (q + ip * 0x4b0 + 0x56c), 0, 0,
                          p + 0x790, *(s32 *) (p + 0x12c), ip);
            if (((BF *) (data_ov000_02051548 + 0x18))->f != 0) {
                Ring_SoundEffect(0x65);
            }
        } else {
            obj[0] = *(u16 *) (data_ov000_0205154c + 0x28);
            obj[1] = *(u16 *) (data_ov000_0205154c + 0x2a);
        }
    } else {
        if (*(s32 *) (data_ov000_02051548 + 0x790) != 0) {
            deleteComObj(data_ov000_02051548 + 0x790);
            *(s32 *) (data_ov000_02051548 + 0x790) = 0;
        }
    }
}

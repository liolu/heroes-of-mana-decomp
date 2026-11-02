/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void Put_MissionStartCompleteWinLose(int);
extern u8 *data_ov000_02051548;
extern u8 data_ov003_020b532c[];

typedef struct {
    u32 lo : 12;
    u32 hi : 20;
} BF12;

void Put__MISSION_LOSE(void) {
    BF12 *bf;
    s32 t;

    bf     = (BF12 *) (data_ov000_02051548 + 0xc);
    bf->lo = bf->lo + 1;
    bf     = (BF12 *) (data_ov000_02051548 + 0xc);
    if (bf->lo >= 0x63) {
        bf->lo = 0x63;
    }
    if (((*(u32 *) (data_ov000_02051548 + 0x10)) << 3) >> 31 == 0) {
        if (++data_ov003_020b532c[0xc] >= 0x63) {
            data_ov003_020b532c[0xc] = 0x63;
        }
        if (++data_ov003_020b532c[0x2b] >= 0x63) {
            data_ov003_020b532c[0x2b] = 0x63;
        }
    } else {
        if (++data_ov003_020b532c[0x2c] >= 0x63) {
            data_ov003_020b532c[0x2c] = 0x63;
        }
        if (++data_ov003_020b532c[0xb] >= 0x63) {
            data_ov003_020b532c[0xb] = 0x63;
        }
    }
    Put_MissionStartCompleteWinLose(6);
}

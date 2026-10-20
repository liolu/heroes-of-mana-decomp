/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad[0x44];
    u32 a : 3;
    u32 b : 1;
    u32 c : 1;
    u32 d : 1;
    u32 : 3;
    u32 e : 8;
} MsgObj;

typedef struct {
    u8 pad[0x338];
    u16 : 3;
    u16 f : 1;
} Base338;

M2C_UNK SyncPutMessageOneCharONE(s32);              /* extern */
extern void *data_ov000_02051550;
extern void *data_ov000_0205154c;

void SyncPutMessageOneChar(s32 arg0) {
    s32 var_r5;
    s32 temp_r4;
    MsgObj *temp_r2;

    var_r5 = arg0;
    temp_r4 = var_r5 * 0xD0;
    if (!((MsgObj *) (data_ov000_02051550 + temp_r4))->b) {
        return;
    }
loop_2:
    SyncPutMessageOneCharONE(var_r5);
    temp_r2 = (MsgObj *) (data_ov000_02051550 + temp_r4);
    if (!temp_r2->b) {
        return;
    }
    if (temp_r2->d) {
        return;
    }
    if (temp_r2->e) {
        return;
    }
    if (temp_r2->c) {
        return;
    }
    if (temp_r2->a) {
        return;
    }
    if (((Base338 *) data_ov000_02051550)->f) {
        goto loop_2;
    }
    if (M2C_FIELD(data_ov000_0205154c, u16 *, 0x148) & 2) {
        goto loop_2;
    }
}

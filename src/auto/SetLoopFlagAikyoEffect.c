/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct E {
    u32 id : 10;
    u32 sub : 7;
    u32 rest : 15;
    u8 p[0x18];
    struct E *next;
} E;
typedef struct {
    u8 p[0x778];
    E *head;
} G;

extern void SetAndGoLoopFlag(E *, s32, s32);
extern G *data_ov000_02051548;

void SetLoopFlagAikyoEffect(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    E *var_r4;

    var_r4 = data_ov000_02051548->head;
    if (var_r4 != NULL) {
        do {
            if ((arg0 == -1) && (arg1 == -1)) {
                SetAndGoLoopFlag(var_r4, arg2, arg3);
            } else {
                if (arg0 == var_r4->id) {
                    if (arg1 == -1) {
                        SetAndGoLoopFlag(var_r4, arg2, arg3);
                    } else if (arg1 == var_r4->sub) {
                        SetAndGoLoopFlag(var_r4, arg2, arg3);
                    }
                }
            }
            if ((arg1 == var_r4->sub) && (arg0 == -1)) {
                SetAndGoLoopFlag(var_r4, arg2, arg3);
            }
            var_r4 = var_r4->next;
        } while (var_r4 != NULL);
    }
}

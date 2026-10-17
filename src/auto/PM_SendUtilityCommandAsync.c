#include "m2c.h"
typedef struct {
    u8 pad[0x1c];
    u32 a;
    u32 b;
} PmData;
extern PmData data_0203a66c;
s32 func_020158f4(void);
void PMi_SendPxiData(u32 d);
u32 PM_SendUtilityCommandAsync(u32 p1, u32 p2, u32 p3) {
    if (func_020158f4() == 0) {
        return 1;
    }
    data_0203a66c.a = p2;
    data_0203a66c.b = p3;
    PMi_SendPxiData(((p1 >> 16) & 0xff) | 0x2006300);
    PMi_SendPxiData(0x1010000 | (p1 & 0xffff));
    return 0;
}

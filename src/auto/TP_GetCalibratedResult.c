#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} Cal;
typedef struct {
    u8 pad[8];
    Cal cal;
    u8 pad2[0x28];
    u16 flags;
} TpWork;
extern TpWork data_0203a630;
void func_020157a4(Cal *a, Cal *b);
s32 TP_GetCalibratedResult(Cal *out) {
    if (data_0203a630.flags & 1) {
        return 1;
    }
    *out = data_0203a630.cal;
    func_020157a4(out, out);
    return 0;
}

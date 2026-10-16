#include "m2c.h"
s32 func_0200faf0();
void func_02011954();
extern struct {
    u32 pad[6];
    s32 busy;
} data_0203a66c;
extern s32 data_0203a684;

void PMi_WaitBusy(void) {
    s32 *p = &data_0203a684;
    if (data_0203a66c.busy == 0) {
        return;
    }
    do {
        if (func_0200faf0() == 0x12) {
            func_02011954();
        }
    } while (*p != 0);
}

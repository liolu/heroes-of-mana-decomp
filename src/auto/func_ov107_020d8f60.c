#include "m2c.h"
extern s32 GetRnd(void);
extern s64 func_0202d478(s32, s32);
extern void SetDestination(void *, s32, s32);
extern u8 *data_ov000_02051548;
void func_ov107_020d8f60(void *arg0) {
    u8 *p = data_ov000_02051548;
    s64 a = GetRnd();
    s64 b = GetRnd();
    a     = func_0202d478(a, *(s32 *) (p + 0x80));
    b     = func_0202d478(b, *(s32 *) (p + 0x88));
    SetDestination(arg0, *(s32 *) (p + 0x7C) + (s32) (a >> 32), *(s32 *) (p + 0x84) + (s32) (b >> 32));
}

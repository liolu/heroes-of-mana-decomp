#include "m2c.h"
typedef struct {
    u8 pad[4];
    u16 nick[10];
    u16 len;
    u8 rest[0x34];
} Info;
typedef struct {
    s32 len;
    u16 nick[10];
} Out;
void OS_GetOwnerInfo(void *);
void func_ov123_020d2758(Out *dst) {
    Out out;
    Info info;
    s32 i;
    OS_GetOwnerInfo(&info);
    out.len = info.len;
    for (i = 0; i < out.len; i++) {
        out.nick[i] = info.nick[i];
    }
    out.nick[out.len] = 0;
    *dst              = out;
}

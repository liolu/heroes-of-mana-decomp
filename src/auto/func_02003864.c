#include "m2c.h"
void func_0200458c(s32, s32, s32, u32);
typedef struct Flags {
    u32 low : 7;
    u32 mid : 8;
    u32 d : 1;
    u32 b : 1;
    u32 a : 1;
    u32 c : 1;
    u32 rest : 13;
} Flags;
extern struct {
    u8 pad[0xac];
    Flags flags;
} *data_0203678c;

void func_02003864(s32 arg0, s32 arg1) {
    u32 c;
    c = data_0203678c->flags.c;
    if (c != 0) {
        return;
    }
    if (data_0203678c == NULL) {
        return;
    }
    if (data_0203678c->flags.d == 0) {
        return;
    }
    func_0200458c(0, arg0, arg1, c);
}

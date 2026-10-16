#include "m2c.h"
void func_02003734(u32, s32);
void func_02006484(void *, s32, u32, u32);
typedef struct Flags {
    u32 low : 7;
    u32 mid : 9;
    u32 b : 1;
    u32 a : 1;
    u32 rest : 14;
} Flags;
extern struct {
    u8 pad[0xac];
    Flags flags;
} *data_0203678c;

void func_020038ac(s32 arg) {
    u32 a;
    u32 b;
    if (arg == -1) {
        return;
    }
    a = data_0203678c->flags.a;
    if (a != 0) {
        return;
    }
    if (data_0203678c == NULL) {
        return;
    }
    b = data_0203678c->flags.b;
    if (b != 0) {
        func_02006484(data_0203678c, arg, b, a);
    }
    func_02003734(data_0203678c->flags.low, 1);
}

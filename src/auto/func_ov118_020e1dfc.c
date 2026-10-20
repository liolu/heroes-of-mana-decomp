#include "m2c.h"

typedef struct {
    s32 a;
    s16 b;
    s16 pad;
} Item;

typedef struct {
    u8 pad[0x14C];
    s32 flags;
    Item items[0x80];
} Data;

extern Data data_ov118_020e31e0;

void func_ov118_020e1dfc(void) {
    s32 var_ip;

    for (var_ip = 0; var_ip < 0x80; var_ip++) {
        data_ov118_020e31e0.items[var_ip].a = 0x200;
        data_ov118_020e31e0.items[var_ip].b = 0;
    }
    data_ov118_020e31e0.flags &= 0xFFFFF807;
}

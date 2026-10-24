#include "m2c.h"

typedef struct {
    u32 used : 1;
    u32 r0 : 31;
    u32 w[3];
    u32 pad : 22;
    u32 id : 8;
    u32 r1 : 2;
} E;
typedef struct {
    u8 pad[8];
    s32 count;
} H;
extern E *data_ov120_020f4204;
extern H data_ov120_020f4228;

E *func_ov120_020ee1b4(s32 id) {
    s32 i;
    E *e = data_ov120_020f4204;
    for (i = 0; i < data_ov120_020f4228.count; i++, e++) {
        if (e->used && e->id == id) {
            return e;
        }
    }
    return 0;
}

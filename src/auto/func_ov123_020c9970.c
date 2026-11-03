/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef void (*Fn18)(void *, s32);

typedef struct Obj {
    u8 pad[0x18];
    Fn18 fn;
} Obj;

void func_ov123_020c9970(Obj *arg0, s32 arg1) {
    arg0->fn(arg0, arg1);
}

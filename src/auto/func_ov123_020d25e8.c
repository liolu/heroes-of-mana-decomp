#include "m2c.h"
typedef struct O O;
struct O {
    void **vt;
};
typedef struct {
    u8 pad[0x10];
    O *a;
    u8 pad2[0x10];
    O *b;
} S;
s32 func_ov123_020d25e8(S *self) {
    void *r = (*(void *(**) (void *) )(*(u8 **) self->b + 0x4c))(self->b);
    (*(void (**)(void *, void *))(*(u8 **) self->a + 0x30))(self->a, r);
    if ((*(s32(**)(void *))(*(u8 **) self->a + 0x8))(self->a) != 0) {
        return 1;
    }
    return 3;
}

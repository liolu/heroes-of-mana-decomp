#include "m2c.h"
typedef struct VO {
    u8 *vt;
} VO;
extern s32 func_ov004_020c1fe0(void *);
void func_ov004_020c2688(u8 *arg0, void *arg1) {
    s32 i;
    if (func_ov004_020c1fe0(arg0) == 0) {
        return;
    }
    for (i = 0; i < *(s32 *) (arg0 + 0x48); i++) {
        VO *o = (*(VO ***) (arg0 + 0x4C))[i];
        (*(void (**)(VO *, void *))(o->vt + 0x2C))(o, arg1);
    }
    {
        VO *o = *(VO **) (arg0 + 0x14);
        (*(void (**)(VO *, void *))(o->vt + 0xC))(o, arg1);
    }
}

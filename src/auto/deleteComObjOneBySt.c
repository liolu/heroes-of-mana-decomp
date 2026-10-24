/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void DeleteOneObj(void *);

s32 deleteComObjOneBySt(void **arg0, void *arg1) {
    u8 *p = *arg0;
    s32 r;
    if (p == NULL) {
        r = 0;
    } else if ((*(s32 *) (p + 0x7C) != 0) && (deleteComObjOneBySt((void **) (p + 0x7C), arg1) != 0)) {
        r = 1;
    } else if (*arg0 != arg1) {
        r = 0;
    } else {
        DeleteOneObj(arg0);
        r = 1;
    }
    return r;
}

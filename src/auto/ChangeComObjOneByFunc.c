/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void ChangeComObjOneByFunc(u8 **pp, void (*fn)(void *)) {
    u8 *node;

    node = *pp;
    if (node != NULL) {
        if (*(u32 *) (node + 0x7C) != 0) {
            ChangeComObjOneByFunc((u8 **) (node + 0x7C), fn);
        }
        node = *pp;
        if ((((*(u32 *) (node + 0xC)) << 6) >> 31) == 0) {
            fn(node);
        }
    }
}

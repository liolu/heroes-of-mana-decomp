/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 SetObjGo(void *);

void SetDestination(u8 *o, u8 a, u8 b) {
    o[0x66] = a;
    o[0x67] = b;
    SetObjGo(o);
}

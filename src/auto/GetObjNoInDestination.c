/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 searchSamePosObj(void *, s32, s32);
void GetObjNoInDestination(s8 *o) {
    searchSamePosObj(o, o[0x66], o[0x67]);
}

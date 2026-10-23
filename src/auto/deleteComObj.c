/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void deleteComObjOne(void *);
void deleteComObj(s32 *a) {
    deleteComObjOne(a);
    *a = 0;
}

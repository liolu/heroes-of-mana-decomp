/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void ResetObjPalMapX(s32, s32, s32);
void DeletePalDataFromVram(u16 *p) {
    if (p[10] != 0) {
        ResetObjPalMapX(p[8], p[10], 0);
    }
    if (p[11] != 0) {
        ResetObjPalMapX(p[9], p[11], 1);
    }
}

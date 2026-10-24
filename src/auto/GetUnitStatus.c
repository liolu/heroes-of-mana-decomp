/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 8;
    u32 f : 1;
    u32 pad2 : 23;
} F8;
typedef struct {
    u32 pad : 10;
    u32 id : 8;
    u32 pad2 : 14;
} F0;
typedef struct {
    F0 *w0;
    u8 pad[0xe4];
    u32 *x;
} U;
void *Get_aONEOBJadrsByCharno(void);
s32 GetUnitStatus(s32 n) {
    u32 *o = (u32 *) Get_aONEOBJadrsByCharno();
    u32 *x;
    u32 id;
    s32 r;
    if (o == 0) {
        r = 0;
    } else {
        x = (u32 *) o[0xe8 / 4];
        if (x == 0 || ((x[2] << 8) >> 31) != 0) {
            r = 1;
        } else {
            id = (o[0] << 10) >> 24;
            if (id == 0 || (id - 9) <= 1) {
                r = 3;
            } else {
                r = 2;
            }
        }
    }
    return r;
}

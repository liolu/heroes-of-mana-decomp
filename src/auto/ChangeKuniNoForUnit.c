/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 lo : 4;
    u32 b : 28;
} N4;
typedef struct {
    u32 a : 23;
    u32 k : 4;
    u32 b : 5;
} K4;
typedef struct {
    u16 f0 : 1;
    u16 f1 : 1;
    u16 r : 14;
} F2;
typedef struct {
    u32 a : 8;
    u32 k : 4;
    u32 b : 20;
} G4;
extern s32 func_02002414(s32);
extern s32 func_020023cc(s32, s32);
extern s32 func_02002650(void *, s32);
extern u8 *Get_aONEOBJadrsByCharno(s32);
extern u8 *data_0203673c;
extern u8 *data_ov000_02051548;

void ChangeKuniNoForUnit(s32 charno, s32 kuni) {
    s32 idx;
    u8 *e;
    u8 *obj;
    if (kuni >= 4) {
        return;
    }
    idx = func_02002414(charno);
    if (idx == -1) {
        return;
    }
    e = *(u8 **) (data_0203673c + 0x24) + idx * 0x34;
    if (((N4 *) (e + 4))->lo >= 4) {
        return;
    }
    ((N4 *) (e + 4))->lo = kuni;
    if (func_020023cc(kuni, idx) == -1) {
        func_02002650(*(u8 **) (data_0203673c + 0x28) + kuni * 0x2d0, idx);
    }
    obj = Get_aONEOBJadrsByCharno(charno);
    if (obj == 0) {
        return;
    }
    ((K4 *) (obj + 8))->k     = kuni;
    ((F2 *) (obj + 0x2c))->f0 = (kuni & 1) ? 1 : 0;
    ((F2 *) (obj + 0x2c))->f1 = (((G4 *) (data_ov000_02051548 + 0x14))->k == kuni) ? 1 : 0;
}

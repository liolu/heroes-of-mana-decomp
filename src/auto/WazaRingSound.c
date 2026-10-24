/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 pad : 28;
    u32 b28 : 1;
    u32 b29 : 1;
} G;
typedef struct {
    u32 a : 5;
    u32 b : 3;
    u32 c : 8;
    u32 d : 8;
} S;
typedef struct {
    u32 pad : 13;
    u32 t : 2;
} T;
typedef struct {
    u32 pad : 9;
    u32 f : 10;
} U;
typedef struct {
    u8 pad[4];
    T t;
    u8 pad2[8];
    U u;
} E;
void SetTrsDataForEtc(void *, s32);
void Ring_SoundEffect(void);
extern u8 *data_ov000_02051548;
extern u8 *data_0203673c;

void WazaRingSound(s32 x) {
    S sp;
    E *e;
    if (x != 0) {
        if (((G *) (data_ov000_02051548 + 0x10))->b29 != 0 && ((G *) (data_ov000_02051548 + 0x10))->b28 == 0) {
            sp.a = 8;
            sp.b = 2;
            sp.c = x;
            sp.d = x / 256;
            SetTrsDataForEtc(&sp, 4);
        }
        e = (E *) (*(u8 **) (data_0203673c + 8) + 8 + x * 0x14);
        if (e->t.t != 0 && e->t.t != 1) {
        } else if (e->u.f != 0) {
            Ring_SoundEffect();
        }
    }
}

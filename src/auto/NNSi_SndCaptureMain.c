/* compiler: 1.2/sp3 */
#include "m2c.h"
extern struct SndCtx {
    s32 a;
    s32 b;
    s32 c;
    u32 buf0;
    u32 buf1;
    u32 size;
    s32 g;
    s32 h;
    s32 i;
    u32 t0;
    u32 t1;
    u32 sh;
    u32 pad[3];
    u8 fader[0x10];
    s32 busy;
    s32 vol;
} data_020371b0;
void func_020077f0(void *);
s32 func_020077d8(void *);
void func_02004bd4(void);
s32 NNSi_SndFaderGet(void *);
void SND_SetChannelVolume(u32, s32, s32);

void NNSi_SndCaptureMain(void) {
    struct SndCtx *c = &data_020371b0;
    s32 v;
    u8 *f;
    if (c->a == 0) {
        return;
    }
    if (c->b != 0) {
        return;
    }
    f = c->fader;
    func_020077f0(f);
    if (c->busy != 0 && func_020077d8(f) != 0) {
        func_02004bd4();
        return;
    }
    v = NNSi_SndFaderGet(f) >> 8;
    if (v != c->vol) {
        SND_SetChannelVolume(c->t0, v, 0);
        c->vol = v;
    }
}

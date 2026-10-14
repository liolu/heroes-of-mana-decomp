/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TP_RequestAutoSamplingStartAsync from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/spi/calls/TP_RequestAutoSamplingStartAsync.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef void (*TPRecvCallback)(int result, int operation, int detail);
struct TPSample {
    u32 xy00;
    u16 touch04;
    u16 validity06;
};
struct TPState {
    u8 pad00[4];
    TPRecvCallback callback04;
    u8 pad08[8];
    u16 index10;
    u16 frequence12;
    struct TPSample *samplingBufs14;
    u16 bufSize18;
    u8 pad1a[0x1e];
    u16 errFlags38;
    u16 commandFlags3a;
};
extern int func_0200fa98(void);
extern void func_0200faac(int state);
extern int func_020118cc(int channel, int word, int flag);
extern struct TPState data_0203a630;
void func_02015374(int vcount, int frequence, char *samplingBufs, unsigned int bufSize) {
    void (*callback)(int, int, int);
    int i;
    int interruptState;
    int ok;
    int result;

    data_0203a630.samplingBufs14 = (struct TPSample *) samplingBufs;
    data_0203a630.index10        = 0;
    data_0203a630.frequence12    = (short) frequence;
    data_0203a630.bufSize18      = (short) bufSize;

    for (i = 0; i < bufSize; i++) {
        data_0203a630.samplingBufs14[i].touch04 = 0;
    }

    interruptState = func_0200fa98();
    if (func_020118cc(6, (frequence & 0xff) | 0x100 | 0x2000000, 0) < 0) {
        ok = 0;
    } else {
        result = func_020118cc(6, vcount | 0x10000 | 0x1000000, 0);
        if (result < 0) {
            ok = 0;
        } else {
            ok = 1;
        }
    }

    if ((ok & 0xff) == 0) {
        func_0200faac(interruptState);
        data_0203a630.errFlags38 |= 2;
        callback = data_0203a630.callback04;
        if (callback == 0) {
            return;
        }
        callback(1, 4, 0);
        return;
    }

    {
        data_0203a630.commandFlags3a |= 2;
        data_0203a630.errFlags38 &= ~2;
    }
    func_0200faac(interruptState);
}

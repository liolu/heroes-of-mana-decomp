/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0200fa98(void);
extern u32 func_0200faac(u32 state);
extern u32 data_020389a8;
extern u16 data_020389ac[9];
u32 func_0200fc48(register u32 value);
void func_0200fc84(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0200fa98();

    mask = bank & data_020389a8 & 0x1ff;

    while (1) {
        s32 i = 31 - func_0200fc48(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_020389ac[i] == lockID) {
            data_020389ac[i] = 0;
            data_020389a8 &= ~(1 << i);
        }
    }
    func_0200faac(enabled);
}

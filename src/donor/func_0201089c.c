/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_SetupChannelPcm from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_interface.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern void PushCommand_impl(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
void func_0201089c(s32 chNo, s32 format, const void *dataAddr, s32 loop, s32 loopStart, s32 loopLen, s32 volume, s32 shift,
                   s32 timer, s32 pan) {
    PushCommand_impl(14, chNo | (timer << 16), (u32) dataAddr, loopLen | ((volume << 24) | (shift << 22)),
                     loopStart | ((loop << 26) | (format << 24) | (pan << 16)));
}
void PushCommand_impl(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);

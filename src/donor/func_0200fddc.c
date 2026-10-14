/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_Terminate from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_0200fa98(void);
extern void func_0200fddc(void);
extern void func_0200fdec(void);
void func_0200fddc(void) {
    while (1) {
        func_0200fa98();
        func_0200fdec();
    }
}
void func_0200fdec(void);

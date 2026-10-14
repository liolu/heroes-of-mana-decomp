/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SetIrqWorkField30 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetIrqWorkField30.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0200fa98();
extern void func_0200faac(int mask);
extern int data_0203863c[];
int func_0200e16c(int arg0) {
    int mask;
    int old;
    mask               = func_0200fa98();
    old                = data_0203863c[0xc];
    data_0203863c[0xc] = arg0;
    func_0200faac(mask);
    return old;
}

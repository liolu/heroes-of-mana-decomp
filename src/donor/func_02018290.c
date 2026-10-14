/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WmInit from https://github.com/Yokimitsuro/khdays-decomp src/overlays/system/ov105_wireless/Ov105_WmInit.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_020182bc(int a0, int a1, int a2);
extern int data_0203b000;
int func_02018290(int a0, int a1) {
    int result = func_020182bc(a0, a1, 0xf00);
    if (result != 0) {
        return result;
    }
    *(unsigned short *) (*(char **) ((char *) &data_0203b000 + 4) + 0x16) = 0;
    return result;
}

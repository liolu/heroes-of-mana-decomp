/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_ReadRomCallback from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/FSi_ReadRomCallback.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02017d90(int a, int b, int c, int d, int e, int f, int g);
extern int func_020136e0();
extern int *data_0203a5bc[];
int func_02013704(int a, int b, int c, int d) {
    func_02017d90((int) data_0203a5bc[1], c, b, d, (int) func_020136e0, a, 1);
    return 6;
}

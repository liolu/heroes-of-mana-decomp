/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_ReadRomCallback from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/FSi_ReadRomCallback.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02017d90(int a, int b, int c, int d, int e, int f, int g);
extern int FSi_OnRomReadDone();
extern int *fsi_card_lock_id[];
int func_02013704(int a, int b, int c, int d) {
    func_02017d90((int) fsi_card_lock_id[1], c, b, d, (int) FSi_OnRomReadDone, a, 1);
    return 6;
}

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_ReceiveMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_ReceiveMessage.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0200fa98(void);
extern void func_0200faac(int state);
extern void func_0200dd50(void *queue);
extern void func_0200dda0(void *queue);
extern long long func_0202d478(int a, int b);
int func_0200e3ec(char *q, void **out, int flags) {
    int enabled = func_0200fa98();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_0200faac(enabled);
            return 0;
        }
        func_0200dd50(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_0202d478(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_0200dda0(q);
    func_0200faac(enabled);
    return 1;
}

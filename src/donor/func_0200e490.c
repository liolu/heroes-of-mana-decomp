/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_JamMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_JamMessage.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0200fa98(void);
extern void func_0200faac(int state);
extern void func_0200dd50(void *queue);
extern void func_0200dda0(void *queue);
extern long long func_0202d478(int a, int b);
int func_0200e490(char *q, void *msg, int flags) {
    int enabled = func_0200fa98();
    void **slots;
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_0200faac(enabled);
            return 0;
        }
        func_0200dd50(q);
    }
    *(int *) (q + 0x18) = (int) (func_0202d478(*(int *) (q + 0x18) + *(int *) (q + 0x14) - 1, *(int *) (q + 0x14)) >> 32);
    slots               = *(void ***) (q + 0x10);
    slots[*(int *) (q + 0x18)] = msg;
    *(int *) (q + 0x1c)        = *(int *) (q + 0x1c) + 1;
    func_0200dda0(q + 8);
    func_0200faac(enabled);
    return 1;
}

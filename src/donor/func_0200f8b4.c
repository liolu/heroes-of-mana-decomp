/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_CancelAlarm from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_CancelAlarm.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0200fa98(void);
extern void func_0200faac(int state);
extern void func_0200f5c0(void *alarm);
extern char data_02038984;
void func_0200f8b4(char *alarm) {
    int enabled = func_0200fa98();
    char *next;
    char *prev;
    if (*(int *) alarm == 0) {
        func_0200faac(enabled);
        return;
    }
    next = *(char **) (alarm + 0x18);
    if (next == 0) {
        *(char **) ((char *) &data_02038984 + 8) = *(char **) (alarm + 0x14);
    } else {
        *(char **) (next + 0x14) = *(char **) (alarm + 0x14);
    }
    prev = *(char **) (alarm + 0x14);
    if (prev != 0) {
        *(char **) (prev + 0x18) = next;
    } else {
        *(char **) ((char *) &data_02038984 + 4) = next;
        if (next != 0) {
            func_0200f5c0(next);
        }
    }
    *(int *) alarm          = 0;
    *(int *) (alarm + 0x1c) = 0;
    *(int *) (alarm + 0x20) = 0;
    func_0200faac(enabled);
}

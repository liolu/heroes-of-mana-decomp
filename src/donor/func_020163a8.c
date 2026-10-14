/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207c154 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef void (*UnkPmSleepCallback)(void *arg);
typedef struct UnkPmCallbackInfo {
    UnkPmSleepCallback func;
    void *arg;
    struct UnkPmCallbackInfo *next;
} UnkPmCallbackInfo;
void func_020163a8(UnkPmCallbackInfo **list, UnkPmCallbackInfo *info) {
    UnkPmCallbackInfo *p;
    UnkPmCallbackInfo *prev;

    if (!list) {
        return;
    }
    prev = p = *list;
    while (p) {
        if (p == info) {
            if (p == prev) {
                *list = p->next;
            } else {
                prev->next = p->next;
            }
            return;
        }
        prev = p;
        p    = p->next;
    }
}

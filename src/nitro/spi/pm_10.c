/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

typedef void (*UnkPmSleepCallback)(void *arg);
typedef struct UnkPmCallbackInfo {
    UnkPmSleepCallback func;
    void *arg;
    struct UnkPmCallbackInfo *next;
} UnkPmCallbackInfo;

void PMi_AppendList(void **arg0, void *arg1) {
    void *var_r0;
    void *var_r2;

    if (arg0 == NULL) {
        return;
    }
    var_r2 = *arg0;
    if (var_r2 == NULL) {
        M2C_FIELD(arg1, void **, 8) = NULL;
        *arg0                       = arg1;
        return;
    }
    var_r0 = M2C_FIELD(var_r2, void **, 8);
    if (var_r0 != NULL) {
        do {
            var_r2 = var_r0;
            var_r0 = M2C_FIELD(var_r0, void **, 8);
        } while (var_r0 != NULL);
    }
    M2C_FIELD(arg1, void **, 8)   = var_r0;
    M2C_FIELD(var_r2, void **, 8) = arg1;
}

/* func_0207c154 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
void PMi_DeleteList(UnkPmCallbackInfo **list, UnkPmCallbackInfo *info) {
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

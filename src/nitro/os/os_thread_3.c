/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

typedef unsigned char u8;
typedef unsigned long u32;
typedef struct OSThread {
    u8 reserved_00[0x68];
    struct OSThread *next;
    u32 id;
    u32 priority;
} OSThread;
typedef struct OSThreadInfo {
    u8 reserved_00[0x2c];
    OSThread *list;
} OSThreadInfo;
extern OSThreadInfo OSi_SystemCallbackInSwitchThread;

void *OSi_RemoveMutexLinkFromQueue(void *arg0) {
    void *temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r2 != NULL) {
        temp_r1                     = M2C_FIELD(temp_r2, void **, 0x10);
        M2C_FIELD(arg0, void **, 0) = temp_r1;
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, s32 *, 0x14) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
    }
    return temp_r2;
}

/* OSi_InsertThreadByPriority from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/os/calls/OSi_InsertThreadByPriority.c (license: CC0-1.0), reused by tools/donor_match.py */
void OSi_InsertThreadToList(OSThread *thread) {
    OSThread *current  = OSi_SystemCallbackInSwitchThread.list;
    OSThread *previous = 0;

    while (current != 0 && current->priority < thread->priority) {
        previous = current;
        current  = current->next;
    }

    if (previous == 0) {
        thread->next                          = OSi_SystemCallbackInSwitchThread.list;
        OSi_SystemCallbackInSwitchThread.list = thread;
    } else {
        thread->next   = previous->next;
        previous->next = thread;
    }
}

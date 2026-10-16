#include "m2c.h"

extern M2C_UNK sUnlockFunc;

void MBi_InitSendFixedBeacon(void) {
    u8 *buf;

    if (*(u8 *) ((u8 *) &sUnlockFunc + 0x24) != 2) {
        return;
    }
    buf = *(u8 **) ((u8 *) &sUnlockFunc + 0x1C);
    if (*(u8 *) (buf + 0x4B2) == 0) {
        *(u8 *) ((u8 *) &sUnlockFunc + 0x28)  = 9;
        *(u8 **) ((u8 *) &sUnlockFunc + 0x20) = buf;
    } else {
        *(u8 *) ((u8 *) &sUnlockFunc + 0x28)  = 4;
        *(u8 **) ((u8 *) &sUnlockFunc + 0x20) = buf + 0x220;
    }
    *(u8 *) ((u8 *) &sUnlockFunc + 0x24) = 3;
}

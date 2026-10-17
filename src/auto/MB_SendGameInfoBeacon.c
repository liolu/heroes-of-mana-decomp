#include "m2c.h"
typedef struct {
    u8 pad[0x24];
    u8 state;
} MbSt;
extern MbSt sUnlockFunc;
s32 MBi_ReadyBeaconSendStatus(void);
void MBi_InitSendFixedBeacon(void);
s32 MBi_SendFixedBeacon(u32 a, u32 b, u32 c);
void MBi_InitSendVolatBeacon(void);
s32 MBi_SendVolatBeacon(u32 a, u32 b, u32 c);
void MB_SendGameInfoBeacon(u32 a, u32 b, u32 c) {
    for (;;) {
        switch (sUnlockFunc.state) {
            case 0:
            case 1:
                if (MBi_ReadyBeaconSendStatus() == 0) {
                    return;
                }
                break;
            case 2:
                MBi_InitSendFixedBeacon();
                break;
            case 3:
                MBi_SendFixedBeacon(a, b, c);
                return;
            case 4:
                MBi_InitSendVolatBeacon();
                break;
            case 6:
                break;
            case 5:
                MBi_SendVolatBeacon(a, b, c);
                return;
        }
    }
}

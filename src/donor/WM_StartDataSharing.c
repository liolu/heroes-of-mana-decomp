/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207da94 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ds.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void MIi_CpuClearFast(u32 value, void *dest, u32 size);
extern u8 MATH_CountPopulation(u32 value);
typedef void (*UnkWmCallbackFunc)(void *arg);
typedef struct UnkWmDataSet {
    u16 aidBitmap;
    u16 receivedBitmap;
    u16 data[14];
    u16 childData[240];
} UnkWmDataSet;
typedef struct UnkWmDataSharingInfo {
    UnkWmDataSet ds[4];
    u16 seqNum[4];
    u16 writeIndex;
    u16 sendIndex;
    u16 readIndex;
    u16 aidBitmap;
    u16 dataLength;
    u16 stationNumber;
    u16 dataSetLength;
    u16 port;
    u16 doubleMode;
    u16 currentSeqNum;
    u16 state;
    u16 reserved;
} UnkWmDataSharingInfo;
extern u32 WMi_CheckStateEx(s32 paramNum, ...);
extern u16 WM_GetAID(void);
extern u16 WMi_GetMPReadyAIDs(void);
extern u32 WM_SetPortCallback(u16 port, UnkWmCallbackFunc callback, void *arg);
extern u32 WM_SetMPDataToPortEx(UnkWmCallbackFunc callback, void *arg, const u16 *sendData, u16 sendDataSize, u16 destBitmap,
                                u16 port, u16 prio);
extern u32 WM_StartDataSharing(UnkWmDataSharingInfo *dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode);
extern void WmDataSharingSetDataCallback(void *arg);
extern void WmDataSharingReceiveCallback_Parent(void *arg);
extern void WmDataSharingReceiveCallback_Child(void *arg);
u32 WM_StartDataSharing(UnkWmDataSharingInfo *dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode) {
    u16 connectedAIDs = 1;
    u16 aid;
    s32 i;
    u32 result = WMi_CheckStateEx(2, 9, 10);

    if (result != 0) {
        return result;
    }
    if (dsInfo == 0) {
        return 6;
    }
    if (port >= 16) {
        return 6;
    }
    if (aidBitmap == 0) {
        return 6;
    }

    aid = WM_GetAID();
    if (aid == 0) {
        connectedAIDs = WMi_GetMPReadyAIDs();
    }

    MIi_CpuClearFast(0, dsInfo, sizeof(UnkWmDataSharingInfo));
    dsInfo->writeIndex = 0;
    dsInfo->sendIndex  = 0;
    dsInfo->readIndex  = 0;
    dsInfo->dataLength = dataLength;
    dsInfo->port       = port;
    dsInfo->aidBitmap  = 0;
    dsInfo->doubleMode = doubleMode ? 1 : 0;
    dsInfo->aidBitmap  = (u16) (aidBitmap | (1 << aid));
    {
        u16 num               = MATH_CountPopulation((u16) (aidBitmap | (1 << aid)));
        dsInfo->stationNumber = num;
        dsInfo->dataSetLength = (u16) (dataLength * num);
    }
    if (dsInfo->dataSetLength > 508) {
        dsInfo->aidBitmap = 0;
        return 6;
    }
    dsInfo->dataSetLength += 4;
    dsInfo->state = 1;

    if (aid == 0) {
        for (i = 0; i < 4; i++) {
            dsInfo->ds[i].aidBitmap = (u16) (dsInfo->aidBitmap & (connectedAIDs | 1));
        }
        WM_SetPortCallback(port, WmDataSharingReceiveCallback_Parent, dsInfo);

        for (i = 0; i < ((dsInfo->doubleMode == 1) ? 2 : 1); i++) {
            dsInfo->writeIndex = (u16) ((dsInfo->writeIndex + 1) & 3);
            result = WM_SetMPDataToPortEx(WmDataSharingSetDataCallback, dsInfo, (u16 *) &dsInfo->ds[i], dsInfo->dataSetLength,
                                          (u16) (dsInfo->aidBitmap & connectedAIDs), dsInfo->port, 1);
            if (result == 7) {
                dsInfo->seqNum[i] = 0xffff;
                dsInfo->sendIndex = (u16) ((dsInfo->sendIndex + 1) & 3);
            } else if (result != 0 && result != 2) {
                dsInfo->state = 5;
                return 1;
            }
        }
    } else {
        dsInfo->sendIndex = 3;
        WM_SetPortCallback(port, WmDataSharingReceiveCallback_Child, dsInfo);
    }
    return 0;
}
void WmDataSharingSetDataCallback(void *arg);
void WmDataSharingReceiveCallback_Parent(void *arg);
void WmDataSharingReceiveCallback_Child(void *arg);

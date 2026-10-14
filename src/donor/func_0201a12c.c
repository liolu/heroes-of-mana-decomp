/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207da94 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ds.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_020102dc(u32 value, void *dest, u32 size);
extern u8 func_020204e4(u32 value);
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
extern u32 func_020186e0(s32 paramNum, ...);
extern u16 func_02018b60(void);
extern u16 func_02018bc0(void);
extern u32 func_02018c4c(u16 port, UnkWmCallbackFunc callback, void *arg);
extern u32 func_02019d88(UnkWmCallbackFunc callback, void *arg, const u16 *sendData, u16 sendDataSize, u16 destBitmap,
                         u16 port, u16 prio);
extern u32 func_0201a12c(UnkWmDataSharingInfo *dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode);
extern void func_0201a72c(void *arg);
extern void func_0201a804(void *arg);
extern void func_0201a930(void *arg);
u32 func_0201a12c(UnkWmDataSharingInfo *dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode) {
    u16 connectedAIDs = 1;
    u16 aid;
    s32 i;
    u32 result = func_020186e0(2, 9, 10);

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

    aid = func_02018b60();
    if (aid == 0) {
        connectedAIDs = func_02018bc0();
    }

    func_020102dc(0, dsInfo, sizeof(UnkWmDataSharingInfo));
    dsInfo->writeIndex = 0;
    dsInfo->sendIndex  = 0;
    dsInfo->readIndex  = 0;
    dsInfo->dataLength = dataLength;
    dsInfo->port       = port;
    dsInfo->aidBitmap  = 0;
    dsInfo->doubleMode = doubleMode ? 1 : 0;
    dsInfo->aidBitmap  = (u16) (aidBitmap | (1 << aid));
    {
        u16 num               = func_020204e4((u16) (aidBitmap | (1 << aid)));
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
        func_02018c4c(port, func_0201a804, dsInfo);

        for (i = 0; i < ((dsInfo->doubleMode == 1) ? 2 : 1); i++) {
            dsInfo->writeIndex = (u16) ((dsInfo->writeIndex + 1) & 3);
            result             = func_02019d88(func_0201a72c, dsInfo, (u16 *) &dsInfo->ds[i], dsInfo->dataSetLength,
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
        func_02018c4c(port, func_0201a930, dsInfo);
    }
    return 0;
}
void func_0201a72c(void *arg);
void func_0201a804(void *arg);
void func_0201a930(void *arg);

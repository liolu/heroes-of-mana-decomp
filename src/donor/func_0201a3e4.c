/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207dd30 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ds.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern void func_02010294(const void *src, void *dest, u32 size);
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
extern u32 func_02019d88(UnkWmCallbackFunc callback, void *arg, const u16 *sendData, u16 sendDataSize, u16 destBitmap,
                         u16 port, u16 prio);
extern void func_0201a72c(void *arg);
extern void func_0201aa24(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
extern void func_0201aaf0(UnkWmDataSharingInfo *dsInfo, BOOL delayed);
u32 func_0201a3e4(UnkWmDataSharingInfo *dsInfo, const u16 *sendData, UnkWmDataSet *receiveData) {
    u32 result;
    u16 aid;
    u16 connectedAIDs;
    u16 state;
    BOOL isNewData;
    BOOL delayed;

    result = func_020186e0(2, 9, 10);
    if (result != 0) {
        return result;
    }
    if (dsInfo == 0) {
        return 6;
    }
    if (sendData == 0) {
        return 6;
    }
    if (receiveData == 0) {
        return 6;
    }

    aid = func_02018b60();
    if (aid == 0) {
        connectedAIDs = func_02018bc0();
    }

    state = dsInfo->state;
    if (state == 5) {
        return 1;
    }
    if (state != 1 && state != 4) {
        return 3;
    }

    result = 5;
    if (aid == 0) {
        isNewData = 0;
        delayed   = 0;

        if (state == 4) {
            u16 index;
            u32 ret;

            dsInfo->state = 1;
            index         = (u16) ((dsInfo->writeIndex + 3) & 3);
            ret           = func_02019d88(func_0201a72c, dsInfo, (u16 *) &dsInfo->ds[index], dsInfo->dataSetLength,
                                          (u16) (dsInfo->aidBitmap & connectedAIDs), dsInfo->port, 1);
            if (ret == 7) {
                dsInfo->seqNum[index] = 0xffff;
                dsInfo->sendIndex     = (u16) ((dsInfo->sendIndex + 1) & 3);
            } else if (ret != 0 && ret != 2) {
                dsInfo->state = 5;
                return 1;
            }
        }

        if (dsInfo->readIndex != dsInfo->sendIndex) {
            dsInfo->ds[dsInfo->readIndex].aidBitmap |= 1;
            func_02010294(&dsInfo->ds[dsInfo->readIndex], receiveData, sizeof(UnkWmDataSet));
            isNewData             = 1;
            result                = 0;
            dsInfo->currentSeqNum = dsInfo->seqNum[dsInfo->readIndex];
            dsInfo->readIndex     = (u16) ((dsInfo->readIndex + 1) & 3);
            if (dsInfo->doubleMode == 0 && connectedAIDs != 0 && dsInfo->ds[dsInfo->writeIndex].aidBitmap == 1) {
                delayed = 1;
            } else {
                delayed = 0;
            }
        }

        func_0201aaf0(dsInfo, 0);
        if (isNewData) {
            func_0201aa24(dsInfo, 0, (u16 *) sendData);
            if (dsInfo->doubleMode == 0) {
                func_0201aaf0(dsInfo, delayed);
            }
        }
    } else {
        isNewData = 0;
        if (state == 4) {
            dsInfo->state = 1;
            isNewData     = 1;
        } else if (dsInfo->readIndex != dsInfo->writeIndex) {
            if (!(dsInfo->ds[dsInfo->readIndex].aidBitmap & 1)) {
                dsInfo->ds[dsInfo->readIndex].aidBitmap |= 1;
            } else {
                func_02010294(&dsInfo->ds[dsInfo->readIndex], receiveData, sizeof(UnkWmDataSet));
                isNewData             = 1;
                result                = 0;
                dsInfo->currentSeqNum = dsInfo->seqNum[dsInfo->readIndex];
                dsInfo->readIndex     = (u16) ((dsInfo->readIndex + 1) & 3);
            }
        }

        if (isNewData) {
            u32 ret;
            UnkWmDataSet *ds = &dsInfo->ds[dsInfo->sendIndex];

            func_02010294(sendData, ds->childData, dsInfo->dataLength);
            ret = func_02019d88(func_0201a72c, dsInfo, ds->childData, dsInfo->dataLength, dsInfo->aidBitmap, dsInfo->port, 1);
            dsInfo->sendIndex = (u16) ((dsInfo->sendIndex + 1) & 3);
            if (ret != 2 && ret != 0) {
                dsInfo->state = 5;
                result        = 1;
            }
        }
    }
    return result;
}
void func_0201a72c(void *arg);
void func_0201aa24(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
void func_0201aaf0(UnkWmDataSharingInfo *dsInfo, BOOL delayed);

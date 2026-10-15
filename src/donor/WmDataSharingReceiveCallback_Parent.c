/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207e150 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ds.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern u32 func_0200fa98(void);
extern u32 func_0200faac(u32 state);
typedef struct UnkWmPortRecvCallback {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 port;
    u16 *recvBuf;
    u16 *data;
    u16 length;
    u16 aid;
    u8 macAddress[6];
    u16 seqNo;
    void *arg;
    u16 myAid;
    u16 connectedAidBitmap;
    u8 ssid[24];
    u16 reason;
    u16 rssi;
    u16 maxSendDataSize;
    u16 maxRecvDataSize;
} UnkWmPortRecvCallback;
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
extern void WmDataSharingReceiveCallback_Parent(void *arg);
extern void WmDataSharingReceiveData(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
extern void WmDataSharingSendDataSet(UnkWmDataSharingInfo *dsInfo, BOOL delayed);
void WmDataSharingReceiveCallback_Parent(void *arg) {
    UnkWmPortRecvCallback *cb    = (UnkWmPortRecvCallback *) arg;
    UnkWmDataSharingInfo *dsInfo = (UnkWmDataSharingInfo *) cb->arg;

    if (dsInfo == 0) {
        return;
    }
    if (cb->errcode == 0) {
        switch (cb->state) {
            case 0x15:
                WmDataSharingReceiveData(dsInfo, cb->aid, cb->data);
                WmDataSharingSendDataSet(dsInfo, 0);
                break;
            case 7:
                WmDataSharingSendDataSet(dsInfo, 0);
                break;
            case 9:
            case 0x1a: {
                u16 aid     = cb->aid;
                u32 aidBit  = 1U << aid;
                u32 enabled = func_0200fa98();
                u16 index   = dsInfo->writeIndex;

                dsInfo->ds[index].aidBitmap &= ~aidBit;
                if (dsInfo->doubleMode == 1) {
                    dsInfo->ds[(u16) ((index + 1) & 3)].aidBitmap &= ~aidBit;
                }
                func_0200faac(enabled);

                WmDataSharingSendDataSet(dsInfo, 0);
                if (dsInfo->doubleMode == 1) {
                    WmDataSharingSendDataSet(dsInfo, 0);
                }
                break;
            }
            case 0x19:
                break;
        }
    } else {
        dsInfo->state = 5;
    }
}
void WmDataSharingReceiveData(UnkWmDataSharingInfo *dsInfo, u16 aid, u16 *data);
void WmDataSharingSendDataSet(UnkWmDataSharingInfo *dsInfo, BOOL delayed);

/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WM_StartScanEx from https://github.com/Yokimitsuro/khrecoded-decomp src/calls/WM_StartScanEx.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef void (*WMCallbackFunc)(void *arg);
typedef int WMErrCode;
typedef struct {
    void *scanBuf;
    u16 scanBufSize;
    u16 channelList;
    u16 maxChannelTime;
    u8 bssid[6];
    u16 scanType;
    u16 ssidLength;
    u8 ssid[32];
    u16 ssidMatchLength;
    u16 rsv[2];
} WMScanExParam;
typedef struct {
    u16 apiid;
    u16 channelList;
    void *scanBuf;
    u16 scanBufSize;
    u16 maxChannelTime;
    u8 bssid[6];
    u16 scanType;
    u16 ssidLength;
    u8 ssid[32];
    u16 ssidMatchLength;
    u16 rsv2[2];
} WMStartScanExReq;
extern WMErrCode WMi_CheckStateEx(s32 paramNum, ...);
extern void WMi_SetCallbackTable(int apiid, WMCallbackFunc callback);
extern WMErrCode WMi_SendCommandDirect(void *data, u32 length);
extern void MI_CpuCopy8(const void *src, void *dst, u32 size);
WMErrCode func_020197dc(WMCallbackFunc callback, const WMScanExParam *param) {
    WMErrCode result;

    result = WMi_CheckStateEx(3, 2, 3, 5);
    if (result != 0) {
        return result;
    }

    if (param == ((void *) 0)) {
        return 6;
    }
    if (param->scanBuf == ((void *) 0)) {
        return 6;
    }
    if (param->scanBufSize > 0x400) {
        return 6;
    }
    if (param->ssidLength > 32) {
        return 6;
    }
    if (param->scanType != 0 && param->scanType != 1 && param->scanType != 2 && param->scanType != 3) {
        return 6;
    }
    if ((param->scanType == 2 || param->scanType == 3) && param->ssidMatchLength > 32) {
        return 6;
    }

    WMi_SetCallbackTable(0x26, callback);

    {
        WMStartScanExReq Req;

        Req.apiid          = 0x26;
        Req.channelList    = param->channelList;
        Req.scanBuf        = param->scanBuf;
        Req.scanBufSize    = param->scanBufSize;
        Req.maxChannelTime = param->maxChannelTime;
        MI_CpuCopy8(param->bssid, Req.bssid, 6);
        Req.scanType        = param->scanType;
        Req.ssidMatchLength = param->ssidMatchLength;
        Req.ssidLength      = param->ssidLength;
        MI_CpuCopy8(param->ssid, Req.ssid, 32);

        result = WMi_SendCommandDirect(&Req, sizeof(Req));
        if (result != 0) {
            return result;
        }
    }

    return 2;
}

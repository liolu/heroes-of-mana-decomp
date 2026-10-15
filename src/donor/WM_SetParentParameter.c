/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207d268 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ap.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void DC_StoreRange(void *ptr, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
extern void WMi_SetCallbackTable(u32 id, UnkWmCallbackFunc callback);
extern u32 WMi_SendCommand(u16 id, u16 paramNum, ...);
extern u32 WMi_CheckStateEx(s32 paramNum, ...);
extern BOOL WmCheckParentParameter(void *param);
typedef struct UnkWmParentParam {
    u16 *userGameInfo;
    u16 userGameInfoLength;
    u8 unk_06[0xe];
    u16 KS_Flag;
    u8 unk_16[2];
    u16 beaconPeriod;
    u8 unk_1a[0x18];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u8 unk_38[8];
} UnkWmParentParam;
u32 WM_SetParentParameter(UnkWmCallbackFunc callback, UnkWmParentParam *param) {
    u32 result = WMi_CheckStateEx(1, 2);

    if (result != 0) {
        return result;
    }
    if (param == 0) {
        return 6;
    }
    if (param->userGameInfoLength != 0 && param->userGameInfo == 0) {
        return 6;
    }
    if (param->parentMaxSize + (param->KS_Flag ? 42 : 0) > 512 || param->childMaxSize + (param->KS_Flag ? 6 : 0) > 512) {
        return 6;
    }

    WmCheckParentParameter(param);
    WMi_SetCallbackTable(7, callback);
    DC_StoreRange(param, sizeof(UnkWmParentParam));
    if (param->userGameInfoLength != 0) {
        DC_StoreRange(param->userGameInfo, param->userGameInfoLength);
    }
    result = WMi_SendCommand(7, 1, param);
    if (result != 0) {
        return result;
    }
    return 2;
}
BOOL WmCheckParentParameter(void *param_);

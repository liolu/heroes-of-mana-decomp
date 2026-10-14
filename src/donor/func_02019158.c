/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WM_GetOtherElements from https://github.com/ntrtwl/NitroSDK libraries/wm/src/wm_sync.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef struct WMGameInfo {
    u16 magicNumber;
    u8 ver;
    u8 platform;
    u32 ggid;
    u16 tgid;
    u8 userGameInfoLength;
    union {
        u8 gameNameCount_attribute;
        u8 attribute;
    };
    u16 parentMaxSize;
    u16 childMaxSize;
    union {
        u16 userGameInfo[112 / sizeof(u16)];
        struct {
            u16 userName[8 / sizeof(u16)];
            u16 gameName[16 / sizeof(u16)];
            u16 padd1[44];
        } old_type;
    };
} WMGameInfo, WMgameInfo;
typedef struct WMBssDesc {
    u16 length;
    u16 rssi;
    u8 bssid[6];
    u16 ssidLength;
    u8 ssid[32];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
    u16 gameInfoLength;
    u16 otherElementCount;
    WMGameInfo gameInfo;
} WMBssDesc, WMbssDesc;
typedef struct WMOtherElements {
    u8 count;
    u8 rsv[3];
    struct {
        u8 id;
        u8 length;
        u8 rsv[2];
        u8 *body;
    } element[16];
} WMOtherElements;
extern WMOtherElements func_02019158(WMBssDesc *bssDesc);
extern const u16(*ctrdgi_fl_maxtime);
WMOtherElements func_02019158(WMBssDesc *bssDesc) {
    WMOtherElements elems;
    u8 *p_elem;
    int i;
    u8 curr_elem_len;
    u8 elems_len;
    u8 elems_len_counter;

    if (bssDesc->gameInfoLength != 0) {
        elems.count = 0;
        return elems;
    }

    elems.count = (u8) (bssDesc->otherElementCount);

    if (elems.count == 0) {
        return elems;
    }

    if (elems.count > 16) {
        elems.count = 16;
    }

    p_elem = (u8 *) &(bssDesc->gameInfo);

    elems_len         = (u8) ((bssDesc->length * sizeof(u16)) - 64);
    elems_len_counter = 0;

    for (i = 0; i < elems.count; ++i) {
        elems.element[i].id     = p_elem[0];
        elems.element[i].length = p_elem[1];
        elems.element[i].body   = (u8 *) &(p_elem[2]);

        curr_elem_len = (u8) (elems.element[i].length + 2);
        elems_len_counter += curr_elem_len;

        if (elems_len_counter > elems_len) {
            ((void) 0);
            elems.count = 0;
            return elems;
        }

        p_elem = (u8 *) (p_elem + curr_elem_len);
    }

    return elems;
}

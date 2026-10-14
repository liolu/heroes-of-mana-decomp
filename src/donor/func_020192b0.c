/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WM_GetNextTgid from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WM_GetNextTgid.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_02016478(void);
extern int func_02016600(RTCTime *time);
extern u32 data_02035cd0;
u16 func_020192b0(void) {
    enum {
        TGID_DEFAULT = (1 << 16)
    };

    if (data_02035cd0 == (u32) TGID_DEFAULT) {
        RTCTime rt[1];
        func_02016478();
        if (func_02016600(rt) == 0) {
            data_02035cd0 = (u16) (rt->second + (rt->minute << 8));
        }
    }

    data_02035cd0 = (u16) (data_02035cd0 + 1);
    return (u16) data_02035cd0;
}

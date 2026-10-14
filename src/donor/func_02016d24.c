/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Rtc_DateTime_GetSeconds from https://github.com/RonyxDumb/mkds src/arm9/0214e1e0_Rtc_DateTime_GetSeconds.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef signed long long int s64;
typedef enum RTCWeek {
    RTC_WEEK_SUNDAY = 0,
    RTC_WEEK_MONDAY,
    RTC_WEEK_TUESDAY,
    RTC_WEEK_WEDNESDAY,
    RTC_WEEK_THURSDAY,
    RTC_WEEK_FRIDAY,
    RTC_WEEK_SATURDAY,
    RTC_WEEK_MAX
} RTCWeek;
typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    RTCWeek week;
} RTCDate;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern s32 func_02016c78(const RTCDate *date);
extern s32 func_02016d0c(const RTCTime *time);
extern s64 func_02016d24(const RTCDate *date, const RTCTime *time);
extern s32 func_02016c78(const RTCDate *date);
extern s32 func_02016d0c(const RTCTime *time);
s64 func_02016d24(const RTCDate *date, const RTCTime *time) {
    s32 day = func_02016c78(date);
    if (day == -1) {
        return -1;
    }
    s32 second = func_02016d0c(time);
    if (second == -1) {
        return -1;
    }
    return ((s64) day) * (60 * 60 * 24) + second;
}

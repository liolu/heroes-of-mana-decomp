/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    s32 year;
    s32 month;
    s32 day;
    s32 week;
} RTCDate;
typedef struct {
    s32 hour;
    s32 minute;
    s32 second;
} RTCTime;

s32 func_02024c28(char *);
s32 func_02016554(RTCDate *);
s32 RTC_GetTime(RTCTime *);
s64 RTC_ConvertDateTimeToSecond(RTCDate *, RTCTime *);
char *func_02024c44(char *, char *);
s32 func_02026c4c(char *);
s32 func_02024d8c(char *, char *);

extern char data_ov123_020dc5d8[];
extern char *data_ov123_020dc5a8[];
extern s32 errno;
extern s32 data_ov123_020e170c;
extern s64 data_ov123_020e1710;

s32 func_ov123_02098908(char *str) {
    RTCDate d;
    RTCTime t;
    char buf[0x24];
    s64 now;
    s64 cmp;
    s32 i;

    if (func_02024c28(str) != func_02024c28(data_ov123_020dc5d8)) {
        goto fail;
    }
    if (str[7] != ' ') {
        goto fail;
    }
    if (str[11] != ' ') {
        goto fail;
    }
    if (str[16] != ' ') {
        goto fail;
    }
    if (str[19] != ':') {
        goto fail;
    }
    if (str[22] != ':') {
        goto fail;
    }
    if (str[25] != ' ') {
        goto fail;
    }
    if (func_02016554(&d) != 0) {
        goto fail;
    }
    if (RTC_GetTime(&t) != 0) {
        goto fail;
    }
    now = RTC_ConvertDateTimeToSecond(&d, &t);
    if (now == -1) {
        goto fail;
    }
    func_02024c44(buf, str);
    buf[7]  = 0;
    buf[11] = 0;
    buf[16] = 0;
    buf[19] = 0;
    buf[22] = 0;
    buf[25] = 0;
    errno   = 0;
    d.year  = func_02026c4c(&buf[12]);
    if (errno == 0x22) {
        goto fail;
    }
    d.year -= 2000;
    d.month = 13;
    for (i = 0; i < 12; i++) {
        if (func_02024d8c(data_ov123_020dc5a8[i], &buf[8]) == 0) {
            d.month = i + 1;
            break;
        }
    }
    if ((u32) d.month > 12) {
        goto fail;
    }
    errno = 0;
    d.day = func_02026c4c(&buf[5]);
    if (errno == 0x22) {
        goto fail;
    }
    errno  = 0;
    t.hour = func_02026c4c(&buf[17]);
    if (errno == 0x22) {
        goto fail;
    }
    errno    = 0;
    t.minute = func_02026c4c(&buf[20]);
    if (errno == 0x22) {
        goto fail;
    }
    errno    = 0;
    t.second = func_02026c4c(&buf[23]);
    if (errno == 0x22) {
        goto fail;
    }
    cmp = RTC_ConvertDateTimeToSecond(&d, &t);
    if (cmp == -1) {
        goto fail;
    }
    data_ov123_020e1710 = now - cmp;
    data_ov123_020e170c = 1;
    return 1;
fail:
    return 0;
}

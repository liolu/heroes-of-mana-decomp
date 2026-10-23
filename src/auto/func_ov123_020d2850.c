#include "m2c.h"
typedef struct Out {
    u16 year;
    u8 mon;
    u8 day;
    u16 h;
    u8 m;
    u8 s;
} Out;
typedef struct Date {
    s32 year;
    s32 mon;
    s32 day;
    s32 week;
} Date;
typedef struct Time {
    s32 h;
    s32 m;
    s32 s;
} Time;
extern s32 func_02016554(Date *);
extern s32 RTC_GetTime(Time *);
void func_ov123_020d2850(Out *out) {
    Out o;
    Date d;
    Time t;
    if (func_02016554(&d) == 0 && RTC_GetTime(&t) == 0) {
        o.year = d.year + 2000;
        o.mon  = d.mon;
        o.day  = d.day;
        o.h    = t.h;
        o.m    = t.m;
        o.s    = t.s;
    } else {
        o.year = 2007;
        o.mon  = 1;
        o.day  = 1;
        o.h    = 0;
        o.m    = 0;
        o.s    = 0;
    }
    *out = o;
}

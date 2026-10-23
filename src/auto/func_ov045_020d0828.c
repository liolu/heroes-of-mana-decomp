#include "m2c.h"
typedef struct {
    s32 a[6];
} T6;
void MTG_BecomeDarkScreen(void);
void MTG_ReturnDarkScreen(void);
void Routine_MessageRect(s32, s32, s32, s32);
s32 CalRnd(void);
s32 GetKazuOfItem(s32);
void MessagePutAndWait(s32);
void GettingItemOneForFree(s32);
extern T6 data_ov045_020d179c;

void func_ov045_020d0828(s32 arg0) {
    T6 tbl = data_ov045_020d179c;
    s32 k, r, a, b, c;
    k = 0;
    a = 0x4b;
    b = 0x98;
    c = 0xe5;
    if (arg0 == 1) {
        a++;
        b++;
        c++;
        k = 1;
    }
    MTG_BecomeDarkScreen();
    Routine_MessageRect(1, 0xa, 0x1c, 8);
    r = CalRnd() % 30;
    if (GetKazuOfItem(a) == 0) {
        r = 0;
    } else if (GetKazuOfItem(b) == 0) {
        r = 1;
    } else if (GetKazuOfItem(c) == 0) {
        r = 2;
    } else if (r < 10) {
        r = 0;
    } else if (r < 20) {
        r = 1;
    } else {
        r = 2;
    }
    MessagePutAndWait(tbl.a[k + r * 2]);
    if (r == 0) {
        GettingItemOneForFree(a);
    } else if (r == 1) {
        GettingItemOneForFree(b);
    } else if (r == 2) {
        GettingItemOneForFree(c);
    }
    MTG_ReturnDarkScreen();
}

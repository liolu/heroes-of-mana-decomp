#include "m2c.h"
typedef struct {
    u32 a[6];
} T;
extern T data_ov092_020d17b4;
void MTG_BecomeDarkScreen(void);
void Routine_MessageRect(s32, s32, s32, s32);
s32 CalRnd(void);
s32 GetKazuOfItem(s32);
void MessagePutAndWait(u32);
void GettingItemOneForFree(s32);
void MTG_ReturnDarkScreen(void);
void func_ov092_020d0828(s32 flag) {
    T tbl   = data_ov092_020d17b4;
    s32 off = 0;
    s32 r;
    s32 i1 = 0x4B;
    s32 i2 = 0x98;
    s32 i3 = 0xE5;
    if (flag == 1) {
        i1++;
        i2++;
        i3++;
        off = 1;
    }
    MTG_BecomeDarkScreen();
    Routine_MessageRect(1, 10, 0x1C, 8);
    r = CalRnd() % 30;
    if (GetKazuOfItem(i1) == 0) {
        r = 0;
    } else if (GetKazuOfItem(i2) == 0) {
        r = 1;
    } else if (GetKazuOfItem(i3) == 0) {
        r = 2;
    } else if (r < 10) {
        r = 0;
    } else if (r < 20) {
        r = 1;
    } else {
        r = 2;
    }
    MessagePutAndWait(tbl.a[off + r * 2]);
    if (r == 0) {
        GettingItemOneForFree(i1);
    } else if (r == 1) {
        GettingItemOneForFree(i2);
    } else if (r == 2) {
        GettingItemOneForFree(i3);
    }
    MTG_ReturnDarkScreen();
}

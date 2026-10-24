/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad0[4];
    s32 state;
    u8 pad1[4];
    s32 c;
    u8 pad2[0x1c - 0x10];
    u8 *p1c;
    u8 pad3[0x3c - 0x20];
    u8 b3c[0x0c];
    u8 b48[0x100];
} G;

typedef struct {
    s32 w0;
    s32 v4;
    u8 pad[0x8e - 8];
    s8 c8e;
} E;

extern G *data_ov123_020e18d4;
extern s32 data_ov123_020e18d0;
extern void (*data_ov123_020e18d8)(void *, void *, s32);
void func_ov123_0209481c(u8 *, s32, u8 *);
void func_ov123_0207bcc8(s32, s32, u8 *);
s32 func_ov123_0209bbe4(void);
void func_ov123_0207bd34(s32, s32, s32, s32, void *, void *);
void func_ov123_0207beec(s32);
void func_ov123_0209b834(void *, s32);
void func_ov123_0209bab4(void);
s32 func_02024d8c(void *, u8 *);
void func_ov123_020944c4(u8 *, void *, s32);
void func_ov123_0209b45c(s32, E *);

void func_ov123_0209b45c(s32 a, E *e) {
    u8 b1[21];
    u8 b2[21];
    u8 b3[26];

    if (e->w0 != 0) {
        return;
    }
    if (data_ov123_020e18d4->state == 3) {
        if (e->c8e == 0) {
            func_ov123_0209481c(data_ov123_020e18d4->p1c + 4, data_ov123_020e18d4->c, b1);
            func_ov123_0207bcc8(a, 0x705, b1);
            if (func_ov123_0209bbe4() != 0) {
                return;
            }
            data_ov123_020e18d4->state = 4;
            func_ov123_0207bd34(a, e->v4, 0, 0, func_ov123_0209b45c, 0);
            if (func_ov123_0209bbe4() != 0) {
                return;
            }
        } else {
            func_ov123_0207beec(a);
            func_ov123_0209b834(func_ov123_0209bab4, 0);
            data_ov123_020e18d4->state = 1;
        }
    } else if (data_ov123_020e18d4->state == 4) {
        func_ov123_0209481c(data_ov123_020e18d4->p1c + 4, data_ov123_020e18d4->c, b2);
        if (func_02024d8c(&e->c8e, b2) == 0) {
            func_ov123_0209481c(data_ov123_020e18d4->b3c, data_ov123_020e18d4->c, b3);
            func_ov123_020944c4(data_ov123_020e18d4->p1c, data_ov123_020e18d4->b3c, e->v4);
            func_ov123_0207beec(a);
            data_ov123_020e18d8(data_ov123_020e18d4->b48, data_ov123_020e18d4->b48 + 0x100, data_ov123_020e18d0);
        } else {
            func_ov123_0207bd34(a, e->v4, 0, 0, func_ov123_0209b45c, 0);
            if (func_ov123_0209bbe4() != 0) {
                return;
            }
        }
    }
}

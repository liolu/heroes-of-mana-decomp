/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u16 pri : 2;
    u16 rest : 14;
} Bf;

extern u8 data_ov123_020ddb58[];
extern s32 data_ov123_020e45fc;
extern u8 *data_ov123_020ddb3c[];
extern u8 data_ov123_020ddb68[], data_ov123_020ddb7c[], data_ov123_020ddb90[], data_ov123_020ddba4[];
extern u8 data_ov123_020ddbb8[], data_ov123_020ddbd0[], data_ov123_020ddbe8[], data_ov123_020ddc00[];
extern u8 data_ov123_020ddc18[], data_ov123_020ddc30[], data_ov123_020ddc48[], data_ov123_020ddc5c[];

extern void func_0200bda4(void);
extern void GXS_LoadBGPltt(void);
extern void GXS_LoadOBJ(void);
extern void GXS_LoadOBJPltt(void);
extern void func_0200be04(void);
extern void GX_LoadBGPltt(void);
extern void GX_LoadOBJ(void);
extern void GX_LoadOBJPltt(void);
extern void func_0200bb04(void);
extern void func_ov123_020b323c(void);

void func_ov123_020c35fc(void);
void func_ov123_020b2aa0(void);
void func_ov123_020ae830(void);
void func_ov123_020ae948(void);
void func_ov123_020ae380(void);
u8 func_ov123_020b2388(void);
s32 func_ov123_020b2350(s32);
s32 func_ov123_020b2a28(void *);
void *func_ov123_020ae5c8(void *);
void func_ov123_020c93e0(s32, void *);
void func_ov123_020ae580(void *, void *);
u32 func_ov123_020b2370(void);
void func_ov123_020ca400(s32, s32);
void func_ov123_020b2410(void *);

void func_ov123_020b3280(void) {
    u32 m;
    func_ov123_020c35fc();
    func_ov123_020b2aa0();
    func_ov123_020ae830();
    func_ov123_020ae948();
    func_ov123_020ae380();
    if (func_ov123_020b2388() == 1 && func_ov123_020b2350(2) != 0) {
        data_ov123_020e45fc = func_ov123_020b2a28(data_ov123_020ddb58);
    } else {
        data_ov123_020e45fc = func_ov123_020b2a28(data_ov123_020ddb3c[func_ov123_020b2388()]);
    }
    func_ov123_020c93e0(1, func_ov123_020ae5c8(data_ov123_020ddb68));
    func_ov123_020c93e0(0, func_ov123_020ae5c8(data_ov123_020ddb7c));
    func_ov123_020ae580(data_ov123_020ddb90, func_0200bda4);
    func_ov123_020ae580(data_ov123_020ddba4, GXS_LoadBGPltt);
    func_ov123_020ae580(data_ov123_020ddbb8, GXS_LoadOBJ);
    func_ov123_020ae580(data_ov123_020ddbd0, GXS_LoadOBJPltt);
    func_ov123_020ae580(data_ov123_020ddbe8, func_0200be04);
    func_ov123_020ae580(data_ov123_020ddc00, GX_LoadBGPltt);
    func_ov123_020ae580(data_ov123_020ddc18, GX_LoadOBJ);
    func_ov123_020ae580(data_ov123_020ddc30, GX_LoadOBJPltt);
    switch (func_ov123_020b2370()) {
        case 0:
            func_ov123_020ae580(data_ov123_020ddc48, func_0200bb04);
            break;
        case 1:
            func_ov123_020ae580(data_ov123_020ddc5c, func_0200bb04);
            break;
    }
    ((volatile Bf *) 0x400100a)->pri = 3;
    ((volatile Bf *) 0x400000a)->pri = 3;
    ((volatile Bf *) 0x400000a)->pri = 3;
    func_ov123_020ca400(1, 2);
    func_ov123_020ca400(0, 2);
    func_ov123_020b2410(func_ov123_020b323c);
}

#include "m2c.h"

typedef struct {
    u8 pad2[0xc];
    u16 pos;
    u16 bit0 : 1;
} St;

typedef struct {
    u8 pad0[0x28];
    u8 *buf;
    u8 pad1[0x500 - 0x2c];
    St st;
} G;

typedef struct {
    u32 flags;
} F;

extern G *data_ov111_020f1bd8;
extern F data_ov111_020ec2d4;
void func_ov111_020e7808(s32, s32);
void func_ov111_020e79ec(s32);
void func_ov111_020e7a78(s32, s32);
void func_ov111_020e7b54(s32);

void func_ov111_020e7de8(void) {
    switch (data_ov111_020f1bd8->buf[data_ov111_020f1bd8->st.pos + 1]) {
        case 0:
            data_ov111_020ec2d4.flags &= ~0x2000;
            func_ov111_020e7808(0, 4);
            break;
        case 3:
            func_ov111_020e79ec(0);
            break;
        case 1:
            func_ov111_020e7a78(0, 4);
            break;
        case 2:
            func_ov111_020e7b54(0);
            break;
        case 4:
            data_ov111_020ec2d4.flags &= ~0x4000;
            *(volatile u16 *) 0x4000050 = 0;
            data_ov111_020f1bd8->st.pos += 2;
            break;
        case 0x80:
            data_ov111_020ec2d4.flags |= 0x2000;
            func_ov111_020e7808(0, 0);
            break;
        case 0x81:
            func_ov111_020e7a78(0, 0);
            break;
        case 0x82:
            func_ov111_020e7b54(0);
            break;
        case 0x83:
            data_ov111_020ec2d4.flags &= ~0x2000;
            data_ov111_020f1bd8->st.pos += 2;
            data_ov111_020f1bd8->st.bit0 = 1;
            break;
        case 0x84:
            data_ov111_020ec2d4.flags &= ~0x4000;
            *(volatile u16 *) 0x4000050 = 0;
            data_ov111_020f1bd8->st.pos += 2;
            break;
    }
}

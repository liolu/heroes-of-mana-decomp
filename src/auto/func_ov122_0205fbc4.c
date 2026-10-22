typedef int s32;
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct D {
    u8 pad[0xDE0];
    u32 flags;
    u8 pad2[0x50];
    s32 e34;
} D;
typedef struct O {
    u8 pad[0x1A0];
    s32 f1a0;
} O;
typedef struct Q {
    s32 a;
    s32 b;
    s32 c;
} Q;
extern D data_ov122_02065604;
extern O *data_ov000_02051548;
extern Q data_ov122_020664b0;
void func_ov122_02055780(s32, s32, s32);
void func_ov122_02055abc(void);
s32 func_ov122_02055af0(void);
void func_ov122_0205ce50(s32, u32);
void func_ov122_0205ce60(s32, u32);
void func_ov122_0205db1c(s32);
s32 func_ov123_020d3080(void);
s32 func_ov123_020d3344(void);
s32 func_ov123_020d3368(void);
u32 func_ov123_020d3430(void);
s32 func_ov122_0205fbc4(void) {
    s32 r5;
    s32 r4;
    data_ov122_02065604.flags |= 0x80;
    func_ov122_0205ce60(0x4000000, 0x80000000);
    if (func_ov123_020d3368() == 0) {
        func_ov122_0205db1c(3);
        return 0;
    }
    r5 = 1;
    r4 = 0;
    do {
        func_ov122_02055af0();
        if (func_ov123_020d3344() == 0) {
            func_ov122_0205db1c(3);
            return 0;
        }
        switch (func_ov123_020d3430()) {
            case 0:
            case 2:
                break;
            case 1:
                r5 = r4;
                break;
            case 3:
            case 4:
                func_ov122_0205db1c(3);
                return 0;
        }
    } while (r5 != 0);
    data_ov122_02065604.flags = (data_ov122_02065604.flags & ~0x80) | 0x400;
    func_ov122_0205ce60(0x8000000, 0x80000000);
    while (func_ov122_02055af0() != 5) {
    }
    data_ov122_02065604.flags |= 0x80;
    if (func_ov123_020d3080() == 0) {
        data_ov122_02065604.flags &= ~0x80;
        data_ov122_02065604.e34 = 0x3D;
        func_ov122_0205ce60(0x100000, 0x80000000);
        while (1) {
            func_ov122_02055af0();
        }
    }
    func_ov122_02055780(-16, 3, 1);
    data_ov122_02065604.flags &= ~0x2000;
    func_ov122_0205ce50(0x200, 0x80000000);
    if (data_ov000_02051548 != 0) {
        data_ov000_02051548->f1a0 = data_ov122_020664b0.c;
    }
    func_ov122_02055abc();
    return 1;
}

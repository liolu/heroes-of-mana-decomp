typedef unsigned int u32;
typedef struct G {
    char pad[0xa40];
    u32 sel;
} G;
extern G data_ov121_020f6d60;
extern void func_ov121_020eefd8(void);
extern void func_ov121_020ef00c(void);
extern void func_ov121_020ef9dc(void);
extern void func_ov121_020efb3c(void);
extern void func_ov121_020efd60(void);
extern void func_ov121_020efff8(void);
extern void func_ov121_020f0290(void);
extern void func_ov121_020f0528(void);
extern void func_ov121_020f0fb4(void);
extern void func_ov121_020f0fe0(void);
extern void func_ov121_020f10c8(void);
extern void func_ov121_020f11f8(void);

void func_ov121_020f130c(void) {
    switch (data_ov121_020f6d60.sel) {
        case 0x4000:
        case 0x1:
        case 0x2:
        case 0x4:
        case 0x8:
        case 0x10:
            func_ov121_020ef00c();
            return;
        case 0x400:
        case 0x20:
            func_ov121_020f0528();
            return;
        case 0x40:
            func_ov121_020f0290();
            return;
        case 0x80:
            func_ov121_020efff8();
            return;
        case 0x200:
            func_ov121_020efb3c();
            return;
        case 0x100:
            func_ov121_020efd60();
            return;
        case 0x8000:
        case 0x2000:
        case 0x1000:
        case 0x800:
            func_ov121_020ef9dc();
            return;
        case 0x10000:
            func_ov121_020f0fe0();
            return;
        case 0x20000:
            func_ov121_020f10c8();
            return;
        case 0x40000:
            func_ov121_020f11f8();
            return;
        case 0x200000:
        case 0x100000:
        case 0x80000:
            func_ov121_020f0fb4();
        default:
            func_ov121_020eefd8();
            return;
    }
}

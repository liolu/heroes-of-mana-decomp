/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004d84 from projets/blue-dragon-awakened-shadow/src/donor/func_02004d84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern u32 data_02035ab0;
extern void func_0200fe08(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_020102b0(u32 data, void *dest, u32 size);
extern void func_0200b15c(void);
extern void func_0200ff64(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);
void func_0200b15c(void) {
    s32 i;

    if (data_02035ab0 != -1) {
        func_0200ff64(data_02035ab0, (void *) 0x04000330, 0, 0x10, 0, 0);
        func_0200fe08(data_02035ab0, (void *) 0x04000360, 0, 0x60);
    } else {
        func_020102b0(0, (void *) 0x04000330, 0x10);
        func_020102b0(0, (void *) 0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        (*(vu32 *) 0x040004d0) = 0;
    }
}

/* compiler: 1.2/sp3 */
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 OS_SetIrqMask(u32 m);
extern void OS_SetIrqFunction(u32 a, u32 b);
extern u32 data_ov123_020e4748;
extern u32 data_ov123_020e474c;
void func_ov123_020cacac(void) {
    volatile u16 *r = (volatile u16 *) 0x04000208;
    u16 t           = *r;
    *r              = 0;
    OS_SetIrqMask(data_ov123_020e474c);
    OS_SetIrqFunction(1, data_ov123_020e4748);
}

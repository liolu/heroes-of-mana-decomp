/* compiler: 2.0/sp1p5 -profile */
typedef int s32;
extern void func_020018b8(void);
extern s32 *data_ov000_02051548;
void InitializeKuniAndUnit(void) {
    s32 i;
    func_020018b8();
    for (i = 0; i < 0x20; i++) {
        data_ov000_02051548[i + 0x10] = 0;
    }
}

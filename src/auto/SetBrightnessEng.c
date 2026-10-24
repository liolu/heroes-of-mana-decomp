/* compiler: 2.0/sp1p5 -profile */
extern void GXx_SetMasterBrightness_(volatile short *, int);
void SetBrightnessEng(int f, int v) {
    if (f & 1) {
        GXx_SetMasterBrightness_((volatile short *) 0x400006c, v);
    }
    if (f & 2) {
        GXx_SetMasterBrightness_((volatile short *) 0x400106c, v);
    }
}

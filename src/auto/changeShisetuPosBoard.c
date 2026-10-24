/* compiler: 2.0/sp1p5 -profile */
typedef unsigned int u32;
typedef struct Ent {
    int pad[15];
    int p3c;
    int pad2[4];
} Ent;
typedef struct G {
    int a0;
    u32 lo : 19;
    u32 pos : 4;
    u32 hi : 9;
    char pad[0x35c - 8];
    int p35c;
    int p360;
} G;
extern G *data_ov109_020ea340;
extern void SetExtBGPaletteData(int, int, int, int);
extern void SetExtObjPaletteData(int, int, int, int);

void changeShisetuPosBoard(u32 v) {
    if (data_ov109_020ea340->pos != 0) {
        SetExtBGPaletteData(data_ov109_020ea340->p35c, ((data_ov109_020ea340->pos - 1) << 5) + 0x4080, 0x20, 0);
        SetExtBGPaletteData(data_ov109_020ea340->p35c, ((data_ov109_020ea340->pos - 1) << 5) + 0x6080, 0x20, 0);
        {
            u32 p = data_ov109_020ea340->pos;
            int q = *(int *) ((char *) data_ov109_020ea340 + p * 0x14 + 0x3c);
            if (q != 0) {
                SetExtObjPaletteData(q, (p - 1) << 5, 0x20, 0);
            }
        }
        data_ov109_020ea340->pos = 0;
    }
    if (v != 0) {
        data_ov109_020ea340->pos = v;
        SetExtBGPaletteData(data_ov109_020ea340->p360, ((data_ov109_020ea340->pos - 1) << 5) + 0x4080, 0x20, 0);
        SetExtBGPaletteData(data_ov109_020ea340->p360, ((data_ov109_020ea340->pos - 1) << 5) + 0x6080, 0x20, 0);
    }
}

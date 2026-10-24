/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct S {
    char p[0x3e];
    u8 b3e;
} S;
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;
extern S *SetStatusIcon(int, int, int, int, int, int, int, void *, int, int);
void PutGetRECTIcon(int idx, int a, int b) {
    S *s = SetStatusIcon(0xffb4, 0x1a, a, b, *(u16 *) (data_ov000_0205154c + idx * 0x4b0 + 0x500 + 0x6c), 0, 0,
                         data_ov000_02051548 + 0x38c + 0x400, *(int *) (data_ov000_02051548 + 0x12c), idx);
    s->b3e |= 0x80;
}

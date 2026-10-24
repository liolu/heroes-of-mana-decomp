/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
typedef unsigned short u16;
void OS_FreeToHeap(int, int, void *);
void ClearPolWorkOnMDA(u8 *obj) {
    int i = 0;
    int off;
    if (i < *(u16 *) (obj + 6)) {
        off = 0;
        do {
            if (*(void **) (*(u8 **) (obj + 0x3c) + off) != 0) {
                OS_FreeToHeap(0, -1, *(void **) (*(u8 **) (obj + 0x3c) + off));
                *(int *) (*(u8 **) (obj + 0x3c) + off) = 0;
            }
            i++;
            *(int *) (*(u8 **) (obj + 0x3c) + off)        = 0;
            *(int *) (*(u8 **) (obj + 0x3c) + off + 0x2c) = 0;
            off += 0x34;
        } while (i < *(u16 *) (obj + 6));
    }
}

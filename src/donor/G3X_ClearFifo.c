/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004b28 from projets/blue-dragon-awakened-shadow/src/donor/func_02004b28.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void G3X_ClearFifo(void);
extern void GXi_NopClearFifo128_(volatile void *fifo);
void G3X_ClearFifo(void) {
    GXi_NopClearFifo128_(((vu32 *) 0x04000400));
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
}
extern void GXi_NopClearFifo128_(register volatile void *fifo);

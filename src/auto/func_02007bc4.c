/* compiler: 1.2/sp3 */
#include "m2c.h"
void GetRegionOfMBlock(void *, void *);
void RemoveMBlock(void *, void *);
void RecycleRegion(void *, void *);

void func_02007bc4(u8 *heap, u8 *obj) {
    u32 region[3];
    u8 *info = heap + 0x24;
    u8 *blk  = obj - 0x10;
    GetRegionOfMBlock(region, blk);
    RemoveMBlock(info + 8, blk);
    RecycleRegion(info, region);
}

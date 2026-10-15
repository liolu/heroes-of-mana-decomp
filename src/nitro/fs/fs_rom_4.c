#include "m2c.h"

M2C_UNK FS_LoadArchiveTables(M2C_UNK *, M2C_UNK, M2C_UNK);

extern M2C_UNK fsi_arc_rom;

void FS_TryLoadTable(M2C_UNK arg0, M2C_UNK arg1) {
    FS_LoadArchiveTables(&fsi_arc_rom, arg0, arg1);
}

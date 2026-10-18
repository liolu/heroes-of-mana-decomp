/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 FSi_FindPathCommand[];
extern u8 FSi_GetPathCommand[];
extern u8 FSi_OpenFileDirectCommand[];
extern u8 FSi_OpenFileFastCommand[];
extern u8 FSi_ReadDirCommand[];
extern u8 FSi_ReadFileCommand[];
extern u8 FSi_SeekDirCommand[];
extern u8 FSi_WriteFileCommand[];
extern u8 func_020125f0[];

const u32 fsi_default_command[9] = {
    (u32)&FSi_ReadFileCommand, (u32)&FSi_WriteFileCommand, (u32)&FSi_SeekDirCommand, (u32)&FSi_ReadDirCommand,
    (u32)&FSi_FindPathCommand, (u32)&FSi_GetPathCommand, (u32)&FSi_OpenFileFastCommand, (u32)&FSi_OpenFileDirectCommand,
    (u32)&func_020125f0
};
const u32 data_020352b0[16] = {
    0xDEC00621, 0x3FCE98BA, 0x9DE392A6, 0x01EDF246,
    0x08CCE376, 0xFA632356, 0xDFECD4CA, 0x3478629A,
    0x3C636D8F, 0x92CA22FE, 0x23978820, 0xC2AECFD2,
    0xFE8D6732, 0x986483CA, 0x373EFDAC, 0x24584687
};

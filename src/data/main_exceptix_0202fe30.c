/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 OSi_FreeStackAlloc[];
extern u8 _ExitProcess[];
extern u8 __StringWrite[];
extern u8 __call_static_initializers[];
extern u8 __dec2num[];
extern u8 __destroy_global_chain[];
extern u8 __end__catch[];
extern u8 __exit[];
extern u8 __ieee754_pow[];
extern u8 __pformatter[];
extern u8 __rounddec[];
extern u8 __sformatter[];
extern u8 __str2dec[];
extern u8 __strtold[];
extern u8 __strtoul[];
extern u8 __strtoull[];
extern u8 __ull2dec[];
extern u8 abort[];
extern u8 data_0202fcf8[];
extern u8 data_0202fd00[];
extern u8 data_0202fd08[];
extern u8 data_0202fd10[];
extern u8 data_0202fd18[];
extern u8 data_0202fd20[];
extern u8 data_0202fd28[];
extern u8 data_0202fd30[];
extern u8 data_0202fd44[];
extern u8 data_0202fd4c[];
extern u8 data_0202fd5c[];
extern u8 data_0202fd64[];
extern u8 data_0202fd78[];
extern u8 data_0202fd80[];
extern u8 data_0202fd88[];
extern u8 data_0202fda0[];
extern u8 data_0202fdb8[];
extern u8 data_0202fdcc[];
extern u8 data_0202fde0[];
extern u8 data_0202fdf4[];
extern u8 data_0202fe1c[];
extern u8 double2hex[];
extern u8 exit[];
extern u8 float2str[];
extern u8 frexp[];
extern u8 func_02020c64[];
extern u8 func_02020c7c[];
extern u8 func_02020c90[];
extern u8 func_02020d04[];
extern u8 func_02020d74[];
extern u8 func_02020dfc[];
extern u8 func_020210ac[];
extern u8 func_02021194[];
extern u8 func_02021218[];
extern u8 func_020212a0[];
extern u8 func_02021cbc[];
extern u8 func_02023524[];
extern u8 func_02023594[];
extern u8 func_020236ac[];
extern u8 func_0202373c[];
extern u8 func_02024a7c[];
extern u8 func_02024af8[];
extern u8 func_020261c8[];
extern u8 func_020262a8[];
extern u8 func_02026aec[];
extern u8 func_02026b84[];
extern u8 func_02026c4c[];
extern u8 func_02027284[];
extern u8 func_020274d4[];
extern u8 func_020277b8[];
extern u8 func_02027c74[];
extern u8 func_020282c0[];
extern u8 func_02028bb0[];
extern u8 func_02028bf0[];
extern u8 func_02028c18[];
extern u8 func_02029ec8[];
extern u8 func_0202a564[];
extern u8 func_0202a784[];
extern u8 func_0202af6c[];
extern u8 func_0202b0ec[];
extern u8 func_0202b8d0[];
extern u8 func_0202b8fc[];
extern u8 func_0202b9a0[];
extern u8 func_0202b9b8[];
extern u8 func_0202ba2c[];
extern u8 func_0202bab0[];
extern u8 func_0202bac8[];
extern u8 func_0202baec[];
extern u8 func_0202bb14[];
extern u8 func_0202bb24[];
extern u8 func_0202bb64[];
extern u8 func_0202bb84[];
extern u8 func_0202bb9c[];
extern u8 func_0202bbcc[];
extern u8 func_0202de00[];
extern u8 func_0202de50[];
extern u8 func_0202e008[];
extern u8 func_0202e12c[];
extern u8 func_0202e4b4[];
extern u8 func_0202ed64[];
extern u8 func_0202eeb8[];
extern u8 func_0202ef3c[];
extern u8 func_0202efe8[];
extern u8 func_0202f048[];
extern u8 func_0202f280[];
extern u8 func_0202f394[];
extern u8 func_0202f3b4[];
extern u8 func_0202f3f8[];
extern u8 func_0202f45c[];
extern u8 func_0202f470[];
extern u8 func_0202f49c[];
extern u8 func_0202f4a8[];
extern u8 func_0202f538[];
extern u8 func_0202f594[];
extern u8 func_0202f64c[];
extern u8 func_0202f6fc[];
extern u8 func_0202f78c[];
extern u8 func_0202f7e8[];
extern u8 func_0202f820[];
extern u8 func_0202f850[];
extern u8 func_0202f864[];
extern u8 func_0202f880[];
extern u8 func_0202f894[];
extern u8 func_0202f8a8[];
extern u8 func_0202f8c4[];
extern u8 func_0202f8d0[];
extern u8 func_0202f8dc[];
extern u8 func_0202f8f4[];
extern u8 func_0202fb38[];
extern u8 func_0202fbf8[];
extern u8 ldexp[];
extern u8 long2str[];
extern u8 memset[];
extern u8 nan[];
extern u8 pow[];
extern u8 snprintf[];
extern u8 sscanf[];
extern u8 wctomb[];
extern u8 wmemcpy[];
#pragma define_section TABLE ".exceptix"    \
                             ".exceptix" RW
__declspec(TABLE) u32 data_0202fe30[348] = {(u32) &abort,
                                            0x00000025,
                                            0x00100000,
                                            (u32) &exit,
                                            0x0000004D,
                                            0x00100100,
                                            (u32) &__exit,
                                            0x00000129,
                                            0x00200300,
                                            (u32) &nan,
                                            0x00000019,
                                            0x00000000,
                                            (u32) &func_02020c64,
                                            0x00000019,
                                            0x00100000,
                                            (u32) &func_02020c7c,
                                            0x00000015,
                                            0x00100000,
                                            (u32) &func_02020c90,
                                            0x00000069,
                                            0x00403F00,
                                            (u32) &func_02020d04,
                                            0x0000003D,
                                            0x00200100,
                                            (u32) &func_02020d74,
                                            0x00000089,
                                            0x00200300,
                                            (u32) &func_02020dfc,
                                            0x000002B1,
                                            0x0060FF00,
                                            (u32) &func_020210ac,
                                            0x000000E9,
                                            0x00100100,
                                            (u32) &func_02021194,
                                            0x0000001D,
                                            0x00100000,
                                            (u32) &wctomb,
                                            0x0000001D,
                                            0x00100000,
                                            (u32) &func_02021218,
                                            0x00000089,
                                            0x00301F00,
                                            (u32) &func_020212a0,
                                            0x00000079,
                                            0x00403F00,
                                            (u32) &memset,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &long2str,
                                            0x0000024D,
                                            0x0090FF20,
                                            (u32) &func_02021cbc,
                                            0x000002E1,
                                            0x00A0FF20,
                                            (u32) &double2hex,
                                            0x000004DD,
                                            0x00F07F20,
                                            (u32) &float2str,
                                            0x00000765,
                                            0x00C0FF20,
                                            (u32) &__pformatter,
                                            0x00000824,
                                            (u32) &data_0202fcf8,
                                            (u32) &func_02023524,
                                            0x0000002D,
                                            0x00200300,
                                            (u32) &__StringWrite,
                                            0x00000045,
                                            0x00200300,
                                            (u32) &func_02023594,
                                            0x00000119,
                                            0x00300120,
                                            (u32) &func_020236ac,
                                            0x00000069,
                                            0x00300300,
                                            (u32) &snprintf,
                                            0x00000029,
                                            0x00300020,
                                            (u32) &func_0202373c,
                                            0x0000002D,
                                            0x00300020,
                                            (u32) &__sformatter,
                                            0x00000D54,
                                            (u32) &data_0202fd00,
                                            (u32) &func_02024a7c,
                                            0x00000055,
                                            0x00200000,
                                            (u32) &sscanf,
                                            0x00000029,
                                            0x00300020,
                                            (u32) &func_02024af8,
                                            0x00000131,
                                            0x00200300,
                                            (u32) &__strtold,
                                            0x0000124C,
                                            (u32) &data_0202fd08,
                                            (u32) &func_020261c8,
                                            0x000000E1,
                                            0x00500F00,
                                            (u32) &func_020262a8,
                                            0x00000011,
                                            0x00000000,
                                            (u32) &__strtoul,
                                            0x000003E9,
                                            0x0060FF00,
                                            (u32) &__strtoull,
                                            0x0000044D,
                                            0x0080FF00,
                                            (u32) &func_02026aec,
                                            0x00000099,
                                            0x00600300,
                                            (u32) &func_02026b84,
                                            0x000000C9,
                                            0x00600300,
                                            (u32) &func_02026c4c,
                                            0x00000015,
                                            0x00000000,
                                            (u32) &wmemcpy,
                                            0x00000011,
                                            0x00000000,
                                            (u32) &func_02027284,
                                            0x00000251,
                                            0x0090FF20,
                                            (u32) &func_020274d4,
                                            0x000002E5,
                                            0x00A0FF20,
                                            (u32) &func_020277b8,
                                            0x00000399,
                                            0x00F07F20,
                                            (u32) &func_02027c74,
                                            0x0000064C,
                                            (u32) &data_0202fd10,
                                            (u32) &func_020282c0,
                                            0x000008F0,
                                            (u32) &data_0202fd18,
                                            (u32) &func_02028bb0,
                                            0x00000041,
                                            0x00200300,
                                            (u32) &func_02028bf0,
                                            0x00000029,
                                            0x00300020,
                                            (u32) &func_02028c18,
                                            0x00000071,
                                            0x00300300,
                                            (u32) &__ieee754_pow,
                                            0x00001188,
                                            (u32) &data_0202fd20,
                                            (u32) &func_02029ec8,
                                            0x000001C1,
                                            0x00603F20,
                                            (u32) &frexp,
                                            0x000000BD,
                                            0x00300120,
                                            (u32) &ldexp,
                                            0x0000024D,
                                            0x00300120,
                                            (u32) &pow,
                                            0x0000000D,
                                            0x00000000,
                                            (u32) &__rounddec,
                                            0x00000041,
                                            0x00200300,
                                            (u32) &__ull2dec,
                                            0x000000CD,
                                            0x0050FF00,
                                            (u32) &func_0202a564,
                                            0x00000185,
                                            0x00D0FF00,
                                            (u32) &__str2dec,
                                            0x0000009D,
                                            0x00100000,
                                            (u32) &func_0202a784,
                                            0x00000385,
                                            0x00B00300,
                                            (u32) &func_0202af6c,
                                            0x00000181,
                                            0x00E01F00,
                                            (u32) &func_0202b0ec,
                                            0x000000A9,
                                            0x00200300,
                                            (u32) &__dec2num,
                                            0x00000624,
                                            (u32) &data_0202fd28,
                                            (u32) &func_0202b8d0,
                                            0x0000002D,
                                            0x00200100,
                                            (u32) &func_0202b8fc,
                                            0x00000019,
                                            0x00000000,
                                            (u32) &OSi_FreeStackAlloc,
                                            0x00000019,
                                            0x00000000,
                                            (u32) &func_0202b9a0,
                                            0x00000019,
                                            0x00100100,
                                            (u32) &func_0202b9b8,
                                            0x00000075,
                                            0x00300F00,
                                            (u32) &func_0202ba2c,
                                            0x0000007D,
                                            0x00300F00,
                                            (u32) &func_0202bab0,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &func_0202bac8,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &func_0202baec,
                                            0x00000029,
                                            0x00100100,
                                            (u32) &func_0202bb14,
                                            0x00000011,
                                            0x00000000,
                                            (u32) &func_0202bb24,
                                            0x00000040,
                                            (u32) &data_0202fd30,
                                            (u32) &func_0202bb64,
                                            0x00000021,
                                            0x00100100,
                                            (u32) &func_0202bb84,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &func_0202bb9c,
                                            0x00000031,
                                            0x00100100,
                                            (u32) &func_0202bbcc,
                                            0x0000002D,
                                            0x00100000,
                                            (u32) &func_0202de00,
                                            0x00000051,
                                            0x00300F00,
                                            (u32) &func_0202de50,
                                            0x00000035,
                                            0x00200700,
                                            (u32) &func_0202e008,
                                            0x00000109,
                                            0x00503F00,
                                            (u32) &func_0202e12c,
                                            0x00000388,
                                            (u32) &data_0202fd44,
                                            (u32) &func_0202e4b4,
                                            0x000008B0,
                                            (u32) &data_0202fd4c,
                                            (u32) &func_0202ed64,
                                            0x00000154,
                                            (u32) &data_0202fd5c,
                                            (u32) &func_0202eeb8,
                                            0x00000085,
                                            0x00401F00,
                                            (u32) &func_0202ef3c,
                                            0x000000A8,
                                            (u32) &data_0202fd64,
                                            (u32) &func_0202efe8,
                                            0x00000060,
                                            (u32) &data_0202fd78,
                                            (u32) &func_0202f048,
                                            0x000001DC,
                                            (u32) &data_0202fd80,
                                            (u32) &func_0202f280,
                                            0x000000ED,
                                            0x00700300,
                                            (u32) &__end__catch,
                                            0x00000029,
                                            0x00100000,
                                            (u32) &func_0202f394,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &func_0202f3b4,
                                            0x00000041,
                                            0x00100000,
                                            (u32) &func_0202f3f8,
                                            0x00000064,
                                            (u32) &data_0202fd88,
                                            (u32) &func_0202f45c,
                                            0x00000015,
                                            0x00100000,
                                            (u32) &func_0202f470,
                                            0x0000002C,
                                            (u32) &data_0202fda0,
                                            (u32) &func_0202f49c,
                                            0x0000000D,
                                            0x00000000,
                                            (u32) &func_0202f4a8,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &__call_static_initializers,
                                            0x0000002D,
                                            0x00100100,
                                            (u32) &__destroy_global_chain,
                                            0x00000045,
                                            0x00200300,
                                            (u32) &func_0202f538,
                                            0x0000005C,
                                            (u32) &data_0202fdb8,
                                            (u32) &func_0202f594,
                                            0x000000B8,
                                            (u32) &data_0202fdcc,
                                            (u32) &func_0202f64c,
                                            0x000000B0,
                                            (u32) &data_0202fde0,
                                            (u32) &func_0202f6fc,
                                            0x00000090,
                                            (u32) &data_0202fdf4,
                                            (u32) &func_0202f78c,
                                            0x0000005C,
                                            (u32) &data_0202fe1c,
                                            (u32) &func_0202f7e8,
                                            0x00000035,
                                            0x00200300,
                                            (u32) &func_0202f820,
                                            0x00000031,
                                            0x00100000,
                                            (u32) &func_0202f850,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &func_0202f864,
                                            0x0000001D,
                                            0x00100100,
                                            (u32) &func_0202f880,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &func_0202f894,
                                            0x00000015,
                                            0x00100100,
                                            (u32) &func_0202f8a8,
                                            0x0000001D,
                                            0x00100100,
                                            (u32) &func_0202f8c4,
                                            0x0000000D,
                                            0x00000000,
                                            (u32) &func_0202f8d0,
                                            0x0000000D,
                                            0x00000000,
                                            (u32) &func_0202f8dc,
                                            0x00000019,
                                            0x00100000,
                                            (u32) &func_0202f8f4,
                                            0x00000019,
                                            0x00100000,
                                            (u32) &func_0202fb38,
                                            0x000000A1,
                                            0x00200700,
                                            (u32) &func_0202fbf8,
                                            0x00000031,
                                            0x00200100,
                                            (u32) &_ExitProcess,
                                            0x0000000D,
                                            0x00000000};

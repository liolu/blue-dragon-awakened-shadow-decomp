#include "m2c.h"
extern u8 data_020e5d30[];
extern u8 data_020e5d68[];
extern u8 data_020e5d6c[];
extern u8 data_020e5d84[];
extern u8 data_020e5d9c[];
extern u8 data_020e5db4[];
extern u8 data_020e5dcc[];
extern u8 data_020e5e08[];
extern u8 DGTi_Hash2ProcessBlock[];
u32 data_020e5d34[13] = {(u32) &DGTi_Hash2ProcessBlock,
                         (u32) &data_020e5d9c,
                         (u32) &data_020e5db4,
                         (u32) &data_020e5d6c,
                         (u32) &data_020e5d84,
                         (u32) &data_020e5d68,
                         (u32) &data_020e5dcc,
                         (u32) &data_020e5d30,
                         (u32) &data_020e5e08,
                         0x00000001,
                         0x00000001,
                         0x000F4240,
                         0x0000000A};

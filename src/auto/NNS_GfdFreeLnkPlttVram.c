#include "m2c.h"

s32 NNSi_GfdFreeLnkVram(M2C_UNK *, M2C_UNK *, u32, s32);  /* extern */
extern M2C_UNK data_02108998;
extern M2C_UNK data_0210899c;

s32 NNS_GfdFreeLnkPlttVram(s32 arg0) {
    if (NNSi_GfdFreeLnkVram(&data_02108998, &data_0210899c, (u32) (arg0 << 0x10) >> 0xD,
                            ((u32) (arg0 & ~0xFFFF) >> 0x10) * 8) == 0) {
        return 1;
    }
    return 0;
}

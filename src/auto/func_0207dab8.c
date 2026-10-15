#include "m2c.h"

extern u8 data_020fd480;
extern M2C_UNK data_02110430;
extern M2C_UNK SDK_AUTOLOAD_DTCM_START;

void func_0207dab8(void) {
    if (data_020fd480 != 0) {
        M2C_FIELD(&data_02110430, s32 *, 0xC) = (s32) (M2C_FIELD(&data_02110430, s32 *, 0xC) + 1);
    }
    M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&SDK_AUTOLOAD_DTCM_START, s32 *, 0x3FF8) | 1);
}

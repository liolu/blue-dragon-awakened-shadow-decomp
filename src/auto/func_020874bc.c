#include "m2c.h"

extern M2C_UNK data_02165748;

s32 func_020874bc(s32 *arg0) {
    M2C_FIELD(&data_02165748, s32 *, 0x28) = (s32) *arg0;
    return 0;
}

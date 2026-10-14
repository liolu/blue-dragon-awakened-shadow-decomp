#include "m2c.h"

extern M2C_UNK data_021039b0;

s32 func_0200f228(s32 arg0) {
    return M2C_FIELD(&data_021039b0, u16 *, 0x38) & arg0;
}

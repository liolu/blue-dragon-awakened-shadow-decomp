#include "m2c.h"

extern M2C_UNK data_ov000_021ef300;

u16 func_ov000_021b99d0(void) {
    return M2C_FIELD(&data_ov000_021ef300, u16 *, 0xC);
}

#include "m2c.h"

extern s32 data_0210f060;

u8 func_02059ca8(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x30) + data_0210f060), u8 *, 0x1D);
}

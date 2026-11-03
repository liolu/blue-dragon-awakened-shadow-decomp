#include "m2c.h"

s32 func_ov000_021d6354();                                /* extern */
extern M2C_UNK data_ov000_021ecadc;

s32 func_ov000_021d6364(void) {
    return *((M2C_UNK *) ((s8 *) &data_ov000_021ecadc + (func_ov000_021d6354() * 4)));
}

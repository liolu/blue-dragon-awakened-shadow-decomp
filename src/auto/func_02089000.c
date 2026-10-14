#include "m2c.h"

M2C_UNK func_ov000_021bfd90(M2C_UNK *);             /* extern */
M2C_UNK func_ov000_021bfddc(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov000_021f4950;

s32 func_02089000(s32 *arg0) {
    if (*arg0 != 0) {
        func_ov000_021bfddc(&data_ov000_021f4950);
    } else {
        func_ov000_021bfd90(&data_ov000_021f4950);
    }
    return 0;
}

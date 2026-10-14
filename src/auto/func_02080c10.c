#include "m2c.h"
#include "engine.h"

M2C_UNK func_020786bc(M2C_UNK);
M2C_UNK func_0208b324(M2C_UNK);

extern s32 data_02164ef8;

s32 func_02080c10(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 + 0x1BC;
    if (M2C_FIELD(arg0, u8 *, 0x1FD) != 0) {
        if ((func_020786bc(temp_r0) != 0) && (func_020786bc(arg0 + 0x1DC) != 0) && (func_0208b324(data_02164ef8) != 0)) {
            return 1;
        }
        return 0;
    }
    return func_020786bc(temp_r0);
}

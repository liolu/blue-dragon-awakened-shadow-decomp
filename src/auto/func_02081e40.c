#include "m2c.h"

M2C_UNK NNS_SndPlayerWriteVariable(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02081f00();                                /* extern */

void func_02081e40(void) {
    s32 temp_r0;

    temp_r0 = func_02081f00();
    if (temp_r0 == 0) {
        return;
    }
    NNS_SndPlayerWriteVariable(temp_r0 + 4, 0, 1);
}

#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_02009978(s32, M2C_UNK, s32);           /* extern */
s32 func_0203a274();                                /* extern */
M2C_UNK func_0203a31c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0203bec0(s32);                         /* extern */
extern void *data_020f8f00;

s32 func_0203a20c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r6;

    temp_r4 = func_0203a274();
    temp_r6 = func_02008ae0();
    temp_r0 = M2C_FIELD(data_020f8f00, s32 (**)(s32), 0x18)(temp_r4);
    if (temp_r0 != 0) {
        func_02009978(temp_r0, 0, temp_r4);
        func_0203a31c(temp_r0, arg0);
        func_0203bec0(temp_r0);
    }
    func_02008af4(temp_r6);
    return temp_r0;
}

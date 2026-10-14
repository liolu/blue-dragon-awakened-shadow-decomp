#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
s32 func_02039a7c(M2C_UNK);                         /* extern */
extern M2C_UNK data_0210ca7c;

s32 func_0203bcb4(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;

    temp_r5 = func_02008ae0();
    temp_r6 = M2C_FIELD(&data_0210ca7c, s32 *, 0);
    temp_r7 = M2C_FIELD(&data_0210ca7c, s32 *, 4);
    M2C_FIELD(&data_0210ca7c, s32 *, 0) = 0;
    M2C_FIELD(&data_0210ca7c, s32 *, 4) = 0;
    temp_r4 = func_02039a7c(arg0);
    M2C_FIELD(&data_0210ca7c, s32 *, 0) = temp_r6;
    M2C_FIELD(&data_0210ca7c, s32 *, 4) = temp_r7;
    func_02008af4(temp_r5);
    return temp_r4;
}

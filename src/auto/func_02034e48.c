#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_02027288(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0210bdbc;

void func_02034e48(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    func_02027288(&data_0210bdbc, arg0);
    func_02008af4(temp_r4);
}

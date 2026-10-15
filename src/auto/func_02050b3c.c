#include "m2c.h"

M2C_UNK func_02050c2c();                            /* extern */
s32 gpSendBuddyRequestA(s32, M2C_UNK, M2C_UNK *);         /* extern */
extern M2C_UNK data_020fa77c;
extern M2C_UNK data_0210e8cc;

s32 func_02050b3c(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = gpSendBuddyRequestA(M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 4), arg0, &data_020fa77c);
    func_02050c2c();
    return temp_r4;
}

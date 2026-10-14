#include "m2c.h"

M2C_UNK func_02007078(M2C_UNK *);                   /* extern */
M2C_UNK func_020428b8();                            /* extern */
extern M2C_UNK data_0210e5f0;
extern M2C_UNK data_0210e5f4;

void func_02044090(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0) != 0x12) {
        return;
    }
    M2C_FIELD(&data_0210e5f0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, u16 *, 2);
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        func_020428b8();
    }
    func_02007078(&data_0210e5f4);
}

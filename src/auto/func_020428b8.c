#include "m2c.h"

M2C_UNK func_02008820(void *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020088fc(void *);                      /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
extern void *data_0210e5ec;
extern M2C_UNK func_0204292c;

void func_020428b8(void) {
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    func_020088fc(data_0210e5ec + 0x22CC);
    if (M2C_FIELD(data_0210e5ec, s32 *, 0x2260) == 9) {
        func_02008820(data_0210e5ec + 0x22CC, 0x022F5341, 0, &func_0204292c, 0);
    }
    func_02008af4(temp_r4);
}

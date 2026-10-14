#include "m2c.h"

M2C_UNK func_020077e8(void *);                      /* extern */
M2C_UNK func_0200786c(void *);                      /* extern */
extern void *data_0210e678;

s32 func_0204b46c(void) {
    s32 temp_r4;

    func_020077e8(data_0210e678 + 0x11DC);
    temp_r4 = M2C_FIELD(data_0210e678, s32 *, 0x1000);
    func_0200786c(data_0210e678 + 0x11DC);
    return temp_r4;
}

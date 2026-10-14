#include "m2c.h"

M2C_UNK func_020077e8(void *);                      /* extern */
M2C_UNK func_0200786c(void *);                      /* extern */
extern void *data_0210e678;

void func_0204c460(s32 arg0) {
    func_020077e8(data_0210e678 + 0x11DC);
    M2C_FIELD(data_0210e678, s32 *, 0x1000) = arg0;
    func_0200786c(data_0210e678 + 0x11DC);
}

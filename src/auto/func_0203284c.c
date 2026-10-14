#include "m2c.h"

M2C_UNK func_02009e50(u8);                          /* extern */
M2C_UNK func_02009ed8(u8, s32);                     /* extern */
M2C_UNK func_020328ec(void *);                      /* extern */

void func_0203284c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02009ed8(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02009e50(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020328ec(arg0);
}

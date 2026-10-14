#include "m2c.h"

M2C_UNK func_02056bc0(M2C_UNK);                     /* extern */
M2C_UNK func_02056e24();                            /* extern */
void *func_02059234();                              /* extern */

void func_02056cc0(void) {
    if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 2) {
        return;
    }
    if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 3) {
        return;
    }
    func_02056e24();
    func_02056bc0(1);
}

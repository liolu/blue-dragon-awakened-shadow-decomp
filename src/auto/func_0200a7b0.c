#include "m2c.h"

s32 func_0200a424();                         /* extern */
s32 func_0200a848();                         /* extern */
M2C_UNK func_0200a9b0();                            /* extern */

void func_0200a7b0(M2C_UNK arg0) {
    if (func_0200a848() != 0) {
        return;
    }
    do {

    } while (func_0200a424(0) != 0);
    if (func_0200a848(arg0) != 0) {
        return;
    }
    func_0200a9b0();
    if (func_0200a848(arg0) != 0) {
        return;
    }
    do {
        func_0200a424(1);
    } while (func_0200a848(arg0) == 0);
}

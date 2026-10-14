#include "m2c.h"

M2C_UNK func_02008b50(M2C_UNK);                     /* extern */
s32 func_0200aa20();                                /* extern */
M2C_UNK func_0200b20c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b258(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_0200a92c;

void func_0200a950(void) {
    func_0200b20c(7, &func_0200a92c);
    if (func_0200aa20() == 0) {
        return;
    }
    if (func_0200b258(7, 1) != 0) {
        return;
    }
    do {
        func_02008b50(0x64);
    } while (func_0200b258(7, 1) == 0);
}

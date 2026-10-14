#include "m2c.h"

M2C_UNK func_020988e4(s32, M2C_UNK, M2C_UNK, M2C_UNK, void (*)(M2C_UNK), s32); /* extern */
s32 func_020d0c58(s32, M2C_UNK);                    /* extern */
extern s32 data_0216581c;
extern s32 data_0216716c;

void func_020d081c(M2C_UNK arg0) {
    func_020988e4(data_0216581c, arg0, 6, 2, func_020d081c, func_020d0c58(data_0216716c, arg0));
}

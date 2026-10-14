#include "m2c.h"

M2C_UNK func_02034eb4(void *);                      /* extern */
M2C_UNK func_02034ecc(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02032760(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D) = 0;
    M2C_FIELD(arg0, s8 *, 0x2F) = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40) = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41) = 0x7F;
    func_02034eb4(arg0 + 0x1C);
    func_02034ecc(arg0 + 0x1C, 0x7F00, 1);
}

#include "m2c.h"

extern M2C_UNK data_0210ff78;
extern M2C_UNK data_0210ffac;
extern M2C_UNK data_0210ffe0;
extern M2C_UNK data_02110080;

void func_0208d548(void *arg0, s32 arg1) {
    M2C_UNK *var_r1;

    switch (arg1) {                                 /* irregular */
    case 1:
        var_r1 = &data_0210ffac;
        break;
    case 2:
        var_r1 = &data_0210ffe0;
        break;
    case 3:
        var_r1 = &data_02110080;
        break;
    default:
        var_r1 = &data_0210ff78;
        break;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x458) = var_r1;
}

#include "m2c.h"

M2C_UNK func_02095278();                            /* extern */
M2C_UNK func_020955f8(M2C_UNK *);                   /* extern */
extern s32 data_02165738;
extern M2C_UNK data_02165748;

void func_02097978(void) {
    if (data_02165738 != 0) {
        func_02095278();
    }
    func_020955f8(&data_02165748);
}

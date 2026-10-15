#include "m2c.h"

M2C_UNK func_020d856c();                         /* extern */
extern void *data_021672b0;

void *func_020dae54(void *arg0) {
    func_020d856c(arg0 + 0x48);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    if (data_021672b0 == NULL) {
        data_021672b0 = arg0;
    }
    M2C_FIELD(arg0, s8 *, 0x44) = 0;
    return arg0;
}

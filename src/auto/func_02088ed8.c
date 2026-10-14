#include "m2c.h"

M2C_UNK func_02080444();                            /* extern */
M2C_UNK func_02080624(s32, s8, s32);                /* extern */
extern s32 data_02110554;

s32 func_02088ed8(void *arg0) {
    if (data_02110554 == 0) {
        func_02080444();
    }
    func_02080624(data_02110554, (s8) M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    return 0;
}

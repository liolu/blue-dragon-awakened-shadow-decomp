#include "m2c.h"

M2C_UNK func_02080444();                            /* extern */
extern s32 data_02110554;

s32 func_02087a6c(s32 *arg0) {
    if (data_02110554 == 0) {
        func_02080444();
    }
    return M2C_FIELD(((*arg0 * 0xC) + data_02110554), s32 *, 0x10);
}

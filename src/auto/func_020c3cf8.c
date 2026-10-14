#include "m2c.h"

M2C_UNK func_02099634(s32);                         /* extern */
extern s32 data_02165820;

s32 func_020c3cf8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) == -1) {
        return 0;
    }
    func_02099634(data_02165820);
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    return 1;
}

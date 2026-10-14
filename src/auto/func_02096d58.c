#include "m2c.h"

M2C_UNK func_020d1398(s32);                         /* extern */
extern s32 data_02167170;

void func_02096d58(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x74) == -1) {
        return;
    }
    func_020d1398(data_02167170);
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
}

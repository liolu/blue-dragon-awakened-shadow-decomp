#include "m2c.h"

M2C_UNK func_0209d880(void *);                      /* extern */
M2C_UNK func_ov000_021bfc78(s32, M2C_UNK *);        /* extern */
extern M2C_UNK data_020fe494;

void func_0209d854(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x6A) = 0;
    func_ov000_021bfc78(arg0 + 0x54, &data_020fe494);
    func_0209d880(arg0);
}

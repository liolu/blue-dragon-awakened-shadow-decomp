#include "m2c.h"

M2C_UNK func_02027390(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02032040(s32);                         /* extern */
extern M2C_UNK data_0210b6a8;

void func_02032b98(void *arg0) {
    func_02032040(M2C_FIELD(arg0, s32 *, 0x40));
    func_02027390(&data_0210b6a8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}

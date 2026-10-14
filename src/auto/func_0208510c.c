#include "m2c.h"

void *func_0208a680(s32);                           /* extern */
M2C_UNK func_02099648(s32, s32, s32);               /* extern */
extern s32 data_02165820;

void func_0208510c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(func_0208a680(M2C_FIELD(arg0, s32 *, 0)), void **, 0xC), s32 *, 0x28);
    if (temp_r1 == -1) {
        return;
    }
    func_02099648(data_02165820, temp_r1, M2C_FIELD(arg0, s32 *, 4));
}

#include "m2c.h"

M2C_UNK func_020b2950();                            /* extern */
M2C_UNK func_020b2964(s32);                         /* extern */
M2C_UNK func_020b2978(s32);                         /* extern */
extern s32 data_021670a0;

void func_020b2988(void) {
    if (data_021670a0 == 0) {
        return;
    }
    func_020b2950();
    func_020b2964(data_021670a0);
    func_020b2978(data_021670a0);
}

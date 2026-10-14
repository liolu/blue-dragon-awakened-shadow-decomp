#include "m2c.h"

M2C_UNK func_0202732c();   /* extern */
void *func_020273f0();            /* extern */
extern M2C_UNK data_0210add8;

void func_020327f8(void *arg0) {
    void *var_r1;

    var_r1 = func_020273f0(&data_0210add8, 0);
    if (var_r1 != NULL) {
loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020273f0(&data_0210add8);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0202732c(&data_0210add8, var_r1, arg0);
}

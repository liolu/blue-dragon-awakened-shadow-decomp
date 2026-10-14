#include "m2c.h"

M2C_UNK func_02008b50(s32);                         /* extern */
M2C_UNK func_02008fc4();                            /* extern */
M2C_UNK func_02009310(M2C_UNK);                     /* extern */
s32 func_0200f8b8();                                /* extern */
M2C_UNK func_02012160(M2C_UNK, M2C_UNK);            /* extern */

void func_02012074(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02009310(0);
    func_02009310(1);
    func_02009310(2);
    func_02009310(3);
    if (((s32) (*(u16 *)0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_0200f8b8();
        if (var_r0 == 4) {
            do {
                func_02008b50(0xA3A47);
                var_r0 = func_0200f8b8();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_02012160(1, 1);
    }
    func_02008fc4();
}

#include "m2c.h"

M2C_UNK func_02006fe4(s32);                         /* extern */
M2C_UNK func_02007130();                            /* extern */
M2C_UNK func_020073b4();                            /* extern */
M2C_UNK func_020073e8();                            /* extern */
M2C_UNK func_02007580(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02007614(s32, void **, M2C_UNK);           /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_02039f6c(void *);                      /* extern */

void func_0203b960(s32 arg0) {
    void *sp0;
    s32 temp_r0;
    s32 temp_r8;

    if (arg0 == 0) {
        return;
    }
    func_02006fe4(arg0 + 0x20);
    temp_r8 = func_02008ae0();
    func_020073b4();
    if (func_02007614(arg0, &sp0, 0) != 0) {
        do {
            if (sp0 != NULL) {
                temp_r0 = M2C_FIELD(sp0, s32 *, 8);
                if (temp_r0 != 0) {
                    func_02007580(temp_r0, -0xB, 0);
                }
                func_02039f6c(sp0);
            }
        } while (func_02007614(arg0, &sp0, 0) != 0);
    }
    func_020073e8();
    func_02007130();
    func_02008af4(temp_r8);
}

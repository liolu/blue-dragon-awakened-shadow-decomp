#include "m2c.h"

M2C_UNK func_0207dd50(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0208a3dc(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d3960();                            /* extern */
M2C_UNK func_020d3cb0(void *);                      /* extern */
M2C_UNK func_ov000_021ca588(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_0216636c;
extern s8 data_021671c0;

void func_020d848c(void *arg0) {
    s32 temp_r0;

    func_020d3960();
    func_020d3cb0(arg0);
    data_021671c0 = 0;
    if (M2C_FIELD(&data_0216636c, u8 *, 0xBD) != 0) {
        func_ov000_021ca588(-1, 1);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x884);
    if (temp_r0 > 0) {
        func_0208a3dc(temp_r0 - 1, 0);
        M2C_FIELD(arg0, s32 *, 0x884) = 0;
    }
    func_0207dd50(0, 2);
}

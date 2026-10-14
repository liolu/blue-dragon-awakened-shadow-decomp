#include "m2c.h"

M2C_UNK func_020826a0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020979fc(M2C_UNK);                     /* extern */
M2C_UNK func_020afe04(M2C_UNK *);                   /* extern */
M2C_UNK func_020b050c(M2C_UNK *);                   /* extern */
M2C_UNK func_ov000_021c546c(M2C_UNK);               /* extern */
extern s32 data_02164e04;
extern M2C_UNK data_02165748;
extern M2C_UNK data_0216636c;
extern M2C_UNK data_02166440;
extern M2C_UNK data_021667d0;
extern M2C_UNK data_02166c54;

void func_0208a5f0(void) {
    func_ov000_021c546c(1);
    func_020979fc(1);
    if (M2C_FIELD(&data_0216636c, s8 *, 0xA4) != M2C_FIELD(&data_0216636c, s8 *, 0xA7)) {
        func_020826a0(data_02164e04, M2C_FIELD(&data_0216636c, s32 *, 0xA0), 0x1F4);
        M2C_FIELD(&data_0216636c, s32 *, 0xA0) = 0;
        M2C_FIELD(&data_0216636c, s8 *, 0xA7) = 0;
        M2C_FIELD(&data_0216636c, s8 *, 0xA4) = 0;
        func_020afe04(&data_02166c54);
        func_020b050c(&data_021667d0);
    }
    M2C_FIELD(&data_02166440, s8 *, 0x19) = 0;
    M2C_FIELD(&data_02165748, s8 *, 0xBC) = 0;
}

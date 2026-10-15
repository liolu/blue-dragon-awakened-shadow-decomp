#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK MI_CpuCopy8(s32, void *);                 /* extern */
extern void *data_0210e644;

s32 func_02047760(s32 arg0, void *arg1) {
    if (M2C_FIELD(data_0210e644, s32 *, 0x1A90) != 2) {
        return -1;
    }
    if ((arg0 < 0) || (arg0 >= (s32) M2C_FIELD(data_0210e644, s32 *, 0x1A88))) {
        return -1;
    }
    MI_CpuFill8(arg1, 0, 0x78);
    M2C_FIELD(arg1, s32 *, 0) = 1;
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD((data_0210e644 + (arg0 * 2)), u16 *, 0x1A48);
    MI_CpuCopy8((arg0 * 0x70) + (s32) (data_0210e644 + 0x1348), arg1 + 6);
    return 0;
}

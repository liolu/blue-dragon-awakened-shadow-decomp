#include "m2c.h"
extern void OS_Terminate(void);
extern void func_ov001_0218517c(void);
extern s16 func_ov001_02184c8c(void);
extern void func_ov001_02184a20(void);
extern u32 func_ov001_02184a0c(void);
extern u8 *data_ov001_02196c6c;
void func_ov001_02185990(void) {
    switch (func_ov001_02184a0c()) {
        case 1:
            func_ov001_02184a20();
            break;
        case 7:
            *(s16 *) (data_ov001_02196c6c + 0x64A) = func_ov001_02184c8c();
            *(s32 *) (data_ov001_02196c6c + 0xA98) = 0;
            *(s8 *) (data_ov001_02196c6c + 0xA90)  = 3;
            break;
        case 0:
            *(s32 *) (data_ov001_02196c6c + 0xA98) = 0;
            *(s8 *) (data_ov001_02196c6c + 0xA90)  = 3;
            break;
        case 9:
            func_ov001_0218517c();
            break;
        case 3:
            break;
        default:
            OS_Terminate();
            break;
    }
}

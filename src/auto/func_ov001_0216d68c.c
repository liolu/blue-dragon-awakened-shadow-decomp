/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

typedef struct {
    u8 b[0x58];
} Buf58;

void func_ov001_0216ccc8(Buf58 *buf);
void func_ov001_0216ccf0(Buf58 *buf, s32 a, s32 b);
void func_ov001_0216cd68(s32 dst, Buf58 *buf);

void func_ov001_0216d68c(s32 arg0, s32 arg1, s32 arg2) {
    Buf58 L;

    func_ov001_0216ccc8(&L);
    func_ov001_0216ccf0(&L, arg1, arg2);
    func_ov001_0216cd68(arg0, &L);
}

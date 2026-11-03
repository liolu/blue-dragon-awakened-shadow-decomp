/* near start: 14 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct G {
    u8 p0[0xe7];
    u8 b0[0x8];
    u8 flags;
    u8 p1[0xff];
    u8 flags2;
} G;
extern G *data_ov001_02196c48;
void MI_CpuFill8(void *, u8, u32);
u16 MATH_CalcCRC16(void *, void *, u32);
s32 func_ov001_02187d70(s32, s32);
void DWCi_BACKUPlWritePage(void *, void *, s32);
void func_ov001_02187d94(s32 *);

void func_ov001_02181394(s32 slot) {
    s32 vals[4];
    s32 h;
    u8 b;
    u32 bit;
    s32 on = 0;
    s32 i;
    b   = *((u8 *) data_ov001_02196c48 + slot * 0x100 + 0xe7);
    bit = 1 << slot;
    MI_CpuFill8(vals, on, 0x10);
    vals[slot] = 1;
    if (slot <= 2) {
        if (data_ov001_02196c48->flags & bit) {
            on = 1;
        }
        if (b == 0xff && on) {
            data_ov001_02196c48->flags &= ~bit;
            data_ov001_02196c48->flags2 &= ~bit;
            vals[1] = 1;
            vals[0] = 1;
        } else if (b != 0xff && !on) {
            data_ov001_02196c48->flags |= bit;
            data_ov001_02196c48->flags2 |= bit;
            vals[1] = 1;
            vals[0] = 1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (vals[i] != 0) {
            u16 crc = MATH_CalcCRC16((u8 *) data_ov001_02196c48 + 0x4f8, (u8 *) data_ov001_02196c48 + i * 0x100, 0xfe);
            ((u16 *) ((u8 *) data_ov001_02196c48 + 0xfe))[i * 0x80] = crc;
        }
    }
    h = func_ov001_02187d70(0x100, 0x20);
    DWCi_BACKUPlWritePage(data_ov001_02196c48, vals, h);
    func_ov001_02187d94(&h);
}

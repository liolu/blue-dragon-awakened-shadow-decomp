typedef int s32;
extern void OS_SNPrintf(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
extern void strlen(s32 a);
extern char data_020fa74c[];
void DWC_SetCommonKeyValueString(s32 a0, s32 a1, s32 a2, s32 a3) {
    OS_SNPrintf(a2, 0x1000, data_020fa74c, a3, a0, a3, a1);
    strlen(a2);
}

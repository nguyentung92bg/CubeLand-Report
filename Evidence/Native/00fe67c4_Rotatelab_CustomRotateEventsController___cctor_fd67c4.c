/* IL2CPP: Rotatelab.CustomRotateEventsController$$.cctor
void Rotatelab_CustomRotateEventsController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$.cctor
   void Rotatelab_CustomRotateEventsController___cctor (const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController___cctor_fd67c4(void)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_00fe682c + 0xfe67d4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6830 + 0xfe67e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe6834 + 0xfe67f4));
    *pcVar5 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00fe6838 + 0xfe6808);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_00fe683c + 0xfe6818);
  uVar4 = *(uint *)(*piVar3 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


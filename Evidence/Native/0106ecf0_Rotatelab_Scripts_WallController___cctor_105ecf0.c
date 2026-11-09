/* IL2CPP: Rotatelab.Scripts.WallController$$.cctor
void Rotatelab_Scripts_WallController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.WallController$$.cctor
   void Rotatelab_Scripts_WallController___cctor (const MethodInfo* method); */

void Rotatelab_Scripts_WallController___cctor_105ecf0(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0106ed64 + 0x106ed00);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ed68 + 0x106ed14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106ed6c + 0x106ed20));
    *pcVar6 = '\x01';
  }
  uVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_0106ed70 + 0x106ed38),0x10);
  piVar4 = *(int **)(_UNK_0106ed74 + 0x106ed4c);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar3;
  uVar5 = *(uint *)(*piVar4 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* IL2CPP: Rotatelab.UI.FailPanelController$$.cctor
void Rotatelab_UI_FailPanelController___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$.cctor
   void Rotatelab_UI_FailPanelController___cctor (const MethodInfo* method); */

void Rotatelab_UI_FailPanelController___cctor_111c9d0(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0112cac4 + 0x112c9e0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cac8 + 0x112c9f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cacc + 0x112ca00));
    *pcVar6 = '\x01';
  }
  iVar3 = FUN_00ec388c(**(undefined4 **)(_UNK_0112cad0 + 0x112ca18),3);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(uint *)(iVar3 + 0xc);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(undefined4 *)(iVar3 + 0x10) = 900;
  *(undefined4 *)(iVar3 + 0x14) = 3;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  if (1 < uVar4) {
    *(undefined4 *)(iVar3 + 0x1c) = 0x76c;
    *(undefined4 *)(iVar3 + 0x20) = 5;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    if (uVar4 < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar3 + 0x28) = 0xb54;
    *(undefined4 *)(iVar3 + 0x2c) = 5;
    *(undefined4 *)(iVar3 + 0x30) = 1;
    piVar5 = *(int **)(_UNK_0112cad4 + 0x112caa8);
    **(int **)(*piVar5 + 0x5c) = iVar3;
    uVar4 = *(uint *)(*piVar5 + 0x5c);
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
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}


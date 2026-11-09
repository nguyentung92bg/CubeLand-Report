/* IL2CPP: Rotatelab.Scripts.GameManager$$OnLevelSucceededHandler
void Rotatelab_Scripts_GameManager__OnLevelSucceededHandler (Rotatelab_Scripts_GameManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$OnLevelSucceededHandler
   void Rotatelab_Scripts_GameManager__OnLevelSucceededHandler (Rotatelab_Scripts_GameManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_GameManager__OnLevelSucceededHandler_1066e40(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01076ec8 + 0x1076e50);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076ecc + 0x1076e64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076ed0 + 0x1076e70));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01076ed4 + 0x1076e84);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  piVar6 = (int *)**(undefined4 **)(iVar1 + 0x5c);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = **(int **)(_UNK_01076ed8 + 0x1076ebc);
  iVar1 = piVar6[5];
  uVar7 = 0;
  if (iVar1 != 0) {
    uVar7 = (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14),
                       *(code **)(iVar1 + 0xc),unaff_r4);
  }
  piVar2 = (int *)FUN_01444054(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x24));
  if ((char)piVar6[7] == '\0') {
    uVar3 = (**(code **)(*piVar6 + 0xe0))(piVar6,*(undefined4 *)(*piVar6 + 0xe4));
    *(char *)((int)piVar6 + 0x1d) = (char)uVar3;
    *(undefined1 *)(piVar6 + 7) = 1;
  }
  else {
    uVar3 = (uint)(*(char *)((int)piVar6 + 0x1d) != '\0');
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar2 + 0x100))(piVar2,uVar3,uVar7,*(undefined4 *)(*piVar2 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*piVar6 + 0xe8))(piVar6,uVar7,*(undefined4 *)(*piVar6 + 0xec));
    iVar1 = piVar6[6];
    *(char *)((int)piVar6 + 0x1d) = (char)uVar7;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar7,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}


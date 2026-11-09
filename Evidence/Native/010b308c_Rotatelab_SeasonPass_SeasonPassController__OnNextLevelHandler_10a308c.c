/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnNextLevelHandler
void Rotatelab_SeasonPass_SeasonPassController__OnNextLevelHandler (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnNextLevelHandler
   void Rotatelab_SeasonPass_SeasonPassController__OnNextLevelHandler
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__OnNextLevelHandler_10a308c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  int *piVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_010b30e8 + 0x10b30a0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b30ec + 0x10b30b4));
    *pcVar5 = '\x01';
  }
  piVar4 = *(int **)(param_1 + 0x2c);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = **(int **)(_UNK_010b30f0 + 0x10b30dc);
  iVar1 = piVar4[5];
  iVar6 = 0;
  if (iVar1 != 0) {
    iVar6 = (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14),
                       *(code **)(iVar1 + 0xc),unaff_r4,unaff_r5);
  }
  piVar2 = (int *)FUN_013a76ec(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x24));
  if ((char)piVar4[7] == '\0') {
    iVar1 = (**(code **)(*piVar4 + 0xe0))(piVar4,*(undefined4 *)(*piVar4 + 0xe4));
    piVar4[8] = iVar1;
    *(undefined1 *)(piVar4 + 7) = 1;
  }
  else {
    iVar1 = piVar4[8];
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar2 + 0x100))(piVar2,iVar1,iVar6,*(undefined4 *)(*piVar2 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*piVar4 + 0xe8))(piVar4,iVar6,*(undefined4 *)(*piVar4 + 0xec));
    iVar1 = piVar4[6];
    piVar4[8] = iVar6;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),iVar6,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}


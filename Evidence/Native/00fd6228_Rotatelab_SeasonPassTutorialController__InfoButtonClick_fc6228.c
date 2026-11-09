/* IL2CPP: Rotatelab.SeasonPassTutorialController$$InfoButtonClick
void Rotatelab_SeasonPassTutorialController__InfoButtonClick (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController$$InfoButtonClick
   void Rotatelab_SeasonPassTutorialController__InfoButtonClick
   (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPassTutorialController__InfoButtonClick_fc6228(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 uVar7;
  
  pcVar6 = (char *)(_UNK_00fd6294 + 0xfd623c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd6298 + 0xfd6250));
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  Rotatelab_SeasonPassTutorialController__CheckStep_fc5bc4(param_1);
  piVar5 = *(int **)(param_1 + 0x24);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = **(int **)(_UNK_00fd629c + 0xfd6288);
  iVar1 = piVar5[5];
  uVar7 = 1;
  if (iVar1 != 0) {
    uVar7 = (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),1,*(undefined4 *)(iVar1 + 0x14),
                       *(code **)(iVar1 + 0xc),unaff_r4,unaff_r5);
  }
  piVar2 = (int *)FUN_01444054(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x24));
  if ((char)piVar5[7] == '\0') {
    uVar3 = (**(code **)(*piVar5 + 0xe0))(piVar5,*(undefined4 *)(*piVar5 + 0xe4));
    *(char *)((int)piVar5 + 0x1d) = (char)uVar3;
    *(undefined1 *)(piVar5 + 7) = 1;
  }
  else {
    uVar3 = (uint)(*(char *)((int)piVar5 + 0x1d) != '\0');
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar2 + 0x100))(piVar2,uVar3,uVar7,*(undefined4 *)(*piVar2 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*piVar5 + 0xe8))(piVar5,uVar7,*(undefined4 *)(*piVar5 + 0xec));
    iVar1 = piVar5[6];
    *(char *)((int)piVar5 + 0x1d) = (char)uVar7;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar7,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}


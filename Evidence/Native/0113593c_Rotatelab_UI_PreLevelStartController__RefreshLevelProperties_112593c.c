/* IL2CPP: Rotatelab.UI.PreLevelStartController$$RefreshLevelProperties
void Rotatelab_UI_PreLevelStartController__RefreshLevelProperties (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$RefreshLevelProperties
   void Rotatelab_UI_PreLevelStartController__RefreshLevelProperties
   (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__RefreshLevelProperties_112593c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  undefined4 auStack_120 [20];
  undefined1 auStack_d0 [88];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 auStack_6c [18];
  
  pcVar5 = (char *)(_UNK_01135ac8 + 0x1135954);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135acc + 0x1135968));
    *pcVar5 = '\x01';
  }
  FUN_00f88e5c(&uStack_78,0x54);
  puVar8 = *(undefined4 **)(_UNK_01135ad0 + 0x113598c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x18) + 0x50);
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_EnvironmentManager__CurrentEnvironmentData_100d9e8
            (auStack_d0,*(int *)(param_1 + 0x50),iVar1,0);
  thunk_FUN_00f95db8(&uStack_78,auStack_d0,0x54);
  uVar2 = Rotatelab_GameExtensions__Multiplier_fb4f04(iVar1,0);
  iVar6 = 0x48;
  puVar3 = auStack_6c;
  puVar7 = auStack_120;
  do {
    iVar6 = iVar6 + -4;
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar6 != 0);
  Rotatelab_UI_PreLevelStartController__ApplyEnvironmentVisuals_1125b3c
            (param_1,uStack_78,uStack_74,uStack_70);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  Rotatelab_UI_PreLevelStartController__SetDifficultyTexts_1125c1c(param_1,iVar1,uVar2);
  Rotatelab_UI_PreLevelStartController__SetDifficultyVisibility_1125d74(param_1,iVar1 != 0);
  Rotatelab_UI_PreLevelStartController__UpdatePopupLayout_1125e38(param_1,iVar1 == 0);
  Rotatelab_UI_PreLevelStartController__UpdateDifficultyBackgroundSize_1125ee0(param_1,iVar1);
  piVar4 = *(int **)(param_1 + 0x24);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_CurrentLevelLabel_1067e90(iVar1,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0x2b0))(piVar4,uVar2,*(undefined4 *)(*piVar4 + 0x2b4));
  return;
}


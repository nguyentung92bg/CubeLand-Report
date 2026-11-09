/* IL2CPP: Rotatelab.UI.PreLevelStartController$$Start
void Rotatelab_UI_PreLevelStartController__Start (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$Start
   void Rotatelab_UI_PreLevelStartController__Start (Rotatelab_UI_PreLevelStartController_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__Start_112584c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  undefined4 auStack_120 [20];
  undefined1 auStack_d0 [88];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 auStack_6c [21];
  
  pcVar4 = (char *)(_UNK_01135920 + 0x1135860);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135924 + 0x1135874));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135928 + 0x1135880));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113592c + 0x113588c));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01135930 + 0x11358b0));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_01135934 + 0x11358d0),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar1,0);
  uVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01135938 + 0x1135900));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_00ec5080();
  pcVar4 = (char *)(_UNK_01135ac8 + 0x1135954);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135acc + 0x1135968));
    *pcVar4 = '\x01';
  }
  FUN_00f88e5c(&uStack_78,0x54);
  puVar8 = *(undefined4 **)(_UNK_01135ad0 + 0x113598c);
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x18) + 0x50);
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_EnvironmentManager__CurrentEnvironmentData_100d9e8
            (auStack_d0,*(int *)(param_1 + 0x50),iVar5,0);
  thunk_FUN_00f95db8(&uStack_78,auStack_d0,0x54);
  uVar1 = Rotatelab_GameExtensions__Multiplier_fb4f04(iVar5,0);
  iVar6 = 0x48;
  puVar2 = auStack_6c;
  puVar7 = auStack_120;
  do {
    iVar6 = iVar6 + -4;
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar6 != 0);
  Rotatelab_UI_PreLevelStartController__ApplyEnvironmentVisuals_1125b3c
            (param_1,uStack_78,uStack_74,uStack_70);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  Rotatelab_UI_PreLevelStartController__SetDifficultyTexts_1125c1c(param_1,iVar5,uVar1);
  Rotatelab_UI_PreLevelStartController__SetDifficultyVisibility_1125d74(param_1,iVar5 != 0);
  Rotatelab_UI_PreLevelStartController__UpdatePopupLayout_1125e38(param_1,iVar5 == 0);
  Rotatelab_UI_PreLevelStartController__UpdateDifficultyBackgroundSize_1125ee0(param_1,iVar5);
  piVar3 = *(int **)(param_1 + 0x24);
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_CurrentLevelLabel_1067e90(iVar5,0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0x2b0))(piVar3,uVar1,*(undefined4 *)(*piVar3 + 0x2b4));
  return;
}


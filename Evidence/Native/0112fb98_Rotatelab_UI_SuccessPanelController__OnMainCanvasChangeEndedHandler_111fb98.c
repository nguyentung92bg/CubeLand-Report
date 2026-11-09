/* IL2CPP: Rotatelab.UI.SuccessPanelController$$OnMainCanvasChangeEndedHandler
void Rotatelab_UI_SuccessPanelController__OnMainCanvasChangeEndedHandler (Rotatelab_UI_SuccessPanelController_o* __this, int32_t mainCanvasType, bool isInstant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$OnMainCanvasChangeEndedHandler
   void Rotatelab_UI_SuccessPanelController__OnMainCanvasChangeEndedHandler
   (Rotatelab_UI_SuccessPanelController_o* __this, int32_t mainCanvasType, bool isInstant, const
   MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__OnMainCanvasChangeEndedHandler_111fb98
               (int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  int *piVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar9;
  
  if (param_2 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x9f) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x9f) = 0;
  pcVar7 = (char *)(_UNK_0112dea8 + 0x112dc04);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112deac + 0x112dc18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112deb0 + 0x112dc24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112deb4 + 0x112dc30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112deb8 + 0x112dc3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112debc + 0x112dc48));
    *pcVar7 = '\x01';
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    piVar8 = *(int **)(_UNK_0112dec0 + 0x112dc68);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 300);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x10),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
              (iVar2,uVar3,*(undefined4 *)(param_1 + 0x40),7,1,
               **(undefined4 **)(_UNK_0112dec4 + 0x112dcc8));
  }
  if (*(char *)(param_1 + 0x9e) != '\0') {
    piVar8 = *(int **)(_UNK_0112dec8 + 0x112dcf4);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 300);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x10),0);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112decc + 0x112dd3c));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = Rotatelab_Leaderboard_MidGameLeaderboardManager__GetThemeSprite_10b8264(iVar4,5,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
              (iVar2,uVar3,uVar5,9,1,**(undefined4 **)(_UNK_0112ded0 + 0x112dd84));
  }
  if (*(char *)(param_1 + 0x9d) != '\0') {
    piVar8 = *(int **)(_UNK_0112ded4 + 0x112ddb0);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 300);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x10),0);
    iVar4 = *(int *)(param_1 + 0x34);
    if (4 < iVar4) {
      iVar4 = 5;
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
              (iVar2,uVar3,*(undefined4 *)(param_1 + 0x44),8,iVar4,
               **(undefined4 **)(_UNK_0112ded8 + 0x112de20));
    if (*(char *)(param_1 + 0x9d) != '\0') goto LAB_0112de4c;
  }
  cVar1 = *(char *)(param_1 + 0x9c);
  bVar9 = cVar1 == '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x9e);
  }
  if (bVar9 && cVar1 == '\0') {
    pcVar7 = (char *)(_UNK_0112dbd8 + 0x112db28);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112dbdc + 0x112db3c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112dbe0 + 0x112db48));
      *pcVar7 = '\x01';
    }
    piVar8 = *(int **)(_UNK_0112dbe4 + 0x112db5c);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 300);
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar3 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x10),0);
      if (iVar2 != 0) {
        Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
                  (iVar2,uVar3,*(undefined4 *)(param_1 + 0x3c),0,0xd,
                   **(undefined4 **)(_UNK_0112dbe8 + 0x112dbbc));
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
LAB_0112de4c:
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112dedc + 0x112de58));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar3,param_1,**(undefined4 **)(_UNK_0112dee0 + 0x112de74),0);
  pcVar7 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar3,1,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r11,unaff_lr);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00();
  uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar5,0x3e800000);
  uVar3 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar5,uVar3,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar3,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar6 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar2 != 0) {
    uVar6 = (uint)*(byte *)(iVar2 + 0x94);
  }
  if (iVar2 != 0 && uVar6 != 0) {
    if (*(char *)(iVar2 + 0xa4) == '\0') {
      *(undefined1 *)(iVar2 + 0x5c) = 1;
    }
    return;
  }
  return;
}


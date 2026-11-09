/* IL2CPP: Rotatelab.UI.UITransitionController$$Hold
void Rotatelab_UI_UITransitionController__Hold (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UITransitionController$$Hold
   void Rotatelab_UI_UITransitionController__Hold (Rotatelab_UI_UITransitionController_o* __this,
   const MethodInfo* method); */

int Rotatelab_UI_UITransitionController__Hold_112dcbc
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_0113dd04 + 0x113dcd0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dd08 + 0x113dce4));
    *pcVar3 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  uVar2 = **(undefined4 **)(_UNK_0113dd0c + 0x113dcf8);
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar3 = (char *)(_UNK_015e70f8 + 0x15e6f90);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_015e70fc + 0x15e6fa4),uVar2,param_3,param_4,unaff_r4,unaff_r5,
                 unaff_r11,unaff_lr);
    *pcVar3 = '\x01';
    uVar2 = extraout_r1;
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_015e7100 + 0x15e702c);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e7104 + 0x15e7040),uVar2,param_3,param_4,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e7108 + 0x15e7054) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogNullTween_117e228(0,0);
    }
  }
  else if (*(char *)(iVar1 + 0x94) == '\0') {
    pcVar3 = (char *)(_UNK_015e710c + 0x15e7080);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e7110 + 0x15e7094),uVar2,param_3,param_4,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e7114 + 0x15e70a8) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogInvalidTween_117e184(iVar1,0);
    }
  }
  else if (*(char *)(iVar1 + 0x95) == '\0') {
    if (*(int *)(**(int **)(_UNK_015e7124 + 0x15e70d4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    DG_Tweening_Core_TweenManager__Pause_1183658(iVar1,0);
  }
  else {
    pcVar3 = (char *)(_UNK_015e7118 + 0x15e6fd8);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e711c + 0x15e6fec),uVar2,param_3,param_4,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e7120 + 0x15e7000) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogNestedTween_117e1d4(iVar1,0);
    }
  }
  return iVar1;
}


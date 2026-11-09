/* IL2CPP: Rotatelab.UI.UITransitionController$$Release
void Rotatelab_UI_UITransitionController__Release (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UITransitionController$$Release
   void Rotatelab_UI_UITransitionController__Release (Rotatelab_UI_UITransitionController_o* __this,
   const MethodInfo* method); */

int Rotatelab_UI_UITransitionController__Release_112dd10
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
  
  pcVar3 = (char *)(_UNK_0113dd58 + 0x113dd24);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dd5c + 0x113dd38));
    *pcVar3 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  uVar2 = **(undefined4 **)(_UNK_0113dd60 + 0x113dd4c);
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar3 = (char *)(_UNK_015e72a4 + 0x15e713c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_015e72a8 + 0x15e7150),uVar2,param_3,param_4,unaff_r4,unaff_r5,
                 unaff_r11,unaff_lr);
    *pcVar3 = '\x01';
    uVar2 = extraout_r1;
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_015e72ac + 0x15e71d8);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e72b0 + 0x15e71ec),uVar2,param_3,param_4,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e72b4 + 0x15e7200) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogNullTween_117e228(0,0);
    }
  }
  else if (*(char *)(iVar1 + 0x94) == '\0') {
    pcVar3 = (char *)(_UNK_015e72b8 + 0x15e722c);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e72bc + 0x15e7240),uVar2,param_3,param_4,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e72c0 + 0x15e7254) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogInvalidTween_117e184(iVar1,0);
    }
  }
  else if (*(char *)(iVar1 + 0x95) == '\0') {
    if (*(int *)(**(int **)(_UNK_015e72d0 + 0x15e7280) + 0x74) == 0) {
      FUN_00ec3934();
    }
    DG_Tweening_Core_TweenManager__Play_11835bc(iVar1,0);
  }
  else {
    pcVar3 = (char *)(_UNK_015e72c4 + 0x15e7184);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e72c8 + 0x15e7198),uVar2,param_3,param_4,unaff_r4,
                   unaff_r5,unaff_r11,unaff_lr);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e72cc + 0x15e71ac) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogNestedTween_117e1d4(iVar1,0);
    }
  }
  return iVar1;
}


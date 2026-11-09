/* IL2CPP: Rotatelab.UI.SettingPanelController.<>c$$<OnHomeButtonClicked>b__29_0
void Rotatelab_UI_SettingPanelController___c___OnHomeButtonClicked_b__29_0 (Rotatelab_UI_SettingPanelController___c_o* __this, Rotatelab_UI_PopupController_o* popupController, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController.<>c$$<OnHomeButtonClicked>b__29_0
   void Rotatelab_UI_SettingPanelController___c___OnHomeButtonClicked_b__29_0
   (Rotatelab_UI_SettingPanelController___c_o* __this, Rotatelab_UI_PopupController_o*
   popupController, const MethodInfo* method); */

undefined4
Rotatelab_UI_SettingPanelController___c___OnHomeButtonClicked_b__29_0_112b57c
          (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  uint in_fpscr;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_0113b624 + 0x113b590);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b628 + 0x113b5a4));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Hide_1124930(param_2);
  DG_Tweening_ShortcutExtensions__DOComplete_116c8cc(*(undefined4 *)(param_2 + 0x14),0,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113b62c + 0x113b5ec));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x14);
  pcVar2 = (char *)(_UNK_0117c92c + 0x117c8e4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117c930 + 0x117c8f8),0,0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117c934 + 0x117c90c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_01177f64 + 0x1177ee8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01177f68 + 0x1177efc));
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01177f6c + 0x1177f18) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = VectorUnsignedToFloat(0,(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = DG_Tweening_Core_TweenManager__FilteredOperation_11842e4
                      (0,1,iVar1,0,uVar3,0,0,0,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  }
  return uVar3;
}


/* IL2CPP: Rotatelab.UI.SwitchToggle$$UpdateToggle
void Rotatelab_UI_SwitchToggle__UpdateToggle (Rotatelab_UI_SwitchToggle_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SwitchToggle$$UpdateToggle
   void Rotatelab_UI_SwitchToggle__UpdateToggle (Rotatelab_UI_SwitchToggle_o* __this, bool value,
   const MethodInfo* method); */

void Rotatelab_UI_SwitchToggle__UpdateToggle_112bf8c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar2 = (char *)(_UNK_0113c130 + 0x113bfac);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c134 + 0x113bfc0));
    *pcVar2 = '\x01';
  }
  iVar1 = 0x4c;
  if (param_2 != 0) {
    iVar1 = 0x48;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + iVar1),0);
  fVar4 = -*(float *)(param_1 + 0x50);
  if (param_2 != 0) {
    fVar4 = *(float *)(param_1 + 0x50);
  }
  if (0.0 < *(float *)(param_1 + 0x54)) {
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_GameObject__get_activeInHierarchy_3602210(iVar1,0);
    if (iVar1 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x54);
      uVar3 = *(undefined4 *)(param_1 + 0x40);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,6,0);
      if (*(int *)(**(int **)(_UNK_0113c138 + 0x113c074) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                (&uStack_48,uVar3,fVar4,uVar5,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,1,0,
                 0,0,0,0);
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_48,iVar1,0);
    UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar1,fVar4,uStack_44,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


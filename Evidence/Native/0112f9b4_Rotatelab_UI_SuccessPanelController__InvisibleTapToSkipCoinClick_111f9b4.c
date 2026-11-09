/* IL2CPP: Rotatelab.UI.SuccessPanelController$$InvisibleTapToSkipCoinClick
void Rotatelab_UI_SuccessPanelController__InvisibleTapToSkipCoinClick (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$InvisibleTapToSkipCoinClick
   void Rotatelab_UI_SuccessPanelController__InvisibleTapToSkipCoinClick
   (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__InvisibleTapToSkipCoinClick_111f9b4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0112fb74 + 0x112f9cc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fb78 + 0x112f9e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fb7c + 0x112f9ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fb80 + 0x112f9f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fb84 + 0x112fa04));
    *pcVar2 = '\x01';
  }
  DG_Tweening_TweenExtensions__Kill_1168b64(*(undefined4 *)(param_1 + 0x98),0,0);
  if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x94),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  iVar1 = Rotatelab_UI_SuccessPanelController__get_IsCloudRushContinuingLevelFlow_111d2a0();
  if (iVar1 == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112fb88 + 0x112fa70));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_GameManager__OnLevelCompleted_1066254(iVar1,0);
  }
  piVar3 = *(int **)(_UNK_0112fb8c + 0x112fa9c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x11c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum__bool__bool___Raise_23a5cbc
            (iVar1,0,0,0,**(undefined4 **)(_UNK_0112fb90 + 0x112fadc));
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Hide_1124930(*(int *)(param_1 + 0x4c),0);
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x50),1,0);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x54),1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112fb94 + 0x112fb54));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)(iVar1 + 0x30) = 0;
  return;
}


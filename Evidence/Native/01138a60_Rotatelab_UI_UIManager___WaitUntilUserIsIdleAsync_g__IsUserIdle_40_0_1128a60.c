/* IL2CPP: Rotatelab.UI.UIManager$$<WaitUntilUserIsIdleAsync>g__IsUserIdle|40_0
bool Rotatelab_UI_UIManager___WaitUntilUserIsIdleAsync_g__IsUserIdle_40_0 (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIManager$$<WaitUntilUserIsIdleAsync>g__IsUserIdle|40_0
   bool Rotatelab_UI_UIManager___WaitUntilUserIsIdleAsync_g__IsUserIdle_40_0 (const MethodInfo*
   method); */

uint Rotatelab_UI_UIManager___WaitUntilUserIsIdleAsync_g__IsUserIdle_40_0_1128a60(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(_UNK_01138bb4 + 0x1138a70);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138bb8 + 0x1138a84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138bbc + 0x1138a90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138bc0 + 0x1138a9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138bc4 + 0x1138aa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138bc8 + 0x1138ab4));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01138bcc + 0x1138ac8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = 0;
  if (*(char *)(iVar1 + 0x10) == '\0') {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01138bd0 + 0x1138b00));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) == 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01138bd4 + 0x1138b3c));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_HomePageCoordinator__get_IsBusy_107a03c(iVar1,0);
      if (iVar1 != 0) {
        return 0;
      }
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01138bd8 + 0x1138b74));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_UI_PopupManager__get_IsAnyPopupVisible_1124e44(iVar1);
    uVar3 = 0;
    if (iVar1 == 0) {
      uVar3 = Rotatelab_SingletonBehaviourFromResources_object___get_IsInstanceActive_1a99734
                        (**(undefined4 **)(_UNK_01138bdc + 0x1138ba8));
      uVar3 = uVar3 ^ 1;
    }
  }
  return uVar3;
}


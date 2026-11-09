/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$OnPopupShown
void Rotatelab_WinStreak_WinStreakPopup__OnPopupShown (Rotatelab_WinStreak_WinStreakPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$OnPopupShown
   void Rotatelab_WinStreak_WinStreakPopup__OnPopupShown (Rotatelab_WinStreak_WinStreakPopup_o*
   __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakPopup__OnPopupShown_1093d0c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 uStack_11;
  
  pcVar2 = (char *)(_UNK_010a3df8 + 0x10a3d24);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3dfc + 0x10a3d38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a3e00 + 0x10a3d44));
    *pcVar2 = '\x01';
  }
  uStack_11 = 0;
  Rotatelab_UI_PopupController__OnPopupShown_1124dbc(param_1,0);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(**(int **)(_UNK_010a3e04 + 0x10a3d88) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Utilities__TryChangeValue_bool__1663d40
                    (iVar1 + 0xa8,1,**(undefined4 **)(_UNK_010a3e08 + 0x10a3da8));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_WinStreak_WinStreakInfoController__Show_10917e4(*(int *)(param_1 + 0x48));
  }
  Rotatelab_WinStreak_WinStreakPopup__GenerateStages_1093e0c(param_1);
  uStack_11 = Rotatelab_WinStreak_WinStreakPopup__AnimateProgressAsync_10940f4(param_1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  return;
}


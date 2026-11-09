/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$OnLevelSucceededHandler
void Rotatelab_WinStreak_WinStreakManager__OnLevelSucceededHandler (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$OnLevelSucceededHandler
   void Rotatelab_WinStreak_WinStreakManager__OnLevelSucceededHandler
   (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__OnLevelSucceededHandler_1092b28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar3 + (*(int *)(iVar3 + 0xc) + -1) * 4 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 8);
    iVar2 = *(int *)(iVar2 + 0xa0) + 1;
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    *(int *)(iVar1 + 0xa0) = iVar3;
  }
  return;
}


/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$OnLevelFailedHandler
void Rotatelab_WinStreak_WinStreakManager__OnLevelFailedHandler (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$OnLevelFailedHandler
   void Rotatelab_WinStreak_WinStreakManager__OnLevelFailedHandler
   (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__OnLevelFailedHandler_1092ab0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(param_1 + 0x10);
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_WinStreak_WinStreakSo__GetLatestCheckpointStage_1090d2c
                      (iVar4,*(undefined4 *)(iVar2 + 0xa0));
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 8);
    }
    *(undefined4 *)(iVar1 + 0xa0) = uVar3;
  }
  return;
}


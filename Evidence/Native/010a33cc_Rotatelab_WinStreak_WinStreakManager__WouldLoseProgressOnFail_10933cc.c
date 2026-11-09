/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$WouldLoseProgressOnFail
bool Rotatelab_WinStreak_WinStreakManager__WouldLoseProgressOnFail (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$WouldLoseProgressOnFail
   bool Rotatelab_WinStreak_WinStreakManager__WouldLoseProgressOnFail
   (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method); */

bool Rotatelab_WinStreak_WinStreakManager__WouldLoseProgressOnFail_10933cc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    return false;
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(iVar1 + 0xa0);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_WinStreak_WinStreakSo__GetLatestCheckpointStage_1090d2c
                    (iVar2,*(undefined4 *)(iVar1 + 0xa0));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return iVar2 < iVar3;
}


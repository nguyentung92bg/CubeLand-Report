/* IL2CPP: Rotatelab.WinStreak.WinStreakSo$$GetLatestCheckpointStage
Rotatelab_WinStreak_WinStreakSo_StageData_o* Rotatelab_WinStreak_WinStreakSo__GetLatestCheckpointStage (Rotatelab_WinStreak_WinStreakSo_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakSo$$GetLatestCheckpointStage
   Rotatelab_WinStreak_WinStreakSo_StageData_o*
   Rotatelab_WinStreak_WinStreakSo__GetLatestCheckpointStage (Rotatelab_WinStreak_WinStreakSo_o*
   __this, int32_t level, const MethodInfo* method); */

int Rotatelab_WinStreak_WinStreakSo__GetLatestCheckpointStage_1090d2c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  if (-1 < iVar1 + -1) {
    iVar1 = iVar1 + 3;
    do {
      iVar3 = *(int *)(param_1 + 0xc);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = iVar1 - 4;
      if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar3 = *(int *)(iVar3 + iVar1 * 4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((*(char *)(iVar3 + 0xc) != '\0') && (*(int *)(iVar3 + 8) <= param_2)) {
        return iVar3;
      }
      iVar1 = iVar1 + -1;
    } while (0 < (int)uVar2);
  }
  return 0;
}


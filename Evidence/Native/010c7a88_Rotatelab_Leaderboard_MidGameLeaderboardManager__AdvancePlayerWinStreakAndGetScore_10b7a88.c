/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$AdvancePlayerWinStreakAndGetScore
int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__AdvancePlayerWinStreakAndGetScore (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$AdvancePlayerWinStreakAndGetScore
   int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__AdvancePlayerWinStreakAndGetScore
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_Leaderboard_MidGameLeaderboardManager__AdvancePlayerWinStreakAndGetScore_10b7a88
          (int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(int *)(iVar1 + 0xb4) + 1;
  *(uint *)(iVar1 + 0xb4) = uVar2;
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = *(uint *)(iVar1 + 0xc) - 1;
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  if ((int)uVar2 < 0) {
    uVar3 = 0;
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar1 + uVar3 * 4 + 0x10);
}


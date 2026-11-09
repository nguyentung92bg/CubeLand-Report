/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetWinStreakScore
int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__GetWinStreakScore (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, int32_t winStreak, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetWinStreakScore
   int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__GetWinStreakScore
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, int32_t winStreak, const MethodInfo*
   method); */

undefined4
Rotatelab_Leaderboard_MidGameLeaderboardManager__GetWinStreakScore_10b7960(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(uint *)(iVar1 + 0xc) - 1;
  if ((int)param_2 < (int)uVar2) {
    uVar2 = param_2;
  }
  if ((int)param_2 < 0) {
    uVar2 = 0;
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar1 + uVar2 * 4 + 0x10);
}


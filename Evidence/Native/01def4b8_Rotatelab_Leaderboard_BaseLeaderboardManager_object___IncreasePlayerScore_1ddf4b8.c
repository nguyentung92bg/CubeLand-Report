/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$IncreasePlayerScore
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___IncreasePlayerScore (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, int32_t score, const MethodInfo_1DDF4B8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$IncreasePlayerScore
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___IncreasePlayerScore
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, int32_t score, const
   MethodInfo_1DDF4B8* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___IncreasePlayerScore_1ddf4b8
               (int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 8) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + param_2;
  }
  return;
}


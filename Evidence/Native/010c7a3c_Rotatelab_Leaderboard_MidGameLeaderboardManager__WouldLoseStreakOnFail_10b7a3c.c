/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$WouldLoseStreakOnFail
bool Rotatelab_Leaderboard_MidGameLeaderboardManager__WouldLoseStreakOnFail (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$WouldLoseStreakOnFail
   bool Rotatelab_Leaderboard_MidGameLeaderboardManager__WouldLoseStreakOnFail
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_Leaderboard_MidGameLeaderboardManager__WouldLoseStreakOnFail_10b7a3c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (0 < *(int *)(iVar1 + 0xb4)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


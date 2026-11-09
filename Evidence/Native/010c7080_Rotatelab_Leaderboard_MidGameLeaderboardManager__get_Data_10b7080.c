/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_Data
Rotatelab_Leaderboard_LeaderboardSaveData_o* Rotatelab_Leaderboard_MidGameLeaderboardManager__get_Data (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_Data
   Rotatelab_Leaderboard_LeaderboardSaveData_o*
   Rotatelab_Leaderboard_MidGameLeaderboardManager__get_Data
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Leaderboard_MidGameLeaderboardManager__get_Data_10b7080(void)

{
  int iVar1;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0xac);
}


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$HasRewardAtRank
bool Rotatelab_Leaderboard_BaseLeaderboardManager_object___HasRewardAtRank (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, int32_t rank, const MethodInfo_1DDF7C8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$HasRewardAtRank
   bool Rotatelab_Leaderboard_BaseLeaderboardManager_object___HasRewardAtRank
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, int32_t rank, const
   MethodInfo_1DDF7C8* method); */

undefined4
Rotatelab_Leaderboard_BaseLeaderboardManager_object___HasRewardAtRank_1ddf7c8
          (int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x148))(param_1,*(undefined4 *)(*param_1 + 0x14c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = 0;
  if ((int)param_2 < *(int *)(iVar1 + 0xc)) {
    iVar1 = (**(code **)(*param_1 + 0x148))(param_1,*(undefined4 *)(*param_1 + 0x14c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$get_ShouldShow
bool Rotatelab_Leaderboard_LeaderboardTutorialController__get_ShouldShow (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$get_ShouldShow
   bool Rotatelab_Leaderboard_LeaderboardTutorialController__get_ShouldShow
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method); */

uint Rotatelab_Leaderboard_LeaderboardTutorialController__get_ShouldShow_10b5484(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  iVar1 = Rotatelab_Leaderboard_LeaderboardTutorialController__IsPhaseCompleted_10b54b8(param_1,1);
  if (iVar1 != 0) {
    uVar2 = Rotatelab_Leaderboard_LeaderboardTutorialController__IsPhaseCompleted_10b54b8(param_1,2)
    ;
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}


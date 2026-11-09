/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$ResetIntroductionPhase
void Rotatelab_Leaderboard_LeaderboardTutorialController__ResetIntroductionPhase (bool isRoundVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$ResetIntroductionPhase
   void Rotatelab_Leaderboard_LeaderboardTutorialController__ResetIntroductionPhase (bool
   isRoundVariant, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController__ResetIntroductionPhase_10b6310
               (int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (param_1 == 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = (int *)(iVar1 + 0xac);
  }
  else {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = (int *)(iVar1 + 0xb0);
  }
  iVar1 = *piVar2;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffe;
  return;
}


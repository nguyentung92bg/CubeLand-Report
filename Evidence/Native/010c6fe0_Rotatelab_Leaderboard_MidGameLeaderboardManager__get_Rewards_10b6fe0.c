/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_Rewards
Rotatelab_Leaderboard_LeaderboardRewardGroup_array* Rotatelab_Leaderboard_MidGameLeaderboardManager__get_Rewards (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_Rewards
   Rotatelab_Leaderboard_LeaderboardRewardGroup_array*
   Rotatelab_Leaderboard_MidGameLeaderboardManager__get_Rewards
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__get_Rewards_10b6fe0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010c706c + 0x10c6ff4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7070 + 0x10c7008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7074 + 0x10c7014));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c7078 + 0x10c7028));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                    (*(undefined4 *)(iVar1 + 0x38),**(undefined4 **)(_UNK_010c707c + 0x10c7048));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4(0);
  }
  return;
}


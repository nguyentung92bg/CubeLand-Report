/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$get_IsActive
bool Rotatelab_Leaderboard_LateGameLeaderboardManager__get_IsActive (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$get_IsActive
   bool Rotatelab_Leaderboard_LateGameLeaderboardManager__get_IsActive
   (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, const MethodInfo* method); */

bool Rotatelab_Leaderboard_LateGameLeaderboardManager__get_IsActive_10b6590(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010c65e4 + 0x10c65a0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c65e8 + 0x10c65b4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010c65ec + 0x10c65c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4
                    (*(undefined4 *)(iVar1 + 0x1c),0,extraout_r2,extraout_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}


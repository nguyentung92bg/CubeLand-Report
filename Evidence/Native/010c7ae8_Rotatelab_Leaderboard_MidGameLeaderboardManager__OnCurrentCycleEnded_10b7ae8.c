/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$OnCurrentCycleEnded
void Rotatelab_Leaderboard_MidGameLeaderboardManager__OnCurrentCycleEnded (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$OnCurrentCycleEnded
   void Rotatelab_Leaderboard_MidGameLeaderboardManager__OnCurrentCycleEnded
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__OnCurrentCycleEnded_10b7ae8
               (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010c7b9c + 0x10c7afc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7ba0 + 0x10c7b10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7ba4 + 0x10c7b1c));
    *pcVar2 = '\x01';
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___OnCurrentCycleEnded_1ddebd0
            (param_1,**(undefined4 **)(_UNK_010c7ba8 + 0x10c7b30));
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(_UNK_010c7bac + 0x10c7b60);
  *(undefined4 *)(iVar1 + 0xb4) = 0;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(**(int **)(iVar1 + 0x5c) + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}


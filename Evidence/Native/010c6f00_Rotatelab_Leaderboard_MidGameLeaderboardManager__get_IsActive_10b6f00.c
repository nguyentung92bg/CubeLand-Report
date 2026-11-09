/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_IsActive
bool Rotatelab_Leaderboard_MidGameLeaderboardManager__get_IsActive (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_IsActive
   bool Rotatelab_Leaderboard_MidGameLeaderboardManager__get_IsActive
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Leaderboard_MidGameLeaderboardManager__get_IsActive_10b6f00(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_010c6fcc + 0x10c6f10);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6fd0 + 0x10c6f24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6fd4 + 0x10c6f30));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010c6fd8 + 0x10c6f44);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = 0;
  iVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68(0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = 0;
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    piVar6 = *(int **)(_UNK_010c6fdc + 0x10c6fa0);
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar6;
    }
    if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x2c) <= iVar1) {
      uVar5 = 1;
    }
  }
  return uVar5;
}


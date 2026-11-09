/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$OnCurrentCycleEnded
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___OnCurrentCycleEnded (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEBD0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$OnCurrentCycleEnded
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___OnCurrentCycleEnded
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEBD0* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___OnCurrentCycleEnded_1ddebd0(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseLeaderboardPanelController__Hide_10af4a8(param_1[4],0);
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores_1ddf544
            (param_1,*(undefined4 *)(iVar3 + 8));
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar3 + 8) + 0x18) < 1) {
    iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = Rotatelab_Leaderboard_CycleData__get_PlayerRank_10ae0e0(*(int *)(iVar3 + 8),0);
    iVar3 = Rotatelab_Leaderboard_BaseLeaderboardManager_object___HasRewardAtRank_1ddf7c8
                      (param_1,uVar4);
    if (iVar3 == 0) goto LAB_01deed14;
  }
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 8);
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0xc));
LAB_01deed14:
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar6 = (undefined4 *)(iVar3 + 8);
  *puVar6 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


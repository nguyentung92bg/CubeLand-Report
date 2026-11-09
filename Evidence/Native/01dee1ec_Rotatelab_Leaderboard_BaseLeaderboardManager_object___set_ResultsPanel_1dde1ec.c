/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$set_ResultsPanel
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___set_ResultsPanel (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, Rotatelab_Leaderboard_LeaderboardResultsController_o* value, const MethodInfo_1DDE1EC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$set_ResultsPanel
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___set_ResultsPanel
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this,
   Rotatelab_Leaderboard_LeaderboardResultsController_o* value, const MethodInfo_1DDE1EC* method);
    */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___set_ResultsPanel_1dde1ec
               (int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x14);
  *puVar3 = param_2;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


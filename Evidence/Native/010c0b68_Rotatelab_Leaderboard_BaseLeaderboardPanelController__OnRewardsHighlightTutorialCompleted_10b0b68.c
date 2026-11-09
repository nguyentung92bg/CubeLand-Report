/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$OnRewardsHighlightTutorialCompleted
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialCompleted (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$OnRewardsHighlightTutorialCompleted
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialCompleted
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialCompleted_10b0b68
               (int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_010c0bf0 + 0x10c0b7c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0bf4 + 0x10c0b90));
    *pcVar2 = '\x01';
  }
  iVar3 = 0;
  puVar4 = *(undefined4 **)(_UNK_010c0bf8 + 0x10c0ba8);
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x28),iVar3,*puVar4);
    if (iVar1 == 0) break;
    Rotatelab_Leaderboard_BaseCompetitor__HideRewards_10b0bfc(iVar1,0);
    iVar3 = iVar3 + 1;
    if (iVar3 == 3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


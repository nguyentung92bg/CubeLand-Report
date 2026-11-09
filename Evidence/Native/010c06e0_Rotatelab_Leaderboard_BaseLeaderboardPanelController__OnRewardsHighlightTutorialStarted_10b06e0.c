/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$OnRewardsHighlightTutorialStarted
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialStarted (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$OnRewardsHighlightTutorialStarted
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialStarted
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialStarted_10b06e0
               (int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_010c0800 + 0x10c06f8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0804 + 0x10c070c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0808 + 0x10c0718));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10);
  iVar3 = 0;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,0x14,0);
  if (*(int *)(**(int **)(_UNK_010c080c + 0x10c0758) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPositionY_2ce7730
            (&uStack_38,uVar5,0,0x3f000000,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,1,0,0,0
             ,0,0);
  puVar4 = *(undefined4 **)(_UNK_010c0810 + 0x10c07b4);
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x28),iVar3,*puVar4);
    if (iVar1 == 0) break;
    Rotatelab_Leaderboard_BaseCompetitor__ShowRewards_10b0814(iVar1,0);
    iVar3 = iVar3 + 1;
    if (iVar3 == 3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$SortCompetitorsByScore
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__SortCompetitorsByScore (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, System_Collections_Generic_List_BaseCompetitor__o* competitors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$SortCompetitorsByScore
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__SortCompetitorsByScore
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this,
   System_Collections_Generic_List_BaseCompetitor__o* competitors, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__SortCompetitorsByScore_10afa10
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  
  pcVar4 = (char *)(_UNK_010bfb1c + 0x10bfa24);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bfb20 + 0x10bfa38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bfb24 + 0x10bfa44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bfb28 + 0x10bfa50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bfb2c + 0x10bfa5c));
    *pcVar4 = '\x01';
  }
  piVar7 = *(int **)(_UNK_010bfb30 + 0x10bfa70);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar3[5];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar3;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bfb34 + 0x10bfab8));
    System_Comparison_object____ctor_1f2562c
              (iVar5,uVar6,**(undefined4 **)(_UNK_010bfb38 + 0x10bfad8),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x14);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = **(int **)(_UNK_010bfb3c + 0x10bfb10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c(0x22,0);
  }
  iVar8 = *(int *)(param_2 + 0xc);
  if (1 < iVar8) {
    uVar6 = *(undefined4 *)(param_2 + 8);
    iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xd4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_Collections_Generic_ArraySortHelper_object___Sort_23cbca4
              (uVar6,0,iVar8,iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xd0));
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}


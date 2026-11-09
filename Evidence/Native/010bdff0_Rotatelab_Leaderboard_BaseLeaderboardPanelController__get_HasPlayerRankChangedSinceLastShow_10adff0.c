/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$get_HasPlayerRankChangedSinceLastShow
bool Rotatelab_Leaderboard_BaseLeaderboardPanelController__get_HasPlayerRankChangedSinceLastShow (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Leaderboard.BaseLeaderboardPanelController$$get_HasPlayerRankChangedSinceLastShow
   bool Rotatelab_Leaderboard_BaseLeaderboardPanelController__get_HasPlayerRankChangedSinceLastShow
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

bool Rotatelab_Leaderboard_BaseLeaderboardPanelController__get_HasPlayerRankChangedSinceLastShow_10adff0
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_010be0d4 + 0x10be004);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be0d8 + 0x10be018));
    *pcVar7 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x14);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar6;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_010be0dc + 0x10be040)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
        goto LAB_010be088;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_010be0dc + 0x10be040),1);
LAB_010be088:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    iVar3 = Rotatelab_Leaderboard_CycleData__get_PlayerRank_10ae0e0(iVar1);
    return iVar3 != *(int *)(iVar1 + 0x1c);
  }
  return false;
}


/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardPanelController$$Show
void Rotatelab_Leaderboard_MidGameLeaderboardPanelController__Show (Rotatelab_Leaderboard_MidGameLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardPanelController$$Show
   void Rotatelab_Leaderboard_MidGameLeaderboardPanelController__Show
   (Rotatelab_Leaderboard_MidGameLeaderboardPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardPanelController__Show_10b84a8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_010c85d0 + 0x10c84bc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c85d4 + 0x10c84d0));
    *pcVar4 = '\x01';
  }
  Rotatelab_Leaderboard_BaseLeaderboardPanelController__Show_10ae4d0(param_1);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(uint *)(iVar1 + 0xb4);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0xc) - 1;
  if ((int)uVar5 < (int)uVar2) {
    uVar2 = uVar5;
  }
  if ((int)uVar5 < 0) {
    uVar2 = 0;
  }
  uVar5 = 0;
  puVar7 = *(undefined4 **)(_UNK_010c85d8 + 0x10c8534);
  while( true ) {
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x48) + 0xc) <= (int)uVar5) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) break;
    iVar6 = *(int *)(iVar1 + uVar5 * 4 + 0x10);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = uVar5 + 1;
    uVar3 = Rotatelab_Leaderboard_MidGameLeaderboardManager__GetWinStreakScore_10b7960(iVar1,uVar5);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Leaderboard_WinStreakStage__Initialize_10b85dc(iVar6,uVar3,~uVar2 + uVar5 == 0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}


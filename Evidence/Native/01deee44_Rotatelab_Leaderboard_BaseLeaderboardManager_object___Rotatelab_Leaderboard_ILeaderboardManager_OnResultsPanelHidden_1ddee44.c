/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Rotatelab.Leaderboard.ILeaderboardManager.OnResultsPanelHidden
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Rotatelab_Leaderboard_ILeaderboardManager_OnResultsPanelHidden (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEE44* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Rotatelab.Leaderboard.ILeaderboardManager.OnResultsPanelHidden
   void 
   Rotatelab_Leaderboard_BaseLeaderboardManager_object___Rotatelab_Leaderboard_ILeaderboardManager_OnResultsPanelHidden
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEE44* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Rotatelab_Leaderboard_ILeaderboardManager_OnResultsPanelHidden_1ddee44
               (int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0xc),0);
  iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x24);
  pcVar4 = (char *)(_UNK_01deebc4 + 0x1dee7d0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01deebc8 + 0x1dee7e4));
    *pcVar4 = '\x01';
  }
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  if (iVar1 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 8) != 0) {
      (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(*param_1 + 0x16c));
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(**(int **)(_UNK_01deebcc + 0x1dee844) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTime__get_Now_2b4a124(&uStack_20,0);
      iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = System_DateTime__op_GreaterThanOrEqual_2b4c364
                        (uStack_20,uStack_1c,*(undefined4 *)(iVar1 + 0x10),
                         *(undefined4 *)(iVar1 + 0x14),0);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(*param_1 + 0x16c));
      }
    }
    iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 8) == 0) {
      iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = Rotatelab_Leaderboard_BaseLeaderboardManager_object___GenerateNewData_1ddef0c
                          (param_1,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x40));
        *(undefined4 *)(iVar1 + 8) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),uVar2);
      }
    }
    iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 8) != 0) {
      iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores_1ddf544
                (param_1,*(undefined4 *)(iVar3 + 8));
    }
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Leaderboard_LeaderboardTutorialController__get_ShouldShow_10b5484
                      (param_1[6],0);
    if (iVar3 != 0) {
      if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_LeaderboardTutorialController__Show_10b56c8(param_1[6],0);
    }
    Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshPlayerRankChangedNotification_1ddf8d8
              (param_1);
  }
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1[5],0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_GameObject__get_activeSelf_360212c(iVar3,0);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores_1ddf544
                (param_1,*(undefined4 *)(iVar3 + 0xc));
      iVar1 = param_1[5];
      iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_LeaderboardResultsController__Show_10b3e94
                (iVar1,*(undefined4 *)(iVar3 + 0xc),0);
    }
  }
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1[8],0);
  iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,*(int *)(iVar1 + 8) != 0,0);
  return;
}


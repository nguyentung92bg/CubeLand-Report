/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Refresh
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Refresh (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE7B4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Refresh
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Refresh
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE7B4* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Refresh_1dde7b4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01deebc4 + 0x1dee7d0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01deebc8 + 0x1dee7e4));
    *pcVar3 = '\x01';
  }
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 8) != 0) {
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
                          (param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x40)
                          );
        *(undefined4 *)(iVar1 + 8) = uVar2;
        thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),uVar2);
      }
    }
    iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 8) != 0) {
      iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores_1ddf544
                (param_1,*(undefined4 *)(iVar1 + 8));
    }
    if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Leaderboard_LeaderboardTutorialController__get_ShouldShow_10b5484
                      (param_1[6],0);
    if (iVar1 != 0) {
      if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_LeaderboardTutorialController__Show_10b56c8(param_1[6],0);
    }
    Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshPlayerRankChangedNotification_1ddf8d8
              (param_1);
  }
  iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[5],0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_GameObject__get_activeSelf_360212c(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores_1ddf544
                (param_1,*(undefined4 *)(iVar1 + 0xc));
      iVar4 = param_1[5];
      iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_LeaderboardResultsController__Show_10b3e94
                (iVar4,*(undefined4 *)(iVar1 + 0xc),0);
    }
  }
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1[8],0);
  iVar4 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,*(int *)(iVar4 + 8) != 0,0);
  return;
}


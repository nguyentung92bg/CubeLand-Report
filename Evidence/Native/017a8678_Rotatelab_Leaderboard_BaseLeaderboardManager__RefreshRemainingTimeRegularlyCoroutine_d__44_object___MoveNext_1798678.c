/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager.<RefreshRemainingTimeRegularlyCoroutine>d__44<object>$$MoveNext
bool Rotatelab_Leaderboard_BaseLeaderboardManager__RefreshRemainingTimeRegularlyCoroutine_d__44_object___MoveNext (Rotatelab_Leaderboard_BaseLeaderboardManager__RefreshRemainingTimeRegularlyCoroutine_d__44_T__o* __this, const MethodInfo_1798678* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Leaderboard.BaseLeaderboardManager.<RefreshRemainingTimeRegularlyCoroutine>d__44<object>$$MoveNext
   bool 
   Rotatelab_Leaderboard_BaseLeaderboardManager__RefreshRemainingTimeRegularlyCoroutine_d__44_object___MoveNext
   (Rotatelab_Leaderboard_BaseLeaderboardManager__RefreshRemainingTimeRegularlyCoroutine_d__44_T__o*
   __this, const MethodInfo_1798678* method); */

bool Rotatelab_Leaderboard_BaseLeaderboardManager__RefreshRemainingTimeRegularlyCoroutine_d__44_object___MoveNext_1798678
               (int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  double dVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_017a89a4 + 0x17a8694);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a89a8 + 0x17a86a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a89ac + 0x17a86b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a89b0 + 0x17a86c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a89b4 + 0x17a86cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_017a89b8 + 0x17a86d8));
    *pcVar3 = '\x01';
  }
  uVar8 = *(uint *)(param_1 + 8);
  piVar7 = *(int **)(param_1 + 0x10);
  uStack_2c = 0;
  uStack_30 = 0;
  if (2 < uVar8) goto LAB_017a88f8;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)Rotatelab_Leaderboard_BaseLeaderboardManager_object___get_CurrentCycle_1dde260
                            (piVar7,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8));
  if (*piVar1 == 0) {
LAB_017a88b8:
    if (*(int *)(**(int **)(_UNK_017a89bc + 0x17a88c4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = Rotatelab_BetterWaitForSeconds__WaitRealtime_107c72c(0x3f800000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    thunk_FUN_00ec5080();
    uVar4 = 1;
  }
  else {
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = (**(code **)(*piVar7 + 0x140))(piVar7,*(undefined4 *)(*piVar7 + 0x144));
    if (iVar2 == 0) goto LAB_017a88b8;
    piVar1 = (int *)Rotatelab_Leaderboard_BaseLeaderboardManager_object___get_CurrentCycle_1dde260
                              (piVar7,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8)
                              );
    iVar2 = *piVar1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(iVar2 + 0x10);
    uVar6 = *(undefined4 *)(iVar2 + 0x14);
    if (*(int *)(**(int **)(_UNK_017a89c0 + 0x17a8788) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_38,0);
    System_DateTime__op_Subtraction_2b4c068(&uStack_30,uStack_34,uVar4,uVar6,uStack_38,uStack_34,0);
    piVar1 = *(int **)(_UNK_017a89c4 + 0x17a87d4);
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar9 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_30,0);
    if (dVar9 <= 0.0) {
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar1;
      }
      uStack_30 = **(undefined4 **)(iVar2 + 0x5c);
      uStack_2c = (*(undefined4 **)(iVar2 + 0x5c))[1];
      Rotatelab_Leaderboard_BaseLeaderboardManager_object___Refresh_1dde7b4
                (piVar7,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x10));
    }
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_017a89c8 + 0x17a8848));
    uVar6 = uStack_2c;
    uVar4 = uStack_30;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar2 + 0x14) + 0x10) == 0) {
      if (*(int *)(**(int **)(_UNK_017a89cc + 0x17a8918) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = 0;
      uVar4 = Rotatelab_Extensions__GetTimeText_fc3638(uVar4,uVar6,0);
      iVar2 = piVar7[0xc];
      while( true ) {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar5) break;
        if (*(uint *)(iVar2 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar7 = *(int **)(iVar2 + 0x10 + uVar5 * 4);
        if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar4,*(undefined4 *)(*piVar7 + 0x2b4));
        uVar5 = uVar5 + 1;
      }
    }
    if (*(int *)(**(int **)(_UNK_017a89d0 + 0x17a8884) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = Rotatelab_BetterWaitForSeconds__WaitRealtime_107c72c(0x3f800000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    thunk_FUN_00ec5080();
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
LAB_017a88f8:
  return uVar8 < 3;
}


/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$CalculateBotScore
void Rotatelab_Leaderboard_LateGameLeaderboardManager__CalculateBotScore (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, Rotatelab_Leaderboard_BotData_o* bot, float elapsedDays, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$CalculateBotScore
   void Rotatelab_Leaderboard_LateGameLeaderboardManager__CalculateBotScore
   (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, Rotatelab_Leaderboard_BotData_o*
   bot, float elapsedDays, const MethodInfo* method); */

void Rotatelab_Leaderboard_LateGameLeaderboardManager__CalculateBotScore_10b690c
               (int param_1,int param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar3 = (char *)(_UNK_010c6bac + 0x10c6934);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bb0 + 0x10c6948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bb4 + 0x10c6954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bb8 + 0x10c6960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bbc + 0x10c696c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bc0 + 0x10c6978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bc4 + 0x10c6984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bc8 + 0x10c6990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6bcc + 0x10c699c));
    *pcVar3 = '\x01';
  }
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  uStack_44 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_010c6bd0 + 0x10c69c8);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c6bd4 + 0x10c6a14));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar4,uVar6,**(undefined4 **)(_UNK_010c6bd8 + 0x10c6a34),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar4;
    thunk_FUN_00ec5080(piVar8,iVar4);
  }
  if (*(int *)(**(int **)(_UNK_010c6bdc + 0x10c6a5c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__Int32Enum__1489bc8
                    (uVar7,uVar5,iVar4,&uStack_44,**(undefined4 **)(_UNK_010c6be0 + 0x10c6a84));
  if (iVar1 == 0) {
    piVar8 = (int *)System_Object__GetType_2bb9c9c(param_1,0);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = (**(code **)(*piVar8 + 0x100))(piVar8,*(undefined4 *)(*piVar8 + 0x104));
    uStack_48 = *(undefined4 *)(param_2 + 0x18);
    uVar5 = FUN_00ec393c(**(undefined4 **)(_UNK_010c6be4 + 0x10c6b48),&uStack_48);
    uVar7 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010c6be8 + 0x10c6b6c),uVar7,uVar5,0);
    if (*(int *)(**(int **)(_UNK_010c6bec + 0x10c6b80) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b238c(uVar7,0);
  }
  else {
    if (1.0 <= param_3) {
      iVar1 = *(int *)(param_2 + 0x14);
      do {
        iVar4 = Rotatelab_Leaderboard_LateGameLeaderboardManager___CalculateBotScore_g__GetScoreInDay_13_1_10b6bf0
                          (0x3f800000,&uStack_44);
        param_3 = param_3 + -1.0;
        iVar1 = iVar4 + iVar1;
        *(int *)(param_2 + 0x14) = iVar1;
      } while (1.0 <= param_3);
    }
    if (0.0 < param_3) {
      iVar4 = *(int *)(param_2 + 0x14);
      iVar1 = Rotatelab_Leaderboard_LateGameLeaderboardManager___CalculateBotScore_g__GetScoreInDay_13_1_10b6bf0
                        (param_3,&uStack_44);
      *(int *)(param_2 + 0x14) = iVar1 + iVar4;
    }
  }
  return;
}


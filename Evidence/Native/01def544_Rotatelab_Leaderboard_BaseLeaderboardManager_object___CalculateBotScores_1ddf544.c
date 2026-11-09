/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$CalculateBotScores
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, Rotatelab_Leaderboard_CycleData_o* data, const MethodInfo_1DDF544* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$CalculateBotScores
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, Rotatelab_Leaderboard_CycleData_o*
   data, const MethodInfo_1DDF544* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores_1ddf544
               (int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar6 = (char *)(_UNK_01def7a8 + 0x1def568);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def7ac + 0x1def57c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def7b0 + 0x1def588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def7b4 + 0x1def594));
    *pcVar6 = '\x01';
  }
  UnityEngine_Random__get_state_35f896c(&uStack_40,0);
  uVar2 = uStack_3c;
  uVar1 = uStack_40;
  if (*(int *)(**(int **)(_UNK_01def7b8 + 0x1def5b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  puVar8 = (undefined4 *)(param_2 + 0x10);
  System_DateTime__get_Now_2b4a124(&uStack_40,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = System_DateTime__op_LessThan_2b4c1e4
                    (uStack_40,uStack_3c,*puVar8,*(undefined4 *)(param_2 + 0x14),0);
  uVar7 = uStack_3c;
  uVar10 = uStack_40;
  if (iVar3 == 0) {
    uVar10 = *puVar8;
    uVar7 = *(undefined4 *)(param_2 + 0x14);
  }
  if (*(int *)(**(int **)(_UNK_01def7bc + 0x1def648) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8(uVar10,uVar7,0);
  iVar4 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8
                    (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),0);
  iVar11 = *(int *)(param_2 + 0x20);
  uVar9 = 0;
  fVar12 = (float)VectorSignedToFloat(iVar3 - iVar4,(byte)(in_fpscr >> 0x16) & 3);
  while( true ) {
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar11 + 0xc) <= (int)uVar9) {
      UnityEngine_Random__set_state_35f8a20(uVar1,uVar2,uStack_38,uStack_34,0);
      return;
    }
    if (*(uint *)(iVar11 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar11 + 0x10 + uVar9 * 4);
    if (iVar3 == 0) break;
    UnityEngine_Random__InitState_35f8920(*(undefined4 *)(iVar3 + 0x20),0);
    uVar7 = *puVar8;
    uVar10 = *(undefined4 *)(param_2 + 0x14);
    if (*(int *)(**(int **)(_UNK_01def7c0 + 0x1def6e0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = System_DateTime__op_LessThan_2b4c1e4(uStack_40,uStack_3c,uVar7,uVar10,0);
    fVar5 = fVar12;
    if (iVar4 != 0) {
      uVar10 = *(undefined4 *)(iVar3 + 0x1c);
      if (*(int *)(**(int **)(_UNK_01def7c4 + 0x1def72c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar5 = (float)Rotatelab_Leaderboard_TimeOfDayExtensions__ElapsedPercentageToday_10b1f88
                               (uVar10,0);
      fVar5 = fVar5 + fVar12;
    }
    *(undefined4 *)(iVar3 + 0x14) = 0;
    (**(code **)(*param_1 + 0x170))(param_1,iVar3,fVar5,*(undefined4 *)(*param_1 + 0x174));
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


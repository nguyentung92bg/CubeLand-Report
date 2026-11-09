/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$CalculateBotScore
void Rotatelab_Leaderboard_MidGameLeaderboardManager__CalculateBotScore (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, Rotatelab_Leaderboard_BotData_o* bot, float elapsedDays, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$CalculateBotScore
   void Rotatelab_Leaderboard_MidGameLeaderboardManager__CalculateBotScore
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, Rotatelab_Leaderboard_BotData_o* bot,
   float elapsedDays, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__CalculateBotScore_10b7528
               (int param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint in_fpscr;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar7 = (char *)(_UNK_010c7910 + 0x10c7550);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7914 + 0x10c7564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7918 + 0x10c7570));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c791c + 0x10c757c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7920 + 0x10c7588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7924 + 0x10c7594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7928 + 0x10c75a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c792c + 0x10c75ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7930 + 0x10c75b8));
    *pcVar7 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  iStack_4c = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar12 = *(int **)(_UNK_010c7934 + 0x10c75e4);
  uVar11 = *(undefined4 *)(param_2 + 0x18);
  iVar1 = *piVar12;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar12;
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x5c);
  iVar9 = puVar5[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar8 = *puVar5;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c7938 + 0x10c7630));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar9,uVar8,**(undefined4 **)(_UNK_010c793c + 0x10c7650),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
    *piVar12 = iVar9;
    thunk_FUN_00ec5080(piVar12,iVar9);
  }
  if (*(int *)(**(int **)(_UNK_010c7940 + 0x10c7678) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__Int32Enum__1489bc8
                    (uVar6,uVar11,iVar9,&iStack_4c,**(undefined4 **)(_UNK_010c7944 + 0x10c76a0));
  if (iVar1 == 0) {
    piVar12 = (int *)System_Object__GetType_2bb9c9c(param_1,0);
    if (piVar12 != (int *)0x0) {
      uVar6 = (**(code **)(*piVar12 + 0x100))(piVar12,*(undefined4 *)(*piVar12 + 0x104));
      uStack_48 = *(undefined4 *)(param_2 + 0x18);
      uVar11 = FUN_00ec393c(**(undefined4 **)(_UNK_010c7948 + 0x10c77c4),&uStack_48);
      uVar6 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_010c794c + 0x10c77e8),uVar6,uVar11,0);
      if (*(int *)(**(int **)(_UNK_010c7950 + 0x10c77fc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__LogError_35b238c(uVar6,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iStack_4c == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(iStack_4c + 0xc),(byte)(in_fpscr >> 0x16) & 3)
  ;
  fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iStack_4c + 0x10),(byte)(in_fpscr >> 0x16) & 3
                                     );
  fVar2 = (float)UnityEngine_Random__get_value_35f8bbc(0);
  pcVar7 = (char *)(_UNK_010c7954 + 0x10c7708);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7958 + 0x10c771c));
    *pcVar7 = '\x01';
  }
  param_3 = (fVar15 + fVar2 * (fVar13 - fVar15)) * param_3;
  if (*(int *)(**(int **)(_UNK_010c795c + 0x10c7734) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar14 = (double)param_3;
  dVar16 = (double)modf(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20),&uStack_48);
  if (0.0 <= param_3) {
    if (dVar16 != 0.5) {
      dVar14 = (double)floor(SUB84(dVar14 + 0.5,0),(int)((ulonglong)(dVar14 + 0.5) >> 0x20));
      goto LAB_010c786c;
    }
    dVar14 = 1.0;
  }
  else {
    if (dVar16 != -0.5) {
      dVar14 = (double)ceil(SUB84(dVar14 + -0.5,0),(int)((ulonglong)(dVar14 + -0.5) >> 0x20));
      goto LAB_010c786c;
    }
    dVar14 = -1.0;
  }
  uVar3 = FUN_00f88224(uStack_48,uStack_44);
  dVar14 = (double)CONCAT44(uStack_44,uStack_48) + dVar14;
  if ((uVar3 & 1) == 0) {
    dVar14 = (double)CONCAT44(uStack_44,uStack_48);
  }
LAB_010c786c:
  if ((dVar14 != _UNK_010c7908) && (0 < (int)(longlong)dVar14)) {
    iVar9 = 0;
    iVar1 = 0;
    do {
      fVar2 = (float)UnityEngine_Random__get_value_35f8bbc(0);
      if (iStack_4c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(param_2 + 0x14);
      iVar4 = 0;
      if (fVar2 < *(float *)(iStack_4c + 0x14)) {
        iVar4 = iVar1 + 1;
      }
      iVar1 = iVar4;
      iVar4 = Rotatelab_Leaderboard_MidGameLeaderboardManager__GetWinStreakScore_10b7960
                        (param_1,iVar1);
      iVar9 = iVar9 + 1;
      *(int *)(param_2 + 0x14) = iVar4 + iVar10;
    } while (iVar9 < (int)(longlong)dVar14);
  }
  return;
}


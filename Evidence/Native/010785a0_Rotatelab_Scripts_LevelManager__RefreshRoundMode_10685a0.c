/* IL2CPP: Rotatelab.Scripts.LevelManager$$RefreshRoundMode
void Rotatelab_Scripts_LevelManager__RefreshRoundMode (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$RefreshRoundMode
   void Rotatelab_Scripts_LevelManager__RefreshRoundMode (Rotatelab_Scripts_LevelManager_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__RefreshRoundMode_10685a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_01078898 + 0x10785b8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107889c + 0x10785cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788a0 + 0x10785d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788a4 + 0x10785e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788a8 + 0x10785f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788ac + 0x10785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788b0 + 0x1078608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788b4 + 0x1078614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788b8 + 0x1078620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010788bc + 0x107862c));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = *(int **)(_UNK_010788c0 + 0x1078660);
  iVar7 = *(int *)(iVar7 + 0xc);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x18),0);
  if (iVar7 < iVar1) {
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = *(int **)(iVar2 + 0x18);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(*piVar9 + 0xfc);
    (**(code **)(*piVar9 + 0xf8))(piVar9,uVar4,iVar7 + 1,iVar7 + 1 >> 0x1f,uVar4);
  }
  if (*(int *)(**(int **)(_UNK_010788c4 + 0x1078710) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Utilities__TryChangeValue_bool__1663d40
                    (param_1 + 0x10,iVar7 < iVar1,**(undefined4 **)(_UNK_010788c8 + 0x1078738));
  if (iVar2 != 0) {
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_LevelManager__set_IsInRoundMode_1067e3c(iVar7 < iVar1);
    puVar5 = *(undefined4 **)(_UNK_010788d0 + 0x1078784);
    if (iVar7 < iVar1) {
      puVar5 = *(undefined4 **)(_UNK_010788cc + 0x107877c);
    }
    uVar4 = *puVar5;
    uVar12 = **(undefined4 **)(_UNK_010788d4 + 0x1078798);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(iVar2 + 0x1c);
    iStack_24 = iVar7;
    uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010788d8 + 0x10787f4) + 0x24),&iStack_24);
    uVar11 = System_String__Format_2a0c2b4
                       (**(undefined4 **)(_UNK_010788dc + 0x1078814),uVar11,uVar8,uVar3,0);
    uVar4 = System_String__Concat_2a0bdec
                      (uVar12,uVar4,**(undefined4 **)(_UNK_010788e0 + 0x1078830),uVar11,0);
    if (*(int *)(**(int **)(_UNK_010788e4 + 0x107884c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__Log_35b1c44(uVar4,0);
    Rotatelab_MetaProgressionController__set_IsCubeLeagueArtworkActivated_fbbee0(iVar7 < iVar1,0);
    if (iVar7 < iVar1) {
      Rotatelab_Leaderboard_LeaderboardTutorialController__ResetIntroductionPhase_10b6310(1,0);
    }
  }
  return;
}


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$PostProcessLoadedData
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___PostProcessLoadedData (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, Rotatelab_Leaderboard_CycleData_o* data, const MethodInfo_1DDF02C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$PostProcessLoadedData
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___PostProcessLoadedData
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, Rotatelab_Leaderboard_CycleData_o*
   data, const MethodInfo_1DDF02C* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___PostProcessLoadedData_1ddf02c
               (int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01def49c + 0x1def04c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def4a0 + 0x1def060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def4a4 + 0x1def06c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def4a8 + 0x1def078));
    *pcVar8 = '\x01';
  }
  if (param_2 != 0) {
    UnityEngine_Random__get_state_35f896c(&uStack_38,0);
    uVar2 = uStack_34;
    uVar1 = uStack_38;
    UnityEngine_Random__InitState_35f8920(*(undefined4 *)(param_2 + 0x24),0);
    iVar10 = param_1[0xb];
    iVar3 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x70);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x70);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x70);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
      }
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar5 = *(int *)(*(int *)(param_3 + 0x10) + 0x60);
      iVar3 = *(int *)(iVar5 + 0x70);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768();
        iVar5 = *(int *)(*(int *)(param_3 + 0x10) + 0x60);
      }
      uVar15 = **(undefined4 **)(iVar3 + 0x5c);
      if ((*(ushort *)(*(int *)(iVar5 + 0x6c) + 0xbd) & 1) == 0) {
        FUN_00efd768();
      }
      iVar3 = thunk_FUN_00f00cdc();
      iVar5 = *(int *)(*(int *)(param_3 + 0x10) + 0x60);
      System_Func_object__int____ctor_239b264
                (iVar3,uVar15,*(undefined4 *)(iVar5 + 0x74),*(undefined4 *)(iVar5 + 0x78));
      iVar6 = *(int *)(param_3 + 0x10);
      iVar5 = *(int *)(*(int *)(iVar6 + 0x60) + 0x70);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768();
        iVar6 = *(int *)(param_3 + 0x10);
      }
      *(int *)(*(int *)(iVar5 + 0x5c) + 4) = iVar3;
      iVar5 = *(int *)(*(int *)(iVar6 + 0x60) + 0x70);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = FUN_00efd768();
      }
      thunk_FUN_00ec5080(*(int *)(iVar5 + 0x5c) + 4,iVar3);
    }
    if (*(int *)(**(int **)(_UNK_01def4ac + 0x1def208) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar10 = Rotatelab_Extensions__Sum_object__148930c
                       (iVar10,iVar3,
                        *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x7c));
    iVar3 = (int)(iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x1e)) >> 2;
    iVar5 = UnityEngine_Random__Range_35f8b14(0,iVar3,0);
    iVar3 = UnityEngine_Random__Range_35f8b14(0,iVar3,0);
    if (param_1[10] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar15 = Rotatelab_Leaderboard_BotNameGeneratorSo__Generate_10b152c
                       (param_1[10],iVar5 + 2,iVar3 + 2,(iVar10 - (iVar5 + iVar3)) + -4,0);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01def4b0 + 0x1def2c4));
    System_Converter_object__object____ctor_1f61750
              (uVar4,param_1,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x84),0);
    iVar3 = Rotatelab_Extensions__ConvertAll_object__object__1484fd8
                      (uVar15,uVar4,**(undefined4 **)(_UNK_01def4b4 + 0x1def2fc));
    piVar11 = (int *)(param_2 + 0x20);
    *piVar11 = iVar3;
    thunk_FUN_00ec5080(piVar11,iVar3);
    uVar14 = 0;
    uVar7 = 0;
    while( true ) {
      if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1[0xb] + 0xc) <= (int)uVar14) break;
      iVar3 = param_1[0xb];
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar10 = uVar7 * 4 + 0x10;
      iVar5 = 0;
      iVar3 = *(int *)(iVar3 + uVar14 * 4 + 0x10);
      while( true ) {
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = uVar7 + iVar5;
        if (*(int *)(iVar3 + 0xc) <= iVar5) break;
        iVar6 = *piVar11;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar6 = *(int *)(iVar6 + iVar10 + iVar5 * 4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar12 = *piVar11;
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar3 + 8);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar12 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar15 = *(undefined4 *)(iVar3 + 0x10);
        iVar6 = *(int *)(iVar12 + iVar10 + iVar5 * 4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar13 = (undefined4 *)(iVar6 + 0x1c);
        *puVar13 = uVar15;
        thunk_FUN_00ec5080(puVar13,uVar15);
        iVar5 = iVar5 + 1;
      }
      uVar14 = uVar14 + 1;
      uVar7 = uVar9;
    }
    (**(code **)(*param_1 + 0x160))
              (&uStack_38,param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(*param_1 + 0x164));
    *(undefined4 *)(param_2 + 0x10) = uStack_38;
    *(undefined4 *)(param_2 + 0x14) = uStack_34;
    UnityEngine_Random__set_state_35f8a20(uVar1,uVar2,uStack_30,uStack_2c,0);
  }
  return;
}


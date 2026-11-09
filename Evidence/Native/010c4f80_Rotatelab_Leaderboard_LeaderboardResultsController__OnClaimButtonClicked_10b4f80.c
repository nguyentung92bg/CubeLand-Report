/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$OnClaimButtonClicked
void Rotatelab_Leaderboard_LeaderboardResultsController__OnClaimButtonClicked (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$OnClaimButtonClicked
   void Rotatelab_Leaderboard_LeaderboardResultsController__OnClaimButtonClicked
   (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardResultsController__OnClaimButtonClicked_10b4f80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_010c523c + 0x10c4f98);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5240 + 0x10c4fac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5244 + 0x10c4fb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5248 + 0x10c4fc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c524c + 0x10c4fd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5250 + 0x10c4fdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5254 + 0x10c4fe8));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(param_1 + 0x14);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar8;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_010c5258 + 0x10c5014)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_010c505c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(_UNK_010c5258 + 0x10c5014),0);
LAB_010c505c:
  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Leaderboard_CycleData__get_PlayerRank_10ae0e0(*(int *)(param_1 + 0x10));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar1 = *(int *)(iVar1 + uVar4 * 4 + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  uVar4 = 0;
  piVar8 = *(int **)(_UNK_010c525c + 0x10c50e0);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar4) {
      Rotatelab_Leaderboard_LeaderboardResultsController__Hide_10b4bb4(param_1);
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar9 = *(int *)(iVar1 + 0x10 + uVar4 * 4);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010c5260 + 0x10c5110));
    if (iVar9 == 0) break;
    uVar7 = *(undefined4 *)(iVar9 + 8);
    uVar10 = *(undefined4 *)(iVar9 + 0x10);
    uVar11 = *(undefined4 *)(iVar9 + 0x14);
    uStack_2c = 0;
    uStack_30 = 0;
    System_Nullable_float____ctor_17dea40
              (&uStack_30,0x3fa00000,**(undefined4 **)(_UNK_010c5264 + 0x10c5148));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar3,uVar7,uVar10,uVar11,uStack_30,uStack_2c,0);
    if (*(int *)(iVar9 + 8) == 0) {
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar8;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 300);
      uVar7 = *(undefined4 *)(param_1 + 0x40);
      if (*(int *)(**(int **)(_UNK_010c5268 + 0x10c51b4) + 0x74) == 0) {
        FUN_00ec3934(**(int **)(_UNK_010c5268 + 0x10c51b4));
      }
      uVar7 = Rotatelab_Extensions__RectTransform_fc1b4c(uVar7,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
                (iVar3,uVar7,*(undefined4 *)(iVar9 + 0x18),0,0xc,
                 **(undefined4 **)(_UNK_010c526c + 0x10c520c));
    }
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


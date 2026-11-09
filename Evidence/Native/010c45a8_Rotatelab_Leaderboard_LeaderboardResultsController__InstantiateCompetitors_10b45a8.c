/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$InstantiateCompetitors
void Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitors (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$InstantiateCompetitors
   void Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitors
   (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitors_10b45a8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  
  pcVar4 = (char *)(_UNK_010c4b40 + 0x10c45bc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b44 + 0x10c45d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b48 + 0x10c45dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b4c + 0x10c45e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b50 + 0x10c45f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b54 + 0x10c4600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b58 + 0x10c460c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b5c + 0x10c4618));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b60 + 0x10c4624));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b64 + 0x10c4630));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b68 + 0x10c463c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b6c + 0x10c4648));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b70 + 0x10c4654));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b74 + 0x10c4660));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b78 + 0x10c466c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4b7c + 0x10c4678));
    *pcVar4 = '\x01';
  }
  piVar10 = *(int **)(_UNK_010c4b80 + 0x10c468c);
  iVar5 = *(int *)(param_1 + 0x34);
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[2];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c4b84 + 0x10c46d8));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_010c4b88 + 0x10c46f8),0)
    ;
    piVar2 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
    *piVar2 = iVar6;
    thunk_FUN_00ec5080(piVar2,iVar6);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar5,iVar6,**(undefined4 **)(_UNK_010c4b8c + 0x10c4730));
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar5) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar10;
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar10;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar3[3];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar8 = *puVar3;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c4b90 + 0x10c47d0));
    System_Comparison_object____ctor_1f2562c
              (iVar5,uVar8,**(undefined4 **)(_UNK_010c4b94 + 0x10c47f0),0);
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0xc);
    *piVar10 = iVar5;
    thunk_FUN_00ec5080(piVar10,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_010c4b98 + 0x10c4818) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__Sort_object__1489244
            (uVar7,iVar5,**(undefined4 **)(_UNK_010c4b9c + 0x10c4838));
  iVar1 = Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitor_object__14ae964
                    (param_1,*(undefined4 *)(param_1 + 0x28),
                     **(undefined4 **)(_UNK_010c4ba0 + 0x10c4850));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_PlayerCompetitor__SetData_10af8f8(iVar1,*(undefined4 *)(param_1 + 0x10));
  uVar9 = 0;
  puVar3 = *(undefined4 **)(_UNK_010c4ba4 + 0x10c4888);
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((2 < uVar9) || (*(int *)(iVar1 + 0xc) <= (int)uVar9)) break;
    iVar1 = Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitor_object__14ae964
                      (param_1,*(undefined4 *)(param_1 + 0x2c),*puVar3);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Leaderboard_BotCompetitor__SetData_10af8bc
              (iVar1,*(undefined4 *)(iVar5 + uVar9 * 4 + 0x10));
    uVar9 = uVar9 + 1;
  }
  piVar10 = *(int **)(param_1 + 0x14);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar10;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_010c4ba8 + 0x10c4944)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xd8);
        goto LAB_010c498c;
      }
      uVar9 = uVar9 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_010c4ba8 + 0x10c4944),3);
LAB_010c498c:
  iVar1 = (*(code *)*puVar3)(piVar10,puVar3[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseLeaderboardPanelController__SortCompetitorsByScore_10afa10
            (iVar1,*(undefined4 *)(param_1 + 0x34));
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
  if (-1 < iVar1 + -1) {
    puVar3 = *(undefined4 **)(_UNK_010c4bac + 0x10c49dc);
    piVar10 = *(int **)(_UNK_010c4bb0 + 0x10c49e4);
    do {
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = iVar1 + -1;
      iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x34),iVar1,*puVar3);
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar2 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (*(int *)(param_1 + 0x34),iVar1,*puVar3);
      iVar6 = iVar1;
      if (piVar2 != (int *)0x0) {
        uVar9 = (uint)*(byte *)(*piVar10 + 0xb8);
        if ((uVar9 <= *(byte *)(*piVar2 + 0xb8)) &&
           (*(int *)(*(int *)(*piVar2 + 100) + uVar9 * 4 + -4) == *piVar10)) {
          if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = Rotatelab_Leaderboard_CycleData__get_PlayerRank_10ae0e0(*(int *)(param_1 + 0x10));
        }
      }
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Leaderboard_BaseCompetitor__SetRank_10afb40(iVar5,iVar6);
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x34),iVar1,*puVar3);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__SetSiblingIndex_3616e84(iVar5,iVar1,0);
    } while (0 < iVar1);
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_GameObject__get_transform_3601c90(*(int *)(param_1 + 0x30),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam03626f10 + 0x3626e9c);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam03626f14 + 0x3626eb0),3,0);
    *pcVar4 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam03626f18 + 0x3626edc);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03626f1c + 0x3626eec);
      *(code **)(iRam03626f20 + 0x3626efc) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x03626f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}


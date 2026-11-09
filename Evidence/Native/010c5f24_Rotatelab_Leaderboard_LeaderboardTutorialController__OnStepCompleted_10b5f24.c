/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$OnStepCompleted
void Rotatelab_Leaderboard_LeaderboardTutorialController__OnStepCompleted (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$OnStepCompleted
   void Rotatelab_Leaderboard_LeaderboardTutorialController__OnStepCompleted
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController__OnStepCompleted_10b5f24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar5;
  int extraout_r1_01;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar9 = (char *)(_UNK_010c62e4 + 0x10c5f38);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c62e8 + 0x10c5f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c62ec + 0x10c5f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c62f0 + 0x10c5f64));
    *pcVar9 = '\x01';
  }
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    Rotatelab_Leaderboard_LeaderboardTutorialController__OnPhaseCompleted_10b5e4c(param_1,1);
    piVar12 = *(int **)(param_1 + 0x1c);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_010c5fc8 + _UNK_010c62f4)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0x108);
          goto code_r0x010c61b8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(&UNK_010c5fc8 + _UNK_010c62f4),9);
code_r0x010c61b8:
    (*(code *)*puVar5)(piVar12,puVar5[1]);
    break;
  case 1:
    piVar12 = *(int **)(param_1 + 0x18);
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piVar8;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(&UNK_010c6080 + _UNK_010c62f8)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xd0);
          goto code_r0x010c61d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar8,**(int **)(&UNK_010c6080 + _UNK_010c62f8),2);
code_r0x010c61d8:
    uVar3 = (*(code *)*puVar5)(piVar8,puVar5[1]);
    uVar3 = System_String__Concat_2a0b574
                      (**(undefined4 **)(&UNK_010c61fc + _UNK_010c62fc),uVar3,
                       **(undefined4 **)(&UNK_010c6208 + _UNK_010c6300),0);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar12 + 0x2b0))(piVar12,uVar3,*(undefined4 *)(*piVar12 + 0x2b4));
    break;
  case 3:
    piVar12 = *(int **)(param_1 + 0x1c);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_010c6024 + _UNK_010c6304)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xd8);
          goto code_r0x010c6180;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(&UNK_010c6024 + _UNK_010c6304),3);
code_r0x010c6180:
    iVar4 = (*(code *)*puVar5)(piVar12,puVar5[1]);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialStarted_10b06e0
              (iVar4);
    break;
  case 4:
    piVar12 = *(int **)(param_1 + 0x1c);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_010c60dc + _UNK_010c6308)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xd8);
          goto code_r0x010c6244;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(&UNK_010c60dc + _UNK_010c6308),3);
code_r0x010c6244:
    iVar4 = (*(code *)*puVar5)(piVar12,puVar5[1]);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnRewardsHighlightTutorialCompleted_10b0b68
              (iVar4);
    break;
  case 5:
    piVar12 = *(int **)(param_1 + 0x1c);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(&UNK_010c6138 + _UNK_010c630c)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xe8);
          goto code_r0x010c627c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(&UNK_010c6138 + _UNK_010c630c),5);
code_r0x010c627c:
    iVar4 = (*(code *)*puVar5)(piVar12,puVar5[1]);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Leaderboard_LeaderboardInfoController__Show_10b2778(iVar4);
  }
  iVar4 = Rotatelab_Leaderboard_LeaderboardTutorialController__IsPhaseCompleted_10b54b8(param_1,2);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x20) + 1;
  }
  else {
    iVar4 = 0x7fffffff;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  pcVar9 = (char *)(_UNK_010c5b54 + 0x10c588c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b58 + 0x10c58a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b5c + 0x10c58ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b60 + 0x10c58b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b64 + 0x10c58c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b68 + 0x10c58d0));
    *pcVar9 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_28,1,0,1,0,0,0);
  uVar3 = extraout_r1;
  if (-1 < *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x20) < *(int *)(*(int *)(param_1 + 0x14) + 0xc)) {
      iVar10 = *(int *)(param_1 + 0x14);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar10 + 0xc) <= *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Leaderboard_LeaderboardTutorialController__GetCanvasGroupFadeTween_10b5b80
                (&uStack_38,extraout_r1,
                 *(undefined4 *)(iVar10 + *(uint *)(param_1 + 0x20) * 4 + 0x10),0);
      PrimeTween_Sequence__Chain_2cee04c
                (&uStack_38,&uStack_28,uStack_38,uStack_34,uStack_30,uStack_2c,0);
      uVar3 = extraout_r1_00;
    }
  }
  *(int *)(param_1 + 0x20) = iVar4;
  if (-1 < iVar4) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 < *(int *)(*(int *)(param_1 + 0x14) + 0xc)) {
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar4 + 0xc) <= *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Leaderboard_LeaderboardTutorialController__GetCanvasGroupFadeTween_10b5b80
                (&uStack_38,uVar3,*(undefined4 *)(iVar4 + *(uint *)(param_1 + 0x20) * 4 + 0x10),1);
      PrimeTween_Sequence__Chain_2cee04c
                (&uStack_38,&uStack_28,uStack_38,uStack_34,uStack_30,uStack_2c,0);
    }
    else {
      Rotatelab_Leaderboard_LeaderboardTutorialController__OnPhaseCompleted_10b5e4c(param_1,2);
    }
    if (-1 < *(int *)(param_1 + 0x20)) {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x20) < *(int *)(*(int *)(param_1 + 0x14) + 0xc)) goto LAB_010c5b0c;
    }
  }
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  piVar12 = *(int **)(_UNK_010c5b6c + 0x10c5a60);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar12;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar10 = puVar5[1];
  if (iVar10 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar11 = *puVar5;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c5b70 + 0x10c5aa8));
    System_Action_object____ctor_1f11414
              (iVar10,uVar11,**(undefined4 **)(_UNK_010c5b74 + 0x10c5ac8),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
    *piVar12 = iVar10;
    thunk_FUN_00ec5080(piVar12,iVar10);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_38,&uStack_28,uVar3,iVar10,0,**(undefined4 **)(_UNK_010c5b78 + 0x10c5af8));
LAB_010c5b0c:
  uVar2 = uStack_1c;
  uVar1 = uStack_20;
  uVar11 = uStack_24;
  uVar3 = uStack_28;
  iVar4 = *(int *)(**(int **)(_UNK_010c5b7c + 0x10c5b1c) + 0x74);
  if (iVar4 == 0) {
    FUN_00ec3934();
    iVar4 = extraout_r1_01;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_38,iVar4,uVar3,uVar11,uVar1,uVar2,0);
  return;
}


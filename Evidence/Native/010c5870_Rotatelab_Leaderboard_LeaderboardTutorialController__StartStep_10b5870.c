/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$StartStep
void Rotatelab_Leaderboard_LeaderboardTutorialController__StartStep (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, int32_t step, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$StartStep
   void Rotatelab_Leaderboard_LeaderboardTutorialController__StartStep
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, int32_t step, const MethodInfo*
   method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController__StartStep_10b5870(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar4;
  int extraout_r1_01;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_010c5b54 + 0x10c588c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b58 + 0x10c58a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b5c + 0x10c58ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b60 + 0x10c58b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b64 + 0x10c58c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5b68 + 0x10c58d0));
    *pcVar6 = '\x01';
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
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Leaderboard_LeaderboardTutorialController__GetCanvasGroupFadeTween_10b5b80
                (&uStack_38,extraout_r1,
                 *(undefined4 *)(iVar7 + *(uint *)(param_1 + 0x20) * 4 + 0x10),0);
      PrimeTween_Sequence__Chain_2cee04c
                (&uStack_38,&uStack_28,uStack_38,uStack_34,uStack_30,uStack_2c,0);
      uVar3 = extraout_r1_00;
    }
  }
  *(int *)(param_1 + 0x20) = param_2;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_2 < *(int *)(*(int *)(param_1 + 0x14) + 0xc)) {
      iVar7 = *(int *)(param_1 + 0x14);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= *(uint *)(param_1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Leaderboard_LeaderboardTutorialController__GetCanvasGroupFadeTween_10b5b80
                (&uStack_38,uVar3,*(undefined4 *)(iVar7 + *(uint *)(param_1 + 0x20) * 4 + 0x10),1);
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
  piVar9 = *(int **)(_UNK_010c5b6c + 0x10c5a60);
  iVar7 = *piVar9;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    iVar7 = *piVar9;
  }
  puVar4 = *(undefined4 **)(iVar7 + 0x5c);
  iVar5 = puVar4[1];
  if (iVar5 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar8 = *puVar4;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c5b70 + 0x10c5aa8));
    System_Action_object____ctor_1f11414(iVar5,uVar8,**(undefined4 **)(_UNK_010c5b74 + 0x10c5ac8),0)
    ;
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
    *piVar9 = iVar5;
    thunk_FUN_00ec5080(piVar9,iVar5);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_38,&uStack_28,uVar3,iVar5,0,**(undefined4 **)(_UNK_010c5b78 + 0x10c5af8));
LAB_010c5b0c:
  uVar2 = uStack_1c;
  uVar1 = uStack_20;
  uVar8 = uStack_24;
  uVar3 = uStack_28;
  iVar7 = *(int *)(**(int **)(_UNK_010c5b7c + 0x10c5b1c) + 0x74);
  if (iVar7 == 0) {
    FUN_00ec3934();
    iVar7 = extraout_r1_01;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14(&uStack_38,iVar7,uVar3,uVar8,uVar1,uVar2,0)
  ;
  return;
}


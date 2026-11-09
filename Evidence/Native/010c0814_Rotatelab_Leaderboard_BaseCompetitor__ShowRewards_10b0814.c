/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$ShowRewards
void Rotatelab_Leaderboard_BaseCompetitor__ShowRewards (Rotatelab_Leaderboard_BaseCompetitor_o* __this, bool autoHideAfterDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$ShowRewards
   void Rotatelab_Leaderboard_BaseCompetitor__ShowRewards (Rotatelab_Leaderboard_BaseCompetitor_o*
   __this, bool autoHideAfterDelay, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseCompetitor__ShowRewards_10b0814(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_010c0b3c + 0x10c0830);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0b40 + 0x10c0844));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0b44 + 0x10c0850));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0b48 + 0x10c085c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0b4c + 0x10c0868));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0b50 + 0x10c0874));
    *pcVar7 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c0b54 + 0x10c0890));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 *)(iVar1 + 8) = param_2;
  thunk_FUN_00ec5080((int *)(iVar1 + 0xc),param_1);
  if (*(int *)(param_1 + 0x50) < 3) {
    piVar9 = *(int **)(param_1 + 0x48);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_010c0b58 + 0x10c08f0)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_010c0938;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_010c0b58 + 0x10c08f0),0);
LAB_010c0938:
    iVar2 = (*(code *)*puVar3)(piVar9,puVar3[1]);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= *(uint *)(param_1 + 0x50)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar2 = *(int *)(iVar2 + *(uint *)(param_1 + 0x50) * 4 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar8 = *(int *)(iVar2 + 8);
    iVar2 = 4;
    while( true ) {
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = iVar2 - 4;
      if (*(int *)(*(int *)(param_1 + 0x40) + 0xc) <= (int)uVar5) break;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = *(int *)(param_1 + 0x40);
      if ((int)uVar5 < *(int *)(iVar8 + 0xc)) {
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar10 = *(int *)(iVar10 + iVar2 * 4);
        if (*(uint *)(iVar8 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Leaderboard_LeaderboardRewardEntry__Show_10b11e4
                  (iVar10,*(undefined4 *)(iVar8 + iVar2 * 4));
      }
      else {
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar10 = *(int *)(iVar10 + iVar2 * 4);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Leaderboard_LeaderboardRewardEntry__Hide_10b127c(iVar10);
      }
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(**(int **)(_UNK_010c0b5c + 0x10c0a60) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0x58),0);
    PrimeTween_Tween__Scale_2ce4684
              (&uStack_40,*(undefined4 *)(param_1 + 0x24),0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,
               0);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c0b60 + 0x10c0adc));
    System_Action___ctor_2b10bac(uVar4,iVar1,**(undefined4 **)(_UNK_010c0b64 + 0x10c0afc),0);
    PrimeTween_Tween__OnComplete_2ceddf8(&uStack_50,&uStack_30,uVar4,0,0);
    *(undefined4 *)(param_1 + 0x58) = uStack_50;
    *(undefined4 *)(param_1 + 0x5c) = uStack_4c;
    *(undefined4 *)(param_1 + 0x60) = uStack_48;
    *(undefined4 *)(param_1 + 100) = uStack_44;
    thunk_FUN_00ec5080(param_1 + 0x60,0);
  }
  return;
}


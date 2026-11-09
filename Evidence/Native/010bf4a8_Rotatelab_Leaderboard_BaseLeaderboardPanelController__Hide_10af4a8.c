/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$Hide
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Hide (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$Hide
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Hide
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Hide_10af4a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  pcVar5 = (char *)(_UNK_010bf868 + 0x10bf4c0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf86c + 0x10bf4d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf870 + 0x10bf4e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf874 + 0x10bf4ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf878 + 0x10bf4f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf87c + 0x10bf504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf880 + 0x10bf510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf884 + 0x10bf51c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf888 + 0x10bf528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf88c + 0x10bf534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf890 + 0x10bf540));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_GameObject__get_activeSelf_360212c(iVar1,0);
  if (iVar1 != 0) {
    PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    if (*(int *)(**(int **)(_UNK_010bf894 + 0x10bf5bc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Alpha_2ce7b44(&uStack_50,uVar6,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_50,&uStack_30,uStack_50,uStack_4c,uStack_48,uStack_44,0);
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    uVar6 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    piVar9 = *(int **)(_UNK_010bf898 + 0x10bf668);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x5c);
    iVar7 = puVar2[1];
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar8 = *puVar2;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bf89c + 0x10bf6b0));
      System_Action_object____ctor_1f11414
                (iVar7,uVar8,**(undefined4 **)(_UNK_010bf8a0 + 0x10bf6d0),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
      *piVar9 = iVar7;
      thunk_FUN_00ec5080(piVar9,iVar7);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_40,&uStack_30,uVar6,iVar7,0,**(undefined4 **)(_UNK_010bf8a4 + 0x10bf704));
    iVar1 = *(int *)(**(int **)(_UNK_010bf8a8 + 0x10bf724) + 0x74);
    if (iVar1 == 0) {
      FUN_00ec3934();
      iVar1 = extraout_r1;
    }
    Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
              (&uStack_40,iVar1,uStack_40,uStack_3c,uStack_38,uStack_34,0);
    piVar9 = *(int **)(_UNK_010bf8ac + 0x10bf764);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_010bf8b0 + 0x10bf79c));
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010bf8b4 + 0x10bf7b0));
    piVar9 = *(int **)(param_1 + 0x14);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_010bf8b8 + 0x10bf7d8)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xe0);
          goto LAB_010bf820;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_010bf8b8 + 0x10bf7d8),4);
LAB_010bf820:
    iVar7 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_HomePageCoordinator__NotifyClosed_107a584(iVar1,*(undefined4 *)(iVar7 + 0x10),0);
  }
  return;
}


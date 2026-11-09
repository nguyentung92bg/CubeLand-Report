/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$Show
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Show (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$Show
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Show
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__Show_10ae4d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar6 = (char *)(_UNK_010be89c + 0x10be4e8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be8a0 + 0x10be4fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be8a4 + 0x10be508));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be8a8 + 0x10be514));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be8ac + 0x10be520));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be8b0 + 0x10be52c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be8b4 + 0x10be538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010be8b8 + 0x10be544));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(param_1 + 0x14);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010be8bc + 0x10be578)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
        goto LAB_010be5c0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar7,**(int **)(_UNK_010be8bc + 0x10be578),1);
LAB_010be5c0:
  iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(undefined4 *)(iVar1 + 8);
  if (*(int *)(**(int **)(_UNK_010be8c0 + 0x10be5f0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Utilities__TryChangeValue_object__1663e28
                    (param_1 + 0x10,uVar8,**(undefined4 **)(_UNK_010be8c4 + 0x10be614));
  if (iVar1 != 0) {
    Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitors_10ae8d8(param_1);
  }
  uVar8 = Rotatelab_Leaderboard_BaseLeaderboardPanelController__get_HasPlayerRankChangedSinceLastShow_10adff0
                    (param_1);
  Rotatelab_Leaderboard_BaseLeaderboardPanelController__RefreshCompetitorRanks_10aebc4
            (param_1,uVar8);
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_010be8c8 + 0x10be648) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar8 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar8,0);
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar8,0xc53b8000,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0,0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_40,1,0,1,0,0,0);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  if (*(int *)(**(int **)(_UNK_010be8cc + 0x10be6fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_78,uVar8,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_50,&uStack_30,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_60,&uStack_30,0x3e19999a,0);
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_28 = uStack_58;
  uStack_24 = uStack_54;
  uVar8 = Rotatelab_Extensions__RectTransform_fc1bd0(*(undefined4 *)(param_1 + 0x1c),0);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_78,0x1b,0);
  PrimeTween_Tween__UIAnchoredPositionY_2ce7730
            (&uStack_78,uVar8,uVar5,0x3eb33333,uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,1,0
             ,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_30,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_78,uStack_6c,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  piVar7 = *(int **)(_UNK_010be8d0 + 0x10be854);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 != 0) {
    Rotatelab_GameAction_bool___Raise_23a280c(iVar1,0,**(undefined4 **)(_UNK_010be8d4 + 0x10be88c));
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$RefreshCompetitorRanks
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__RefreshCompetitorRanks (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, bool animatePlayerPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$RefreshCompetitorRanks
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__RefreshCompetitorRanks
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, bool animatePlayerPosition,
   const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__RefreshCompetitorRanks_10aebc4
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  
  pcVar5 = (char *)(_UNK_010bf40c + 0x10bebe8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf410 + 0x10bebfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf414 + 0x10bec08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf418 + 0x10bec14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf41c + 0x10bec20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf420 + 0x10bec2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf424 + 0x10bec38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf428 + 0x10bec44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf42c + 0x10bec50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf430 + 0x10bec5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf434 + 0x10bec68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf438 + 0x10bec74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf43c + 0x10bec80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf440 + 0x10bec8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf444 + 0x10bec98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf448 + 0x10beca4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf44c + 0x10becb0));
    *pcVar5 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bf450 + 0x10beccc));
  uVar2 = System_Object___ctor_2bb93bc(iVar1,0);
  Rotatelab_Leaderboard_BaseLeaderboardPanelController__SortCompetitorsByScore_10afa10
            (uVar2,*(undefined4 *)(param_1 + 0x28));
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(**(int **)(_UNK_010bf454 + 0x10becfc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar2,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Leaderboard_CycleData__get_PlayerRank_10ae0e0(*(int *)(param_1 + 0x10));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_1 + 0x10);
  *(int *)(iVar1 + 8) = iVar3;
  if (iVar7 != 0) {
    uVar10 = 0;
    if (iVar3 != *(int *)(iVar7 + 0x1c)) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((-1 < *(int *)(iVar7 + 0x1c)) && (param_2 != 0)) {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = *(undefined4 *)(iVar7 + 0x1c);
        fVar13 = *(float *)(param_1 + 0x2c);
        if (*(int *)(**(int **)(_UNK_010bf458 + 0x10bedb8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar12 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
        Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar2,-(fVar13 * fVar12),0);
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Leaderboard_BaseCompetitor__SetRank_10afb40
                  (*(int *)(param_1 + 0x38),*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c));
        iVar7 = *(int *)(param_1 + 0x10);
        uVar10 = 1;
      }
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar1 + 8);
    iVar3 = 0;
    puVar11 = *(undefined4 **)(_UNK_010bf45c + 0x10bee58);
    piVar9 = *(int **)(_UNK_010bf460 + 0x10bee60);
    do {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= iVar3) {
        Rotatelab_Leaderboard_BaseLeaderboardPanelController__FocusOnPlayer_10b02e4(param_1);
        if (uVar10 != 0) {
          if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x1c),0,0);
          PrimeTween_Sequence__Create_2cef1e0(&uStack_68,1,0,1,0,0,0);
          uStack_48 = uStack_68;
          uStack_44 = uStack_64;
          uStack_40 = uStack_60;
          uStack_3c = uStack_5c;
          PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_78,&uStack_48,0x3f800000,0);
          uStack_48 = uStack_78;
          uStack_44 = uStack_74;
          uStack_40 = uStack_70;
          uStack_3c = uStack_6c;
          if (*(int *)(**(int **)(_UNK_010bf468 + 0x10bf008) + 0x74) == 0) {
            FUN_00ec3934();
          }
          PrimeTween_Tween__Scale_2ce4684
                    (&uStack_a0,uVar2,0x3f88f5c3,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
          PrimeTween_Sequence__Chain_2cee04c
                    (&uStack_88,&uStack_48,uStack_a0,uStack_9c,uStack_98,uStack_94,0);
          uStack_48 = uStack_88;
          uStack_44 = uStack_84;
          uStack_40 = uStack_80;
          uStack_3c = uStack_7c;
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 8),
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar12 = *(float *)(param_1 + 0x2c);
          PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_a0,7,0);
          PrimeTween_Tween__UIAnchoredPositionY_2ce7730
                    (&uStack_a0,uVar2,-(fVar12 * fVar13),0x3f800000,uStack_a0,uStack_9c,uStack_98,
                     uStack_94,uStack_90,1,0,0,0,0,0);
          piVar9 = *(int **)(_UNK_010bf46c + 0x10bf11c);
          iVar3 = *piVar9;
          uStack_58 = uStack_a0;
          uStack_54 = uStack_9c;
          uStack_50 = uStack_98;
          uStack_4c = uStack_94;
          if (*(int *)(iVar3 + 0x74) == 0) {
            FUN_00ec3934();
            iVar3 = *piVar9;
          }
          puVar11 = *(undefined4 **)(iVar3 + 0x5c);
          iVar7 = puVar11[3];
          if (iVar7 == 0) {
            if (*(int *)(iVar3 + 0x74) == 0) {
              FUN_00ec3934();
              puVar11 = *(undefined4 **)(**(int **)(_UNK_010bf470 + 0x10bf164) + 0x5c);
            }
            uVar6 = *puVar11;
            iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bf474 + 0x10bf174));
            System_Action_object__Tween____ctor_1f194dc
                      (iVar7,uVar6,**(undefined4 **)(_UNK_010bf478 + 0x10bf194),0);
            piVar9 = (int *)(*(int *)(**(int **)(_UNK_010bf47c + 0x10bf1ac) + 0x5c) + 0xc);
            *piVar9 = iVar7;
            thunk_FUN_00ec5080(piVar9,iVar7);
          }
          if (*(int *)(**(int **)(_UNK_010bf480 + 0x10bf1c4) + 0x74) == 0) {
            FUN_00ec3934();
          }
          PrimeTween_Tween__OnUpdate_object__15d6400
                    (&uStack_a0,&uStack_58,param_1,iVar7,
                     **(undefined4 **)(_UNK_010bf484 + 0x10bf1f0));
          PrimeTween_Sequence__Chain_2cee04c
                    (&uStack_a0,&uStack_48,uStack_a0,uStack_9c,uStack_98,uStack_94,0);
          uStack_48 = uStack_a0;
          uStack_44 = uStack_9c;
          uStack_40 = uStack_98;
          uStack_3c = uStack_94;
          PrimeTween_Tween__Scale_2ce4684
                    (&uStack_68,uVar2,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
          PrimeTween_Sequence__Chain_2cee04c
                    (&uStack_68,&uStack_48,uStack_68,uStack_64,uStack_60,uStack_5c,0);
          uVar6 = *(undefined4 *)(param_1 + 0x38);
          uStack_48 = uStack_68;
          uStack_44 = uStack_64;
          uStack_40 = uStack_60;
          uStack_3c = uStack_5c;
          uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bf488 + 0x10bf2a8));
          System_Action_object____ctor_1f11414
                    (uVar2,iVar1,**(undefined4 **)(_UNK_010bf48c + 0x10bf2c8),0);
          PrimeTween_Sequence__ChainCallback_object__15b4c64
                    (&uStack_78,&uStack_48,uVar6,uVar2,0,
                     **(undefined4 **)(_UNK_010bf490 + 0x10bf2ec));
          piVar9 = *(int **)(_UNK_010bf494 + 0x10bf304);
          uVar2 = *(undefined4 *)(param_1 + 0x1c);
          iVar1 = *piVar9;
          uStack_48 = uStack_78;
          uStack_44 = uStack_74;
          uStack_40 = uStack_70;
          uStack_3c = uStack_6c;
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = *piVar9;
          }
          puVar11 = *(undefined4 **)(iVar1 + 0x5c);
          iVar3 = puVar11[4];
          if (iVar3 == 0) {
            if (*(int *)(iVar1 + 0x74) == 0) {
              FUN_00ec3934();
              puVar11 = *(undefined4 **)(*piVar9 + 0x5c);
            }
            uVar6 = *puVar11;
            iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bf498 + 0x10bf358));
            System_Action_object____ctor_1f11414
                      (iVar3,uVar6,**(undefined4 **)(_UNK_010bf49c + 0x10bf378),0);
            piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x10);
            *piVar9 = iVar3;
            thunk_FUN_00ec5080(piVar9,iVar3);
          }
          PrimeTween_Sequence__ChainCallback_object__15b4c64
                    (&uStack_a0,&uStack_48,uVar2,iVar3,0,
                     **(undefined4 **)(_UNK_010bf4a0 + 0x10bf3b0));
          iVar1 = *(int *)(**(int **)(_UNK_010bf4a4 + 0x10bf3cc) + 0x74);
          if (iVar1 == 0) {
            FUN_00ec3934();
            iVar1 = extraout_r1;
          }
          Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
                    (&uStack_a0,iVar1,uStack_a0,uStack_9c,uStack_98,uStack_94,0);
        }
        return;
      }
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x28),iVar3,*puVar11);
      uVar8 = *(undefined4 *)(param_1 + 0x38);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar6,uVar8,0);
      if ((uVar4 | uVar10 ^ 1) == 1) {
        if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x28),iVar3,*puVar11);
        if (*(int *)(**(int **)(_UNK_010bf464 + 0x10bef00) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar6 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar6,0);
        fVar13 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
        Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar6,-(*(float *)(param_1 + 0x2c) * fVar13),0)
        ;
        if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x28),iVar3,*puVar11);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Leaderboard_BaseCompetitor__SetRank_10afb40(iVar7,iVar3);
      }
      iVar3 = iVar3 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


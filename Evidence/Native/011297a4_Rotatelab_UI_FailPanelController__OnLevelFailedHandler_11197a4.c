/* IL2CPP: Rotatelab.UI.FailPanelController$$OnLevelFailedHandler
void Rotatelab_UI_FailPanelController__OnLevelFailedHandler (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$OnLevelFailedHandler
   void Rotatelab_UI_FailPanelController__OnLevelFailedHandler (Rotatelab_UI_FailPanelController_o*
   __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__OnLevelFailedHandler_11197a4(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  bool bVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint in_fpscr;
  float fVar20;
  undefined8 uVar21;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar13 = (char *)(_UNK_0112a6dc + 0x11297c4);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6e0 + 0x11297d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6e4 + 0x11297e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6e8 + 0x11297f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6ec + 0x11297fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6f0 + 0x1129808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6f4 + 0x1129814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6f8 + 0x1129820));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a6fc + 0x112982c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a700 + 0x1129838));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a704 + 0x1129844));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a708 + 0x1129850));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a70c + 0x112985c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a710 + 0x1129868));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a714 + 0x1129874));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a718 + 0x1129880));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a71c + 0x112988c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a720 + 0x1129898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a724 + 0x11298a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a728 + 0x11298b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a72c + 0x11298bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a730 + 0x11298c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a734 + 0x11298d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a738 + 0x11298e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a73c + 0x11298ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a740 + 0x11298f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a744 + 0x1129904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a748 + 0x1129910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a74c + 0x112991c));
    *pcVar13 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112a750 + 0x1129930));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar3 + 0x34) = **(undefined4 **)(_UNK_0112a754 + 0x1129950);
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x34));
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112a758 + 0x1129968));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Show_1124734(*(int *)(param_1 + 0x10),0,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_PreBoosters_PreBoosterGenerator__ResetUsage_10ed700(*(int *)(param_1 + 0x18),0);
  Rotatelab_UI_FailPanelController__GetCoinOffer_1119100(&uStack_40);
  piVar14 = *(int **)(_UNK_0112a75c + 0x11299e4);
  *(undefined4 *)(param_1 + 0xe8) = uStack_38;
  iVar3 = *piVar14;
  *(ulonglong *)(param_1 + 0xe0) = CONCAT44(uStack_3c,uStack_40);
  *(undefined1 *)(param_1 + 0xd9) = 0;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar14;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x148);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,**(undefined4 **)(_UNK_0112a760 + 0x1129a2c));
  if (*(int *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0xd0),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Febucci_UI_Core_TAnimPlayerBase__ShowText_11d109c
            (*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_0112a764 + 0x1129a90),0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x24),0);
  pcVar13 = (char *)(_UNK_0112a768 + 0x1129ac4);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a76c + 0x1129ad8));
    *pcVar13 = '\x01';
  }
  iVar4 = *(int *)(**(int **)(_UNK_0112a770 + 0x1129af0) + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar3,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
             *(undefined4 *)(iVar4 + 0x14),0);
  piVar14 = *(int **)(_UNK_0112a774 + 0x1129b2c);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  piVar15 = *(int **)(param_1 + 0x28);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112a778 + 0x1129b58));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Scripts_LevelManager__get_CurrentLevelLabel_1067e90(iVar3,0);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar15 + 0x2b0))(piVar15,uVar6,*(undefined4 *)(*piVar15 + 0x2b4));
  piVar15 = *(int **)(param_1 + 0x2c);
  iVar3 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68(0);
  if (iVar3 == 0) {
    puVar7 = *(undefined4 **)(_UNK_0112a77c + 0x1129bec);
  }
  else {
    if (*(int *)(*piVar14 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(0);
    puVar7 = *(undefined4 **)(_UNK_0112a780 + 0x1129be0);
  }
  uVar5 = System_String__Format_29ffb6c(*puVar7,uVar5,0);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar15 + 0x2b0))(piVar15,uVar5,*(undefined4 *)(*piVar15 + 0x2b4));
  piVar14 = *(int **)(param_1 + 0x30);
  uVar5 = System_Int32__ToString_2b6b9ec((int *)(param_1 + 0xe0),0);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar14 + 0x2b0))(piVar14,uVar5,*(undefined4 *)(*piVar14 + 0x2b4));
  puVar7 = *(undefined4 **)(_UNK_0112a784 + 0x1129c6c);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = Rotatelab_Scripts_DockManager__GetPlayOnBlasterCount_1007594
                    (iVar3,*(undefined4 *)(param_1 + 0xe4),0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_DockManager__GetPlayOnBlasterCount_1007594(iVar3,3,0);
  piVar14 = *(int **)(param_1 + 0xa0);
  iVar4 = *(int *)(_UNK_0112a788 + 0x1129cd8);
  uStack_40 = uVar8;
  uVar5 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_40);
  puVar7 = *(undefined4 **)(_UNK_0112a78c + 0x1129cf4);
  uVar5 = System_String__Format_29ffb6c(*puVar7,uVar5,0);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar14 + 0x2b0))(piVar14,uVar5,*(undefined4 *)(*piVar14 + 0x2b4));
  piVar14 = *(int **)(param_1 + 0x34);
  iStack_44 = iVar3;
  uVar5 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&iStack_44);
  uVar5 = System_String__Format_29ffb6c(*puVar7,uVar5,0);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = (**(code **)(*piVar14 + 0x2b0))(piVar14,uVar5,*(undefined4 *)(*piVar14 + 0x2b4));
  uVar16 = 1;
  if ((int)uVar8 < 1) {
    uVar9 = (uint)*(byte *)(param_1 + 0xe8);
  }
  if ((int)uVar8 < 1) {
    uVar16 = uVar9 ^ 1;
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0xa0),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,uVar16 != 0,0);
  if (*(int *)(param_1 + 0xa4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = 0;
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0xa4),uVar16 != 0,0);
  if (*(int *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038
            (*(int *)(param_1 + 0xa8),*(char *)(param_1 + 0xe8) != '\0',0);
  fVar1 = _UNK_01129ebc;
  puVar7 = *(undefined4 **)(_UNK_0112a790 + 0x1129e2c);
  puVar18 = *(undefined4 **)(_UNK_0112a794 + 0x1129e34);
  puVar19 = *(undefined4 **)(_UNK_0112a798 + 0x1129e3c);
  while( true ) {
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x44) + 0xc) <= iVar4) break;
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x44),iVar4,*puVar7);
    uVar6 = thunk_FUN_00f00cdc(*puVar18);
    DG_Tweening_TweenCallback___ctor_11657e8(uVar6,uVar5,*puVar19,0);
    fVar20 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    DG_Tweening_DOVirtual__DelayedCall_11685c0(fVar20 * fVar1,uVar6,1,0);
    iVar4 = iVar4 + 1;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x48),0);
  iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                     (**(undefined4 **)(_UNK_0112a79c + 0x1129eec));
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar10,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,uVar5,0);
  iVar4 = *(int *)(param_1 + 0x54);
  pcVar13 = (char *)(_UNK_0112a7a0 + 0x1129f3c);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112a7a4 + 0x1129f50));
    *pcVar13 = '\x01';
  }
  puVar7 = *(undefined4 **)(**(int **)(_UNK_0112a7a8 + 0x1129f68) + 0x5c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar4,*puVar7,puVar7[1],puVar7[2],0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x3c),0,0xc53b8000,0);
  if (*(int *)(param_1 + 0xac) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_FailProgressLossPage__ShowFirstPage_1117fa8(*(int *)(param_1 + 0xac));
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x40),0,0xc53b8000,0);
  puVar7 = *(undefined4 **)(_UNK_0112a7ac + 0x112a008);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_SatoriFailProofOfferConfigFlag__RefreshBundle_fe80cc
            (*(int *)(iVar4 + 0x88),0);
  if (*(int *)(param_1 + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = 0;
  Rotatelab_Shop_ShopPanelBundleItem__RefreshIfBundleChanged_10c0e48(*(int *)(param_1 + 0xbc),0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112a7b0 + 0x112a064));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_SeasonPass_SeasonPassController__get_IsSeasonPassPurchased_10a01b8(iVar4,0);
  iVar10 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar6,0);
  if (iVar10 == 0) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = Rotatelab_SeasonPass_SeasonPassController__IsSeasonPassAvailable_10a3248(iVar4,0);
  }
  if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (1 < *(int *)(*(int *)(param_1 + 0xb4) + 0xc)) {
    if (*(int *)(param_1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0xb4),1,**(undefined4 **)(_UNK_0112a7b4 + 0x112a0ec));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar4,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar4,uVar5,0);
  }
  Rotatelab_UI_FailPanelController__RebuildCarouselItems_111a7e0(param_1);
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  if (*(int *)(**(int **)(_UNK_0112a7b8 + 0x112a144) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_39b0474(uVar5,0);
  Rotatelab_UI_FailPanelController__ResetCarouselScrollPosition_111aa5c(param_1);
  if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x6c),0,0xc53b8000,0);
  uVar5 = thunk_FUN_00f00cdc(*puVar18);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar5,param_1,**(undefined4 **)(_UNK_0112a7bc + 0x112a1b4),0);
  uVar5 = DG_Tweening_DOVirtual__DelayedCall_11685c0(0x3fc00000,uVar5,1,0);
  *(undefined4 *)(param_1 + 0xd4) = uVar5;
  thunk_FUN_00ec5080();
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar14 = *(int **)(_UNK_0112a7c0 + 0x112a20c);
  if (*(int *)(iVar4 + 0x34) != 0) {
    iVar4 = *(int *)(*(int *)(iVar4 + 0x34) + 0x14);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    uVar21 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar5,0);
    uVar5 = (undefined4)((ulonglong)uVar21 >> 0x20);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__GetDailyCap_fe7244
                      (iVar4,uVar5,(int)uVar21,uVar5,0);
    piVar15 = *(int **)(_UNK_0112a7c4 + 0x112a274);
    iVar10 = *piVar15;
    if (*(int *)(iVar10 + 0x74) == 0) {
      FUN_00ec3934();
      iVar10 = *piVar15;
    }
    uVar12 = 0;
    if ((*(char *)(*(int *)(iVar10 + 0x5c) + 2) != '\0') &&
       ((0 < (int)uVar8 || (*(char *)(param_1 + 0xe8) != '\0')))) {
      if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar12 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0xb8) + 0xc)) {
        uVar12 = 1;
      }
    }
    puVar18 = *(undefined4 **)(_UNK_0112a7c8 + 0x112a2dc);
    *(undefined1 *)(param_1 + 0xda) = uVar12;
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar18);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0x4c) == 0) {
      bVar2 = 0;
    }
    else {
      if (*(int *)(*piVar14 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
      iVar10 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar5,0);
      iVar11 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar11 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *(int *)(*(int *)(iVar11 + 0x34) + 0x14);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *(int *)(iVar11 + 0x14);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar2 = 0;
      if ((*(int *)(iVar11 + 0x10) <= iVar10) && (bVar2 = 1, iVar3 < 1)) {
        bVar2 = *(byte *)(param_1 + 0xda) ^ 1;
      }
    }
    *(bool *)(param_1 + 0xd8) = bVar2 != 0;
    if (*(int *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x98),0,0);
    uVar5 = 0x3f800000;
    bVar17 = true;
    if (*(char *)(param_1 + 0xd8) != '\0') {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = RemoteVariableSO_bool___get_value_1a81e78
                        (*(int *)(iVar3 + 0x20),**(undefined4 **)(_UNK_0112a7cc + 0x112a410));
      if (iVar3 != 0) {
        iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0112a7d0 + 0x112a42c));
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar3,0);
        iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar6,0);
        if (iVar3 < *(int *)(param_1 + 0xe0)) {
          iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 0x14);
          if (*(int *)(**(int **)(_UNK_0112a7d4 + 0x112a4a0) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar6 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
          uVar21 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar6,0);
          uVar6 = (undefined4)((ulonglong)uVar21 >> 0x20);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar3 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__IsCapActive_fe72e8
                            (iVar3,uVar6,(int)uVar21,uVar6,0);
          if (iVar3 != 0) {
            piVar14 = *(int **)(param_1 + 0x38);
            iVar3 = Rotatelab_RotateConstants__get_TotalRewardedUseCount_1078e84(0);
            uStack_40 = iVar4 - iVar3 & ~(iVar4 - iVar3 >> 0x1f);
            iVar3 = *(int *)(_UNK_0112a7d8 + 0x112a520);
            uVar5 = FUN_00ec393c(*(undefined4 *)(iVar3 + 0x24),&uStack_40);
            iStack_44 = iVar4;
            uVar6 = FUN_00ec393c(*(undefined4 *)(iVar3 + 0x24),&iStack_44);
            uVar5 = System_String__Format_2a0c264
                              (**(undefined4 **)(_UNK_0112a7dc + 0x112a558),uVar5,uVar6,0);
            if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            (**(code **)(*piVar14 + 0x2b0))(piVar14,uVar5,*(undefined4 *)(*piVar14 + 0x2b4));
            iVar3 = Rotatelab_RotateConstants__get_TotalRewardedUseCount_1078e84(0);
            bVar17 = iVar3 < iVar4;
            if (*(int *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x98),1,0);
            uVar5 = 0x3e8c8c8d;
            if (iVar3 < iVar4) {
              uVar5 = 0x3f800000;
            }
          }
        }
        else {
          *(undefined1 *)(param_1 + 0xd8) = 0;
        }
      }
    }
    piVar14 = *(int **)(param_1 + 0xb0);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar14 + 0x178))
              (piVar14,0x3f800000,0x3f800000,0x3f800000,uVar5,*(undefined4 *)(*piVar14 + 0x17c));
    if (*(int *)(param_1 + 0x9c) != 0) {
      UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x9c),bVar17,0);
      if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038
                (*(int *)(param_1 + 0x5c),*(char *)(param_1 + 0xd8) != '\0',0);
      uVar5 = 0xc4278000;
      if ((*(char *)(param_1 + 0xda) == '\0') &&
         (uVar5 = 0xc4610000, *(char *)(param_1 + 0xd8) == '\0')) {
        uVar5 = 0xc4480000;
      }
      if (*(int *)(param_1 + 0x54) != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x54),0,uVar5,0);
        if (*(char *)(param_1 + 0xda) != '\0') {
          if (*(int *)(param_1 + 0xdc) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Video_VideoPlayer__Play_39eb9e4(*(int *)(param_1 + 0xdc),0);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


/* IL2CPP: Rotatelab.UI.SuccessPanelController$$OnLevelSucceededHandler
void Rotatelab_UI_SuccessPanelController__OnLevelSucceededHandler (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$OnLevelSucceededHandler
   void Rotatelab_UI_SuccessPanelController__OnLevelSucceededHandler
   (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__OnLevelSucceededHandler_111dee4(int param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  
  pcVar12 = (char *)(_UNK_0112ee3c + 0x112df04);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee40 + 0x112df18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee44 + 0x112df24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee48 + 0x112df30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee4c + 0x112df3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee50 + 0x112df48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee54 + 0x112df54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee58 + 0x112df60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee5c + 0x112df6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee60 + 0x112df78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee64 + 0x112df84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee68 + 0x112df90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee6c + 0x112df9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee70 + 0x112dfa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee74 + 0x112dfb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee78 + 0x112dfc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee7c + 0x112dfcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee80 + 0x112dfd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee84 + 0x112dfe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee88 + 0x112dff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee8c + 0x112dffc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee90 + 0x112e008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee94 + 0x112e014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee98 + 0x112e020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112ee9c + 0x112e02c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112eea0 + 0x112e038));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112eea4 + 0x112e044));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112eea8 + 0x112e050));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112eeac + 0x112e05c));
    *pcVar12 = '\x01';
  }
  piVar5 = (int *)Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0112eeb0 + 0x112e070));
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = (**(code **)(*piVar5 + 0x140))(piVar5,*(undefined4 *)(*piVar5 + 0x144));
  puVar11 = *(undefined4 **)(_UNK_0112eeb4 + 0x112e0a4);
  *(undefined1 *)(param_1 + 0x9c) = uVar4;
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_SeasonPass_SeasonPassController__IsSeasonPassAvailable_10a3248(iVar6,0);
  puVar11 = *(undefined4 **)(_UNK_0112eeb8 + 0x112e0d8);
  *(undefined1 *)(param_1 + 0x9d) = uVar4;
  piVar5 = (int *)Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = (**(code **)(*piVar5 + 0x140))(piVar5,*(undefined4 *)(*piVar5 + 0x144));
  piVar5 = *(int **)(_UNK_0112eebc + 0x112e118);
  *(undefined1 *)(param_1 + 0x9e) = uVar4;
  iVar6 = *piVar5;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar5;
  }
  iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x148);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar6,0,**(undefined4 **)(_UNK_0112eec0 + 0x112e154));
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(*(int *)(param_1 + 0x58),0);
  if (*(int *)(param_1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x8c),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar6,1,0);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112eec4 + 0x112e1c0));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = *(int *)(*(int *)(iVar6 + 0x18) + 0x50);
  iVar6 = Rotatelab_GameExtensions__Multiplier_fb4f04(iVar13,0);
  iVar15 = *(int *)(*(int *)(*piVar5 + 0x5c) + 0x19c);
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool__Int32Enum___Raise_23a3c20
            (iVar15,1,iVar13,**(undefined4 **)(_UNK_0112eec8 + 0x112e224));
  iVar15 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                     (**(undefined4 **)(_UNK_0112eecc + 0x112e238));
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = Rotatelab_RainbowShooter_RainbowShooterController__get_RainbowShooterCurrentProgress_10ab8c0
                    (iVar15,0);
  Rotatelab_RainbowShooter_RainbowShooterController__set_RainbowShooterCurrentProgress_10ab9c0
            (iVar15,iVar7 + 1,0);
  iVar15 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                     (**(undefined4 **)(_UNK_0112eed0 + 0x112e290));
  if (iVar13 == 2) {
    iVar13 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_0112eedc + 0x112e32c));
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar13 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = (uint *)(*(int *)(iVar13 + 0x54) + 0x14);
  }
  else if (iVar13 == 1) {
    iVar13 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_0112eed8 + 0x112e2f4));
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar13 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = (uint *)(*(int *)(iVar13 + 0x54) + 0x10);
  }
  else {
    if (iVar13 != 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0112ef4c + 0x112ede8));
      uVar16 = thunk_FUN_00f00cdc();
      uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0112ef50 + 0x112edfc));
      System_ArgumentException___ctor_2b113a4(uVar16,uVar10,0);
      uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0112ef54 + 0x112ee18));
      func_0x00ec3920(uVar16,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    iVar13 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_0112eed4 + 0x112e2bc));
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar13 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = (uint *)(*(int *)(iVar13 + 0x54) + 0xc);
  }
  uVar9 = *puVar8;
  puVar8 = (uint *)(param_1 + 0x28);
  *puVar8 = uVar9;
  *(int *)(param_1 + 0x2c) = (int)uVar9 >> 0x1f;
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = Rotatelab_Debugging_CreativeCanvasController__get_CubeLeagueIncreaseAmountOfTrophyPerLevel_110ae98
                     (iVar15);
  if (iVar13 == 1) {
    *(int *)(param_1 + 0x30) = iVar6;
  }
  else {
    uVar16 = Rotatelab_Debugging_CreativeCanvasController__get_CubeLeagueIncreaseAmountOfTrophyPerLevel_110ae98
                       (iVar15);
    *(undefined4 *)(param_1 + 0x30) = uVar16;
  }
  iVar13 = Rotatelab_Debugging_CreativeCanvasController__get_SeasonPassIncreaseAmountOfCubePerLevel_110ad20
                     (iVar15);
  *(int *)(param_1 + 0x34) = iVar13 * iVar6;
  iVar13 = Rotatelab_Debugging_CreativeCanvasController__get_CrownTournamentIncreaseAmountOfCrownPerLevel_110afd0
                     (iVar15);
  if (iVar13 == 1) {
    if (*(char *)(param_1 + 0x9e) == '\0') {
      iVar13 = 0;
    }
    else {
      iVar13 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                         (**(undefined4 **)(_UNK_0112eee0 + 0x112e43c));
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar13 = Rotatelab_Leaderboard_MidGameLeaderboardManager__AdvancePlayerWinStreakAndGetScore_10b7a88
                         (iVar13,0);
    }
    iVar13 = iVar13 * iVar6;
  }
  else {
    iVar13 = Rotatelab_Debugging_CreativeCanvasController__get_CrownTournamentIncreaseAmountOfCrownPerLevel_110afd0
                       (iVar15);
  }
  puVar11 = *(undefined4 **)(_UNK_0112eee4 + 0x112e484);
  *(int *)(param_1 + 0x38) = iVar13;
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = *puVar8;
  uVar16 = *(undefined4 *)(param_1 + 0x2c);
  iVar6 = *(int *)(iVar6 + 0x1c);
  if (*(int *)(**(int **)(_UNK_0112eee8 + 0x112e4ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar16 = System_Convert__ToInt32_2b1db84(uVar9,uVar16,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar17 = *(undefined4 **)(_UNK_0112eeec + 0x112e4fc);
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(iVar6,uVar16,*puVar17);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = *(int *)(iVar6 + 0x20);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar11);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar16 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar6 + 0x10),0);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(iVar13,uVar16,*puVar17);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112eef0 + 0x112e56c));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820
            (*(int *)(iVar6 + 0x2c),*(int *)(param_1 + 0x34),*puVar17);
  piVar5 = *(int **)(_UNK_0112eef4 + 0x112e5b0);
  iVar6 = *piVar5;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar5;
  }
  if (**(int **)(iVar6 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (**(int **)(iVar6 + 0x5c),1,**(undefined4 **)(_UNK_0112eef8 + 0x112e5e8));
  if (*(char *)(param_1 + 0x9c) == '\0') {
    if (*(char *)(param_1 + 0x9e) == '\0') goto LAB_0112e674;
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112ef04 + 0x112e644));
    uVar16 = *(undefined4 *)(param_1 + 0x38);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar11 = *(undefined4 **)(_UNK_0112ef08 + 0x112e668);
  }
  else {
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112eefc + 0x112e608));
    uVar16 = *(undefined4 *)(param_1 + 0x30);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar11 = *(undefined4 **)(_UNK_0112ef00 + 0x112e62c);
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___IncreasePlayerScore_1ddf4b8
            (iVar6,uVar16,*puVar11);
LAB_0112e674:
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = 0;
  uVar16 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar16 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar16,0);
  Rotatelab_UI_SuccessPanelController__CheckNewItem_111ef58(param_1,uVar16);
  cVar1 = *(char *)(param_1 + 0x9c);
  bVar19 = cVar1 == '\0';
  if (bVar19) {
    cVar1 = *(char *)(param_1 + 0x9e);
  }
  if (!bVar19 || cVar1 != '\0') {
    uVar4 = *(undefined1 *)(param_1 + 0x9d);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x10),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Transform__get_parent_36148d8(iVar6,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetSiblingIndex_3616e84(iVar6,uVar4,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x1c),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Transform__get_parent_36148d8(iVar6,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Component__get_gameObject_35fe360(iVar6,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar6,*(char *)(param_1 + 0x9c) != '\0',0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x20),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Transform__get_parent_36148d8(iVar6,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Component__get_gameObject_35fe360(iVar6,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar6,*(char *)(param_1 + 0x9d) != '\0',0);
  uVar16 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_0112ef0c + 0x112e820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = UnityEngine_Object__op_Inequality_36018e4(uVar16,0,0);
  if (iVar6 != 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x24),0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_Transform__get_parent_36148d8(iVar6,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_Component__get_gameObject_35fe360(iVar6,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar6,*(char *)(param_1 + 0x9e) != '\0',0);
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar16 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x38),(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34
              (*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_0112ef10 + 0x112e8f8),uVar16,0);
  }
  piVar14 = *(int **)(param_1 + 0x10);
  uVar16 = System_Int64__ToString_2b6cd68(puVar8,0);
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar14 + 0x2b0))(piVar14,uVar16,*(undefined4 *)(*piVar14 + 0x2b4));
  iVar6 = *(int *)(param_1 + 0x14);
  uVar9 = *(uint *)(param_1 + 0xa4);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  lVar2 = (ulonglong)uVar9 * (ulonglong)*puVar8;
  uVar16 = FUN_00f88368((int)lVar2,
                        *(int *)(param_1 + 0x2c) * uVar9 +
                        *puVar8 * ((int)uVar9 >> 0x1f) + (int)((ulonglong)lVar2 >> 0x20));
  TMPro_TMP_Text__SetText_34ffc34(iVar6,**(undefined4 **)(_UNK_0112ef14 + 0x112e97c),uVar16,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar16 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa4),(byte)(in_fpscr >> 0x16) & 3);
  puVar11 = *(undefined4 **)(_UNK_0112ef18 + 0x112e9b4);
  TMPro_TMP_Text__SetText_34ffc34(*(int *)(param_1 + 0x18),*puVar11,uVar16,0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar16 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(*(int *)(param_1 + 0x1c),*puVar11,uVar16,0);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar16 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x34),(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(*(int *)(param_1 + 0x20),*puVar11,uVar16,0);
    piVar14 = *(int **)(param_1 + 0x60);
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112ef1c + 0x112ea2c));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar16 = Rotatelab_Scripts_LevelManager__get_CurrentLevelLabel_1067e90(iVar6,0);
    if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar14 + 0x2b0))(piVar14,uVar16,*(undefined4 *)(*piVar14 + 0x2b4));
    if (*(int *)(param_1 + 0x5c) != 0) {
      iVar6 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x5c),0);
      pcVar12 = (char *)(_UNK_0112ef20 + 0x112eaa0);
      if (*pcVar12 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0112ef24 + 0x112eab4));
        *pcVar12 = '\x01';
      }
      iVar13 = *(int *)(**(int **)(_UNK_0112ef28 + 0x112eacc) + 0x5c);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_localScale_36155dc
                (iVar6,*(undefined4 *)(iVar13 + 0xc),*(undefined4 *)(iVar13 + 0x10),
                 *(undefined4 *)(iVar13 + 0x14),0);
      if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__set_anchoredPosition_3613610
                (*(int *)(param_1 + 100),0,0xc53b8000,0);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar13 = 0;
        Febucci_UI_Core_TAnimPlayerBase__ShowText_11d109c
                  (*(int *)(param_1 + 0x5c),**(undefined4 **)(_UNK_0112ef2c + 0x112eb48),0);
        iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0112ef30 + 0x112eb5c));
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar6 + 0x4c) != 0) {
          if (*(int *)(*piVar5 + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar16 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
          iVar6 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar16,0);
          iVar13 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                             (**(undefined4 **)(_UNK_0112ef34 + 0x112ebb0));
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar13 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar13 = *(int *)(*(int *)(iVar13 + 0x34) + 0x14);
          if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar15 = *(int *)(iVar13 + 0x14);
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar13 = 0;
          if (*(int *)(iVar15 + 0x14) <= iVar6) {
            iVar13 = 1;
          }
        }
        piVar5 = *(int **)(_UNK_0112ef38 + 0x112ec10);
        uVar16 = *(undefined4 *)(param_1 + 0x50);
        if (*(int *)(*piVar5 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar10 = _UNK_0112ee2c;
        if (iVar13 != 0) {
          uVar10 = _UNK_0112ee28;
        }
        uVar16 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar16,0);
        if (*(int *)(*piVar5 + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Extensions__SetAnchoredPosX_fc1f1c(uVar16,uVar10,0);
        uVar10 = _UNK_0112ee30;
        if (iVar13 != 0) {
          uVar10 = _UNK_0112ee34;
        }
        if (*(int *)(*piVar5 + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Extensions__SetSizeDeltaX_fc1fec(uVar16,uVar10,0);
        if (*(int *)(param_1 + 0x54) != 0) {
          iVar15 = 0;
          iVar6 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x54),0);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_GameObject__SetActive_3602038(iVar6,iVar13,0);
          fVar3 = _UNK_0112ee38;
          puVar17 = *(undefined4 **)(_UNK_0112ef3c + 0x112ecec);
          puVar11 = *(undefined4 **)(_UNK_0112ef40 + 0x112ecf4);
          puVar18 = *(undefined4 **)(_UNK_0112ef44 + 0x112ecfc);
          while( true ) {
            if (*(int *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(*(int *)(param_1 + 0x68) + 0xc) <= iVar15) break;
            if (*(int *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar16 = System_Collections_Generic_List_object___get_Item_267d814
                               (*(int *)(param_1 + 0x68),iVar15,*puVar17);
            uVar10 = thunk_FUN_00f00cdc(*puVar11);
            DG_Tweening_TweenCallback___ctor_11657e8(uVar10,uVar16,*puVar18,0);
            fVar20 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x16) & 3);
            DG_Tweening_DOVirtual__DelayedCall_11685c0(fVar20 * fVar3,uVar10,1,0);
            iVar15 = iVar15 + 1;
          }
          uVar16 = thunk_FUN_00f00cdc(*puVar11);
          DG_Tweening_TweenCallback___ctor_11657e8
                    (uVar16,param_1,**(undefined4 **)(_UNK_0112ef48 + 0x112ed9c),0);
          uVar16 = DG_Tweening_DOVirtual__DelayedCall_11685c0(0x3fa00000,uVar16,1,0);
          puVar11 = (undefined4 *)(param_1 + 0x90);
          *puVar11 = uVar16;
          if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
            puVar8 = (uint *)(_UNK_00f30584 + ((uint)puVar11 >> 0x11) * 4 + 0xf547cc);
            do {
              bVar19 = (bool)hasExclusiveAccess(puVar8);
            } while (!bVar19);
            *puVar8 = *puVar8 | 1 << (((uint)puVar11 & 0x1ffff) >> 0xc);
            return;
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
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


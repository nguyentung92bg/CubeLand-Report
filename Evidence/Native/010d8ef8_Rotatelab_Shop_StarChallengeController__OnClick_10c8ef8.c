/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnClick
void Rotatelab_Shop_StarChallengeController__OnClick (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029adc24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$OnClick
   void Rotatelab_Shop_StarChallengeController__OnClick (Rotatelab_Shop_StarChallengeController_o*
   __this, const MethodInfo* method); */

uint * Rotatelab_Shop_StarChallengeController__OnClick_10c8ef8(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  float fVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  int extraout_r1;
  int *piVar11;
  int unaff_r4;
  int *piVar12;
  undefined4 unaff_r5;
  char *pcVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  int *piStack_24;
  undefined8 in_stack_ffffffe0;
  
  pcVar13 = (char *)(_UNK_010d90d8 + 0x10d8f10);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d90dc + 0x10d8f24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d90e0 + 0x10d8f30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d90e4 + 0x10d8f3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d90e8 + 0x10d8f48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d90ec + 0x10d8f54));
    *pcVar13 = '\x01';
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    iVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_localScale_36154c0(&piStack_24,iVar4,0);
    uVar3 = DG_Tweening_ShortcutExtensions__DOScale_116b840
                      (uVar3,(float)piStack_24 * _UNK_010d90d4,
                       (float)in_stack_ffffffe0 * _UNK_010d90d4,
                       (float)((ulonglong)in_stack_ffffffe0 >> 0x20) * _UNK_010d90d4,0x3ccccccd,0);
    DG_Tweening_TweenSettingsExtensions__SetLoops_object__15da2dc
              (uVar3,2,1,**(undefined4 **)(_UNK_010d90f0 + 0x10d8ff4));
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar5 = (uint *)Rotatelab_UI_PopupController__Show_1124734(*(int *)(param_1 + 0x48),0,0);
    return puVar5;
  }
  uVar3 = DG_Tweening_ShortcutExtensions__DOShakeRotation_116bef4
                    (*(undefined4 *)(param_1 + 0x44),0x3f000000,0x40a00000,10,0x42b40000,1,0,0);
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d90f4 + 0x10d906c));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,param_1,**(undefined4 **)(_UNK_010d90f8 + 0x10d9088),0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
            (uVar3,uVar6,**(undefined4 **)(_UNK_010d90fc + 0x10d90a0));
  if (*(int *)(**(int **)(_UNK_010d9100 + 0x10d90b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar13 = (char *)(_UNK_0108e7e0 + 0x108e740);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e7e4 + 0x108e754));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e7e8 + 0x108e760));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108e7ec + 0x108e76c));
    *pcVar13 = '\x01';
  }
  piVar11 = *(int **)(_UNK_0108e7f0 + 0x108e780);
  iVar4 = *piVar11;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar11;
  }
  iVar4 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar4 + 0x5c),**(undefined4 **)(_UNK_0108e7f4 + 0x108e7a4));
  if (iVar4 == 0) {
    return (uint *)0x0;
  }
  if (*(int *)(**(int **)(_UNK_0108e7f8 + 0x108e7c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar13 = (char *)(_UNK_029aa0d4 + 0x29a9f04);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0d8 + 0x29a9f18),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0dc + 0x29a9f24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0e0 + 0x29a9f30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0e4 + 0x29a9f3c));
    *pcVar13 = '\x01';
  }
  piVar11 = *(int **)(_UNK_029aa0e8 + 0x29a9f50);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar13 = (char *)(_UNK_029aa0ec + 0x29a9f6c);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029aa0f0 + 0x29a9f80));
    *pcVar13 = '\x01';
  }
  iVar4 = *piVar11;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar11;
  }
  if (*(char *)(*(int *)(iVar4 + 0x5c) + 0x1c) == '\0') {
    return (uint *)0x0;
  }
  if (*(int *)(**(int **)(_UNK_029aa0f4 + 0x29a9fc8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Lofelt_NiceVibrations_HapticPatterns__GetPresetForType_299bf8c(&stack0xffffffe4,2);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = Lofelt_NiceVibrations_HapticController__Init_29988b0();
  if (iVar4 == 0) {
    piVar11 = *(int **)(_UNK_029aa0f8 + 0x29aa048);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar13 = (char *)(_UNK_029aa0fc + 0x29aa064);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_029aa100 + 0x29aa078));
      *pcVar13 = '\x01';
    }
    iVar4 = *piVar11;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar11;
    }
    if (*(char *)(*(int *)(iVar4 + 0x5c) + 9) == '\0') {
      return (uint *)0x0;
    }
    if (*(int *)(**(int **)(_UNK_029aa104 + 0x29aa0b4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar13 = (char *)(_UNK_029abc00 + 0x29abb78);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_029abc04 + 0x29abb8c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_029abc08 + 0x29abb98));
      *pcVar13 = '\x01';
    }
    piVar11 = *(int **)(_UNK_029abc0c + 0x29abbac);
    iVar4 = *piVar11;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar11;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 4);
    uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x24);
    if (*(int *)(**(int **)(_UNK_029abc10 + 0x29abbcc) + 0x74) == 0) {
      FUN_00ec3934(**(int **)(_UNK_029abc10 + 0x29abbcc));
    }
    pcVar13 = (char *)(_UNK_029adc68 + 0x29adb0c);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_029adc6c + 0x29adb20));
      FUN_00ec37c0(*(undefined4 *)(_UNK_029adc70 + 0x29adb2c));
      *pcVar13 = '\x01';
    }
    piStack_24 = (int *)0x0;
    piVar11 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_029adc74 + 0x29adb44),1);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((unaff_r4 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(unaff_r4,*(undefined4 *)(*piVar11 + 0x20)), iVar4 == 0)) {
      uVar9 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar9,0);
    }
    if (piVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar11[4] = unaff_r4;
    thunk_FUN_00ec5080(piVar11 + 4,unaff_r4);
    piStack_24 = piVar11;
    uVar9 = UnityEngine_AndroidJNIHelper__CreateJNIArgArray_3576fec(piVar11,0);
    if (*(int *)(**(int **)(_UNK_029adc78 + 0x29adbdc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Lofelt_NiceVibrations_JNIHelpers__Call_299d73c(uVar3,uVar6,uVar9);
    puVar5 = (uint *)UnityEngine_AndroidJNIHelper__DeleteJNIArgArray_3577a4c(piStack_24,uVar9,0);
    return puVar5;
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Lofelt_NiceVibrations_HapticController__Load_299959c(unaff_r5);
  Lofelt_NiceVibrations_HapticController__Loop_299a5f0(0);
  pcVar13 = (char *)(_UNK_029a9d58 + 0x29a9990);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d5c + 0x29a99a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d60 + 0x29a99b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d64 + 0x29a99bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d68 + 0x29a99c8));
    *pcVar13 = '\x01';
  }
  piVar11 = *(int **)(_UNK_029a9d6c + 0x29a99dc);
  puVar5 = (uint *)*piVar11;
  if (puVar5[0x1d] == 0) {
    FUN_00ec3934();
    puVar5 = (uint *)*piVar11;
  }
  if (*(char *)(puVar5[0x17] + 0x1c) == '\0') {
    return puVar5;
  }
  if (puVar5[0x1d] == 0) {
    FUN_00ec3934();
  }
  iVar4 = Lofelt_NiceVibrations_HapticController__Init_29988b0();
  if (iVar4 == 0) {
    piVar12 = *(int **)(_UNK_029a9d80 + 0x29a9af8);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar13 = (char *)(_UNK_029a9d84 + 0x29a9b14);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d88 + 0x29a9b28));
      *pcVar13 = '\x01';
    }
    iVar4 = *piVar12;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar12;
    }
    bVar14 = 0;
    fVar7 = _UNK_029a9d50;
    if (*(char *)(*(int *)(iVar4 + 0x5c) + 9) != '\0') {
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar13 = (char *)(_UNK_029a9d8c + 0x29a9b7c);
      if (*pcVar13 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d90 + 0x29a9b90));
        *pcVar13 = '\x01';
      }
      iVar4 = *piVar11;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar11;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x18);
      if (*(int *)(**(int **)(_UNK_029a9d94 + 0x29a9bbc) + 0x74) == 0) {
        FUN_00ec3934(**(int **)(_UNK_029a9d94 + 0x29a9bbc));
      }
      fVar7 = (float)Lofelt_NiceVibrations_HapticPatterns__GetPresetDuration_2999e44(uVar3);
      if (*pcVar13 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d98 + 0x29a9bfc));
        *pcVar13 = '\x01';
      }
      iVar4 = *piVar11;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar11;
      }
      Lofelt_NiceVibrations_HapticPatterns__PlayPreset_2999eec
                (*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x18));
    }
  }
  else {
    iVar4 = *piVar11;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar11;
    }
    fVar17 = *(float *)(*(int *)(iVar4 + 0x5c) + 8) - *(float *)(*(int *)(iVar4 + 0x5c) + 0x10);
    piVar12 = *(int **)(_UNK_029a9d70 + 0x29a9a54);
    fVar7 = _UNK_029a9d50;
    if (0.0 < fVar17) {
      fVar7 = fVar17;
    }
    if (*(int *)(*piVar12 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar13 = (char *)(_UNK_029a9d74 + 0x29a9a7c);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_029a9d78 + 0x29a9a90));
      *pcVar13 = '\x01';
    }
    iVar4 = *piVar12;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar12;
    }
    bVar14 = *(byte *)(*(int *)(iVar4 + 0x5c) + 0xc);
    if (*(int *)(**(int **)(_UNK_029a9d7c + 0x29a9abc) + 0x74) == 0) {
      FUN_00ec3934(**(int **)(_UNK_029a9d7c + 0x29a9abc));
    }
    Lofelt_NiceVibrations_LofeltHaptics__Play_2999d9c();
  }
  iVar4 = *piVar11;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar11;
  }
  iVar10 = *(int *)(iVar4 + 0x5c);
  iVar4 = *(int *)(iVar10 + 0x2c);
  *(byte *)(iVar10 + 0x16) = *(byte *)(iVar10 + 0x15) & bVar14;
  if (iVar4 != 0) {
    (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
  }
  iVar10 = *piVar11;
  iVar4 = *(int *)(iVar10 + 0x74);
  if (fVar7 <= 0.0) {
    if (iVar4 == 0) {
      FUN_00ec3934();
    }
    pcVar13 = (char *)(_UNK_029a996c + 0x29a98d4);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_029a9970 + 0x29a98e8));
      *pcVar13 = '\x01';
    }
    piVar11 = *(int **)(_UNK_029a9974 + 0x29a98fc);
    iVar4 = *piVar11;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar11;
    }
    iVar4 = *(int *)(iVar4 + 0x5c);
    *(undefined1 *)(iVar4 + 0x16) = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    if (*(int *)(iVar4 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Timers_Timer__set_Enabled_3131064(*(int *)(iVar4 + 4),0,0);
    iVar4 = *(int *)(*(int *)(*piVar11 + 0x5c) + 0x30);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029a9964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (uint *)(**(code **)(iVar4 + 0xc))
                                 (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
      return puVar5;
    }
    return (uint *)0x0;
  }
  if (iVar4 == 0) {
    FUN_00ec3934();
    iVar10 = *piVar11;
    iVar4 = extraout_r1;
  }
  iVar10 = *(int *)(*(int *)(iVar10 + 0x5c) + 4);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Timers_Timer__set_Interval_31314dc
            (iVar10,iVar4,SUB84((double)(fVar7 * _UNK_029a9d54),0),
             (int)((ulonglong)(double)(fVar7 * _UNK_029a9d54) >> 0x20));
  iVar4 = *(int *)(*(int *)(*piVar11 + 0x5c) + 4);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Timers_Timer__set_AutoReset_3130fbc(iVar4,0,0);
  iVar4 = *(int *)(*(int *)(*piVar11 + 0x5c) + 4);
  if (iVar4 != 0) {
    bVar2 = *(char *)(*(int *)(*piVar11 + 0x5c) + 0x16) == '\0';
    puVar5 = (uint *)(uint)bVar2;
    pcVar13 = (char *)(iRam0314127c + 0x3141080);
    if (*pcVar13 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03141280 + 0x3141094),puVar5,0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03141284 + 0x31410a0));
      *pcVar13 = '\x01';
    }
    puVar8 = (uint *)System_ComponentModel_Component__get_DesignMode_31878f0(iVar4,0);
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)(uint)*(byte *)(iVar4 + 0x21);
      if (puVar8 == (uint *)0x0) {
        if ((uint *)(uint)*(byte *)(iVar4 + 0x20) == puVar5) {
          return (uint *)(uint)*(byte *)(iVar4 + 0x20);
        }
        if (puVar5 == (uint *)0x0) {
          piVar11 = (int *)(iVar4 + 0x34);
          puVar5 = (uint *)0x0;
          if (*piVar11 != 0) {
            *(undefined4 *)(iVar4 + 0x3c) = 0;
            thunk_FUN_00ec5080((undefined4 *)(iVar4 + 0x3c),0);
            if (*(int *)(iVar4 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            System_Threading_Timer__Dispose_2bf055c(*(int *)(iVar4 + 0x34),0);
            *piVar11 = 0;
            puVar5 = (uint *)thunk_FUN_00ec5080(piVar11,0);
          }
          *(bool *)(iVar4 + 0x20) = bVar2;
          return puVar5;
        }
        puVar5 = (uint *)(iVar4 + 0x34);
        *(bool *)(iVar4 + 0x20) = bVar2;
        if (*puVar5 != 0) {
          iVar10 = System_Timers_Timer__CalculateRoundedInterval_3131298
                             ((int)*(undefined8 *)(iVar4 + 0x18),
                              (int)((ulonglong)*(undefined8 *)(iVar4 + 0x18) >> 0x20),0);
          if (*(int *)(iVar4 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Threading_Timer__Change_2bf0134
                    (*(int *)(iVar4 + 0x34),iVar10,iVar10,iVar10 >> 0x1f);
          return (uint *)0x1;
        }
        if (*(char *)(iVar4 + 0x30) != '\0') {
          piVar11 = (int *)System_Object__GetType_2bb9c9c(iVar4,0);
          thunk_FUN_00b87610();
          uVar3 = (**(code **)(*piVar11 + 0x100))(piVar11,*(undefined4 *)(*piVar11 + 0x104));
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_03141290 + 0x314124c));
          uVar6 = thunk_FUN_00f00cdc();
          System_ObjectDisposedException___ctor_2b80700(uVar6,uVar3,0);
          uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_03141294 + 0x314126c));
          FUN_01f4fe28(uVar6,uVar3);
                    /* WARNING: Subroutine does not return */
          FUN_01f4fe2c();
        }
        uVar6 = System_Timers_Timer__CalculateRoundedInterval_3131298
                          ((int)*(undefined8 *)(iVar4 + 0x18),
                           (int)((ulonglong)*(undefined8 *)(iVar4 + 0x18) >> 0x20),0);
        uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_03141288 + 0x314119c));
        System_Object___ctor_2bb93bc(uVar3,0);
        *(undefined4 *)(iVar4 + 0x3c) = uVar3;
        thunk_FUN_00ec5080((undefined4 *)(iVar4 + 0x3c),uVar3);
        uVar15 = *(undefined4 *)(iVar4 + 0x38);
        uVar16 = *(undefined4 *)(iVar4 + 0x3c);
        cVar1 = *(char *)(iVar4 + 0x28);
        uVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0314128c + 0x31411d0));
        uVar3 = uVar6;
        if (cVar1 == '\0') {
          uVar3 = 0xffffffff;
        }
        System_Threading_Timer___ctor_2befeec(uVar9,uVar15,uVar16,uVar6,uVar3,0);
        *(undefined4 *)(iVar4 + 0x34) = uVar9;
        if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
          return puVar5;
        }
        puVar8 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar2);
        *puVar8 = *puVar8 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
        return puVar8;
      }
    }
    else {
      *(bool *)(iVar4 + 0x20) = bVar2;
    }
    *(bool *)(iVar4 + 0x22) = bVar2;
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}


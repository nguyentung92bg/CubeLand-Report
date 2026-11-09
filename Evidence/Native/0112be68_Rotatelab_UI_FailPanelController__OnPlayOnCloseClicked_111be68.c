/* IL2CPP: Rotatelab.UI.FailPanelController$$OnPlayOnCloseClicked
void Rotatelab_UI_FailPanelController__OnPlayOnCloseClicked (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$OnPlayOnCloseClicked
   void Rotatelab_UI_FailPanelController__OnPlayOnCloseClicked (Rotatelab_UI_FailPanelController_o*
   __this, const MethodInfo* method); */

int Rotatelab_UI_FailPanelController__OnPlayOnCloseClicked_111be68(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  code *UNRECOVERED_JUMPTABLE;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  uint in_fpscr;
  double dVar17;
  float fVar18;
  double dVar19;
  double adStack_60 [2];
  float fStack_4c;
  float fStack_48;
  int aiStack_44 [3];
  undefined8 uStack_38;
  
  pcVar13 = (char *)(_UNK_0112c2ac + 0x112be80);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2b0 + 0x112be94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2b4 + 0x112bea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2b8 + 0x112beac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2bc + 0x112beb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2c0 + 0x112bec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2c4 + 0x112bed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2c8 + 0x112bedc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2cc + 0x112bee8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2d0 + 0x112bef4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2d4 + 0x112bf00));
    *pcVar13 = '\x01';
  }
  if (*(int *)(param_1 + 0xac) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = Rotatelab_UI_FailProgressLossPage__TryShow_111857c(*(int *)(param_1 + 0xac));
  if (iVar7 == 0) {
    puVar5 = *(undefined4 **)(_UNK_0112c2dc + 0x112bf70);
    *(undefined1 *)(param_1 + 0xd9) = 0;
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar7,3,0);
    DG_Tweening_ShortcutExtensions__DOScale_116ba14(*(undefined4 *)(param_1 + 0x54),0,0x3dcccccd,0);
    if (*(int *)(param_1 + 0xdc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Video_VideoPlayer__Stop_39ebad0(*(int *)(param_1 + 0xdc),0);
    uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                      (*(undefined4 *)(param_1 + 0x40),0,0x453b8000,0x3ecccccd);
    puVar5 = *(undefined4 **)(_UNK_0112c2e0 + 0x112c00c);
    DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1c,*puVar5);
    uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                      (*(undefined4 *)(param_1 + 0x6c),0,0x453b8000,0x3ecccccd);
    DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1c,*puVar5);
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x3c),0,0xc53b8000,0)
    ;
    iVar2 = *(int *)(param_1 + 0x20);
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0112c2e4 + 0x112c070));
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar7,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = Rotatelab_ObservableEnergy__get_IsInfinite_fb31e4(iVar7,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,uVar4,0);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    pcVar13 = (char *)(_UNK_0112c2e8 + 0x112c0e0);
    if (*pcVar13 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112c2ec + 0x112c0f4));
      *pcVar13 = '\x01';
    }
    puVar8 = *(undefined4 **)(**(int **)(_UNK_0112c2f0 + 0x112c110) + 0x5c);
    uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864(uVar4,*puVar8,puVar8[1],0x3ecccccd);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1c,*puVar5);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                      (uVar4,0x3e4ccccd,**(undefined4 **)(_UNK_0112c2f4 + 0x112c148));
    piVar10 = *(int **)(_UNK_0112c2f8 + 0x112c164);
    iVar7 = *piVar10;
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      iVar7 = *piVar10;
    }
    puVar5 = *(undefined4 **)(iVar7 + 0x5c);
    iVar2 = puVar5[3];
    if (iVar2 == 0) {
      if (*(int *)(iVar7 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar14 = *puVar5;
      iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112c2fc + 0x112c1ac));
      DG_Tweening_TweenCallback___ctor_11657e8
                (iVar2,uVar14,**(undefined4 **)(_UNK_0112c300 + 0x112c1cc),0);
      piVar9 = (int *)(*(int *)(*piVar10 + 0x5c) + 0xc);
      *piVar9 = iVar2;
      thunk_FUN_00ec5080(piVar9,iVar2);
    }
    iVar7 = DG_Tweening_TweenSettingsExtensions__OnStart_object__15d9e64
                      (uVar4,iVar2,**(undefined4 **)(_UNK_0112c304 + 0x112c1f8));
    iVar2 = *piVar10;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar10;
    }
    puVar5 = *(undefined4 **)(iVar2 + 0x5c);
    iVar12 = puVar5[4];
    if (iVar12 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar4 = *puVar5;
      iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112c308 + 0x112c250));
      DG_Tweening_TweenCallback___ctor_11657e8
                (iVar12,uVar4,**(undefined4 **)(_UNK_0112c30c + 0x112c270),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x10);
      *piVar10 = iVar12;
      thunk_FUN_00ec5080(piVar10,iVar12);
    }
    uVar4 = **(undefined4 **)(_UNK_0112c310 + 0x112c29c);
    cVar1 = '\0';
    if (iVar7 != 0) {
      cVar1 = *(char *)(iVar7 + 0x94);
    }
    if (iVar7 != 0 && cVar1 != '\0') {
      *(int *)(iVar7 + 0x4c) = iVar12;
      thunk_FUN_00ec5080((int *)(iVar7 + 0x4c),iVar12,uVar4);
    }
    return iVar7;
  }
  iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112c2d8 + 0x112bf34));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar13 = (char *)(_UNK_0109dd40 + 0x109dc0c);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109dd44 + 0x109dc20));
    *pcVar13 = '\x01';
  }
  if (*(int *)(iVar7 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar7 + 0x1c),3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar16 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar2 + 0x2c) == 0.0) << 0x1e;
  if (!SUB41(uVar16 >> 0x1e,0)) {
    uStack_38 = 0;
    iVar7 = Rotatelab_Audio_AudioManager__PlaySfx_108dd4c(iVar7,3,0,0);
    if (*(int *)(**(int **)(_UNK_0109dd48 + 0x109dcb8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar7,0,0);
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar6 = (float)UnityEngine_AudioSource__get_volume_35995c4(iVar7,0);
    pcVar13 = (char *)(_UNK_035a9744 + 0x35a96c8);
    if (*pcVar13 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9748 + 0x35a96dc),fVar6 * 1.0,0);
      *pcVar13 = '\x01';
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar7 + 8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar7,0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a974c + 0x35a9714);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a9750 + 0x35a9724);
      *(code **)(_UNK_035a9754 + 0x35a9734) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x035a9740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar7 = (*UNRECOVERED_JUMPTABLE)(iVar2,fVar6 * 1.0);
    return iVar7;
  }
  pcVar13 = (char *)(_UNK_0109e6d4 + 0x109e1e8);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6d8 + 0x109e1fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6dc + 0x109e208));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6e0 + 0x109e214));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6e4 + 0x109e220));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6e8 + 0x109e22c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6ec + 0x109e238));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6f0 + 0x109e244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6f4 + 0x109e250));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6f8 + 0x109e25c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e6fc + 0x109e268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e700 + 0x109e274));
    *pcVar13 = '\x01';
  }
  aiStack_44[0] = 0;
  fStack_48 = 0.0;
  fStack_4c = 0.0;
  iVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar7 + 0x14),**(undefined4 **)(_UNK_0109e704 + 0x109e28c));
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar7 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar7 + 0x1c),3);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar2,aiStack_44,&fStack_48,&fStack_4c);
  fVar18 = fStack_4c;
  fVar6 = _UNK_0109e6d0;
  pcVar13 = (char *)(_UNK_0109e708 + 0x109e2fc);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e70c + 0x109e310));
    *pcVar13 = '\x01';
  }
  fVar18 = fVar18 / fVar6;
  if (*(int *)(**(int **)(_UNK_0109e710 + 0x109e328) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar17 = (double)fVar18;
  dVar19 = (double)modf(SUB84(dVar17,0),(int)((ulonglong)dVar17 >> 0x20),adStack_60);
  if (NAN(fVar18)) {
    uVar16 = uVar16 & 0xfffffff | (uint)(dVar19 == -0.5) << 0x1e;
    if (!SUB41(uVar16 >> 0x1e,0)) {
      dVar17 = (double)ceil(SUB84(dVar17 + -0.5,0),(int)((ulonglong)(dVar17 + -0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar17 = -1.0;
  }
  else {
    uVar16 = uVar16 & 0xfffffff | (uint)(dVar19 == 0.5) << 0x1e;
    if (!SUB41(uVar16 >> 0x1e,0)) {
      dVar17 = (double)floor(SUB84(dVar17 + 0.5,0),(int)((ulonglong)(dVar17 + 0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar17 = 1.0;
  }
  uVar3 = FUN_00f88224(SUB84(adStack_60[0],0),(int)((ulonglong)adStack_60[0] >> 0x20));
  dVar17 = adStack_60[0] + dVar17;
  if ((uVar3 & 1) == 0) {
    dVar17 = adStack_60[0];
  }
LAB_0109e3c4:
  iVar2 = (int)(longlong)dVar17;
  uVar16 = uVar16 & 0xfffffff | (uint)(dVar17 == _UNK_0109e6c8) << 0x1e;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (SUB41(uVar16 >> 0x1e,0)) {
    iVar2 = 1;
  }
  fVar18 = (float)VectorSignedToFloat(iVar2,(byte)(uVar16 >> 0x16) & 3);
  fVar18 = fVar18 * fVar6;
  fStack_4c = fVar18;
  if (*(int *)(iVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  for (iVar12 = *(int *)(*(int *)(iVar7 + 0x30) + 0xc); iVar12 <= iVar2; iVar12 = iVar12 + 1) {
    iVar11 = *(int *)(iVar7 + 0x30);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e714 + 0x109e424));
    System_Object___ctor_2bb93bc(uVar4,0);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar15 = *(int *)(iVar11 + 8);
    uVar16 = *(uint *)(iVar11 + 0xc);
    piVar10 = *(int **)(_UNK_0109e718 + 0x109e464);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar16 < *(uint *)(iVar15 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar16 + 1;
      puVar5 = (undefined4 *)(iVar15 + uVar16 * 4 + 0x10);
      *puVar5 = uVar4;
      thunk_FUN_00ec5080(puVar5,uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar11,uVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar10 + 0x10) + 0x60) + 0x38));
    }
  }
  if (*(int *)(iVar7 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(iVar7 + 0x30),iVar2,**(undefined4 **)(_UNK_0109e71c + 0x109e4dc));
  if (iVar2 != 0) {
    piVar10 = (int *)(iVar2 + 8);
    iVar12 = *piVar10;
    if (*(int *)(**(int **)(_UNK_0109e720 + 0x109e508) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar12 = UnityEngine_Object__op_Equality_36033f4(iVar12,0,0);
    if (iVar12 != 0) {
      iVar7 = Rotatelab_Audio_AudioManager__GetAudioSource_108dae0(iVar7,0);
      *piVar10 = iVar7;
      thunk_FUN_00ec5080(piVar10,iVar7);
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_AudioSource__set_pitch_35997b0(*piVar10,fVar18,0);
    }
    if (*piVar10 != 0) {
      UnityEngine_AudioSource__PlayOneShot_3599a58(*piVar10,aiStack_44[0],fStack_48 * 1.0,0);
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      if (aiStack_44[0] != 0) {
        fVar6 = (float)UnityEngine_AudioClip__get_length_3598a44(aiStack_44[0],0);
        piVar10 = *(int **)(_UNK_0109e724 + 0x109e5dc);
        iVar7 = *piVar10;
        if (*(int *)(iVar7 + 0x74) == 0) {
          FUN_00ec3934();
          iVar7 = *piVar10;
        }
        puVar5 = *(undefined4 **)(iVar7 + 0x5c);
        iVar12 = puVar5[4];
        if (iVar12 == 0) {
          if (*(int *)(iVar7 + 0x74) == 0) {
            FUN_00ec3934();
            puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
          }
          uVar4 = *puVar5;
          iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e728 + 0x109e628));
          System_Action_object____ctor_1f11414
                    (iVar12,uVar4,**(undefined4 **)(_UNK_0109e72c + 0x109e648),0);
          piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 0x10);
          *piVar10 = iVar12;
          thunk_FUN_00ec5080(piVar10,iVar12);
        }
        if (*(int *)(**(int **)(_UNK_0109e730 + 0x109e674) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar7 = PrimeTween_Tween__Delay_object__15d6154
                          (adStack_60,iVar2,fVar6 / fVar18,iVar12,0,0,
                           **(undefined4 **)(_UNK_0109e734 + 0x109e69c));
        return iVar7;
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


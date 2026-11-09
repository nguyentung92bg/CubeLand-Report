/* IL2CPP: Rotatelab.UI.FailPanelController.<>c$$<OnPlayOnCloseClicked>b__69_0
void Rotatelab_UI_FailPanelController___c___OnPlayOnCloseClicked_b__69_0 (Rotatelab_UI_FailPanelController___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController.<>c$$<OnPlayOnCloseClicked>b__69_0
   void Rotatelab_UI_FailPanelController___c___OnPlayOnCloseClicked_b__69_0
   (Rotatelab_UI_FailPanelController___c_o* __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController___c___OnPlayOnCloseClicked_b__69_0_111cf1c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  code *UNRECOVERED_JUMPTABLE;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint in_fpscr;
  double dVar13;
  float fVar14;
  double dVar15;
  double adStack_60 [2];
  float fStack_4c;
  float fStack_48;
  int aiStack_44 [3];
  undefined8 uStack_38;
  
  pcVar9 = (char *)(_UNK_0112cf7c + 0x112cf2c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cf80 + 0x112cf40));
    *pcVar9 = '\x01';
  }
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112cf84 + 0x112cf54));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_0109dd40 + 0x109dc0c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109dd44 + 0x109dc20));
    *pcVar9 = '\x01';
  }
  if (*(int *)(iVar6 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar6 + 0x1c),6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar1 + 0x2c) == 0.0) << 0x1e;
  if (!SUB41(uVar12 >> 0x1e,0)) {
    uStack_38 = 0;
    iVar6 = Rotatelab_Audio_AudioManager__PlaySfx_108dd4c(iVar6,6,0,0);
    if (*(int *)(**(int **)(_UNK_0109dd48 + 0x109dcb8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(iVar6,0,0);
    if (iVar1 == 0) {
      return;
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar5 = (float)UnityEngine_AudioSource__get_volume_35995c4(iVar6,0);
    pcVar9 = (char *)(_UNK_035a9744 + 0x35a96c8);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9748 + 0x35a96dc),fVar5 * 1.0,0);
      *pcVar9 = '\x01';
    }
    if (iVar6 != 0) {
      iVar1 = *(int *)(iVar6 + 8);
      if (iVar1 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a974c + 0x35a9714);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a9750 + 0x35a9724);
          *(code **)(_UNK_035a9754 + 0x35a9734) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035a9740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar1,fVar5 * 1.0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar6,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_0109e6d4 + 0x109e1e8);
  if (*pcVar9 == '\0') {
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
    *pcVar9 = '\x01';
  }
  aiStack_44[0] = 0;
  fStack_48 = 0.0;
  fStack_4c = 0.0;
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar6 + 0x14),**(undefined4 **)(_UNK_0109e704 + 0x109e28c));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar6 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar6 + 0x1c),6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar1,aiStack_44,&fStack_48,&fStack_4c);
  fVar14 = fStack_4c;
  fVar5 = _UNK_0109e6d0;
  pcVar9 = (char *)(_UNK_0109e708 + 0x109e2fc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e70c + 0x109e310));
    *pcVar9 = '\x01';
  }
  fVar14 = fVar14 / fVar5;
  if (*(int *)(**(int **)(_UNK_0109e710 + 0x109e328) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar13 = (double)fVar14;
  dVar15 = (double)modf(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),adStack_60);
  if (NAN(fVar14)) {
    uVar12 = uVar12 & 0xfffffff | (uint)(dVar15 == -0.5) << 0x1e;
    if (!SUB41(uVar12 >> 0x1e,0)) {
      dVar13 = (double)ceil(SUB84(dVar13 + -0.5,0),(int)((ulonglong)(dVar13 + -0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar13 = -1.0;
  }
  else {
    uVar12 = uVar12 & 0xfffffff | (uint)(dVar15 == 0.5) << 0x1e;
    if (!SUB41(uVar12 >> 0x1e,0)) {
      dVar13 = (double)floor(SUB84(dVar13 + 0.5,0),(int)((ulonglong)(dVar13 + 0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar13 = 1.0;
  }
  uVar2 = FUN_00f88224(SUB84(adStack_60[0],0),(int)((ulonglong)adStack_60[0] >> 0x20));
  dVar13 = adStack_60[0] + dVar13;
  if ((uVar2 & 1) == 0) {
    dVar13 = adStack_60[0];
  }
LAB_0109e3c4:
  iVar1 = (int)(longlong)dVar13;
  uVar12 = uVar12 & 0xfffffff | (uint)(dVar13 == _UNK_0109e6c8) << 0x1e;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (SUB41(uVar12 >> 0x1e,0)) {
    iVar1 = 1;
  }
  fVar14 = (float)VectorSignedToFloat(iVar1,(byte)(uVar12 >> 0x16) & 3);
  fVar14 = fVar14 * fVar5;
  fStack_4c = fVar14;
  if (*(int *)(iVar6 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  for (iVar10 = *(int *)(*(int *)(iVar6 + 0x30) + 0xc); iVar10 <= iVar1; iVar10 = iVar10 + 1) {
    iVar8 = *(int *)(iVar6 + 0x30);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e714 + 0x109e424));
    System_Object___ctor_2bb93bc(uVar3,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(iVar8 + 8);
    uVar12 = *(uint *)(iVar8 + 0xc);
    piVar7 = *(int **)(_UNK_0109e718 + 0x109e464);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar12 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar12 + 1;
      puVar4 = (undefined4 *)(iVar11 + uVar12 * 4 + 0x10);
      *puVar4 = uVar3;
      thunk_FUN_00ec5080(puVar4,uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar8,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
    }
  }
  if (*(int *)(iVar6 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(iVar6 + 0x30),iVar1,**(undefined4 **)(_UNK_0109e71c + 0x109e4dc));
  if (iVar1 != 0) {
    piVar7 = (int *)(iVar1 + 8);
    iVar10 = *piVar7;
    if (*(int *)(**(int **)(_UNK_0109e720 + 0x109e508) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Equality_36033f4(iVar10,0,0);
    if (iVar10 != 0) {
      iVar6 = Rotatelab_Audio_AudioManager__GetAudioSource_108dae0(iVar6,0);
      *piVar7 = iVar6;
      thunk_FUN_00ec5080(piVar7,iVar6);
      if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_AudioSource__set_pitch_35997b0(*piVar7,fVar14,0);
    }
    if (*piVar7 != 0) {
      UnityEngine_AudioSource__PlayOneShot_3599a58(*piVar7,aiStack_44[0],fStack_48 * 1.0,0);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (aiStack_44[0] != 0) {
        fVar5 = (float)UnityEngine_AudioClip__get_length_3598a44(aiStack_44[0],0);
        piVar7 = *(int **)(_UNK_0109e724 + 0x109e5dc);
        iVar6 = *piVar7;
        if (*(int *)(iVar6 + 0x74) == 0) {
          FUN_00ec3934();
          iVar6 = *piVar7;
        }
        puVar4 = *(undefined4 **)(iVar6 + 0x5c);
        iVar10 = puVar4[4];
        if (iVar10 == 0) {
          if (*(int *)(iVar6 + 0x74) == 0) {
            FUN_00ec3934();
            puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
          }
          uVar3 = *puVar4;
          iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e728 + 0x109e628));
          System_Action_object____ctor_1f11414
                    (iVar10,uVar3,**(undefined4 **)(_UNK_0109e72c + 0x109e648),0);
          piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x10);
          *piVar7 = iVar10;
          thunk_FUN_00ec5080(piVar7,iVar10);
        }
        if (*(int *)(**(int **)(_UNK_0109e730 + 0x109e674) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Delay_object__15d6154
                  (adStack_60,iVar1,fVar5 / fVar14,iVar10,0,0,
                   **(undefined4 **)(_UNK_0109e734 + 0x109e69c));
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


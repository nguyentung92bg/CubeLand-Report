/* IL2CPP: Rotatelab.Audio.AudioManager$$PlaySfx
void Rotatelab_Audio_AudioManager__PlaySfx (Rotatelab_Audio_AudioManager_o* __this, int32_t soundType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$PlaySfx
   void Rotatelab_Audio_AudioManager__PlaySfx (Rotatelab_Audio_AudioManager_o* __this, int32_t
   soundType, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint in_fpscr;
  double dVar12;
  float fVar13;
  double dVar14;
  double adStack_60 [2];
  float fStack_4c;
  float fStack_48;
  int aiStack_44 [3];
  undefined8 uStack_38;
  
  pcVar9 = (char *)(_UNK_0109dd40 + 0x109dc0c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109dd44 + 0x109dc20));
    *pcVar9 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(param_1 + 0x1c),param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar1 + 0x2c) == 0.0) << 0x1e;
  if (!SUB41(uVar11 >> 0x1e,0)) {
    uStack_38 = 0;
    iVar1 = Rotatelab_Audio_AudioManager__PlaySfx_108dd4c(param_1,param_2,0,0);
    if (*(int *)(**(int **)(_UNK_0109dd48 + 0x109dcb8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Inequality_36018e4(iVar1,0,0);
    if (iVar8 == 0) {
      return;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar5 = (float)UnityEngine_AudioSource__get_volume_35995c4(iVar1,0);
    pcVar9 = (char *)(_UNK_035a9744 + 0x35a96c8);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9748 + 0x35a96dc),fVar5 * 1.0,0);
      *pcVar9 = '\x01';
    }
    if (iVar1 != 0) {
      iVar8 = *(int *)(iVar1 + 8);
      if (iVar8 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a974c + 0x35a9714);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a9750 + 0x35a9724);
          *(code **)(_UNK_035a9754 + 0x35a9734) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035a9740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar8,fVar5 * 1.0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
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
                    (*(undefined4 *)(param_1 + 0x14),**(undefined4 **)(_UNK_0109e704 + 0x109e28c));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(param_1 + 0x1c),param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar1,aiStack_44,&fStack_48,&fStack_4c);
  fVar13 = fStack_4c;
  fVar5 = _UNK_0109e6d0;
  pcVar9 = (char *)(_UNK_0109e708 + 0x109e2fc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e70c + 0x109e310));
    *pcVar9 = '\x01';
  }
  fVar13 = fVar13 / fVar5;
  if (*(int *)(**(int **)(_UNK_0109e710 + 0x109e328) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar12 = (double)fVar13;
  dVar14 = (double)modf(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),adStack_60);
  if (NAN(fVar13)) {
    uVar11 = uVar11 & 0xfffffff | (uint)(dVar14 == -0.5) << 0x1e;
    if (!SUB41(uVar11 >> 0x1e,0)) {
      dVar12 = (double)ceil(SUB84(dVar12 + -0.5,0),(int)((ulonglong)(dVar12 + -0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar12 = -1.0;
  }
  else {
    uVar11 = uVar11 & 0xfffffff | (uint)(dVar14 == 0.5) << 0x1e;
    if (!SUB41(uVar11 >> 0x1e,0)) {
      dVar12 = (double)floor(SUB84(dVar12 + 0.5,0),(int)((ulonglong)(dVar12 + 0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar12 = 1.0;
  }
  uVar2 = FUN_00f88224(SUB84(adStack_60[0],0),(int)((ulonglong)adStack_60[0] >> 0x20));
  dVar12 = adStack_60[0] + dVar12;
  if ((uVar2 & 1) == 0) {
    dVar12 = adStack_60[0];
  }
LAB_0109e3c4:
  iVar1 = (int)(longlong)dVar12;
  uVar11 = uVar11 & 0xfffffff | (uint)(dVar12 == _UNK_0109e6c8) << 0x1e;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (SUB41(uVar11 >> 0x1e,0)) {
    iVar1 = 1;
  }
  fVar13 = (float)VectorSignedToFloat(iVar1,(byte)(uVar11 >> 0x16) & 3);
  fVar13 = fVar13 * fVar5;
  fStack_4c = fVar13;
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  for (iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0xc); iVar8 <= iVar1; iVar8 = iVar8 + 1) {
    iVar7 = *(int *)(param_1 + 0x30);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e714 + 0x109e424));
    System_Object___ctor_2bb93bc(uVar3,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(iVar7 + 8);
    uVar11 = *(uint *)(iVar7 + 0xc);
    piVar6 = *(int **)(_UNK_0109e718 + 0x109e464);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar11 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar11 + 1;
      puVar4 = (undefined4 *)(iVar10 + uVar11 * 4 + 0x10);
      *puVar4 = uVar3;
      thunk_FUN_00ec5080(puVar4,uVar3);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar7,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x30),iVar1,**(undefined4 **)(_UNK_0109e71c + 0x109e4dc));
  if (iVar1 != 0) {
    piVar6 = (int *)(iVar1 + 8);
    iVar8 = *piVar6;
    if (*(int *)(**(int **)(_UNK_0109e720 + 0x109e508) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Equality_36033f4(iVar8,0,0);
    if (iVar8 != 0) {
      iVar8 = Rotatelab_Audio_AudioManager__GetAudioSource_108dae0(param_1,0);
      *piVar6 = iVar8;
      thunk_FUN_00ec5080(piVar6,iVar8);
      if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_AudioSource__set_pitch_35997b0(*piVar6,fVar13,0);
    }
    if (*piVar6 != 0) {
      UnityEngine_AudioSource__PlayOneShot_3599a58(*piVar6,aiStack_44[0],fStack_48 * 1.0,0);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
      if (aiStack_44[0] != 0) {
        fVar5 = (float)UnityEngine_AudioClip__get_length_3598a44(aiStack_44[0],0);
        piVar6 = *(int **)(_UNK_0109e724 + 0x109e5dc);
        iVar8 = *piVar6;
        if (*(int *)(iVar8 + 0x74) == 0) {
          FUN_00ec3934();
          iVar8 = *piVar6;
        }
        puVar4 = *(undefined4 **)(iVar8 + 0x5c);
        iVar7 = puVar4[4];
        if (iVar7 == 0) {
          if (*(int *)(iVar8 + 0x74) == 0) {
            FUN_00ec3934();
            puVar4 = *(undefined4 **)(*piVar6 + 0x5c);
          }
          uVar3 = *puVar4;
          iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e728 + 0x109e628));
          System_Action_object____ctor_1f11414
                    (iVar7,uVar3,**(undefined4 **)(_UNK_0109e72c + 0x109e648),0);
          piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x10);
          *piVar6 = iVar7;
          thunk_FUN_00ec5080(piVar6,iVar7);
        }
        if (*(int *)(**(int **)(_UNK_0109e730 + 0x109e674) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Delay_object__15d6154
                  (adStack_60,iVar1,fVar5 / fVar13,iVar7,0,0,
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


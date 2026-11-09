/* IL2CPP: Rotatelab.Scripts.BlasterController$$UpdateAnimationState
void Rotatelab_Scripts_BlasterController__UpdateAnimationState (Rotatelab_Scripts_BlasterController_o* __this, int32_t newState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$UpdateAnimationState
   void Rotatelab_Scripts_BlasterController__UpdateAnimationState
   (Rotatelab_Scripts_BlasterController_o* __this, int32_t newState, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__UpdateAnimationState_1037f3c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  int *piVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint in_fpscr;
  double dVar14;
  float fVar15;
  double dVar16;
  double adStack_60 [2];
  float fStack_4c;
  float fStack_48;
  int aiStack_44 [3];
  undefined8 uStack_38;
  
  pcVar11 = (char *)(_UNK_0104838c + 0x1047f5c);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048390 + 0x1047f70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048394 + 0x1047f7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01048398 + 0x1047f88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104839c + 0x1047f94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010483a0 + 0x1047fa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010483a4 + 0x1047fac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010483a8 + 0x1047fb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010483ac + 0x1047fc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010483b0 + 0x1047fd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010483b4 + 0x1047fdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010483b8 + 0x1047fe8));
    *pcVar11 = '\x01';
  }
  iVar1 = 2;
  if ((param_1[0x25] < 1) && (iVar1 = param_2, param_2 == 6)) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010483bc + 0x1048018));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar1 + 0x11) == '\0') {
      iVar1 = 6;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0xe8))(param_1,*(undefined4 *)(*param_1 + 0xec));
      iVar1 = 6;
      if (iVar2 != 0) {
        iVar1 = 8;
      }
    }
  }
  iVar2 = param_1[0x2b];
  if (iVar2 == iVar1) {
    return;
  }
  param_1[0x2b] = iVar1;
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(param_1[4],1,0);
  switch(param_1[0x2b]) {
  case 1:
    Rotatelab_Scripts_BlasterController___UpdateAnimationState_g__JumpVisual_166_0_10383f4
              (param_1,0x3f000000,0x3e800000,0);
    iVar1 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(param_1);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = param_1[4];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(&UNK_01048114 + _UNK_010483c0);
    break;
  case 2:
    iVar1 = param_1[4];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(&UNK_010482b4 + _UNK_010483c4);
    break;
  case 3:
    Rotatelab_Scripts_BlasterController___UpdateAnimationState_g__JumpVisual_166_0_10383f4
              (param_1,0x3f400000,0x3e800000,0);
    Rotatelab_Scripts_BlasterController__SetSkinnedMeshDetails_1034b3c(param_1,1);
    iVar1 = Rotatelab_Scripts_BlasterController__get_IsConnected_1030fd0(param_1);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = param_1[4];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(&UNK_01048208 + _UNK_010483c8);
    break;
  case 4:
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__Play_35915ac
              (param_1[4],**(undefined4 **)(&UNK_0104822c + _UNK_010483cc),0,0);
    uVar4 = _UNK_01044b80;
    iVar1 = param_1[0x11];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar11 = (char *)(_UNK_035de654 + 0x35de5d4);
    if (*pcVar11 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035de658 + 0x35de5e8),3,_UNK_01044b80,0);
      *pcVar11 = '\x01';
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar1 + 8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(_UNK_035de65c + 0x35de620);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(_UNK_035de660 + 0x35de630);
      *(code **)(_UNK_035de664 + 0x35de640) = UNRECOVERED_JUMPTABLE_00;
    }
                    /* WARNING: Could not recover jumptable at 0x035de650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(iVar2,3,uVar4);
    return;
  case 5:
    Rotatelab_Scripts_BlasterController___UpdateAnimationState_g__JumpVisual_166_0_10383f4
              (param_1,0x3fc00000,0x3e800000,0);
    Rotatelab_Scripts_BlasterController__PulseConnectionNodes_10384ec(param_1);
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Animator__Play_35915ac
              (param_1[4],**(undefined4 **)(&UNK_01048158 + _UNK_010483d0),0,0);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(&UNK_01048170 + _UNK_010483d4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar11 = (char *)(_UNK_0109dd40 + 0x109dc0c);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109dd44 + 0x109dc20));
      *pcVar11 = '\x01';
    }
    if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar1 + 0x1c),0x14);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar2 + 0x2c) == 0.0) << 0x1e;
    if (!SUB41(uVar13 >> 0x1e,0)) {
      uStack_38 = 0;
      iVar1 = Rotatelab_Audio_AudioManager__PlaySfx_108dd4c(iVar1,0x14,0,0);
      if (*(int *)(**(int **)(_UNK_0109dd48 + 0x109dcb8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar1,0,0);
      if (iVar2 == 0) {
        return;
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar7 = (float)UnityEngine_AudioSource__get_volume_35995c4(iVar1,0);
      pcVar11 = (char *)(_UNK_035a9744 + 0x35a96c8);
      if (*pcVar11 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9748 + 0x35a96dc),fVar7 * 1.0,0);
        *pcVar11 = '\x01';
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar1 + 8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(_UNK_035a974c + 0x35a9714);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(_UNK_035a9750 + 0x35a9724);
        *(code **)(_UNK_035a9754 + 0x35a9734) = UNRECOVERED_JUMPTABLE_00;
      }
                    /* WARNING: Could not recover jumptable at 0x035a9740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(iVar2,fVar7 * 1.0);
      return;
    }
    pcVar11 = (char *)(_UNK_0109e6d4 + 0x109e1e8);
    if (*pcVar11 == '\0') {
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
      *pcVar11 = '\x01';
    }
    aiStack_44[0] = 0;
    fStack_48 = 0.0;
    fStack_4c = 0.0;
    iVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                      (*(undefined4 *)(iVar1 + 0x14),**(undefined4 **)(_UNK_0109e704 + 0x109e28c));
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar1 + 0x1c),0x14);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar2,aiStack_44,&fStack_48,&fStack_4c);
    fVar15 = fStack_4c;
    fVar7 = _UNK_0109e6d0;
    pcVar11 = (char *)(_UNK_0109e708 + 0x109e2fc);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109e70c + 0x109e310));
      *pcVar11 = '\x01';
    }
    fVar15 = fVar15 / fVar7;
    if (*(int *)(**(int **)(_UNK_0109e710 + 0x109e328) + 0x74) == 0) {
      FUN_00ec3934();
    }
    dVar14 = (double)fVar15;
    dVar16 = (double)modf(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20),adStack_60);
    if (NAN(fVar15)) {
      uVar13 = uVar13 & 0xfffffff | (uint)(dVar16 == -0.5) << 0x1e;
      if (!SUB41(uVar13 >> 0x1e,0)) {
        dVar14 = (double)ceil(SUB84(dVar14 + -0.5,0),(int)((ulonglong)(dVar14 + -0.5) >> 0x20));
        goto LAB_0109e3c4;
      }
      dVar14 = -1.0;
    }
    else {
      uVar13 = uVar13 & 0xfffffff | (uint)(dVar16 == 0.5) << 0x1e;
      if (!SUB41(uVar13 >> 0x1e,0)) {
        dVar14 = (double)floor(SUB84(dVar14 + 0.5,0),(int)((ulonglong)(dVar14 + 0.5) >> 0x20));
        goto LAB_0109e3c4;
      }
      dVar14 = 1.0;
    }
    uVar6 = FUN_00f88224(SUB84(adStack_60[0],0),(int)((ulonglong)adStack_60[0] >> 0x20));
    dVar14 = adStack_60[0] + dVar14;
    if ((uVar6 & 1) == 0) {
      dVar14 = adStack_60[0];
    }
LAB_0109e3c4:
    iVar2 = (int)(longlong)dVar14;
    uVar13 = uVar13 & 0xfffffff | (uint)(dVar14 == _UNK_0109e6c8) << 0x1e;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    if (SUB41(uVar13 >> 0x1e,0)) {
      iVar2 = 1;
    }
    fVar15 = (float)VectorSignedToFloat(iVar2,(byte)(uVar13 >> 0x16) & 3);
    fVar15 = fVar15 * fVar7;
    fStack_4c = fVar15;
    if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    for (iVar10 = *(int *)(*(int *)(iVar1 + 0x30) + 0xc); iVar10 <= iVar2; iVar10 = iVar10 + 1) {
      iVar9 = *(int *)(iVar1 + 0x30);
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e714 + 0x109e424));
      System_Object___ctor_2bb93bc(uVar4,0);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar12 = *(int *)(iVar9 + 8);
      uVar13 = *(uint *)(iVar9 + 0xc);
      piVar8 = *(int **)(_UNK_0109e718 + 0x109e464);
      *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar13 < *(uint *)(iVar12 + 0xc)) {
        *(uint *)(iVar9 + 0xc) = uVar13 + 1;
        puVar3 = (undefined4 *)(iVar12 + uVar13 * 4 + 0x10);
        *puVar3 = uVar4;
        thunk_FUN_00ec5080(puVar3,uVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar9,uVar4,*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38));
      }
    }
    if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar1 + 0x30),iVar2,**(undefined4 **)(_UNK_0109e71c + 0x109e4dc));
    if (iVar2 != 0) {
      piVar8 = (int *)(iVar2 + 8);
      iVar10 = *piVar8;
      if (*(int *)(**(int **)(_UNK_0109e720 + 0x109e508) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar10 = UnityEngine_Object__op_Equality_36033f4(iVar10,0,0);
      if (iVar10 != 0) {
        iVar1 = Rotatelab_Audio_AudioManager__GetAudioSource_108dae0(iVar1,0);
        *piVar8 = iVar1;
        thunk_FUN_00ec5080(piVar8,iVar1);
        if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_AudioSource__set_pitch_35997b0(*piVar8,fVar15,0);
      }
      if (*piVar8 != 0) {
        UnityEngine_AudioSource__PlayOneShot_3599a58(*piVar8,aiStack_44[0],fStack_48 * 1.0,0);
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
        if (aiStack_44[0] != 0) {
          fVar7 = (float)UnityEngine_AudioClip__get_length_3598a44(aiStack_44[0],0);
          piVar8 = *(int **)(_UNK_0109e724 + 0x109e5dc);
          iVar1 = *piVar8;
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = *piVar8;
          }
          puVar3 = *(undefined4 **)(iVar1 + 0x5c);
          iVar10 = puVar3[4];
          if (iVar10 == 0) {
            if (*(int *)(iVar1 + 0x74) == 0) {
              FUN_00ec3934();
              puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
            }
            uVar4 = *puVar3;
            iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e728 + 0x109e628));
            System_Action_object____ctor_1f11414
                      (iVar10,uVar4,**(undefined4 **)(_UNK_0109e72c + 0x109e648),0);
            piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x10);
            *piVar8 = iVar10;
            thunk_FUN_00ec5080(piVar8,iVar10);
          }
          if (*(int *)(**(int **)(_UNK_0109e730 + 0x109e674) + 0x74) == 0) {
            FUN_00ec3934();
          }
          PrimeTween_Tween__Delay_object__15d6154
                    (adStack_60,iVar2,fVar7 / fVar15,iVar10,0,0,
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
  case 6:
    iVar1 = param_1[4];
    if (iVar2 == 8) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = 0x3e800000;
      uVar4 = **(undefined4 **)(&UNK_010482dc + _UNK_010483d8);
      goto code_r0x010482ec;
    }
    goto code_r0x01048318;
  case 7:
    iVar1 = param_1[4];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(&UNK_01048314 + _UNK_010483e0);
    break;
  case 8:
    iVar1 = param_1[4];
    UnityEngine_Random__get_value_35f8bbc(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = 0x3e4ccccd;
    uVar4 = **(undefined4 **)(&UNK_01048288 + _UNK_010483e4);
code_r0x010482ec:
    func_0x01f4f2ac(iVar1,uVar4,uVar5,0);
    return;
  case 9:
    iVar1 = param_1[4];
code_r0x01048318:
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(&UNK_01048330 + _UNK_010483dc);
    break;
  case 10:
    iVar1 = param_1[4];
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(&UNK_010481bc + _UNK_010483e8);
    break;
  default:
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010483ec + 0x1048360));
    uVar4 = thunk_FUN_00f00cdc();
    System_ArgumentOutOfRangeException___ctor_2b12e2c(uVar4,0);
    uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_010483f0 + 0x104837c));
    func_0x00ec3920(uVar4,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  UnityEngine_Animator__Play_35915ac(iVar1,*puVar3,0,0);
  return;
}


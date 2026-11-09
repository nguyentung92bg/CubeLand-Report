/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$PlayDestructionSfx
void Rotatelab_Scripts_BaseTargetableController__PlayDestructionSfx (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$PlayDestructionSfx
   void Rotatelab_Scripts_BaseTargetableController__PlayDestructionSfx (const MethodInfo* method);
    */

void Rotatelab_Scripts_BaseTargetableController__PlayDestructionSfx_ff608c(void)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint in_fpscr;
  undefined4 uVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  double adStack_60 [2];
  float fStack_4c;
  float fStack_48;
  int aiStack_44 [3];
  undefined8 uStack_38;
  
  pcVar5 = (char *)(_UNK_01006144 + 0x100609c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01006148 + 0x10060b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100614c + 0x10060bc));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01006150 + 0x10060d0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar1 + 0x14);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01006154 + 0x10060f0));
  if (iVar7 == 1) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar5 = (char *)(_UNK_0109e8e4 + 0x109e758);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8e8 + 0x109e76c),0xc,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8ec + 0x109e778));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8f0 + 0x109e784));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8f4 + 0x109e790));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8f8 + 0x109e79c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8fc + 0x109e7a8));
      *pcVar5 = '\x01';
    }
    iVar7 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                      (*(undefined4 *)(iVar1 + 0x14),**(undefined4 **)(_UNK_0109e900 + 0x109e7bc));
    if (iVar7 != 0) {
      iVar7 = Rotatelab_Audio_AudioManager__GetVoxelBreakGroup_108d404(iVar1,0xc);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar11 = *(int **)(_UNK_0109e904 + 0x109e7f4);
      uVar13 = *(undefined4 *)(iVar7 + 0x38);
      iVar7 = *piVar11;
      if (*(int *)(iVar7 + 0x74) == 0) {
        FUN_00ec3934();
        iVar7 = *piVar11;
      }
      puVar4 = *(undefined4 **)(iVar7 + 0x5c);
      iVar8 = puVar4[2];
      if (iVar8 == 0) {
        if (*(int *)(iVar7 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar11 + 0x5c);
        }
        uVar9 = *puVar4;
        iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e908 + 0x109e840));
        System_Action_object__Int32Enum____ctor_1f18d2c
                  (iVar8,uVar9,**(undefined4 **)(_UNK_0109e90c + 0x109e860),0);
        piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 8);
        *piVar11 = iVar8;
        thunk_FUN_00ec5080(piVar11,iVar8);
      }
      uVar9 = Rotatelab_PooledClosure__Action_object__Int32Enum__153dc48
                        (iVar1,0xc,iVar8,**(undefined4 **)(_UNK_0109e910 + 0x109e890));
      if (*(int *)(**(int **)(_UNK_0109e914 + 0x109e8a8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uStack_38 = 0;
      PrimeTween_Tween__Delay_2ce9f2c(&stack0xffffffd0,uVar13,uVar9,0);
    }
    return;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0109dd40 + 0x109dc0c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109dd44 + 0x109dc20));
    *pcVar5 = '\x01';
  }
  if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar1 + 0x1c),0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar7 + 0x2c) == 0.0) << 0x1e;
  if (!SUB41(uVar12 >> 0x1e,0)) {
    uStack_38 = 0;
    iVar1 = Rotatelab_Audio_AudioManager__PlaySfx_108dd4c(iVar1,0xc,0,0);
    if (*(int *)(**(int **)(_UNK_0109dd48 + 0x109dcb8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar7 = UnityEngine_Object__op_Inequality_36018e4(iVar1,0,0);
    if (iVar7 == 0) {
      return;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = (float)UnityEngine_AudioSource__get_volume_35995c4(iVar1,0);
    pcVar5 = (char *)(_UNK_035a9744 + 0x35a96c8);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9748 + 0x35a96dc),fVar3 * 1.0,0);
      *pcVar5 = '\x01';
    }
    if (iVar1 != 0) {
      iVar7 = *(int *)(iVar1 + 8);
      if (iVar7 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a974c + 0x35a9714);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a9750 + 0x35a9724);
          *(code **)(_UNK_035a9754 + 0x35a9734) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035a9740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar7,fVar3 * 1.0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0109e6d4 + 0x109e1e8);
  if (*pcVar5 == '\0') {
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
    *pcVar5 = '\x01';
  }
  aiStack_44[0] = 0;
  fStack_48 = 0.0;
  fStack_4c = 0.0;
  iVar7 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar1 + 0x14),**(undefined4 **)(_UNK_0109e704 + 0x109e28c));
  if (iVar7 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar1 + 0x1c),0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar7,aiStack_44,&fStack_48,&fStack_4c);
  fVar15 = fStack_4c;
  fVar3 = _UNK_0109e6d0;
  pcVar5 = (char *)(_UNK_0109e708 + 0x109e2fc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e70c + 0x109e310));
    *pcVar5 = '\x01';
  }
  fVar15 = fVar15 / fVar3;
  if (*(int *)(**(int **)(_UNK_0109e710 + 0x109e328) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar14 = (double)fVar15;
  dVar16 = (double)modf(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20),adStack_60);
  if (NAN(fVar15)) {
    uVar12 = uVar12 & 0xfffffff | (uint)(dVar16 == -0.5) << 0x1e;
    if (!SUB41(uVar12 >> 0x1e,0)) {
      dVar14 = (double)ceil(SUB84(dVar14 + -0.5,0),(int)((ulonglong)(dVar14 + -0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar14 = -1.0;
  }
  else {
    uVar12 = uVar12 & 0xfffffff | (uint)(dVar16 == 0.5) << 0x1e;
    if (!SUB41(uVar12 >> 0x1e,0)) {
      dVar14 = (double)floor(SUB84(dVar14 + 0.5,0),(int)((ulonglong)(dVar14 + 0.5) >> 0x20));
      goto LAB_0109e3c4;
    }
    dVar14 = 1.0;
  }
  uVar2 = FUN_00f88224(SUB84(adStack_60[0],0),(int)((ulonglong)adStack_60[0] >> 0x20));
  dVar14 = adStack_60[0] + dVar14;
  if ((uVar2 & 1) == 0) {
    dVar14 = adStack_60[0];
  }
LAB_0109e3c4:
  iVar7 = (int)(longlong)dVar14;
  uVar12 = uVar12 & 0xfffffff | (uint)(dVar14 == _UNK_0109e6c8) << 0x1e;
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  if (SUB41(uVar12 >> 0x1e,0)) {
    iVar7 = 1;
  }
  fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar12 >> 0x16) & 3);
  fVar15 = fVar15 * fVar3;
  fStack_4c = fVar15;
  if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  for (iVar8 = *(int *)(*(int *)(iVar1 + 0x30) + 0xc); iVar8 <= iVar7; iVar8 = iVar8 + 1) {
    iVar6 = *(int *)(iVar1 + 0x30);
    uVar13 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e714 + 0x109e424));
    System_Object___ctor_2bb93bc(uVar13,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(iVar6 + 8);
    uVar12 = *(uint *)(iVar6 + 0xc);
    piVar11 = *(int **)(_UNK_0109e718 + 0x109e464);
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar12 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar6 + 0xc) = uVar12 + 1;
      puVar4 = (undefined4 *)(iVar10 + uVar12 * 4 + 0x10);
      *puVar4 = uVar13;
      thunk_FUN_00ec5080(puVar4,uVar13);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar6,uVar13,*(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
    }
  }
  if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(iVar1 + 0x30),iVar7,**(undefined4 **)(_UNK_0109e71c + 0x109e4dc));
  if (iVar7 != 0) {
    piVar11 = (int *)(iVar7 + 8);
    iVar8 = *piVar11;
    if (*(int *)(**(int **)(_UNK_0109e720 + 0x109e508) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Equality_36033f4(iVar8,0,0);
    if (iVar8 != 0) {
      iVar1 = Rotatelab_Audio_AudioManager__GetAudioSource_108dae0(iVar1,0);
      *piVar11 = iVar1;
      thunk_FUN_00ec5080(piVar11,iVar1);
      if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_AudioSource__set_pitch_35997b0(*piVar11,fVar15,0);
    }
    if (*piVar11 != 0) {
      UnityEngine_AudioSource__PlayOneShot_3599a58(*piVar11,aiStack_44[0],fStack_48 * 1.0,0);
      *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1;
      if (aiStack_44[0] != 0) {
        fVar3 = (float)UnityEngine_AudioClip__get_length_3598a44(aiStack_44[0],0);
        piVar11 = *(int **)(_UNK_0109e724 + 0x109e5dc);
        iVar1 = *piVar11;
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          iVar1 = *piVar11;
        }
        puVar4 = *(undefined4 **)(iVar1 + 0x5c);
        iVar8 = puVar4[4];
        if (iVar8 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            puVar4 = *(undefined4 **)(*piVar11 + 0x5c);
          }
          uVar13 = *puVar4;
          iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e728 + 0x109e628));
          System_Action_object____ctor_1f11414
                    (iVar8,uVar13,**(undefined4 **)(_UNK_0109e72c + 0x109e648),0);
          piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 0x10);
          *piVar11 = iVar8;
          thunk_FUN_00ec5080(piVar11,iVar8);
        }
        if (*(int *)(**(int **)(_UNK_0109e730 + 0x109e674) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Delay_object__15d6154
                  (adStack_60,iVar7,fVar3 / fVar15,iVar8,0,0,
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


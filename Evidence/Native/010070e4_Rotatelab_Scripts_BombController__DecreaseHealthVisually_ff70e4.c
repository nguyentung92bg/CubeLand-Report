/* IL2CPP: Rotatelab.Scripts.BombController$$DecreaseHealthVisually
void Rotatelab_Scripts_BombController__DecreaseHealthVisually (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController$$DecreaseHealthVisually
   void Rotatelab_Scripts_BombController__DecreaseHealthVisually
   (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BombController__DecreaseHealthVisually_ff70e4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined4 uVar7;
  int *piVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar9;
  char *pcVar10;
  int iVar11;
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
  
  pcVar10 = (char *)(_UNK_0100718c + 0x10070f8);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007190 + 0x100710c));
    *pcVar10 = '\x01';
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  Rotatelab_Scripts_BombController__AnimateHit_ff7198(param_1);
  Rotatelab_Scripts_BombController__AnimatePunch_ff742c(param_1);
  if (*(int *)(param_1 + 0x44) < 1) {
    iVar1 = Rotatelab_Scripts_BombController__AnimateExplosionCoroutine_ff7578(param_1);
    if (iVar1 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar7 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar7,uVar4,0);
    }
    else {
      iVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar2 != 0) {
        pcVar10 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar10 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar10 = '\x01';
        }
        if (param_1 != 0) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
          }
          UNRECOVERED_JUMPTABLE_00 = *(code **)(iRam036143fc + 0x36143c0);
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
            *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE_00;
          }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(iVar2,iVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar7 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar7,uVar4,0);
    }
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar7,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01007194 + 0x1007148));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar10 = (char *)(_UNK_0109dd40 + 0x109dc0c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109dd44 + 0x109dc20));
    *pcVar10 = '\x01';
  }
  if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar1 + 0x1c),0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar13 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar2 + 0x2c) == 0.0) << 0x1e;
  if (!SUB41(uVar13 >> 0x1e,0)) {
    uStack_38 = 0;
    iVar1 = Rotatelab_Audio_AudioManager__PlaySfx_108dd4c(iVar1,0xc,0,0);
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
    fVar6 = (float)UnityEngine_AudioSource__get_volume_35995c4(iVar1,0);
    pcVar10 = (char *)(_UNK_035a9744 + 0x35a96c8);
    if (*pcVar10 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9748 + 0x35a96dc),fVar6 * 1.0,0);
      *pcVar10 = '\x01';
    }
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      if (iVar2 != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(_UNK_035a974c + 0x35a9714);
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(_UNK_035a9750 + 0x35a9724);
          *(code **)(_UNK_035a9754 + 0x35a9734) = UNRECOVERED_JUMPTABLE_00;
        }
                    /* WARNING: Could not recover jumptable at 0x035a9740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(iVar2,fVar6 * 1.0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar10 = (char *)(_UNK_0109e6d4 + 0x109e1e8);
  if (*pcVar10 == '\0') {
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
    *pcVar10 = '\x01';
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
  iVar2 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(iVar1 + 0x1c),0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar2,aiStack_44,&fStack_48,&fStack_4c);
  fVar15 = fStack_4c;
  fVar6 = _UNK_0109e6d0;
  pcVar10 = (char *)(_UNK_0109e708 + 0x109e2fc);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e70c + 0x109e310));
    *pcVar10 = '\x01';
  }
  fVar15 = fVar15 / fVar6;
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
  uVar3 = FUN_00f88224(SUB84(adStack_60[0],0),(int)((ulonglong)adStack_60[0] >> 0x20));
  dVar14 = adStack_60[0] + dVar14;
  if ((uVar3 & 1) == 0) {
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
  fVar15 = fVar15 * fVar6;
  fStack_4c = fVar15;
  if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  for (iVar11 = *(int *)(*(int *)(iVar1 + 0x30) + 0xc); iVar11 <= iVar2; iVar11 = iVar11 + 1) {
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
      puVar5 = (undefined4 *)(iVar12 + uVar13 * 4 + 0x10);
      *puVar5 = uVar4;
      thunk_FUN_00ec5080(puVar5,uVar4);
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
    iVar11 = *piVar8;
    if (*(int *)(**(int **)(_UNK_0109e720 + 0x109e508) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Equality_36033f4(iVar11,0,0);
    if (iVar11 != 0) {
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
        fVar6 = (float)UnityEngine_AudioClip__get_length_3598a44(aiStack_44[0],0);
        piVar8 = *(int **)(_UNK_0109e724 + 0x109e5dc);
        iVar1 = *piVar8;
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          iVar1 = *piVar8;
        }
        puVar5 = *(undefined4 **)(iVar1 + 0x5c);
        iVar11 = puVar5[4];
        if (iVar11 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
          }
          uVar4 = *puVar5;
          iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e728 + 0x109e628));
          System_Action_object____ctor_1f11414
                    (iVar11,uVar4,**(undefined4 **)(_UNK_0109e72c + 0x109e648),0);
          piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x10);
          *piVar8 = iVar11;
          thunk_FUN_00ec5080(piVar8,iVar11);
        }
        if (*(int *)(**(int **)(_UNK_0109e730 + 0x109e674) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Delay_object__15d6154
                  (adStack_60,iVar2,fVar6 / fVar15,iVar11,0,0,
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


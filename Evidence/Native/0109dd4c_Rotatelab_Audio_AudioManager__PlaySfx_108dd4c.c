/* IL2CPP: Rotatelab.Audio.AudioManager$$PlaySfx
UnityEngine_AudioSource_o* Rotatelab_Audio_AudioManager__PlaySfx (Rotatelab_Audio_AudioManager_o* __this, int32_t soundType, bool loop, System_Nullable_Vector3__o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$PlaySfx
   UnityEngine_AudioSource_o* Rotatelab_Audio_AudioManager__PlaySfx (Rotatelab_Audio_AudioManager_o*
   __this, int32_t soundType, bool loop, System_Nullable_Vector3__o position, const MethodInfo*
   method); */

int Rotatelab_Audio_AudioManager__PlaySfx_108dd4c
              (int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar5 = (char *)(_UNK_0109e180 + 0x109dd70);
  uStack_4c = param_7;
  uStack_50 = param_6;
  uStack_54 = param_5;
  uStack_58 = param_4;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e184 + 0x109dda4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e188 + 0x109ddb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e18c + 0x109ddbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e190 + 0x109ddc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e194 + 0x109ddd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e198 + 0x109dde0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e19c + 0x109ddec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e1a0 + 0x109ddf8));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iStack_5c = 0;
  uStack_60 = 0;
  fStack_64 = 0.0;
  iVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x14),**(undefined4 **)(_UNK_0109e1a4 + 0x109de10));
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(param_1 + 0x1c),param_2);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar2,&iStack_5c,&uStack_60,&fStack_64);
    iVar6 = Rotatelab_Audio_AudioManager__GetAudioSource_108dae0(param_1,(param_4 & 0xff) != 0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_clip_35998b0(iVar6,iStack_5c,0);
    UnityEngine_AudioSource__set_volume_35996b0(iVar6,uStack_60,0);
    fVar1 = fStack_64;
    UnityEngine_AudioSource__set_pitch_35997b0(iVar6,fStack_64,0);
    UnityEngine_AudioSource__set_loop_3599b48(iVar6,param_3,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar11 = *(float *)(iVar2 + 0x2c);
    fVar10 = _UNK_0109e178;
    if (0.0 < fVar11) {
      fVar10 = fVar11;
    }
    fVar12 = _UNK_0109e178;
    if (fVar11 < _UNK_0109e17c) {
      fVar12 = -fVar11;
    }
    if (iStack_5c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar3 = (float)UnityEngine_AudioClip__get_length_3598a44(iStack_5c,0);
    if (fVar12 < fVar3) {
      fVar3 = fVar12;
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_time_35997b4(iVar6,fVar3,0);
    if (fVar11 <= 0.0) {
      UnityEngine_AudioSource__Play_35999ec(iVar6,0);
    }
    else {
      UnityEngine_AudioSource__PlayDelayed_3599a08(iVar6,fVar11,0);
    }
    if ((param_4 & 0xff) != 0) {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_transform_35fe190(iVar6,0);
      System_Nullable_Vector3___get_Value_17e1164
                (&uStack_78,&uStack_58,**(undefined4 **)(_UNK_0109e1a8 + 0x109e020));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_position_3614acc(iVar2,uStack_78,uStack_74,uStack_70,0);
    }
    if (param_3 == 0) {
      if (iStack_5c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar11 = (float)UnityEngine_AudioClip__get_length_3598a44(iStack_5c,0);
      piVar9 = *(int **)(_UNK_0109e1ac + 0x109e088);
      iVar2 = *piVar9;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar9;
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x5c);
      iVar7 = puVar4[5];
      if (iVar7 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
        }
        uVar8 = *puVar4;
        iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e1b0 + 0x109e0d4));
        System_Action_object____ctor_1f11414
                  (iVar7,uVar8,**(undefined4 **)(_UNK_0109e1b4 + 0x109e0f4),0);
        piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x14);
        *piVar9 = iVar7;
        thunk_FUN_00ec5080(piVar9,iVar7);
      }
      if (*(int *)(**(int **)(_UNK_0109e1b8 + 0x109e120) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_object__15d6154
                (&uStack_78,iVar6,fVar10 + (fVar11 - fVar3) / fVar1,iVar7,0,0,
                 **(undefined4 **)(_UNK_0109e1bc + 0x109e150));
    }
  }
  return iVar6;
}


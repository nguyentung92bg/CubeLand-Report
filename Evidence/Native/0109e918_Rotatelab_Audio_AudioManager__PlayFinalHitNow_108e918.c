/* IL2CPP: Rotatelab.Audio.AudioManager$$PlayFinalHitNow
void Rotatelab_Audio_AudioManager__PlayFinalHitNow (Rotatelab_Audio_AudioManager_o* __this, int32_t soundType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$PlayFinalHitNow
   void Rotatelab_Audio_AudioManager__PlayFinalHitNow (Rotatelab_Audio_AudioManager_o* __this,
   int32_t soundType, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__PlayFinalHitNow_108e918(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_3c;
  
  pcVar4 = (char *)(_UNK_0109ec34 + 0x109e938);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ec38 + 0x109e94c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ec3c + 0x109e958));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ec40 + 0x109e964));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ec44 + 0x109e970));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109ec48 + 0x109e97c));
    *pcVar4 = '\x01';
  }
  iStack_3c = 0;
  iVar1 = Rotatelab_Audio_AudioManager__GetVoxelBreakGroup_108d404(param_1,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iStack_3c = Rotatelab_Audio_AudioGroup__PickClip_108cbac(iVar1);
  thunk_FUN_00ec5080(&iStack_3c,iStack_3c);
  fVar8 = *(float *)(iVar1 + 0x3c);
  uVar9 = *(undefined4 *)(iVar1 + 0x40);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioEchoFilter__set_delay_359a02c
            (*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x24),0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioEchoFilter__set_decayRatio_359a128
            (*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x28),0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioEchoFilter__set_wetMix_359a224
            (*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x2c),0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioReverbFilter__set_reverbPreset_359a328
            (*(int *)(param_1 + 0x40),*(undefined4 *)(iVar1 + 0x44),0);
  piVar6 = *(int **)(_UNK_0109ec4c + 0x109ea68);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x48),0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x3c),1,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x40),1,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioSource__set_pitch_35997b0(*(int *)(param_1 + 0x38),fVar8,0);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioSource__PlayOneShot_3599a58(*(int *)(param_1 + 0x38),iStack_3c,uVar9,0);
  if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)UnityEngine_AudioClip__get_length_3598a44(iStack_3c,0);
  piVar7 = *(int **)(_UNK_0109ec50 + 0x109eb38);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar3[3];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar9 = *puVar3;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109ec54 + 0x109eb80));
    System_Action_object____ctor_1f11414(iVar5,uVar9,**(undefined4 **)(_UNK_0109ec58 + 0x109eba0),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0xc);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Delay_object__15d6154
            (&uStack_50,param_1,fVar2 / fVar8 + 4.0,iVar5,0,0,
             **(undefined4 **)(_UNK_0109ec5c + 0x109ebf0));
  *(undefined8 *)(param_1 + 0x48) = uStack_50;
  *(undefined8 *)(param_1 + 0x50) = uStack_48;
  thunk_FUN_00ec5080(param_1 + 0x50,0);
  return;
}


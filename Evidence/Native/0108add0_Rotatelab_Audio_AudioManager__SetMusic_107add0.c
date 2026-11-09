/* IL2CPP: Rotatelab.Audio.AudioManager$$SetMusic
void Rotatelab_Audio_AudioManager__SetMusic (Rotatelab_Audio_AudioManager_o* __this, bool isMusicEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$SetMusic
   void Rotatelab_Audio_AudioManager__SetMusic (Rotatelab_Audio_AudioManager_o* __this, bool
   isMusicEnabled, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__SetMusic_107add0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_0108b2d8 + 0x108adf0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2dc + 0x108ae04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2e0 + 0x108ae10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2e4 + 0x108ae1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2e8 + 0x108ae28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2ec + 0x108ae34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2f0 + 0x108ae40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2f4 + 0x108ae4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2f8 + 0x108ae58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b2fc + 0x108ae64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b300 + 0x108ae70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b304 + 0x108ae7c));
    *pcVar5 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_48 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (*(int *)(param_1 + 0x18),param_2,**(undefined4 **)(_UNK_0108b308 + 0x108aec0));
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x18),**(undefined4 **)(_UNK_0108b30c + 0x108aed4));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar5 = (char *)(_UNK_035a955c + 0x35a94e0);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9560 + 0x35a94f4));
      *pcVar5 = '\x01';
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a9564 + 0x35a952c);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a9568 + 0x35a953c);
      *(code **)(_UNK_035a956c + 0x35a954c) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x035a9558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar6,1);
    return;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0108b310 + 0x108aef0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar1 + 0x14) + 0x10) == 1) {
    PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_AudioSource__get_volume_35995c4(*(int *)(param_1 + 0x10),0);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108b314 + 0x108af80));
    System_Action_float____ctor_1f12930
              (uVar3,param_1,**(undefined4 **)(_UNK_0108b318 + 0x108af9c),0);
    if (*(int *)(**(int **)(_UNK_0108b31c + 0x108afb0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_2ce885c(&uStack_68,uVar2,0,0x3f000000,uVar3,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_68,&uStack_48,uStack_68,uStack_64,uStack_60,uStack_5c,0);
    piVar7 = *(int **)(_UNK_0108b320 + 0x108b038);
    iVar1 = *piVar7;
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    puVar4 = *(undefined4 **)(iVar1 + 0x5c);
    iVar6 = puVar4[1];
    if (iVar6 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar2 = *puVar4;
      iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108b324 + 0x108b088));
      System_Action_object____ctor_1f11414
                (iVar6,uVar2,**(undefined4 **)(_UNK_0108b328 + 0x108b0a8),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
      *piVar7 = iVar6;
      thunk_FUN_00ec5080(piVar7,iVar6);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&uStack_58,&uStack_48,param_1,iVar6,0,**(undefined4 **)(_UNK_0108b32c + 0x108b0d8));
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(*(int *)(param_1 + 0x1c),0x20);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioGroup__GetPlaybackData_108cd20(iVar1,&uStack_2c,&uStack_30,&uStack_34);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_clip_35998b0(*(int *)(param_1 + 0x10),uStack_2c,0);
    uVar2 = uStack_30;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_volume_35996b0(*(int *)(param_1 + 0x10),uStack_30,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__set_pitch_35997b0(*(int *)(param_1 + 0x10),uStack_34,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AudioSource__Play_35999ec(*(int *)(param_1 + 0x10),0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108b330 + 0x108b220));
    System_Action_float____ctor_1f12930
              (uVar3,param_1,**(undefined4 **)(_UNK_0108b334 + 0x108b240),0);
    if (*(int *)(**(int **)(_UNK_0108b338 + 0x108b254) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_2ce885c(&uStack_68,0,uVar2,0x3f000000,uVar3,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_68,&uStack_48,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  }
  return;
}

